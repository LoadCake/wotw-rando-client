#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::RootMotion::Demos::VRCharacterController {
    IL2CPP_REGISTER_METHOD(0x0204B390, void, Awake, (app::VRCharacterController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204B460, void, Update, (app::VRCharacterController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204BF30, void, ctor, (app::VRCharacterController * this_ptr))
}