#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CutsceneTrigger {
    IL2CPP_REGISTER_METHOD(0x00DBF200, void, OnTriggerEnter, (app::CutsceneTrigger * this_ptr, app::Collider * collider))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CutsceneTrigger * this_ptr))
}