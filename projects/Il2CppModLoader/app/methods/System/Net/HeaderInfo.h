#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Net::HeaderInfo {
    IL2CPP_REGISTER_METHOD(0x01D38EC0, void, ctor, (app::HeaderInfo * this_ptr, app::String * name, bool request_restricted, bool response_restricted, bool multi, app::HeaderParser * p))
}