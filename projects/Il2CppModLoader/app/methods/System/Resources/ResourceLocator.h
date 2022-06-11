#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Resources::ResourceLocator {
    IL2CPP_REGISTER_METHOD(0x0018ED30, void, ctor, (app::ResourceLocator__Boxed * this_ptr, int32_t data_pos, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x0010A860, int32_t, get_DataPosition, (app::ResourceLocator__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Object *, get_Value, (app::ResourceLocator__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, set_Value, (app::ResourceLocator__Boxed * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x01A84740, bool, CanCache, (app::ResourceTypeCode__Enum value))
}