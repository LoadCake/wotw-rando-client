#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_Decimal_System_Int64_ {
    IL2CPP_REGISTER_METHOD(0x02B386D0, void, ctor, (app::ClassPropertyWriter_2_System_Decimal_System_Int64_ * this_ptr, app::PropertyAnalysis * property))
    IL2CPP_REGISTER_METHOD(0x02B37490, void, Write, (app::ClassPropertyWriter_2_System_Decimal_System_Int64_ * this_ptr, app::TraceLoggingDataCollector * collector, app::Decimal * container))
    IL2CPP_REGISTER_METHOD(0x02B37520, app::Object *, GetData, (app::ClassPropertyWriter_2_System_Decimal_System_Int64_ * this_ptr, app::Decimal container))
}