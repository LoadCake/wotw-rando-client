#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BinaryCrossAppDomainAssembly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D8D3F0, void, Read, (app::BinaryCrossAppDomainAssembly * this_ptr, app::_BinaryParser * input))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump, (app::BinaryCrossAppDomainAssembly * this_ptr))
}