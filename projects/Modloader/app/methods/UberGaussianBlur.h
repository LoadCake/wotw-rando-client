#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UberGaussianBlur {
    IL2CPP_REGISTER_METHOD(0x013EDC90, void, BlurPingPong, (app::MoonRenderContext * ctx, app::RenderTarget* from, app::RenderTarget* temp, int32_t iterations, float blur_spread, app::RenderTargetIdentifier final_1, bool do_final, app::Rect* viewport))
}
