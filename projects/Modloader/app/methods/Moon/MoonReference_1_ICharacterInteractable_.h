#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonReference_1_ICharacterInteractable_.h>
#include <Modloader/app/structs/ICharacterInteractable.h>
#include <Modloader/app/structs/IMoonResolverContext.h>

namespace app::classes::Moon::MoonReference_1_ICharacterInteractable_ {
    IL2CPP_REGISTER_METHOD(0x027214E0, bool, TryResolve, (app::MoonReference_1_ICharacterInteractable_ * this_ptr, app::ICharacterInteractable** value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04756B70, MoonReference_1_ICharacterInteractable__TryResolve__MethodInfo)
} // namespace app::classes::Moon::MoonReference_1_ICharacterInteractable_
