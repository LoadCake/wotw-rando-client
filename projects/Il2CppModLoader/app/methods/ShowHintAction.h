#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ShowHintAction {
    IL2CPP_REGISTER_METHOD(0x005C4820, void, Perform, (app::ShowHintAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x005C4940, void, ctor, (app::ShowHintAction * this_ptr))
}