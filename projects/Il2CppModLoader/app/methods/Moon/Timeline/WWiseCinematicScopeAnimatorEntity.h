#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::Timeline::WWiseCinematicScopeAnimatorEntity {
    IL2CPP_REGISTER_METHOD(0x00D1D560, void, OnStartPlayback, (app::WWiseCinematicScopeAnimatorEntity * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00D1D5F0, void, OnUpdateEntity, (app::WWiseCinematicScopeAnimatorEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00D1D680, void, ctor, (app::WWiseCinematicScopeAnimatorEntity * this_ptr))
}