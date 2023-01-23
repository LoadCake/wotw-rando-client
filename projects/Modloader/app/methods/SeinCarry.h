#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinCarry.h>
#include <Modloader/app/structs/CharacterLeftRightMovement.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/CharacterSpriteMirror.h>
#include <Modloader/app/structs/ICarryable.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>

namespace app::classes::SeinCarry {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA3470, bool, get_IsStatePerforming, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06F0, app::CharacterLeftRightMovement*, get_LeftRightMovement, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement*, get_PlatformMovement, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D0720, app::CharacterSpriteMirror*, get_SpriteMirror, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFE20, bool, get_LockDroppingObject, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C75380, void, set_LockDroppingObject, (app::SeinCarry * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x005B0220, app::ICarryable*, get_CurrentCarryable, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA34D0, void, OnSetReferenceToSein, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA35B0, void, OnAwake, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA3F50, void, ExitInactiveState, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04772E38, SeinCarry_ExitInactiveState__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DA3F60, void, EnterInactiveState, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476AEB8, SeinCarry_EnterInactiveState__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DA3FB0, void, BeginButtonOverride, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA4050, void, EndButtonOverride, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA40F0, void, Start, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA44E0, void, UpdateCharacterState, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA4550, void, Serialize, (app::SeinCarry * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x00DA45E0, void, OnRestoreCheckpoint, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04708B28, SeinCarry_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DA4610, void, OnDestroy, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA4A00, void, OnPickup, (app::SeinCarry * this_ptr, app::ICarryable* carryable))
    IL2CPP_REGISTER_METHOD(0x00DA4E40, void, OnSetToCarryMode, (app::SeinCarry * this_ptr, app::ICarryable* carryable))
    IL2CPP_REGISTER_METHOD(0x00DA4E80, app::IEnumerator*, DelayedPickupSound, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA4FD0, void, OnPickupAnimationFinished, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474B6C8, SeinCarry_OnPickupAnimationFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DA51C0, void, OnDropAnimationFinished, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04706508, SeinCarry_OnDropAnimationFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DA53B0, void, OnDrop, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA5630, void, OnSetToDropMode, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA5670, void, UpdateCarryState, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047789A0, SeinCarry_UpdateCarryState__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DA5A70, void, UpdateInactiveState, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478AAE8, SeinCarry_UpdateInactiveState__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DA5E40, void, OnModifyHorizontalPlatformMovementSettings, (app::SeinCarry * this_ptr, app::HorizontalPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHODINFO(0x04757368, SeinCarry_OnModifyHorizontalPlatformMovementSettings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DA5F40, void, HandleFootsteps, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA61F0, void, UpdateAnimations, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA6810, void, OnJump, (app::SeinCarry * this_ptr, float strength))
    IL2CPP_REGISTER_METHODINFO(0x04779B40, SeinCarry_OnJump__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DA6BF0, bool, get_ShouldRunMovingAnimationPlay, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA6C00, bool, get_ShouldRunIdleAnimationPlay, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA6C10, bool, get_ShouldFallMovingAnimationPlay, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA6C20, bool, get_ShouldFallIdleAnimationPlay, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA6C30, bool, get_IsCarrying, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA6C70, bool, get_IsPickingUp, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA6CB0, bool, ShouldRunMovingAnimationKeepPlaying, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04749360, SeinCarry_ShouldRunMovingAnimationKeepPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DA6EA0, bool, ShouldRunIdleAnimationKeepPlaying, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478A7E8, SeinCarry_ShouldRunIdleAnimationKeepPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DA7030, bool, ShouldJumpIdleAnimationKeepPlaying, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047884D0, SeinCarry_ShouldJumpIdleAnimationKeepPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DA71C0, bool, ShouldJumpMovingAnimationKeepPlaying, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04711988, SeinCarry_ShouldJumpMovingAnimationKeepPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DA7350, bool, ShouldFallMovingAnimationKeepPlaying, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04785890, SeinCarry_ShouldFallMovingAnimationKeepPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DA7520, bool, ShouldFallIdleAnimationKeepPlaying, (app::SeinCarry * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475ED10, SeinCarry_ShouldFallIdleAnimationKeepPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DA76F0, void, ctor, (app::SeinCarry * this_ptr))
} // namespace app::classes::SeinCarry
