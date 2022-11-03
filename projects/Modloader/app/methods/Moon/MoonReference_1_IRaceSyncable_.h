#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::MoonReference_1_IRaceSyncable_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_IRaceSyncable_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04778178, MoonReference_1_IRaceSyncable__CanResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::IRaceSyncable*, Resolve, (app::MoonReference_1_IRaceSyncable_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04787438, MoonReference_1_IRaceSyncable__Resolve__MethodInfo)
} // namespace app::classes::Moon::MoonReference_1_IRaceSyncable_
