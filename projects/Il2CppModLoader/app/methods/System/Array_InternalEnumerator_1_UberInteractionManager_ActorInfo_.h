#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Array_InternalEnumerator_1_UberInteractionManager_ActorInfo_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, (app::Array_InternalEnumerator_1_UberInteractionManager_ActorInfo___Boxed * this_ptr, app::Array * array))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Array_InternalEnumerator_1_UberInteractionManager_ActorInfo___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, (app::Array_InternalEnumerator_1_UberInteractionManager_ActorInfo___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00173AD0, app::UberInteractionManager_ActorInfo, get_Current, (app::Array_InternalEnumerator_1_UberInteractionManager_ActorInfo___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476D2E8, Array_InternalEnumerator_1_UberInteractionManager_ActorInfo__get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, (app::Array_InternalEnumerator_1_UberInteractionManager_ActorInfo___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00173B00, app::Object *, IEnumerator_get_Current, (app::Array_InternalEnumerator_1_UberInteractionManager_ActorInfo___Boxed * this_ptr))
}