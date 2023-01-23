#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/JumpShootShark.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::JumpShootShark {
    IL2CPP_REGISTER_METHOD(0x00E4CB20, bool, ShouldIgnoreDamage, (app::JumpShootShark * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHODINFO(0x047829C8, JumpShootShark_ShouldIgnoreDamage__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E4CB80, void, Awake, (app::JumpShootShark * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E4CC50, void, OnDestroy, (app::JumpShootShark * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E4CD20, void, HideGraphics, (app::JumpShootShark * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E4CD90, void, ShowGraphics, (app::JumpShootShark * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E4CE00, void, Start, (app::JumpShootShark * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E4E030, void, UpdateJumpingState, (app::JumpShootShark * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04701D18, JumpShootShark_UpdateJumpingState__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E4E340, void, ExitJumpingState, (app::JumpShootShark * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475F350, JumpShootShark_ExitJumpingState__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E4E350, void, ShootProjectileAtPlayer, (app::JumpShootShark * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldEmerge, (app::JumpShootShark * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E4E6B0, void, SetEmergeLocation, (app::JumpShootShark * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00E4EA90, void, ctor, (app::JumpShootShark * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E4EBE0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x00E4ED30, void, _Start_b__21_0, (app::JumpShootShark * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477B410, JumpShootShark__Start_b__21_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E4CD90, void, _Start_b__21_1, (app::JumpShootShark * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475E1C8, JumpShootShark__Start_b__21_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E4EDC0, void, _Start_b__21_2, (app::JumpShootShark * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04713AE0, JumpShootShark__Start_b__21_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E4EF90, void, _Start_b__21_3, (app::JumpShootShark * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04780E18, JumpShootShark__Start_b__21_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E4F0B0, void, _Start_b__21_4, (app::JumpShootShark * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047938A8, JumpShootShark__Start_b__21_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E4F1B0, bool, _Start_b__21_5, (app::JumpShootShark * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047621B8, JumpShootShark__Start_b__21_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E4F200, bool, _Start_b__21_6, (app::JumpShootShark * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04794818, JumpShootShark__Start_b__21_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E4F250, bool, _Start_b__21_7, (app::JumpShootShark * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04778650, JumpShootShark__Start_b__21_7__MethodInfo)
} // namespace app::classes::JumpShootShark
