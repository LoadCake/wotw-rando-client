#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::SystemIntegration::SystemIntegrationMainThreadRunner {
    IL2CPP_REGISTER_METHOD(0x00CDA850, void, Update, (app::SystemIntegrationMainThreadRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CDAAA0, void, Enqueue, (app::Action * action))
    IL2CPP_REGISTER_METHOD(0x00CDABC0, void, DoEnqueue, (app::SystemIntegrationMainThreadRunner * this_ptr, app::Action * action))
    IL2CPP_REGISTER_METHOD(0x00CDAC60, void, EnsureInitialized, ())
    IL2CPP_REGISTER_METHOD(0x00CDAE70, void, Add, (app::IUpdateable * updateable))
    IL2CPP_REGISTER_METHOD(0x00CDAF20, void, ctor, (app::SystemIntegrationMainThreadRunner * this_ptr))
}