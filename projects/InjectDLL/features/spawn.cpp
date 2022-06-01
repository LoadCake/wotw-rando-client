#include <macros.h>
#include <game/player.h>
#include <game/game.h>
#include <uber_states/uber_state_interface.h>
#include <features/scenes/scene_load.h>
#include <features/spawn.h>

#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Common/ext.h>
#include <event_bus.h>
#include <enums/game_event.h>
#include <interop/csharp_bridge.h>

using namespace modloader;
using modloader::console::console_send;

namespace
{
    enum class TeleportState
    {
        None,
        Teleport,
        PostTeleport,
        Hang
    };

    const app::Vector3 ORIGINAL_START = { -798.797058f, -4310.119141f, 0.f };
    bool overwrite_start = false;
    app::Vector3 start_position = { 1992.240112f, -3902.245361f, 0.f };

    TeleportState teleport_state = TeleportState::None;
    app::Vector3 teleport_position;
    app::Vector3 hang_pos;
    bool handling_start = false;
    int cutscene_skips = 0;
    int load_hang_count = 0;
    IL2CPP_BINDING(, ScenesManager, void, LoadScenesAtPosition,
        (app::ScenesManager* this_ptr, app::Vector3 position, bool async, bool loadingZones, bool keepPreloaded, bool forceLoad, bool loadDependantScenes));
    IL2CPP_BINDING(, SkipCutsceneController, void, SkipCutscene, (app::SkipCutsceneController* this_ptr));
    IL2CPP_BINDING(, SkipCutsceneController, void, SkipPrologue, (app::SkipCutsceneController* this_ptr));
    IL2CPP_BINDING(, SeinCharacter, app::Vector3, get_Position, (app::SeinCharacter* this_ptr));
    IL2CPP_BINDING(, SeinCharacter, void, set_Position, (app::SeinCharacter* this_ptr, app::Vector3 position));

    IL2CPP_BINDING(, GameplayCamera, void, MoveCameraToTargetInstantly, (app::GameplayCamera* this_ptr, bool updateTargetPosition));
    IL2CPP_INTERCEPT(, SeinCharacter, void, FixedUpdate, (app::SeinCharacter* this_ptr)) {
        // Don't teleport during cutscene skips, causes crashes.
        if (teleport_state == TeleportState::Teleport && cutscene_skips == 0)
        {
            SeinCharacter::set_Position(this_ptr, teleport_position);
            teleport_state = TeleportState::PostTeleport;
        }
        else if (teleport_state == TeleportState::PostTeleport)
        {
            auto* const cameras = il2cpp::get_nested_class<app::UI_Cameras__Class>("Game", "UI", "Cameras");
            if (cameras != nullptr && cameras->static_fields->Current != nullptr)
            {
                // We need to do this on the next frame to allow state to update without causing flickering.
                auto* const camera = cameras->static_fields->Current;
                GameplayCamera::MoveCameraToTargetInstantly(camera, true);
            }
            else
                modloader::warn("teleport", "failed to refocus camera");

            if (handling_start)
            {
                save();
                handling_start = false;
                hang_pos = SeinCharacter::get_Position(this_ptr);
                teleport_state = TeleportState::Hang;
                load_hang_count = 60;
            }
            else {
                teleport_state = TeleportState::None;
            }
        }
        else if (teleport_state == TeleportState::Hang) {
            SeinCharacter::set_Position(this_ptr, hang_pos);
            if (--load_hang_count <= 0) {
                teleport_state = TeleportState::None;
            }
        }

        if (cutscene_skips > 0)
        {
            auto* const controller = il2cpp::get_class<app::SkipCutsceneController__Class>("", "SkipCutsceneController")->static_fields->Instance;
            SkipCutsceneController::SkipCutscene(controller);
            --cutscene_skips;
        }

        SeinCharacter::FixedUpdate(this_ptr);
    }
    
    uber_states::UberState intro_cutscene(static_cast<UberStateGroup>(21786), 48748);

    IL2CPP_BINDING(, GameplayCamera, void, DisableGoThroughScrollLocks, (app::GameplayCamera* this_ptr, app::Object* caller))
    IL2CPP_BINDING(, ScenesManager, void, ClearPreventUnloading, (app::ScenesManager* this_ptr))
    IL2CPP_BINDING(, GameStateMachine, void, SetToGame, (app::GameStateMachine* this_ptr))

