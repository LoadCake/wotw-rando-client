#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Comparison_1_UnityEngine_UILineInfo_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_UnityEngine_UILineInfo_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02B840F0, int32_t, Invoke, (app::Comparison_1_UnityEngine_UILineInfo_ * this_ptr, app::UILineInfo x, app::UILineInfo y))
    IL2CPP_REGISTER_METHOD(0x02C84F20, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_UnityEngine_UILineInfo_ * this_ptr, app::UILineInfo x, app::UILineInfo y, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_UnityEngine_UILineInfo_ * this_ptr, app::IAsyncResult * result))
}