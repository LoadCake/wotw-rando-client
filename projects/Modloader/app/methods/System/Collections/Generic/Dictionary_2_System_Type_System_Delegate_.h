#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_Type_System_Delegate_.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Delegate.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_System_Delegate_ {
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Type_System_Delegate_ * this_ptr, app::Type* key, app::Delegate* value))
    IL2CPP_REGISTER_METHODINFO(0x04702928, Dictionary_2_System_Type_System_Delegate__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Type_System_Delegate_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472FF18, Dictionary_2_System_Type_System_Delegate___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Type_System_Delegate_ * this_ptr, app::Type* key, app::Delegate** value))
    IL2CPP_REGISTER_METHODINFO(0x0472D448, Dictionary_2_System_Type_System_Delegate__TryGetValue__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_System_Delegate_
