#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::MortarEntity_AimVeloCache_Generator {
    IL2CPP_REGISTER_METHOD(0x0147A540, void, EnumerateVelocitiesForTarget, (app::MortarEntity_AimVeloCache_Generator * this_ptr, app::Vector3 target_pos_world))
    IL2CPP_REGISTER_METHOD(0x0147AF10, void, EnumerateVelocities, (app::MortarEntity_AimVeloCache_Generator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0147B130, void, CastVelocityArcs, (app::MortarEntity_AimVeloCache_Generator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0147B4A0, void, Execute, (app::MortarEntity_AimVeloCache_Generator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MortarEntity_AimVeloCache_Generator * this_ptr))
}