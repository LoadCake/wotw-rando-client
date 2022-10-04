#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ILayoutSelfController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ILayoutSelfController__Class** type_info;
        inline app::ILayoutSelfController__Class* get_class() {
            return il2cpp::get_class<app::ILayoutSelfController__Class>(type_info, "UnityEngine.UI", "ILayoutSelfController");
        }
    } // namespace ILayoutSelfController
} // namespace app::classes::types
