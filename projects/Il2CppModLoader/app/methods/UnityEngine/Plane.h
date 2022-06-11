#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::UnityEngine::Plane {
    IL2CPP_REGISTER_METHOD(0x00216460, void, ctor_1, (app::Plane__Boxed * this_ptr, app::Vector3 in_normal, app::Vector3 in_point))
    IL2CPP_REGISTER_METHOD(0x002164A0, void, ctor_2, (app::Plane__Boxed * this_ptr, app::Vector3 a, app::Vector3 b, app::Vector3 c))
    IL2CPP_REGISTER_METHOD(0x00216500, float, GetDistanceToPoint, (app::Plane__Boxed * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x00216530, bool, Raycast, (app::Plane__Boxed * this_ptr, app::Ray ray, float * enter))
    IL2CPP_REGISTER_METHOD(0x00216560, app::String *, ToString, (app::Plane__Boxed * this_ptr))
}