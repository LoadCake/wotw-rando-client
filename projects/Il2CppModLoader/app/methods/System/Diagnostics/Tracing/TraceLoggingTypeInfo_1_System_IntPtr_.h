#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_IntPtr_ {
    IL2CPP_REGISTER_METHOD(0x028760B0, void, ctor_1, (app::TraceLoggingTypeInfo_1_System_IntPtr_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476C1F8, TraceLoggingTypeInfo_1_System_IntPtr___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02876180, void, ctor_2, (app::TraceLoggingTypeInfo_1_System_IntPtr_ * this_ptr, app::String * name, app::EventLevel__Enum level, app::EventOpcode__Enum opcode, app::EventKeywords__Enum keywords, app::EventTags__Enum tags))
    IL2CPP_REGISTER_METHOD(0x02871710, app::TraceLoggingTypeInfo_1_System_IntPtr_ *, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x02872FA0, void, WriteObjectData, (app::TraceLoggingTypeInfo_1_System_IntPtr_ * this_ptr, app::TraceLoggingDataCollector * collector, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x028762A0, app::TraceLoggingTypeInfo_1_System_IntPtr_ *, GetInstance, (app::List_1_System_Type_ * recursion_check))
    IL2CPP_REGISTER_METHOD(0x02876490, app::TraceLoggingTypeInfo_1_System_IntPtr_ *, InitInstance, ())
}