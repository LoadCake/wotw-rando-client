#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::GetAbilityAction {
    IL2CPP_REGISTER_METHOD(0x00E11760, void, Perform, (app::GetAbilityAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00E11920, void, ctor, (app::GetAbilityAction * this_ptr))
}