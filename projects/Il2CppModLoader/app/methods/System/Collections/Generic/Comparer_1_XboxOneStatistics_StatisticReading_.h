#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Comparer_1_XboxOneStatistics_StatisticReading_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_XboxOneStatistics_StatisticReading_ *, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x028DBEB0, app::Comparer_1_XboxOneStatistics_StatisticReading_ *, Create, (app::Comparison_1_XboxOneStatistics_StatisticReading_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x04728F30, Comparer_1_XboxOneStatistics_StatisticReading__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028DC0B0, app::Comparer_1_XboxOneStatistics_StatisticReading_ *, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02808F10, int32_t, IComparer_Compare, (app::Comparer_1_XboxOneStatistics_StatisticReading_ * this_ptr, app::Object * x, app::Object * y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_XboxOneStatistics_StatisticReading_ * this_ptr))
}