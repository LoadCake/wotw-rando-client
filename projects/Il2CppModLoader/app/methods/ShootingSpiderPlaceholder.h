#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ShootingSpiderPlaceholder {
    IL2CPP_REGISTER_METHOD(0x005BD1D0, app::LegacyEntity *, Instantiate, (app::ShootingSpiderPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005BD920, void, ctor, (app::ShootingSpiderPlaceholder * this_ptr))
}