#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::LightColliderGroup {
    IL2CPP_REGISTER_METHOD(0x0114A750, void, Awake, (app::LightColliderGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0114A990, void, FixedUpdate, (app::LightColliderGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0114AD60, void, EnableCollider, (app::LightColliderGroup * this_ptr, app::Collider * collider, bool enable))
    IL2CPP_REGISTER_METHOD(0x0114ADE0, void, ctor, (app::LightColliderGroup * this_ptr))
}