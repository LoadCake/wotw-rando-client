#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Messaging::HeaderHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::HeaderHandler * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01852930, app::Object *, Invoke, (app::HeaderHandler * this_ptr, app::Header__Array * headers))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::HeaderHandler * this_ptr, app::Header__Array * headers, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object *, EndInvoke, (app::HeaderHandler * this_ptr, app::IAsyncResult * result))
}