    IL2CPP_INTERCEPT(Moon.uberSerializationWisp, PlayerUberStateAreaMapInformation, void, SetAreaState,
        (app::PlayerUberStateAreaMapInformation* this_ptr, app::GameWorldAreaID__Enum area_id, int index, app::WorldMapAreaState__Enum state, app::Vector3 position)) {
        if (handling_start && state == app::WorldMapAreaState__Enum_Visited)
            state = app::WorldMapAreaState__Enum_Discovered;

        PlayerUberStateAreaMapInformation::SetAreaState(this_ptr, area_id, index, state, position);
    }

    // Dont cancel loads during teleportation.
    IL2CPP_INTERCEPT(, ScenesManager, bool, CancelScene, (app::ScenesManager* this_ptr, app::SceneManagerScene* scene)) {
        if (teleport_state != TeleportState::Teleport)
            return ScenesManager::CancelScene(this_ptr, scene);
    
        return false;
    }

    // The game calls set_CurrentSlotIndex on startup. We set this variable to true
    // for this to not start preloading too early.
    bool prevent_preload_on_selecting_empty_save = false;

    STATIC_IL2CPP_BINDING(, SaveSlotsManager, app::SaveSlotInfo*, SlotByIndex, (int index))
    IL2CPP_BINDING(, SaveSlotsUI, app::SaveSlotUI*, get_CurrentSaveSlot, (app::SaveSlotsUI* this_ptr))
    IL2CPP_BINDING(, SaveSlotUI, void, SetBusy, (app::SaveSlotUI* this_ptr, bool busy))

    // region Preload when selecting empty save slot
    app::SaveSlotsUI* get_save_slots_ui() {
        auto save_slots_ui_klass = il2cpp::get_class<app::SaveSlotsUI__Class>("", "SaveSlotsUI");
        return save_slots_ui_klass->static_fields->Instance;
    }

    STATIC_IL2CPP_INTERCEPT(, TitleScreenManager, void, SetScreen, (app::TitleScreenManager_Screen__Enum screen)) {
        TitleScreenManager::SetScreen(screen);

        if (screen == app::TitleScreenManager_Screen__Enum_SaveSlots) {
            auto save_slots_ui = get_save_slots_ui();
            if (save_slots_ui != nullptr) {
                auto save_slot_ui = SaveSlotsUI::get_CurrentSaveSlot(save_slots_ui);
                SaveSlotUI::SetBusy(save_slot_ui, false);
            }
        }
    }

    std::set<std::string> pending_scenes_to_preload;
    std::set<std::string> scenes_to_preload;

    void on_scene_preloaded(std::string_view scene_name, app::GameObject *scene_root) {
        if (!pending_scenes_to_preload.erase(scene_name.data())) {
            return;
        }

        if (pending_scenes_to_preload.empty()) {
            auto save_slots_ui = get_save_slots_ui();

            if (save_slots_ui != nullptr) {
                auto save_slot_ui = SaveSlotsUI::get_CurrentSaveSlot(save_slots_ui);
                SaveSlotUI::SetBusy(save_slot_ui, false);
            }
        }
    }

    IL2CPP_INTERCEPT(, SaveSlotsUI, void, OnEnable, (app::SaveSlotsUI* this_ptr)) {
        ScopedSetter setter(prevent_preload_on_selecting_empty_save, true);
        SaveSlotsUI::OnEnable(this_ptr);
    }
    STATIC_IL2CPP_INTERCEPT(, SaveSlotsManager, void, set_CurrentSlotIndex, (int index)) {
        SaveSlotsManager::set_CurrentSlotIndex(index);

        if (!prevent_preload_on_selecting_empty_save) {
            auto slot_info = SaveSlotsManager::SlotByIndex(index);

            if (slot_info == nullptr) {
                console_send(format("Selected empty index %d", index));

                auto save_slots_ui = get_save_slots_ui();

                if (save_slots_ui != nullptr) {
                    auto save_slot_ui = SaveSlotsUI::get_CurrentSaveSlot(save_slots_ui);

                    teleport(start_position.x, start_position.y, false);

                    auto scene_names = scenes::get_scenes_at_position(start_position);

                    for (const auto &scene_name: scenes_to_preload) {
                        if (!scene_names.contains(scene_name)) {
                            scenes::unload_scene(scene_name, false);
                        }
                    }

                    pending_scenes_to_preload.clear();
                    for (const auto &scene_name: scene_names) {
                        if (!scenes::scene_is_loaded(scene_name)) {
                            pending_scenes_to_preload.emplace(scene_name);
                            scenes_to_preload.emplace(scene_name);
                            scenes::force_load_scene(scene_name, &on_scene_preloaded, true, true);
                        }
                    }

                    if (!pending_scenes_to_preload.empty()) {
                        SaveSlotUI::SetBusy(save_slot_ui, true);
                    }
                }
            }
        }
    }
    // endregion

