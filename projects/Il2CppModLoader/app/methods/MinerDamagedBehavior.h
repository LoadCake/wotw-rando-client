#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::MinerDamagedBehavior {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::MinerDamagedBehavior * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::MinerDamagedBehavior * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MinerDamagedBehavior * this_ptr))
}