#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::SandTrailModifier {
    IL2CPP_REGISTER_METHOD(0x00C08450, void, SetProperties, (app::SandTrailModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C08580, app::IEnumerable_1_System_String_ *, GetKeywordsForShader, (app::SandTrailModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresNormals, (app::SandTrailModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresTangent, (app::SandTrailModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresVertexColor, (app::SandTrailModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C08700, void, ctor, (app::SandTrailModifier * this_ptr))
}