#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Net::HttpListenerBasicIdentity {
    IL2CPP_REGISTER_METHOD(0x01D44B30, void, ctor, (app::HttpListenerBasicIdentity * this_ptr, app::String * username, app::String * password))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::String *, get_Password, (app::HttpListenerBasicIdentity * this_ptr))
}