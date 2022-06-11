#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Reflection::Emit::OpCode {
    IL2CPP_REGISTER_METHOD(0x001FCAD0, void, ctor, (app::OpCode__Boxed * this_ptr, int32_t p, int32_t q))
    IL2CPP_REGISTER_METHOD(0x001FCB10, int32_t, GetHashCode, (app::OpCode__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FCB40, bool, Equals, (app::OpCode__Boxed * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x001FCC20, app::String *, ToString, (app::OpCode__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FCC20, app::String *, get_Name, (app::OpCode__Boxed * this_ptr))
}