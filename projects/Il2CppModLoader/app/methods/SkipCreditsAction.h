#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::SkipCreditsAction {
    IL2CPP_REGISTER_METHOD(0x00447380, void, Awake, (app::SkipCreditsAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C08B0, void, Perform, (app::SkipCreditsAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SkipCreditsAction * this_ptr))
}