#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Compiler::DelegateHelpers_VBCallSiteDelegate2_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::DelegateHelpers_VBCallSiteDelegate2_1_System_Object_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01BD0F10, app::Object *, Invoke, (app::DelegateHelpers_VBCallSiteDelegate2_1_System_Object_ * this_ptr, app::Object * call_site, app::Object * instance, app::Object * * arg1, app::Object * * arg2))
    IL2CPP_REGISTER_METHOD(0x0289DCD0, app::IAsyncResult *, BeginInvoke, (app::DelegateHelpers_VBCallSiteDelegate2_1_System_Object_ * this_ptr, app::Object * call_site, app::Object * instance, app::Object * * arg1, app::Object * * arg2, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x0289DD20, app::Object *, EndInvoke, (app::DelegateHelpers_VBCallSiteDelegate2_1_System_Object_ * this_ptr, app::Object * * arg1, app::Object * * arg2, app::IAsyncResult * result))
}