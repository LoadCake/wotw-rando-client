#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Text::DecoderReplacementFallbackBuffer {
    IL2CPP_REGISTER_METHOD(0x0244B730, void, ctor, (app::DecoderReplacementFallbackBuffer * this_ptr, app::DecoderReplacementFallback * fallback))
    IL2CPP_REGISTER_METHOD(0x0244B760, bool, Fallback, (app::DecoderReplacementFallbackBuffer * this_ptr, app::Byte__Array * bytes_unknown, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0244B7B0, uint16_t, GetNextChar, (app::DecoderReplacementFallbackBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244B800, int32_t, get_Remaining, (app::DecoderReplacementFallbackBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244B810, void, Reset, (app::DecoderReplacementFallbackBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01939E80, int32_t, InternalFallback, (app::DecoderReplacementFallbackBuffer * this_ptr, app::Byte__Array * bytes, uint8_t * p_bytes))
}