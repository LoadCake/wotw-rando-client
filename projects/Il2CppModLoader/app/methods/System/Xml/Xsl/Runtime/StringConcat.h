#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Xml::Xsl::Runtime::StringConcat {
    IL2CPP_REGISTER_METHOD(0x00246B70, void, Clear, (app::StringConcat__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00116280, int32_t, get_Count, (app::StringConcat__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00246B80, app::String *, GetResult, (app::StringConcat__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00246B90, void, ConcatNoDelimiter, (app::StringConcat__Boxed * this_ptr, app::String * s))
}