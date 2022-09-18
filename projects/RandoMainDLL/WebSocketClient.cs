﻿using System;
using System.ComponentModel;
using System.Net;
using System.Threading;
using Google.Protobuf;
using Network;
using WebSocketSharp;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Linq;
using RandoMainDLL.Memory;
using Vector2 = RandoMainDLL.Memory.Vector2;
using System.IO;

namespace RandoMainDLL {
  public static class WebSocketClient {
    public static BlockingCollection<Packet> SendQueue = new BlockingCollection<Packet>();
    public static BlockingCollection<UberStateController.IUberStateCommand> UberStateQueue = new BlockingCollection<UberStateController.IUberStateCommand>();
    public static string Domain { get => Settings.IniString("Paths", "Host", "wotw.orirando.com"); }
    public static string S { get => Settings.IniFlag("Insecure") ? "" : "s";}
    private static readonly string JWTFile = ".jwt";

    public static bool ExpectingDisconnect = false;
    public static int ReconnectCooldown = 0;
    public static int FramesSinceLastCheck = 0;
    private static string ServerAddress => $"ws{S}://{Domain}/api/game_sync/";

    private static Thread updateThread;
    private static Thread connectThread;

    public static float TimeUntilReconnectAttempt = 5.0f;

    public static bool WantConnection { get => !Settings.IniFlag("DisableNetcode") && (SeedController.Settings?.NetcodeEnabled ?? false); }

    private static WebSocket socket;

    public static bool IsConnected { get { return socket != null && socket.IsConnected; } }
    public static bool CanSend { get { return IsConnected && socket.ReadyState == WebSocketState.Open; } }
    public static bool Connecting { get => connectThread?.IsAlive ?? false; }
    public static void Connect() {
      if (!WantConnection) return;
      setupUpdateThread();
      if (Connecting) {
        Randomizer.Log("Skipping connection request as one is in-progress", false, "DEBUG");
        TimeUntilReconnectAttempt = 2.0f;
        return;
      }

      Multiplayer.ClearMultiverse();
      connectThread = new Thread(() => {
        if (socket != null)
          Disconnect();

        ExpectingDisconnect = false;
        try {
          socket = new WebSocket(ServerAddress, null);
          if (!Settings.IniFlag("Insecure"))
            socket.SslConfiguration.EnabledSslProtocols = System.Security.Authentication.SslProtocols.Tls12;

          socket.Log.Level = LogLevel.Info;
          socket.Log.Output = (logdata, output) => {
            try {
              if (logdata != null)
                Randomizer.Log($"Websocket says: {logdata.Message}", false, $"{logdata.Level}");
              else
                Randomizer.Log($"Websocket output: {output}", false);
            } catch (Exception e) {
              Randomizer.Error("Websocket log", e, false);
            }
          };
          socket.OnError += (sender, e) => {
            Randomizer.Error("WebSocket", $"{e} {e?.Exception}", false);
            TimeUntilReconnectAttempt = 10.0f;
          };
          socket.OnClose += (sender, e) => {
            Randomizer.Log($"Closing socket ({e?.Code}: {e?.Reason})");
            if (!ExpectingDisconnect)
              Randomizer.Log("Disconnected! Retrying in 5s");
          };
          socket.OnMessage += HandleMessage;
          socket.OnOpen += (sender, args) => {
            Randomizer.Log($"Connected to server", false);
            string jwt = System.IO.File.ReadAllText(Randomizer.BasePath + JWTFile).Trim();
            SendAuthenticate(jwt);
            UberStateController.QueueSyncedStateUpdate();
          };
          Randomizer.Log($"Attempting to connect to {Domain}", false);
          socket.Connect();
        } catch (Exception e) {
          TimeUntilReconnectAttempt = 2.0f;
          Randomizer.Error("Connect (socket.)", e, false); 
        }

      });
      connectThread.Start();
    }

    public static void Update(float delta) {
      if (WantConnection && !IsConnected && !Connecting) {
        TimeUntilReconnectAttempt -= delta;
        if (TimeUntilReconnectAttempt <= 0) {
          TimeUntilReconnectAttempt = 5.0f;
          Randomizer.Log("Want connection but currently have none, attempting reconnect", false);
          Connect();
        }
      }
    }

