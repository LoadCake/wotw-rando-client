#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::ComponentModel::CultureInfoConverter_CultureInfoMapper {
    IL2CPP_REGISTER_METHOD(0x01FDB8C0, app::String *, GetCultureInfoName, (app::String * culture_info_display_name))
    IL2CPP_REGISTER_METHOD(0x01FDB9E0, void, InitializeCultureInfoMap, ())
}