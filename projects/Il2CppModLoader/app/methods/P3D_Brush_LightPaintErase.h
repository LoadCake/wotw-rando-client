#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::P3D_Brush_LightPaintErase {
    IL2CPP_REGISTER_METHOD(0x0308CF50, void, Initialize, ())
    IL2CPP_REGISTER_METHOD(0x0308D460, void, Paint, ())
    IL2CPP_REGISTER_METHODINFO(0x0470F968, P3D_Brush_LightPaintErase_Paint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0308DAF0, app::Texture2D *, InitTextureIfNeeded, (app::Texture2D * texture, int32_t main_tex_width, int32_t main_tex_height))
    IL2CPP_REGISTER_METHOD(0x0308DE10, void, cctor, ())
}