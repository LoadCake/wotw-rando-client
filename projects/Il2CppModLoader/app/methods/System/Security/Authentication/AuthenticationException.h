#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Security::Authentication::AuthenticationException {
    IL2CPP_REGISTER_METHOD(0x021BC660, void, ctor_1, (app::AuthenticationException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E259C0, void, ctor_2, (app::AuthenticationException * this_ptr, app::String * message, app::Exception * inner_exception))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::AuthenticationException * this_ptr, app::SerializationInfo * serialization_info, app::StreamingContext streaming_context))
}