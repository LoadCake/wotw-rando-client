#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Func_2_Guid_Int32_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Guid_Int32_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x028872B0, int32_t, Invoke, (app::Func_2_Guid_Int32_ * this_ptr, app::Guid arg))
    IL2CPP_REGISTER_METHOD(0x02F9EC50, app::IAsyncResult *, BeginInvoke, (app::Func_2_Guid_Int32_ * this_ptr, app::Guid arg, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Func_2_Guid_Int32_ * this_ptr, app::IAsyncResult * result))
}