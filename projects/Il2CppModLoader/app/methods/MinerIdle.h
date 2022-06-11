#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::MinerIdle {
    IL2CPP_REGISTER_METHOD(0x0144BA50, void, OnInitializeTask, (app::MinerIdle * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0144BB40, void, OnEnterTask, (app::MinerIdle * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecuteTask, (app::MinerIdle * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0144BE70, void, OnExitTask, (app::MinerIdle * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (app::MinerIdle * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (app::MinerIdle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0144BF90, void, PlayTimeline, (app::MinerIdle * this_ptr, app::MoonTimeline * timeline))
    IL2CPP_REGISTER_METHOD(0x0144C1D0, void, ChangeState, (app::MinerIdle * this_ptr, app::MinerIdle_IdleStates__Enum state))
    IL2CPP_REGISTER_METHODINFO(0x04793258, MinerIdle_ChangeState__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0144C310, app::MinerIdle_IdleStates__Enum, PickNewState, (app::MinerIdle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0144C4E0, void, OnTimelineFinished, (app::MinerIdle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04733340, MinerIdle_OnTimelineFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0144C540, void, ctor, (app::MinerIdle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0144C560, void, _OnEnterTask_b__11_0, (app::MinerIdle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047533C0, MinerIdle__OnEnterTask_b__11_0__MethodInfo)
}