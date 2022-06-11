#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Security::Cryptography::CAPI {
    IL2CPP_REGISTER_METHOD(0x021BF060, app::String *, CryptFindOIDInfoNameFromKey, (app::String * key, app::OidGroup__Enum oid_group))
    IL2CPP_REGISTER_METHOD(0x021BFCA0, app::String *, CryptFindOIDInfoKeyFromName, (app::String * name, app::OidGroup__Enum oid_group))
}