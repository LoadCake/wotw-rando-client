#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_Projectile_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Projectile_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04753B08, List_1_Projectile__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Projectile_, GetEnumerator, (app::List_1_Projectile_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474B210, List_1_Projectile__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Projectile_ * this_ptr, app::Projectile* item))
    IL2CPP_REGISTER_METHODINFO(0x047683F8, List_1_Projectile__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Projectile_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047886A8, List_1_Projectile__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Projectile_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047142E0, List_1_Projectile___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Projectile*, get_Item, (app::List_1_Projectile_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04788D20, List_1_Projectile__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_Projectile_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04735C48, List_1_Projectile__RemoveAt__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Projectile_
