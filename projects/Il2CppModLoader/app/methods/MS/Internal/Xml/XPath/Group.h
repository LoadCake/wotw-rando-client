#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::MS::Internal::Xml::XPath::Group {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::Group_1 * this_ptr, app::AstNode * group_node))
    IL2CPP_REGISTER_METHOD(0x008E77B0, app::AstNode_AstType__Enum, get_Type, (app::Group_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420230, app::XPathResultType__Enum, get_ReturnType, (app::Group_1 * this_ptr))
}