#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::AmplifyColor::VolumeEffectComponent {
    IL2CPP_REGISTER_METHOD(0x030CF970, void, ctor_1, (app::VolumeEffectComponent * this_ptr, app::String * name))
    IL2CPP_REGISTER_METHOD(0x030CFAD0, app::VolumeEffectField *, AddField_1, (app::VolumeEffectComponent * this_ptr, app::FieldInfo_1 * pi, app::Component_1 * c))
    IL2CPP_REGISTER_METHOD(0x030CFAF0, app::VolumeEffectField *, AddField_2, (app::VolumeEffectComponent * this_ptr, app::FieldInfo_1 * pi, app::Component_1 * c, int32_t position))
    IL2CPP_REGISTER_METHOD(0x030CFD10, void, RemoveEffectField, (app::VolumeEffectComponent * this_ptr, app::VolumeEffectField * field))
    IL2CPP_REGISTER_METHOD(0x030CFDB0, void, ctor_2, (app::VolumeEffectComponent * this_ptr, app::Component_1 * c, app::VolumeEffectComponentFlags * comp_flags))
    IL2CPP_REGISTER_METHOD(0x030D00F0, void, UpdateComponent, (app::VolumeEffectComponent * this_ptr, app::Component_1 * c, app::VolumeEffectComponentFlags * comp_flags))
    IL2CPP_REGISTER_METHOD(0x030D0620, app::VolumeEffectField *, FindEffectField, (app::VolumeEffectComponent * this_ptr, app::String * field_name))
    IL2CPP_REGISTER_METHOD(0x030D0780, app::FieldInfo_1__Array *, ListAcceptableFields, (app::Component_1 * c))
    IL2CPP_REGISTER_METHOD(0x030D0A00, app::String__Array *, GetFieldNames, (app::VolumeEffectComponent * this_ptr))
}