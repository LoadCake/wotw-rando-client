#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::CrashContext_Callback {
    IL2CPP_REGISTER_METHOD(0x00CCF080, void, OnLateUpdate, (app::CrashContext_Callback * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CrashContext_Callback * this_ptr))
}