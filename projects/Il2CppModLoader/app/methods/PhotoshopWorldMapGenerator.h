#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::PhotoshopWorldMapGenerator {
    IL2CPP_REGISTER_METHOD(0x014E96A0, app::Rect, get_Bounds, (app::PhotoshopWorldMapGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E99F0, void, GenerateCode, (app::PhotoshopWorldMapGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014EB3C0, void, ctor, (app::PhotoshopWorldMapGenerator * this_ptr))
}