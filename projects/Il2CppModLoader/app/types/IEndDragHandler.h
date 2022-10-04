#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IEndDragHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IEndDragHandler__Class** type_info;
        inline app::IEndDragHandler__Class* get_class() {
            return il2cpp::get_class<app::IEndDragHandler__Class>(type_info, "UnityEngine.EventSystems", "IEndDragHandler");
        }
    } // namespace IEndDragHandler
} // namespace app::classes::types
