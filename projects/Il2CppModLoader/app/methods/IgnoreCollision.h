#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::IgnoreCollision {
    IL2CPP_REGISTER_METHOD(0x006267B0, void, OnEnable, (app::IgnoreCollision * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00626870, void, ctor, (app::IgnoreCollision * this_ptr))
}