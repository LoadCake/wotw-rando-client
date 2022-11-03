#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Telemetry::TelemetrySceneEventsUtility {
    IL2CPP_REGISTER_METHOD(0x010AA6C0, app::Color, GetColor, (app::MoonTelemetrySceneEvent_EventSceneState__Enum state))
    IL2CPP_REGISTER_METHOD(0x010AA750, app::String*, GetInfo, (app::MoonTelemetrySceneEvent_EventSceneState__Enum state))
} // namespace app::classes::Moon::Telemetry::TelemetrySceneEventsUtility
