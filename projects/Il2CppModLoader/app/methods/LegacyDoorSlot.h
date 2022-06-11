#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::LegacyDoorSlot {
    IL2CPP_REGISTER_METHOD(0x00A1A7E0, void, Awake, (app::LegacyDoorSlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1A980, void, OnDestroy, (app::LegacyDoorSlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1AB10, void, OnGameSerializeLoad, (app::LegacyDoorSlot * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470E0B0, LegacyDoorSlot_OnGameSerializeLoad__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00A1AD50, void, FixedUpdate, (app::LegacyDoorSlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LegacyDoorSlot * this_ptr))
}