#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::Http::Headers::Parser_Long {
    IL2CPP_REGISTER_METHOD(0x02D128D0, bool, TryParse, (app::String * input, int64_t* result))
    IL2CPP_REGISTER_METHODINFO(0x0476BEE0, Parser_Long_TryParse__MethodInfo)
} // namespace app::classes::System::Net::Http::Headers::Parser_Long
