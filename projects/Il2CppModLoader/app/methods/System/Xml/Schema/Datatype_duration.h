#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Xml::Schema::Datatype_duration {
    IL2CPP_REGISTER_METHOD(0x02356E60, app::XmlValueConverter *, CreateValueConverter, (app::Datatype_duration * this_ptr, app::XmlSchemaType * schema_type))
    IL2CPP_REGISTER_METHOD(0x0235C760, app::FacetsChecker *, get_FacetsChecker, (app::Datatype_duration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EC3F0, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_duration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235C800, app::Type *, get_ValueType, (app::Datatype_duration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235C8A0, app::Type *, get_ListValueType, (app::Datatype_duration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, (app::Datatype_duration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235AAB0, app::RestrictionFlags__Enum, get_ValidRestrictionFlags, (app::Datatype_duration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235C940, int32_t, Compare, (app::Datatype_duration * this_ptr, app::Object * value1, app::Object * value2))
    IL2CPP_REGISTER_METHOD(0x0235CA00, app::Exception *, TryParseValue, (app::Datatype_duration * this_ptr, app::String * s, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * nsmgr, app::Object * * typed_value))
    IL2CPP_REGISTER_METHOD(0x0235CD80, void, ctor, (app::Datatype_duration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235CE20, void, cctor, ())
}