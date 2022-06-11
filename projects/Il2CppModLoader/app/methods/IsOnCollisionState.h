#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::IsOnCollisionState {
    IL2CPP_REGISTER_METHOD(0x006472F0, bool, get_IsOnOrFutureOn, (app::IsOnCollisionState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00647300, bool, get_WasOnButNotIsOn, (app::IsOnCollisionState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00647320, bool, get_OnThisFrame, (app::IsOnCollisionState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00647300, bool, get_OffThisFrame, (app::IsOnCollisionState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00647330, void, Update, (app::IsOnCollisionState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00647350, void, Serialize, (app::IsOnCollisionState * this_ptr, app::Archive * ar))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::IsOnCollisionState * this_ptr))
}