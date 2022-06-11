#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CapsuleColliderAnimator {
    IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_IsLooping, (app::CapsuleColliderAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B23670, void, CacheOriginals, (app::CapsuleColliderAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B236F0, void, SampleValue, (app::CapsuleColliderAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00A319F0, float, get_Duration, (app::CapsuleColliderAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B23810, void, RestoreToOriginalState, (app::CapsuleColliderAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B23890, void, ctor, (app::CapsuleColliderAnimator * this_ptr))
}