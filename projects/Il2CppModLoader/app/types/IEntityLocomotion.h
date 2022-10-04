#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IEntityLocomotion {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IEntityLocomotion__Class** type_info;
        inline app::IEntityLocomotion__Class* get_class() {
            return il2cpp::get_class<app::IEntityLocomotion__Class>(type_info, "", "IEntityLocomotion");
        }
    } // namespace IEntityLocomotion
} // namespace app::classes::types