    void on_scene_load(scenes::SceneLoadEventMetadata* metadata, EventTiming timing)
    {
        if (metadata->scene_name == "wotwTitleScreen" && metadata->state == app::SceneState__Enum_Loaded) {
            auto scene_root = metadata->scene->fields.SceneRoot;
            auto scene_root_go = il2cpp::unity::get_game_object(scene_root);

            std::vector<std::vector<std::string>> game_objects_to_nuke {
                    {"titleScreen (new)", "startGameSequence", "02. Set Game Mode To Prologue Action"},
                    {"titleScreen (new)", "startGameSequence", "05. Play External Timeline Action"},
                    {"titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "emptySlotPressed(newGame)", "04. Wait 1.5 seconds"},
                    {"titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "emptySlotPressed(newGame)", "06. Wait 2 seconds"},
            };

            for (const auto &path: game_objects_to_nuke) {
                auto target_go = il2cpp::unity::find_child(scene_root_go, path);
                if (il2cpp::unity::is_valid(target_go)) {
                    il2cpp::unity::destroy_object(target_go);
                    modloader::console::console_send(format("nuked %s", path.back().data()));
                } else {
                    modloader::console::console_send(format("Could not delete %s", path.back().data()));
                }
            }
        }
    }

    STATIC_IL2CPP_BINDING(, SaveSlotsManager, int, get_CurrentSlotIndex, ());
    void on_new_game(GameEvent event, EventTiming timing) {
        auto game_state_machine = il2cpp::get_class<app::GameStateMachine__Class>("", "GameStateMachine")->static_fields->m_instance;

        auto camera = il2cpp::get_nested_class<app::UI_Cameras__Class>("Game", "UI", "Cameras")->static_fields->Current;
        GameplayCamera::DisableGoThroughScrollLocks(camera, reinterpret_cast<app::Object*>(game_state_machine));
        ScenesManager::ClearPreventUnloading(scenes::get_scenes_manager());

        handling_start = true;
        intro_cutscene.set(1);

        if (overwrite_start)
            teleport(start_position.x, start_position.y, true);
        else
            teleport(ORIGINAL_START.x, ORIGINAL_START.y, true);

        csharp_bridge::new_game(SaveSlotsManager::get_CurrentSlotIndex());
        GameStateMachine::SetToGame(game_state_machine);
    }

    void on_finished_loading_save(GameEvent event, EventTiming timing) {
        for (const auto &scene_name: scenes_to_preload) {
            scenes::allow_unload_scene(scene_name);
        }
    }

    void initialize()
    {
        scenes::event_bus().register_handler(&on_scene_load);
        game::event_bus().register_handler(GameEvent::NewGame, EventTiming::End, &on_new_game);
        game::event_bus().register_handler(GameEvent::FinishedLoadingSave, EventTiming::End, &on_finished_loading_save);
    }

    CALL_ON_INIT(initialize);
}

INJECT_C_DLLEXPORT void teleport(float x, float y, bool wait_for_load)
{
    teleport_position = { x, y, 0.f };
    teleport_state = TeleportState::Teleport;

    if (wait_for_load) {
        ScenesManager::LoadScenesAtPosition(scenes::get_scenes_manager(), teleport_position, !wait_for_load, false, true, false, false);
    }
}

INJECT_C_DLLEXPORT void set_start_position(float x, float y)
{
    start_position = { x, y, 0.f };
    overwrite_start = true;
}

INJECT_C_DLLEXPORT void clear_start_position()
{
    overwrite_start = false;
}