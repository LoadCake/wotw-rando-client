#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Net::Http::Headers::Parser_TimeSpanSeconds {
    IL2CPP_REGISTER_METHOD(0x02D12E20, bool, TryParse, (app::String * input, app::TimeSpan * result))
    IL2CPP_REGISTER_METHODINFO(0x04710DB0, Parser_TimeSpanSeconds_TryParse__MethodInfo)
}