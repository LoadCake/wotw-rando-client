#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Net::StaticProxy {
    IL2CPP_REGISTER_METHOD(0x020A5B70, void, ctor, (app::StaticProxy * this_ptr, app::Uri * destination, app::Uri * proxy))
    IL2CPP_REGISTER_METHODINFO(0x0477D568, StaticProxy__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020A5C60, bool, GetNextProxy, (app::StaticProxy * this_ptr, app::Uri * * proxy))
}