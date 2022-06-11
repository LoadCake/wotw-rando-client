#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::debugMenu::scripts::gameSpecific::menuItems::JobThreadConfigurator {
    IL2CPP_REGISTER_METHOD(0x00F2BFB0, app::JobThreadConfigurator_SaveIOThreadingMode__Enum, get_SaveIOThreadMode, ())
    IL2CPP_REGISTER_METHOD(0x00F2C050, void, set_SaveIOThreadMode, (app::JobThreadConfigurator_SaveIOThreadingMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x00F2C120, app::JobThreadConfigurator_ThreadingMode__Enum, get_CurrentThreadingMode, ())
    IL2CPP_REGISTER_METHOD(0x00F2C1C0, void, set_CurrentThreadingMode, (app::JobThreadConfigurator_ThreadingMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x00F2C290, app::ThreadPriority__Enum_1, get_RenderThreadPriority, ())
    IL2CPP_REGISTER_METHOD(0x00F2C330, void, set_RenderThreadPriority, (app::ThreadPriority__Enum_1 value))
    IL2CPP_REGISTER_METHOD(0x00F2C400, app::JobThreadConfigurator_PreloadManagerThreadingMode__Enum, get_PreloadManagerMode, ())
    IL2CPP_REGISTER_METHOD(0x00F2C4A0, void, set_PreloadManagerMode, (app::JobThreadConfigurator_PreloadManagerThreadingMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, ApplySaveIOThreadingMode, (app::JobThreadConfigurator_SaveIOThreadingMode__Enum mode))
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, ApplyPreloadManagerMode, (app::JobThreadConfigurator_PreloadManagerThreadingMode__Enum mode))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyThreadingMode, (app::JobThreadConfigurator_ThreadingMode__Enum mode))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyRenderThreadPriority, (app::ThreadPriority__Enum_1 prio))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::JobThreadConfigurator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F2C570, void, cctor, ())
}