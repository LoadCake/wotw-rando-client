#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Data::DataRowCreatedEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::DataRowCreatedEventHandler * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::DataRowCreatedEventHandler * this_ptr, app::Object * sender, app::DataRow * r))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult *, BeginInvoke, (app::DataRowCreatedEventHandler * this_ptr, app::Object * sender, app::DataRow * r, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::DataRowCreatedEventHandler * this_ptr, app::IAsyncResult * result))
}