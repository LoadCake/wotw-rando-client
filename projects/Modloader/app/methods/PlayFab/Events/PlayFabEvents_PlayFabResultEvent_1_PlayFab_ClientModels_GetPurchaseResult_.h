#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPurchaseResult_.h>
#include <Modloader/app/structs/GetPurchaseResult.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPurchaseResult_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPurchaseResult_ * this_ptr, app::GetPurchaseResult* result))
    IL2CPP_REGISTER_METHODINFO(0x04775CA0, PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPurchaseResult__Invoke__MethodInfo)
} // namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPurchaseResult_
