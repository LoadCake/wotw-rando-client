#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::AlwaysShowDynamicTestDebugInfoProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::AlwaysShowDynamicTestDebugInfoProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3AF30, bool, GetState, (app::AlwaysShowDynamicTestDebugInfoProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3AFC0, void, SetState, (app::AlwaysShowDynamicTestDebugInfoProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AlwaysShowDynamicTestDebugInfoProfilingSetting * this_ptr))
}