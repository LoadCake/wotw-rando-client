#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::MusicSourceTrigger {
    IL2CPP_REGISTER_METHOD(0x0087EA30, void, OnTriggerEnter, (app::MusicSourceTrigger * this_ptr, app::Collider * collider))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MusicSourceTrigger * this_ptr))
}