#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Object_1__Array.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/AsyncOperation_1.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Font.h>
#include <Modloader/app/structs/UberStateCollection.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/ComputeShader.h>
#include <Modloader/app/structs/PlayFabSharedSettings__Array.h>
#include <Modloader/app/structs/AkWwiseInitializationSettings.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/EntityWeightData.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/HitReactionSettings.h>
#include <Modloader/app/structs/InstantiateDebugIgnore.h>
#include <Modloader/app/structs/TextAsset.h>

namespace app::classes::UnityEngine::Resources {
    IL2CPP_REGISTER_METHOD(0x02542670, app::Object_1__Array*, FindObjectsOfTypeAll_1, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x029788F0, app::Object_1*, Load_1, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x029789F0, app::Object_1*, Load_2, (app::String * path, app::Type* system_type_instance))
    IL2CPP_REGISTER_METHOD(0x02978A50, app::Object_1__Array*, LoadAll_1, (app::String * path, app::Type* system_type_instance))
    IL2CPP_REGISTER_METHOD(0x02978AB0, app::Object_1*, GetBuiltinResource_1, (app::Type * type, app::String* path))
    IL2CPP_REGISTER_METHOD(0x02978B10, void, UnloadAsset, (app::Object_1 * asset_to_unload))
    IL2CPP_REGISTER_METHOD(0x02978B60, app::AsyncOperation_1*, UnloadUnusedAssets, ())
    IL2CPP_REGISTER_METHOD(0x02978BB0, void, UnloadUnusedAssetsImmediate, (bool managed_objects))
    IL2CPP_REGISTER_METHOD(0x02978C00, void, SetCleanupMarkedAssetsOperationPriority, (int32_t priority))
    IL2CPP_REGISTER_METHOD(0x02978C50, void, IncrementRefCountersForObjects, (app::Object_1__Array * assets))
    IL2CPP_REGISTER_METHOD(0x02978CA0, void, DecrementRefCountersForObjects, (app::Object_1__Array * assets))
    IL2CPP_REGISTER_METHOD(0x02978CF0, int32_t, MarkedAssetsUnloadQueueSize, ())
    IL2CPP_REGISTER_METHOD(0x02978D40, int32_t, MarkedAssetsPanicCount, ())
    IL2CPP_REGISTER_METHOD(0x02978D90, int32_t, ReferenceCountCount, ())
    IL2CPP_REGISTER_METHOD(0x02978DE0, int32_t, GetObjectsCount, ())
    IL2CPP_REGISTER_METHOD(0x02978E30, int32_t, GetObjectMapUnusedLeft, ())
    IL2CPP_REGISTER_METHOD(0x02FF5AD0, app::Object__Array*, ConvertObjects, (app::Object_1__Array * raw_objects))
    IL2CPP_REGISTER_METHOD(0x02FF66B0, app::Object__Array*, FindObjectsOfTypeAll_2, ())
    IL2CPP_REGISTER_METHOD(0x0157D850, app::Object*, Load_3, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x02FF67B0, app::Object__Array*, LoadAll_2, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x0157D700, app::Object*, GetBuiltinResource_2, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x0157D700, app::Font*, GetBuiltinResource_3, (app::String * path))
    IL2CPP_REGISTER_METHODINFO(0x04772EB0, Resources_GetBuiltinResource_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0157D850, app::UberStateCollection*, Load_4, (app::String * path))
    IL2CPP_REGISTER_METHODINFO(0x04753470, Resources_Load_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0157D850, app::Texture2D*, Load_5, (app::String * path))
    IL2CPP_REGISTER_METHODINFO(0x0474C7A8, Resources_Load_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0157D850, app::Material*, Load_6, (app::String * path))
    IL2CPP_REGISTER_METHODINFO(0x04774DC8, Resources_Load_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0157D850, app::ComputeShader*, Load_7, (app::String * path))
    IL2CPP_REGISTER_METHODINFO(0x04761070, Resources_Load_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF67B0, app::PlayFabSharedSettings__Array*, LoadAll_3, (app::String * path))
    IL2CPP_REGISTER_METHODINFO(0x0472B2D0, Resources_LoadAll_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0157D850, app::AkWwiseInitializationSettings*, Load_8, (app::String * path))
    IL2CPP_REGISTER_METHODINFO(0x047705A8, Resources_Load_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0157D850, app::GameObject*, Load_9, (app::String * path))
    IL2CPP_REGISTER_METHODINFO(0x04732F60, Resources_Load_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0157D850, app::EntityWeightData*, Load_10, (app::String * path))
    IL2CPP_REGISTER_METHODINFO(0x0475B4C0, Resources_Load_9__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF66B0, app::GameObject__Array*, FindObjectsOfTypeAll_3, ())
    IL2CPP_REGISTER_METHODINFO(0x04737788, Resources_FindObjectsOfTypeAll_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0157D850, app::HitReactionSettings*, Load_11, (app::String * path))
    IL2CPP_REGISTER_METHODINFO(0x0473A2B0, Resources_Load_10__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0157D850, app::InstantiateDebugIgnore*, Load_12, (app::String * path))
    IL2CPP_REGISTER_METHODINFO(0x0474A7A8, Resources_Load_11__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0157D850, app::TextAsset*, Load_13, (app::String * path))
    IL2CPP_REGISTER_METHODINFO(0x04712850, Resources_Load_12__MethodInfo)
} // namespace app::classes::UnityEngine::Resources
