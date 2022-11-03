#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MaterialTypeVFXSettings {
    IL2CPP_REGISTER_METHOD(0x01383400, void, Initialize, (app::MaterialTypeVFXSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01383680, void, ctor, (app::MaterialTypeVFXSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01383AD0, app::GameObject*, FindVFX, (app::MaterialTypeVFXSettings * this_ptr, app::SurfaceMaterialType__Enum material_type, app::MaterialTypeVFXSettings_EffectSize__Enum size))
} // namespace app::classes::MaterialTypeVFXSettings
