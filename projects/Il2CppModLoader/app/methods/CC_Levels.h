#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CC_Levels {
    IL2CPP_REGISTER_METHOD(0x03194160, void, OnRenderImage, (app::CC_Levels * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x031949B0, void, ctor, (app::CC_Levels * this_ptr))
}