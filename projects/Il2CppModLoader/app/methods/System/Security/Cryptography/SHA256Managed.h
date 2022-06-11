#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Security::Cryptography::SHA256Managed {
    IL2CPP_REGISTER_METHOD(0x028F7DA0, void, ctor, (app::SHA256Managed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477D3F8, SHA256Managed__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028F7E60, void, Initialize, (app::SHA256Managed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028F7EB0, void, HashCore, (app::SHA256Managed * this_ptr, app::Byte__Array * rgb, int32_t ib_start, int32_t cb_size))
    IL2CPP_REGISTER_METHOD(0x028F7EC0, app::Byte__Array *, HashFinal, (app::SHA256Managed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028F7ED0, void, InitializeState, (app::SHA256Managed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028F8090, void, _HashData, (app::SHA256Managed * this_ptr, app::Byte__Array * part_in, int32_t ib_start, int32_t cb_size))
    IL2CPP_REGISTER_METHOD(0x028F82B0, app::Byte__Array *, _EndHash, (app::SHA256Managed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028F8550, void, SHATransform, (uint32_t * expanded_buffer, uint32_t * state, uint8_t * block))
    IL2CPP_REGISTER_METHOD(0x028F8D50, uint32_t, RotateRight, (uint32_t x, int32_t n))
    IL2CPP_REGISTER_METHOD(0x028F8D70, uint32_t, Ch, (uint32_t x, uint32_t y, uint32_t z))
    IL2CPP_REGISTER_METHOD(0x028F8D80, uint32_t, Maj, (uint32_t x, uint32_t y, uint32_t z))
    IL2CPP_REGISTER_METHOD(0x028F8D90, uint32_t, sigma_0, (uint32_t x))
    IL2CPP_REGISTER_METHOD(0x028F8E40, uint32_t, sigma_1, (uint32_t x))
    IL2CPP_REGISTER_METHOD(0x028F8EF0, uint32_t, Sigma_0, (uint32_t x))
    IL2CPP_REGISTER_METHOD(0x028F8FB0, uint32_t, Sigma_1, (uint32_t x))
    IL2CPP_REGISTER_METHOD(0x028F9070, void, SHA256Expand, (uint32_t * x))
    IL2CPP_REGISTER_METHOD(0x028F9160, void, cctor, ())
}