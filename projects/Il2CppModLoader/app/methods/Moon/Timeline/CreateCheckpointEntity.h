#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::Timeline::CreateCheckpointEntity {
    IL2CPP_REGISTER_METHOD(0x00763BB0, void, OnStartPlayback, (app::CreateCheckpointEntity * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00763BC0, void, ctor, (app::CreateCheckpointEntity * this_ptr))
}