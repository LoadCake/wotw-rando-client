#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::NotificationChecker___c {
    IL2CPP_REGISTER_METHOD(0x0060CD50, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NotificationChecker_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060CE90, bool, _TryReadLeaderboardData_b__14_0, (app::NotificationChecker_c * this_ptr, app::LeaderBoardEntry * o))
    IL2CPP_REGISTER_METHODINFO(0x0477B7C8, NotificationChecker_c__TryReadLeaderboardData_b__14_0__MethodInfo)
}