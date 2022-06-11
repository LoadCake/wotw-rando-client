#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Security::Cryptography::X509Certificates::X500DistinguishedName {
    IL2CPP_REGISTER_METHOD(0x021C26E0, void, ctor, (app::X500DistinguishedName * this_ptr, app::Byte__Array * encoded_distinguished_name))
    IL2CPP_REGISTER_METHODINFO(0x0478F0D0, X500DistinguishedName__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021C28B0, app::String *, Decode, (app::X500DistinguishedName * this_ptr, app::X500DistinguishedNameFlags__Enum flag))
    IL2CPP_REGISTER_METHODINFO(0x047802D8, X500DistinguishedName_Decode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021C2B50, app::String *, Format, (app::X500DistinguishedName * this_ptr, bool multi_line))
    IL2CPP_REGISTER_METHOD(0x021C2BC0, app::String *, GetSeparator, (app::X500DistinguishedNameFlags__Enum flag))
    IL2CPP_REGISTER_METHOD(0x021C2C60, void, DecodeRawData, (app::X500DistinguishedName * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021C2E20, app::String *, Canonize, (app::String * s))
    IL2CPP_REGISTER_METHOD(0x021C31A0, bool, AreEqual, (app::X500DistinguishedName * name1, app::X500DistinguishedName * name2))
}