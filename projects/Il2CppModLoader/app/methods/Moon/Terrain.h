#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::Terrain {
    IL2CPP_REGISTER_METHOD(0x025668D0, app::TerrainData *, get_terrainData, (app::Terrain * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047252F0, Terrain_get_terrainData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02566920, app::Transform *, get_transform, (app::Terrain * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472EFC0, Terrain_get_transform__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Terrain * this_ptr))
}