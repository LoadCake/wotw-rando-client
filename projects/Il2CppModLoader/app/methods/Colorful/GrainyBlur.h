#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Colorful::GrainyBlur {
    IL2CPP_REGISTER_METHOD(0x03046460, void, OnRenderImage, (app::GrainyBlur * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x03046710, app::String *, GetShaderName, (app::GrainyBlur * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03046790, void, ctor, (app::GrainyBlur * this_ptr))
}