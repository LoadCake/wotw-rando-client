#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Xml::Schema::UnionFacetsChecker {
    IL2CPP_REGISTER_METHOD(0x01ABD9A0, app::Exception *, CheckValueFacets, (app::UnionFacetsChecker * this_ptr, app::Object * value, app::XmlSchemaDatatype * datatype))
    IL2CPP_REGISTER_METHOD(0x016CD840, bool, MatchEnumeration, (app::UnionFacetsChecker * this_ptr, app::Object * value, app::ArrayList * enumeration, app::XmlSchemaDatatype * datatype))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UnionFacetsChecker * this_ptr))
}