#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_DateTime_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02B377D0, void, ctor, (app::ClassPropertyWriter_2_System_DateTime_System_Int32_ * this_ptr, app::PropertyAnalysis * property))
    IL2CPP_REGISTER_METHOD(0x02B379C0, void, Write, (app::ClassPropertyWriter_2_System_DateTime_System_Int32_ * this_ptr, app::TraceLoggingDataCollector * collector, app::DateTime * container))
    IL2CPP_REGISTER_METHOD(0x02B37A40, app::Object *, GetData, (app::ClassPropertyWriter_2_System_DateTime_System_Int32_ * this_ptr, app::DateTime container))
}