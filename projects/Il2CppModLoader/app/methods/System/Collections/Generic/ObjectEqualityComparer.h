#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Collections::Generic::ObjectEqualityComparer {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ObjectEqualityComparer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02022440, int32_t, IEqualityComparer_GetHashCode, (app::ObjectEqualityComparer * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x02022950, bool, IEqualityComparer_Equals, (app::ObjectEqualityComparer * this_ptr, app::Object * x, app::Object * y))
    IL2CPP_REGISTER_METHOD(0x02022990, void, cctor, ())
}