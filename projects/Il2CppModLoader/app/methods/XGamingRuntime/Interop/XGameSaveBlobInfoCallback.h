#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::XGamingRuntime::Interop::XGameSaveBlobInfoCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::XGameSaveBlobInfoCallback * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x030B3590, app::NativeBool, Invoke, (app::XGameSaveBlobInfoCallback * this_ptr, app::XGameSaveBlobInfo info, void * context))
    IL2CPP_REGISTER_METHOD(0x030B39F0, app::IAsyncResult *, BeginInvoke, (app::XGameSaveBlobInfoCallback * this_ptr, app::XGameSaveBlobInfo info, void * context, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, app::NativeBool, EndInvoke, (app::XGameSaveBlobInfoCallback * this_ptr, app::IAsyncResult * result))
}