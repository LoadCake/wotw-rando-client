#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FacetsChecker_FacetsCompiler__Boxed.h>
#include <Modloader/app/structs/DatatypeImplementation.h>
#include <Modloader/app/structs/RestrictionFacets.h>
#include <Modloader/app/structs/XmlSchemaFacet.h>
#include <Modloader/app/structs/XmlSchemaPatternFacet.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XmlSchemaDatatype.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/RestrictionFlags__Enum.h>

namespace app::classes::System::Xml::Schema::FacetsChecker_FacetsCompiler {
    IL2CPP_REGISTER_METHOD(0x001E6F60, void, ctor, (app::FacetsChecker_FacetsCompiler__Boxed * this_ptr, app::DatatypeImplementation* base_datatype, app::RestrictionFacets* restriction))
    IL2CPP_REGISTER_METHOD(0x001E6F70, void, CompileLengthFacet, (app::FacetsChecker_FacetsCompiler__Boxed * this_ptr, app::XmlSchemaFacet* facet))
    IL2CPP_REGISTER_METHODINFO(0x0472F820, FacetsChecker_FacetsCompiler_CompileLengthFacet__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E6F80, void, CompileMinLengthFacet, (app::FacetsChecker_FacetsCompiler__Boxed * this_ptr, app::XmlSchemaFacet* facet))
    IL2CPP_REGISTER_METHODINFO(0x047085B8, FacetsChecker_FacetsCompiler_CompileMinLengthFacet__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E6F90, void, CompileMaxLengthFacet, (app::FacetsChecker_FacetsCompiler__Boxed * this_ptr, app::XmlSchemaFacet* facet))
    IL2CPP_REGISTER_METHODINFO(0x0477E2E8, FacetsChecker_FacetsCompiler_CompileMaxLengthFacet__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E6FA0, void, CompilePatternFacet, (app::FacetsChecker_FacetsCompiler__Boxed * this_ptr, app::XmlSchemaPatternFacet* facet))
    IL2CPP_REGISTER_METHOD(0x001E6FB0, void, CompileEnumerationFacet, (app::FacetsChecker_FacetsCompiler__Boxed * this_ptr, app::XmlSchemaFacet* facet, app::IXmlNamespaceResolver* nsmgr, app::XmlNameTable* name_table))
    IL2CPP_REGISTER_METHOD(0x001E6FC0, void, CompileWhitespaceFacet, (app::FacetsChecker_FacetsCompiler__Boxed * this_ptr, app::XmlSchemaFacet* facet))
    IL2CPP_REGISTER_METHODINFO(0x04751E00, FacetsChecker_FacetsCompiler_CompileWhitespaceFacet__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E6FD0, void, CompileMaxInclusiveFacet, (app::FacetsChecker_FacetsCompiler__Boxed * this_ptr, app::XmlSchemaFacet* facet))
    IL2CPP_REGISTER_METHODINFO(0x04768328, FacetsChecker_FacetsCompiler_CompileMaxInclusiveFacet__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E6FE0, void, CompileMaxExclusiveFacet, (app::FacetsChecker_FacetsCompiler__Boxed * this_ptr, app::XmlSchemaFacet* facet))
    IL2CPP_REGISTER_METHODINFO(0x0472BDF8, FacetsChecker_FacetsCompiler_CompileMaxExclusiveFacet__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E6FF0, void, CompileMinInclusiveFacet, (app::FacetsChecker_FacetsCompiler__Boxed * this_ptr, app::XmlSchemaFacet* facet))
    IL2CPP_REGISTER_METHODINFO(0x0470CAF0, FacetsChecker_FacetsCompiler_CompileMinInclusiveFacet__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E7000, void, CompileMinExclusiveFacet, (app::FacetsChecker_FacetsCompiler__Boxed * this_ptr, app::XmlSchemaFacet* facet))
    IL2CPP_REGISTER_METHODINFO(0x04703210, FacetsChecker_FacetsCompiler_CompileMinExclusiveFacet__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E7010, void, CompileTotalDigitsFacet, (app::FacetsChecker_FacetsCompiler__Boxed * this_ptr, app::XmlSchemaFacet* facet))
    IL2CPP_REGISTER_METHODINFO(0x047201C8, FacetsChecker_FacetsCompiler_CompileTotalDigitsFacet__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E7020, void, CompileFractionDigitsFacet, (app::FacetsChecker_FacetsCompiler__Boxed * this_ptr, app::XmlSchemaFacet* facet))
    IL2CPP_REGISTER_METHODINFO(0x04736A88, FacetsChecker_FacetsCompiler_CompileFractionDigitsFacet__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E7030, void, FinishFacetCompile, (app::FacetsChecker_FacetsCompiler__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04760090, FacetsChecker_FacetsCompiler_FinishFacetCompile__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E7040, void, CheckValue, (app::FacetsChecker_FacetsCompiler__Boxed * this_ptr, app::Object* value, app::XmlSchemaFacet* facet))
    IL2CPP_REGISTER_METHODINFO(0x04734728, FacetsChecker_FacetsCompiler_CheckValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E7050, void, CompileFacetCombinations, (app::FacetsChecker_FacetsCompiler__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473F470, FacetsChecker_FacetsCompiler_CompileFacetCombinations__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E7060, void, CopyFacetsFromBaseType, (app::FacetsChecker_FacetsCompiler__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E7070, app::Object*, ParseFacetValue, (app::FacetsChecker_FacetsCompiler__Boxed * this_ptr, app::XmlSchemaDatatype* datatype, app::XmlSchemaFacet* facet, app::String* code, app::IXmlNamespaceResolver* nsmgr, app::XmlNameTable* name_table))
    IL2CPP_REGISTER_METHODINFO(0x04710428, FacetsChecker_FacetsCompiler_ParseFacetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0236E690, app::String*, Preprocess, (app::String * pattern))
    IL2CPP_REGISTER_METHOD(0x001E7080, void, CheckProhibitedFlag, (app::FacetsChecker_FacetsCompiler__Boxed * this_ptr, app::XmlSchemaFacet* facet, app::RestrictionFlags__Enum flag, app::String* error_code))
    IL2CPP_REGISTER_METHODINFO(0x047160F0, FacetsChecker_FacetsCompiler_CheckProhibitedFlag__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E7090, void, CheckDupFlag, (app::FacetsChecker_FacetsCompiler__Boxed * this_ptr, app::XmlSchemaFacet* facet, app::RestrictionFlags__Enum flag, app::String* error_code))
    IL2CPP_REGISTER_METHODINFO(0x0472C5C0, FacetsChecker_FacetsCompiler_CheckDupFlag__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E70A0, void, SetFlag_1, (app::FacetsChecker_FacetsCompiler__Boxed * this_ptr, app::XmlSchemaFacet* facet, app::RestrictionFlags__Enum flag))
    IL2CPP_REGISTER_METHOD(0x001E7110, void, SetFlag_2, (app::FacetsChecker_FacetsCompiler__Boxed * this_ptr, app::RestrictionFlags__Enum flag))
    IL2CPP_REGISTER_METHOD(0x0236EC50, void, cctor, ())
} // namespace app::classes::System::Xml::Schema::FacetsChecker_FacetsCompiler
