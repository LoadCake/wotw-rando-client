#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::SkillTreeAction {
    IL2CPP_REGISTER_METHOD(0x006B5490, void, Perform, (app::SkillTreeAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SkillTreeAction * this_ptr))
}