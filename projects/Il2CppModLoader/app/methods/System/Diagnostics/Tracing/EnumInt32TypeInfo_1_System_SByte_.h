#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EnumInt32TypeInfo_1_System_SByte_ {
    IL2CPP_REGISTER_METHOD(0x02F4CBF0, void, WriteMetadata, (app::EnumInt32TypeInfo_1_System_SByte_ * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02F4CCC0, void, WriteData, (app::EnumInt32TypeInfo_1_System_SByte_ * this_ptr, app::TraceLoggingDataCollector * collector, int8_t * value))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object *, GetData, (app::EnumInt32TypeInfo_1_System_SByte_ * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, ctor, (app::EnumInt32TypeInfo_1_System_SByte_ * this_ptr))
}