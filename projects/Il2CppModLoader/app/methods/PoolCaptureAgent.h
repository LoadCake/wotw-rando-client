#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::PoolCaptureAgent {
    IL2CPP_REGISTER_METHOD(0x00C5F740, void, MarkUnpooledInstantiation, (app::String * prefab_name, float elapsed_milliseconds))
    IL2CPP_REGISTER_METHOD(0x00C5F8A0, void, MarkExhaustedInstantiation, (app::String * prefab_name, int32_t current_object_count, int32_t peak_object_count, float elapsed_milliseconds))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (app::PoolCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C5FA10, void, OnInitialize, (app::PoolCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (app::PoolCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C5FDC0, app::String__Array *, GetFrameData_1, (app::PoolCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047869D8, PoolCaptureAgent_GetFrameData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C5FE10, void, GetFrameData_2, (app::PoolCaptureAgent * this_ptr, app::FrameCaptureTester_AgentOutput * output))
    IL2CPP_REGISTER_METHOD(0x00C605A0, void, Reset, (app::PoolCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C606C0, app::String__Array *, GetDataHeaderNames, (app::PoolCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PoolCaptureAgent * this_ptr))
}