#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::GhostTimelineEventsPlugin_PendingEvent {
    IL2CPP_REGISTER_METHOD(0x00119C60, void, ctor, (app::GhostTimelineEventsPlugin_PendingEvent__Boxed * this_ptr, app::ITimelineEntity * entity, app::IContext * context, app::MoonTimelineNotifier_Action__Enum action))
}