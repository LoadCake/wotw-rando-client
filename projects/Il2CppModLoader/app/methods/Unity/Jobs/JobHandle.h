#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Unity::Jobs::JobHandle {
    IL2CPP_REGISTER_METHOD(0x001EAEC0, void, Complete, (app::JobHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EAED0, bool, get_IsCompleted, (app::JobHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024193E0, void, ScheduleBatchedJobs, ())
    IL2CPP_REGISTER_METHOD(0x02419430, void, ScheduleBatchedJobsAndComplete, (app::JobHandle * job))
    IL2CPP_REGISTER_METHOD(0x02419480, bool, ScheduleBatchedJobsAndIsCompleted, (app::JobHandle * job))
}