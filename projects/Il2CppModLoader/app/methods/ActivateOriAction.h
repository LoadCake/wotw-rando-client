#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ActivateOriAction {
    IL2CPP_REGISTER_METHOD(0x004C8C10, void, Perform, (app::ActivateOriAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x004C8D70, app::String *, GetNiceName, (app::ActivateOriAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C87A0, void, ctor, (app::ActivateOriAction * this_ptr))
}