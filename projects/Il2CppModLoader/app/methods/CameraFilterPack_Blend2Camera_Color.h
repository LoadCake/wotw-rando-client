#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CameraFilterPack_Blend2Camera_Color {
    IL2CPP_REGISTER_METHOD(0x027434C0, app::Material *, get_material, (app::CameraFilterPack_Blend2Camera_Color * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027436A0, void, Start, (app::CameraFilterPack_Blend2Camera_Color * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02743A60, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_Color * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x02743E50, void, OnValidate, (app::CameraFilterPack_Blend2Camera_Color * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02744140, void, Update, (app::CameraFilterPack_Blend2Camera_Color * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027441D0, void, OnEnable, (app::CameraFilterPack_Blend2Camera_Color * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027444A0, void, OnDisable, (app::CameraFilterPack_Blend2Camera_Color * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02744690, void, ctor, (app::CameraFilterPack_Blend2Camera_Color * this_ptr))
}