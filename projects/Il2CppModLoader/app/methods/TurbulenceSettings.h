#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::TurbulenceSettings {
    IL2CPP_REGISTER_METHOD(0x00B1A610, app::Texture2D *, get_TurbulenceTexture, (app::TurbulenceSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1A6F0, float, get_CurveDuration, (app::TurbulenceSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1A7B0, app::Texture2D *, BakeAnimationCurve_1, (app::TurbulenceSettings * this_ptr, app::AnimationCurve * curve, app::TextureWrapMode__Enum wrap_mode, int32_t resolution, float * scale))
    IL2CPP_REGISTER_METHOD(0x00B1AEC0, app::Texture2D *, BakeAnimationCurve_2, (app::TurbulenceSettings * this_ptr, app::AnimationCurve * curve, app::TextureWrapMode__Enum wrap_mode, int32_t resolution_x, int32_t resolution_y, float * scale))
    IL2CPP_REGISTER_METHOD(0x00B1B670, bool, CurveHasChanged, (app::TurbulenceSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1B680, void, ctor, (app::TurbulenceSettings * this_ptr))
}