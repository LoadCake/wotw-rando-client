#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace _ConstructorInfo {
        namespace {
            app::_ConstructorInfo__Class* type_info_ref = nullptr;
        }
        app::_ConstructorInfo__Class** type_info = &type_info_ref;
        inline app::_ConstructorInfo__Class* get_class() {
            return il2cpp::get_class<app::_ConstructorInfo__Class>(type_info, "System.Runtime.InteropServices", "_ConstructorInfo");
        }
    } // namespace _ConstructorInfo
} // namespace app::classes::types
