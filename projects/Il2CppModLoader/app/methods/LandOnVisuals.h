#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::LandOnVisuals {
    IL2CPP_REGISTER_METHOD(0x00F029A0, void, OnChangeState, (app::LandOnVisuals * this_ptr, app::LandOnState__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x00F02A70, void, OnCollisionEnter, (app::LandOnVisuals * this_ptr, app::Collision * collision))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LandOnVisuals * this_ptr))
}