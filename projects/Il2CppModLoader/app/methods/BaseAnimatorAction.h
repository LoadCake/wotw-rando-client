#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::BaseAnimatorAction {
    IL2CPP_REGISTER_METHOD(0x00F85310, void, Start, (app::BaseAnimatorAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F85420, void, Perform, (app::BaseAnimatorAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00F85950, app::String *, get_TargetName, (app::BaseAnimatorAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F85AE0, app::String *, GetNiceName, (app::BaseAnimatorAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::BaseAnimatorAction * this_ptr))
}