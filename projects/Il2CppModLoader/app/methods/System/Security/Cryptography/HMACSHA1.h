#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Security::Cryptography::HMACSHA1 {
    IL2CPP_REGISTER_METHOD(0x020D9E60, void, ctor_1, (app::HMACSHA1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020D9F10, void, ctor_2, (app::HMACSHA1 * this_ptr, app::Byte__Array * key))
    IL2CPP_REGISTER_METHOD(0x020D9F20, void, ctor_3, (app::HMACSHA1 * this_ptr, app::Byte__Array * key, bool use_managed_sha1))
}