    private static bool stopping = false;
    private static ManualResetEvent stopEvent = new ManualResetEvent(false);
    private static CancellationTokenSource source = new CancellationTokenSource();
    private static void setupUpdateThread() {
      if (updateThread == null) {
        updateThread = new Thread(() => {
          while (true) {
            try {
              while (true) {
                if (CanSend) {
                  var packet = SendQueue.Take(source.Token);
                  socket.Send(packet.ToByteArray());
                }
              }
            }
            catch (OperationCanceledException) { }
            catch (Exception e) {
              Randomizer.Warn("WebSocket.UpdateThread", $"caught error {e}");
            }

            try {
              if (stopping) {
                ExpectingDisconnect = true;
                socket.Close();
                socket = null;
                SendQueue.Clear();
                UberStateQueue.Clear();
                source.Dispose();
                source = new CancellationTokenSource();
                stopping = false;
                stopEvent.Set();
              }
            }
            catch (Exception e) {
              Randomizer.Warn("WebSocket.UpdateThread", $"caught error {e}");
            }
          }
        });

        updateThread.Start();
      }
    }

    public static void Disconnect() {
      if (IsConnected && !stopping && !source.IsCancellationRequested) {
        stopping = true;
        source.Cancel(true);
        stopEvent.WaitOne();
        stopEvent.Reset();
      }
    }

    public static void SendBulk(Dictionary<Memory.UberId, double> updates) {
      try {
        if (!WantConnection)
          return;

        var batch = new UberStateBatchUpdateMessage();
        batch.Updates.AddRange(updates.Select((kv) => kv.Key.MakeUpdateMsg(kv.Value)));
        Packet packet = new Packet {
          Id = Packet.Types.PacketID.UberStateBatchUpdateMessage,
          Packet_ = batch.ToByteString()
        };
        SendQueue.Add(packet);

      }
      catch (Exception e) { Randomizer.Error("SendBulk", e, false);  }
    }

    public static void SendUpdate(Memory.UberId id, double value) {
      try {
        if (!WantConnection)
          return;

        Packet packet = new Packet {
          Id = Packet.Types.PacketID.UberStateUpdateMessage,
          Packet_ = id.MakeUpdateMsg(value).ToByteString()
        };
        SendQueue.Add(packet);
      } catch(Exception e) { Randomizer.Error("SendUpdate", e, false);  }
    }

    public static void SendAuthenticate(string jwt) {
      try {
        if (!WantConnection)
          return;

        Packet packet = new Packet {
          Id = Packet.Types.PacketID.AuthenticateMessage,
          Packet_ = new AuthenticateMessage() { Jwt = jwt }.ToByteString()
        };
        SendQueue.Add(packet);
      }
      catch (Exception e) { Randomizer.Error("SendAuthenticate", e, false); }
    }

    public static void SendSeedRequest(bool init) {
      try {
        if (!WantConnection)
          return;

        Packet packet = new Packet {
          Id = Packet.Types.PacketID.RequestSeedMessage,
          Packet_ = new RequestSeedMessage() { Init = init }.ToByteString()
        };
        SendQueue.Add(packet);
      }
      catch (Exception e) { Randomizer.Error("SendSeedRequest", e, false); }
    }

    public static void SendPlayerUseCatch() {
      try {
        if (!WantConnection)
          return;

        var useCatch = new PlayerUseCatchingAbilityMessage();
        Packet packet = new Packet {
          Id = Packet.Types.PacketID.PlayerUseCatchingAbility,
          Packet_ = useCatch.ToByteString()
        };
        SendQueue.Add(packet);
      }
      catch (Exception e) { Randomizer.Error("SendPlayerUseCatch", e, false); }
    }

    public static void SendResourceRequestMessage(Memory.UberId id, int amount, bool relative, SpendResourceTarget target) {
      try {
        if (!WantConnection)
          return;

        var request = new ResourceRequestMessage();
        request.ResourceUberId = new Network.UberId() { Group = id.GroupID, State = id.ID };
        request.Relative = relative;
        request.Amount = amount;
        request.Target = target;
        Packet packet = new Packet {
          Id = Packet.Types.PacketID.ResourceRequestMessage,
          Packet_ = request.ToByteString()
        };
        SendQueue.Add(packet);
      }
      catch (Exception e) { Randomizer.Error("SendSpendResourceRequestMessage", e, false); }
    }

