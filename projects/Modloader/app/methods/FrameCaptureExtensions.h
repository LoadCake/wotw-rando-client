#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/IFrameCaptureAgent_1_EntityDataCaptureAgent_EntityDataHeader_.h>
#include <Modloader/app/structs/IFrameCaptureAgent_1_NvnMemoryCaptureAgent_MemoryHeader_.h>
#include <Modloader/app/structs/IFrameCaptureAgent_1_ObjectInstantiationCaptureAgent_ObjectInstantiationHeader_.h>
#include <Modloader/app/structs/IFrameCaptureAgent_1_ObjectProfilingCaptureAgent_ObjectProfilingHeader_.h>
#include <Modloader/app/structs/IFrameCaptureAgent_1_SampleOffsetCaptureAgent_FrameSummaryHeader_.h>
#include <Modloader/app/structs/IFrameCaptureAgent_1_TimesliceBudgetCaptureAgent_TimeSliceBudgetHeader_.h>
#include <Modloader/app/structs/IFrameCaptureAgent_1_System_Int32Enum_.h>

namespace app::classes::FrameCaptureExtensions {
    IL2CPP_REGISTER_METHOD(0x01542520, app::String__Array*, HeaderNames_1, (app::IFrameCaptureAgent_1_EntityDataCaptureAgent_EntityDataHeader_ * agent))
    IL2CPP_REGISTER_METHODINFO(0x04785098, FrameCaptureExtensions_HeaderNames__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02654B20, int32_t, HeaderLength_1, (app::IFrameCaptureAgent_1_EntityDataCaptureAgent_EntityDataHeader_ * agent))
    IL2CPP_REGISTER_METHODINFO(0x0476F638, FrameCaptureExtensions_HeaderLength__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01542520, app::String__Array*, HeaderNames_2, (app::IFrameCaptureAgent_1_NvnMemoryCaptureAgent_MemoryHeader_ * agent))
    IL2CPP_REGISTER_METHODINFO(0x0477F9B8, FrameCaptureExtensions_HeaderNames_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02654B20, int32_t, HeaderLength_2, (app::IFrameCaptureAgent_1_NvnMemoryCaptureAgent_MemoryHeader_ * agent))
    IL2CPP_REGISTER_METHODINFO(0x0474AEF0, FrameCaptureExtensions_HeaderLength_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02654B20, int32_t, HeaderLength_3, (app::IFrameCaptureAgent_1_ObjectInstantiationCaptureAgent_ObjectInstantiationHeader_ * agent))
    IL2CPP_REGISTER_METHODINFO(0x04788058, FrameCaptureExtensions_HeaderLength_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01542520, app::String__Array*, HeaderNames_3, (app::IFrameCaptureAgent_1_ObjectInstantiationCaptureAgent_ObjectInstantiationHeader_ * agent))
    IL2CPP_REGISTER_METHODINFO(0x0472C790, FrameCaptureExtensions_HeaderNames_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02654B20, int32_t, HeaderLength_4, (app::IFrameCaptureAgent_1_ObjectProfilingCaptureAgent_ObjectProfilingHeader_ * agent))
    IL2CPP_REGISTER_METHODINFO(0x0470F978, FrameCaptureExtensions_HeaderLength_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01542520, app::String__Array*, HeaderNames_4, (app::IFrameCaptureAgent_1_ObjectProfilingCaptureAgent_ObjectProfilingHeader_ * agent))
    IL2CPP_REGISTER_METHODINFO(0x0472E5A0, FrameCaptureExtensions_HeaderNames_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01542520, app::String__Array*, HeaderNames_5, (app::IFrameCaptureAgent_1_SampleOffsetCaptureAgent_FrameSummaryHeader_ * agent))
    IL2CPP_REGISTER_METHODINFO(0x04738B68, FrameCaptureExtensions_HeaderNames_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02654B20, int32_t, HeaderLength_5, (app::IFrameCaptureAgent_1_SampleOffsetCaptureAgent_FrameSummaryHeader_ * agent))
    IL2CPP_REGISTER_METHODINFO(0x04798860, FrameCaptureExtensions_HeaderLength_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01542520, app::String__Array*, HeaderNames_6, (app::IFrameCaptureAgent_1_TimesliceBudgetCaptureAgent_TimeSliceBudgetHeader_ * agent))
    IL2CPP_REGISTER_METHODINFO(0x04718F10, FrameCaptureExtensions_HeaderNames_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02654B20, int32_t, HeaderLength_6, (app::IFrameCaptureAgent_1_TimesliceBudgetCaptureAgent_TimeSliceBudgetHeader_ * agent))
    IL2CPP_REGISTER_METHODINFO(0x047986F8, FrameCaptureExtensions_HeaderLength_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02654B20, int32_t, HeaderLength_7, (app::IFrameCaptureAgent_1_System_Int32Enum_ * agent))
    IL2CPP_REGISTER_METHOD(0x01542520, app::String__Array*, HeaderNames_7, (app::IFrameCaptureAgent_1_System_Int32Enum_ * agent))
} // namespace app::classes::FrameCaptureExtensions
