#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::InverseKinematicsSolver {
    IL2CPP_REGISTER_METHOD(0x01B15310, void, Solve, (app::InverseKinematicsSolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B15BB0, void, CheckAngleRestrictions, (app::InverseKinematicsSolver * this_ptr, app::InverseKinematicsSolver_JointEntity * joint_entity))
    IL2CPP_REGISTER_METHOD(0x01B15EE0, void, ctor, (app::InverseKinematicsSolver * this_ptr))
}