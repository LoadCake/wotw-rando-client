#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::TeleportRestrictZone {
    IL2CPP_REGISTER_METHOD(0x00CE9850, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00CE9910, void, OnEnable, (app::TeleportRestrictZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE99F0, void, OnDisable, (app::TeleportRestrictZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE9AB0, void, FixedUpdate, (app::TeleportRestrictZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE9C90, bool, IsPlayerInside, (app::TeleportRestrictZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE9DA0, bool, IsInside, (app::TeleportRestrictZone * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00CE9F90, bool, IsPlayerInTeleportRestrictZone, ())
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TeleportRestrictZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CEA160, void, cctor, ())
}