#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::DesiredUberStateBool {
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_BoolDesiredValue, (app::DesiredUberStateBool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DesiredUberStateBool * this_ptr))
}