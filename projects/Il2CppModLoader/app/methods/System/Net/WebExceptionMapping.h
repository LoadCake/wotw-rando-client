#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Net::WebExceptionMapping {
    IL2CPP_REGISTER_METHOD(0x01D70070, app::String *, GetWebStatusString, (app::WebExceptionStatus__Enum status))
    IL2CPP_REGISTER_METHODINFO(0x047710E0, WebExceptionMapping_GetWebStatusString__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D70280, void, cctor, ())
}