#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::ArtOptimization::SampleUberShaderTask {
    IL2CPP_REGISTER_METHOD(0x00CAECA0, app::RenderTexture *, get_RenderTex, ())
    IL2CPP_REGISTER_METHOD(0x00CAEF90, void, ctor, (app::SampleUberShaderTask * this_ptr, int32_t sample_index, float progress, app::ArtOptimizationDataModel * data_model, app::UberShaderComponent * uber_shader, app::Bounds bounds))
    IL2CPP_REGISTER_METHOD(0x00CAEFC0, void, Update, (app::SampleUberShaderTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CAFD50, void, SaveSample, (app::SampleUberShaderTask * this_ptr, app::Texture2D * sample, app::String * sample_name))
    IL2CPP_REGISTER_METHOD(0x00CAFEF0, void, cctor, ())
}