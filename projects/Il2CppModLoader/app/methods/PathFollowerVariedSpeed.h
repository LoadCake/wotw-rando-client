#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::PathFollowerVariedSpeed {
    IL2CPP_REGISTER_METHOD(0x00447230, float, get_Speed, (app::PathFollowerVariedSpeed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447340, float, get_DistanceBetweenCurrentNodes, (app::PathFollowerVariedSpeed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447350, void, set_DistanceBetweenCurrentNodes, (app::PathFollowerVariedSpeed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00447360, int32_t, get_NextNode, (app::PathFollowerVariedSpeed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00446940, app::Vector3, get_WorldPosition, (app::PathFollowerVariedSpeed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00446960, float, get_WorldAngle, (app::PathFollowerVariedSpeed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_ReachedTheEnd, (app::PathFollowerVariedSpeed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_ReachedTheEnd, (app::PathFollowerVariedSpeed * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00447380, void, Reset, (app::PathFollowerVariedSpeed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447390, void, SetStartWorldAngle, (app::PathFollowerVariedSpeed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004475C0, void, UpdateFollower, (app::PathFollowerVariedSpeed * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x00447ED0, void, ctor, (app::PathFollowerVariedSpeed * this_ptr))
}