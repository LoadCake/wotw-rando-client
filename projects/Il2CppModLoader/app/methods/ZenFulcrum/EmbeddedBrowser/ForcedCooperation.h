#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::ForcedCooperation {
    IL2CPP_REGISTER_METHOD(0x01DDE2E0, void, Comply, (app::ForcedCooperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DDE430, app::IEnumerator *, _Comply, (app::ForcedCooperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ForcedCooperation * this_ptr))
}