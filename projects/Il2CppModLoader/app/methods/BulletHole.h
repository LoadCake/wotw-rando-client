#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::BulletHole {
    IL2CPP_REGISTER_METHOD(0x021FB080, void, Start, (app::BulletHole * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021FB1D0, app::IEnumerator *, DestroyDelayed, (app::BulletHole * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021FB320, void, ctor, (app::BulletHole * this_ptr))
}