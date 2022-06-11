#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Enum_EnumResult {
    IL2CPP_REGISTER_METHOD(0x001557F0, void, Init, (app::Enum_EnumResult__Boxed * this_ptr, bool can_method_throw))
    IL2CPP_REGISTER_METHOD(0x00155800, void, SetFailure_1, (app::Enum_EnumResult__Boxed * this_ptr, app::Exception * unhandled_exception))
    IL2CPP_REGISTER_METHOD(0x00155810, void, SetFailure_2, (app::Enum_EnumResult__Boxed * this_ptr, app::Enum_ParseFailureKind__Enum failure, app::String * failure_parameter))
    IL2CPP_REGISTER_METHODINFO(0x047431F0, Enum_EnumResult_SetFailure_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00155820, void, SetFailure_3, (app::Enum_EnumResult__Boxed * this_ptr, app::Enum_ParseFailureKind__Enum failure, app::String * failure_message_i_d, app::Object * failure_message_format_argument))
    IL2CPP_REGISTER_METHODINFO(0x0478F2B0, Enum_EnumResult_SetFailure_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00155830, app::Exception *, GetEnumParseException, (app::Enum_EnumResult__Boxed * this_ptr))
}