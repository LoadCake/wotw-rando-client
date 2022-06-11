#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Xml::Schema::Datatype_unsignedLong {
    IL2CPP_REGISTER_METHOD(0x023628E0, app::FacetsChecker *, get_FacetsChecker, (app::Datatype_unsignedLong * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3E530, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_unsignedLong * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02362980, int32_t, Compare, (app::Datatype_unsignedLong * this_ptr, app::Object * value1, app::Object * value2))
    IL2CPP_REGISTER_METHOD(0x02362A40, app::Type *, get_ValueType, (app::Datatype_unsignedLong * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02362AE0, app::Type *, get_ListValueType, (app::Datatype_unsignedLong * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02362B80, app::Exception *, TryParseValue, (app::Datatype_unsignedLong * this_ptr, app::String * s, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * nsmgr, app::Object * * typed_value))
    IL2CPP_REGISTER_METHOD(0x02362D80, void, ctor, (app::Datatype_unsignedLong * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02362E20, void, cctor, ())
}