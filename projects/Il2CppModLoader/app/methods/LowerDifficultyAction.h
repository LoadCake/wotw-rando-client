#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::LowerDifficultyAction {
    IL2CPP_REGISTER_METHOD(0x009F3EC0, void, Perform, (app::LowerDifficultyAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::LowerDifficultyAction * this_ptr))
}