    public static void SendEmptyPacket(Packet.Types.PacketID id) {
      try {
        if (!WantConnection)
          return;

        Packet packet = new Packet {
          Id = id,
          Packet_ = ByteString.Empty
        };
        SendQueue.Add(packet);
      }
      catch (Exception e) { Randomizer.Error("SendEmptyPacket", e, false); }
    }

    private static void HandleMessage(object sender, MessageEventArgs args) {
      try {
        var data = args.RawData;
        if (data == null) {
          Randomizer.Log("received message with no data!");
          return;
        }
        var packet = Packet.Parser.ParseFrom(data);
        switch (packet.Id) {
          case Packet.Types.PacketID.UberStateBatchUpdateMessage:
            var messages = UberStateBatchUpdateMessage.Parser.ParseFrom(packet.Packet_);
            if (messages.ResetBeforeApplying)
              UberStateQueue.Add(new UberStateController.ResetUberStatesCommand());
            foreach (var us in messages.Updates)
              UberStateQueue.Add(new UberStateController.SetUberStateCommand(us));
            break;
          case Packet.Types.PacketID.PrintTextMessage: {
            var message = PrintTextMessage.Parser.ParseFrom(packet.Packet_);
            MessageController.ShowMessage(
              text: message.Text,
              time: message.HasTime ? new float?(message.Time) : null,
              position: new Vector2(message.Position),
              id: message.HasId ? message.Id : -1,
              showsBox: message.WithBox,
              alignment: (Alignment)message.Alignment,
              vertical: (VerticalAnchor)message.VerticalAnchor,
              horizontal: (HorizontalAnchor)message.HorizontalAnchor,
              screen: (ScreenPosition)message.ScreenPosition,
              queue: message.Queue,
              priority: message.Prioritized,
              log: true,
              useWorldCoordinates: message.UseInGameCoordinates
            );
            break;
          }
          case Packet.Types.PacketID.PrintPickupMessage: {
            var message = PrintPickupMessage.Parser.ParseFrom(packet.Packet_);
            MessageController.ShowPickup(
              text: message.Text,
              time: message.Time,
              priority: message.Prioritized,
              pickupPosition: message.PickupPosition != null ? new Vector2?(new Vector2(message.PickupPosition)) : null,
              log: true
            );
            break;
          }
          case Packet.Types.PacketID.InitBingoMessage:
            var init = InitBingoMessage.Parser.ParseFrom(packet.Packet_);
            UberStateController.SyncedUberStates = init.UberId.Select(s => s.IdFromMsg()).ToHashSet(); // LINQ BAAAYBEEEEEE
            break;
          case Packet.Types.PacketID.UberStateUpdateMessage:
            try {
              UberStateQueue.Add(new UberStateController.SetUberStateCommand(UberStateUpdateMessage.Parser.ParseFrom(packet.Packet_)));
            } catch(Exception e) { Randomizer.Error("UberStateQueue.Add", e); }
            break;
          case Packet.Types.PacketID.AuthenticatedMessage:
            var authenticated = AuthenticatedMessage.Parser.ParseFrom(packet.Packet_);
            UDPSocketClient.Start(authenticated.UdpId, authenticated.UdpKey.ToByteArray());
            Multiplayer.Queue.Add(packet);
            break;
          case Packet.Types.PacketID.MultiverseInfoMessage:
          case Packet.Types.PacketID.Visibility:
            Multiplayer.Queue.Add(packet);
            break;
          case Packet.Types.PacketID.SetSeedMessage:
            var seedMessage = SetSeedMessage.Parser.ParseFrom(packet.Packet_);
            UberStateQueue.Add(new UberStateController.SetSeedCommand(seedMessage));
            break;
          case Packet.Types.PacketID.PlayerUsedCatchingAbility:
          case Packet.Types.PacketID.PlayerCaught:
            HideAndSeek.Queue.Add(packet);
            break;
          default:
            break;
        }
      }
      catch (Exception t) {
        Randomizer.Error("t", t);
      }
    }
  }
}
