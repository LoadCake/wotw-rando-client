#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::RootMotion::FinalIK::TrigonometricIK {
    IL2CPP_REGISTER_METHOD(0x02A27E40, void, OpenUserManual, (app::TrigonometricIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A27F00, void, OpenScriptReference, (app::TrigonometricIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A27FC0, void, SupportGroup, (app::TrigonometricIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A28080, void, ASThread, (app::TrigonometricIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IKSolver *, GetIKSolver, (app::TrigonometricIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A28140, void, ctor, (app::TrigonometricIK * this_ptr))
}