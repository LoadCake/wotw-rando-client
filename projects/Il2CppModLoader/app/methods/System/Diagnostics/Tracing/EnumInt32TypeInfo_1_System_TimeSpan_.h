#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EnumInt32TypeInfo_1_System_TimeSpan_ {
    IL2CPP_REGISTER_METHOD(0x02F4CF50, void, WriteMetadata, (app::EnumInt32TypeInfo_1_System_TimeSpan_ * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02F4D020, void, WriteData, (app::EnumInt32TypeInfo_1_System_TimeSpan_ * this_ptr, app::TraceLoggingDataCollector * collector, app::TimeSpan * value))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object *, GetData, (app::EnumInt32TypeInfo_1_System_TimeSpan_ * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, ctor, (app::EnumInt32TypeInfo_1_System_TimeSpan_ * this_ptr))
}