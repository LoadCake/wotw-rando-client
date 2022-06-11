#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Globalization::CodePageDataItem {
    IL2CPP_REGISTER_METHOD(0x01A22490, void, ctor, (app::CodePageDataItem * this_ptr, int32_t data_index))
    IL2CPP_REGISTER_METHOD(0x01A225B0, app::String *, CreateString, (app::String * p_strings, uint32_t index))
    IL2CPP_REGISTER_METHOD(0x01A226E0, app::String *, get_WebName, (app::CodePageDataItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A228F0, void, cctor, ())
}