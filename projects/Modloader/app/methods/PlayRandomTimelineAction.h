#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PlayRandomTimelineAction {
    IL2CPP_REGISTER_METHOD(0x0117AE50, void, Perform, (app::PlayRandomTimelineAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::PlayRandomTimelineAction * this_ptr))
} // namespace app::classes::PlayRandomTimelineAction
