#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::UnityEngine::Experimental::Rendering::CullResults {
    IL2CPP_REGISTER_METHOD(0x001EC720, void, Init, (app::CullResults__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02433320, bool, GetCullingParameters, (app::Camera * camera, app::ScriptableCullingParameters * culling_parameters))
    IL2CPP_REGISTER_METHOD(0x02433390, bool, GetCullingParameters_Internal, (app::Camera * camera, bool stereo_aware, app::ScriptableCullingParameters * culling_parameters, int32_t managed_culling_parameters_size))
    IL2CPP_REGISTER_METHOD(0x02433410, void, Internal_Cull, (app::ScriptableCullingParameters * parameters, app::ScriptableRenderContext render_loop, app::CullResults * results))
    IL2CPP_REGISTER_METHOD(0x02433480, void, Cull, (app::ScriptableCullingParameters * parameters, app::ScriptableRenderContext render_loop, app::CullResults * results))
    IL2CPP_REGISTER_METHOD(0x024338A0, void, Internal_Cull_Injected, (app::ScriptableCullingParameters * parameters, app::ScriptableRenderContext * render_loop, app::CullResults * results))
}