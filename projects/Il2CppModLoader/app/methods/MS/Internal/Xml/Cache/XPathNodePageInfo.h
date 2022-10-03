#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MS::Internal::Xml::Cache::XPathNodePageInfo {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_PageNumber, (app::XPathNodePageInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_NodeCount, (app::XPathNodePageInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::XPathNode__Array*, get_NextPage, (app::XPathNodePageInfo * this_ptr))
} // namespace app::classes::MS::Internal::Xml::Cache::XPathNodePageInfo
