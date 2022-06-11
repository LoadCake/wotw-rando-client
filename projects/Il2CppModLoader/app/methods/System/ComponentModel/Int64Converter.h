#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::ComponentModel::Int64Converter {
    IL2CPP_REGISTER_METHOD(0x01FEF870, app::Type *, get_TargetType, (app::Int64Converter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FEF910, app::Object *, FromString_1, (app::Int64Converter * this_ptr, app::String * value, int32_t radix))
    IL2CPP_REGISTER_METHOD(0x01FEF9D0, app::Object *, FromString_2, (app::Int64Converter * this_ptr, app::String * value, app::NumberFormatInfo * format_info))
    IL2CPP_REGISTER_METHOD(0x01FEFA90, app::Object *, FromString_3, (app::Int64Converter * this_ptr, app::String * value, app::CultureInfo * culture))
    IL2CPP_REGISTER_METHOD(0x01FEFB40, app::String *, ToString, (app::Int64Converter * this_ptr, app::Object * value, app::NumberFormatInfo * format_info))
    IL2CPP_REGISTER_METHOD(0x01FE1B70, void, ctor, (app::Int64Converter * this_ptr))
}