#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::VerletBodyIndexed_Point {
    IL2CPP_REGISTER_METHOD(0x001DC800, float, get_Mass, (app::VerletBodyIndexed_Point__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DC810, void, set_Mass, (app::VerletBodyIndexed_Point__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x001DC840, void, AddForce, (app::VerletBodyIndexed_Point__Boxed * this_ptr, app::Vector3 force))
    IL2CPP_REGISTER_METHOD(0x001DC870, void, AddAcceleration, (app::VerletBodyIndexed_Point__Boxed * this_ptr, app::Vector3 acceleration))
}