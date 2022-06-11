#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Data::XmlTreeGen {
    IL2CPP_REGISTER_METHOD(0x030563D0, void, ctor, (app::XmlTreeGen * this_ptr, app::SchemaFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x030565F0, void, AddExtendedProperties_1, (app::PropertyCollection * props, app::XmlElement * node))
    IL2CPP_REGISTER_METHOD(0x03056600, void, AddExtendedProperties_2, (app::PropertyCollection * props, app::XmlElement * node, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x03056B60, void, AddXdoProperties, (app::XmlTreeGen * this_ptr, app::Object * instance, app::XmlElement * root, app::XmlDocument * xd))
    IL2CPP_REGISTER_METHOD(0x03056D80, void, AddXdoProperty, (app::XmlTreeGen * this_ptr, app::PropertyDescriptor * pd, app::Object * instance, app::XmlElement * root, app::XmlDocument * xd))
    IL2CPP_REGISTER_METHOD(0x030578D0, app::String *, XmlDataTypeName, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x03058310, void, GenerateConstraintNames_1, (app::XmlTreeGen * this_ptr, app::DataTable * table, bool from_table))
    IL2CPP_REGISTER_METHOD(0x03058820, void, GenerateConstraintNames_2, (app::XmlTreeGen * this_ptr, app::ArrayList * tables))
    IL2CPP_REGISTER_METHOD(0x03058970, void, GenerateConstraintNames_3, (app::XmlTreeGen * this_ptr, app::DataSet * ds))
    IL2CPP_REGISTER_METHOD(0x03058BC0, bool, _PropsNotEmpty, (app::PropertyCollection * props))
    IL2CPP_REGISTER_METHOD(0x03058BF0, bool, HaveExtendedProperties, (app::XmlTreeGen * this_ptr, app::DataSet * ds))
    IL2CPP_REGISTER_METHOD(0x03058DF0, void, WriteSchemaRoot, (app::XmlTreeGen * this_ptr, app::XmlDocument * xd, app::XmlElement * root_schema, app::String * target_namespace))
    IL2CPP_REGISTER_METHOD(0x03058FC0, void, ValidateColumnMapping, (app::Type * column_type))
    IL2CPP_REGISTER_METHODINFO(0x04726A20, XmlTreeGen_ValidateColumnMapping__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x03059080, void, SetupAutoGenerated_1, (app::XmlTreeGen * this_ptr, app::DataSet * ds))
    IL2CPP_REGISTER_METHOD(0x030592D0, void, SetupAutoGenerated_2, (app::XmlTreeGen * this_ptr, app::ArrayList * dt))
    IL2CPP_REGISTER_METHOD(0x03059420, void, SetupAutoGenerated_3, (app::XmlTreeGen * this_ptr, app::DataTable * dt))
    IL2CPP_REGISTER_METHOD(0x03059E60, void, CreateTablesHierarchy, (app::XmlTreeGen * this_ptr, app::DataTable * dt))
    IL2CPP_REGISTER_METHOD(0x0305A170, void, CreateRelations, (app::XmlTreeGen * this_ptr, app::DataTable * dt))
    IL2CPP_REGISTER_METHOD(0x0305A440, app::DataTable__Array *, CreateToplevelTables, (app::XmlTreeGen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0305A840, void, SchemaTree_1, (app::XmlTreeGen * this_ptr, app::XmlDocument * xd, app::XmlWriter * xml_writer, app::DataSet * ds, app::DataTable * dt, bool write_hierarchy))
    IL2CPP_REGISTER_METHOD(0x0305CAE0, app::XmlElement *, SchemaTree_2, (app::XmlTreeGen * this_ptr, app::XmlDocument * xd, app::DataTable * dt))
    IL2CPP_REGISTER_METHOD(0x0305D2A0, app::XmlElement *, FillDataSetElement, (app::XmlTreeGen * this_ptr, app::XmlDocument * xd, app::DataSet * ds, app::DataTable * dt))
    IL2CPP_REGISTER_METHOD(0x0305D9E0, void, SetPath, (app::XmlTreeGen * this_ptr, app::XmlWriter * xw))
    IL2CPP_REGISTER_METHOD(0x0305DCA0, void, Save_1, (app::XmlTreeGen * this_ptr, app::DataSet * ds, app::XmlWriter * xw))
    IL2CPP_REGISTER_METHOD(0x0305DCD0, void, Save_2, (app::XmlTreeGen * this_ptr, app::DataTable * dt, app::XmlWriter * xw))
    IL2CPP_REGISTER_METHOD(0x0305DE80, void, Save_3, (app::XmlTreeGen * this_ptr, app::DataSet * ds, app::DataTable * dt, app::XmlWriter * xw))
    IL2CPP_REGISTER_METHOD(0x0305DEA0, void, Save_4, (app::XmlTreeGen * this_ptr, app::DataSet * ds, app::DataTable * dt, app::XmlWriter * xw, bool write_hierarchy))
    IL2CPP_REGISTER_METHOD(0x0305DED0, void, Save_5, (app::XmlTreeGen * this_ptr, app::DataSet * ds, app::DataTable * dt, app::XmlWriter * xw, bool write_hierarchy, app::Converter_2_Type_String_ * multiple_target_converter))
    IL2CPP_REGISTER_METHOD(0x0305E120, app::XmlElement *, HandleRelation, (app::XmlTreeGen * this_ptr, app::DataRelation * rel, app::XmlDocument * dc))
    IL2CPP_REGISTER_METHOD(0x0305EC50, app::XmlElement *, FindSimpleType, (app::XmlElement * schema, app::String * name))
    IL2CPP_REGISTER_METHOD(0x0305EE10, app::XmlElement *, GetSchema, (app::XmlTreeGen * this_ptr, app::String * namespace_u_r_i))
    IL2CPP_REGISTER_METHOD(0x0305F0E0, void, HandleColumnType, (app::XmlTreeGen * this_ptr, app::DataColumn * col, app::XmlDocument * dc, app::XmlElement * root, app::XmlElement * schema))
    IL2CPP_REGISTER_METHOD(0x0305F600, void, AddColumnProperties, (app::XmlTreeGen * this_ptr, app::DataColumn * col, app::XmlElement * root))
    IL2CPP_REGISTER_METHOD(0x0305FCB0, app::String *, FindTargetNamespace, (app::XmlTreeGen * this_ptr, app::DataTable * table))
    IL2CPP_REGISTER_METHOD(0x0305FE20, app::XmlElement *, HandleColumn, (app::XmlTreeGen * this_ptr, app::DataColumn * col, app::XmlDocument * dc, app::XmlElement * schema, bool f_write_ordinal))
    IL2CPP_REGISTER_METHOD(0x030608C0, app::String *, TranslateAcceptRejectRule, (app::AcceptRejectRule__Enum rule))
    IL2CPP_REGISTER_METHOD(0x03060960, app::String *, TranslateRule, (app::Rule__Enum rule))
    IL2CPP_REGISTER_METHOD(0x03060A20, void, AppendChildWithoutRef, (app::XmlTreeGen * this_ptr, app::XmlElement * node, app::String * namespace, app::XmlElement * el, app::String * ref_string))
    IL2CPP_REGISTER_METHOD(0x03060B20, app::XmlElement *, FindTypeNode, (app::XmlTreeGen * this_ptr, app::XmlElement * node, app::String * str_type))
    IL2CPP_REGISTER_METHOD(0x03060D40, app::XmlElement *, HandleTable_1, (app::XmlTreeGen * this_ptr, app::DataTable * table, app::XmlDocument * dc, app::XmlElement * schema))
    IL2CPP_REGISTER_METHOD(0x03060D60, bool, HasMixedColumns, (app::XmlTreeGen * this_ptr, app::DataTable * table))
    IL2CPP_REGISTER_METHOD(0x03061030, bool, AutoGenerated_1, (app::DataColumn * col))
    IL2CPP_REGISTER_METHOD(0x030614A0, bool, AutoGenerated_2, (app::DataRelation * rel))
    IL2CPP_REGISTER_METHOD(0x030616C0, bool, AutoGenerated_3, (app::UniqueConstraint * unique))
    IL2CPP_REGISTER_METHOD(0x030618D0, bool, AutoGenerated_4, (app::XmlTreeGen * this_ptr, app::ForeignKeyConstraint * fk))
    IL2CPP_REGISTER_METHOD(0x030618E0, bool, AutoGenerated_5, (app::ForeignKeyConstraint * fk, bool check_relation))
    IL2CPP_REGISTER_METHOD(0x03061A90, bool, IsAutoGenerated, (app::XmlTreeGen * this_ptr, app::Object * o))
    IL2CPP_REGISTER_METHOD(0x03061AD0, app::XmlElement *, HandleTable_2, (app::XmlTreeGen * this_ptr, app::DataTable * table, app::XmlDocument * dc, app::XmlElement * schema, bool gen_nested))
    IL2CPP_REGISTER_METHOD(0x03064820, void, SetMSDataAttribute, (app::XmlTreeGen * this_ptr, app::XmlElement * root, app::Type * type))
    IL2CPP_REGISTER_METHODINFO(0x047376C8, XmlTreeGen_SetMSDataAttribute__MethodInfo)
}