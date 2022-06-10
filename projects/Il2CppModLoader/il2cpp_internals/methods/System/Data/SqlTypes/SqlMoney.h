#include <interception_macros.h>

namespace app::methods::System::Data::SqlTypes::SqlMoney {
    IL2CPP_REGISTER_METHOD(0x001E3B70, void, __ctor_1, (app::SqlMoney__Boxed * this_ptr, bool f_null));
    IL2CPP_REGISTER_METHOD(0x001E4F10, void, __ctor_2, (app::SqlMoney__Boxed * this_ptr, int64_t value, int32_t ignored));
    IL2CPP_REGISTER_METHOD(0x001E54A0, void, __ctor_3, (app::SqlMoney__Boxed * this_ptr, int32_t value));
    IL2CPP_REGISTER_METHOD(0x001E54B0, void, __ctor_4, (app::SqlMoney__Boxed * this_ptr, int64_t value));
    IL2CPP_REGISTER_METHODINFO(0x04720638, SqlMoney__ctor_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x001E54C0, void, __ctor_5, (app::SqlMoney__Boxed * this_ptr, app::Decimal value));
    IL2CPP_REGISTER_METHODINFO(0x0471C150, SqlMoney__ctor_4__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_IsNull, (app::SqlMoney__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001E54E0, app::Decimal, get_Value, (app::SqlMoney__Boxed * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04735A90, SqlMoney_get_Value__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x001E5510, app::Decimal, ToDecimal, (app::SqlMoney__Boxed * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0475DBB8, SqlMoney_ToDecimal__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x001E5540, double, ToDouble, (app::SqlMoney__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022B6760, app::SqlMoney, op_Implicit_1, (app::Decimal x));
    IL2CPP_REGISTER_METHOD(0x022B6790, app::SqlMoney, op_Implicit_2, (int64_t x));
    IL2CPP_REGISTER_METHOD(0x001E5550, app::String *, ToString, (app::SqlMoney__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022B6800, app::SqlMoney, op_UnaryNegation, (app::SqlMoney x));
    IL2CPP_REGISTER_METHODINFO(0x0470ABB8, SqlMoney_op_UnaryNegation__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022B6970, app::SqlMoney, op_Addition, (app::SqlMoney x, app::SqlMoney y));
    IL2CPP_REGISTER_METHODINFO(0x0473CDB0, SqlMoney_op_Addition__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022B6B10, app::SqlMoney, op_Subtraction, (app::SqlMoney x, app::SqlMoney y));
    IL2CPP_REGISTER_METHODINFO(0x04779B28, SqlMoney_op_Subtraction__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022B6CA0, app::SqlMoney, op_Multiply, (app::SqlMoney x, app::SqlMoney y));
    IL2CPP_REGISTER_METHOD(0x022B6ED0, app::SqlMoney, op_Division, (app::SqlMoney x, app::SqlMoney y));
    IL2CPP_REGISTER_METHOD(0x022B70D0, app::SqlMoney, op_Implicit_3, (app::SqlByte x));
    IL2CPP_REGISTER_METHOD(0x022B7210, app::SqlMoney, op_Implicit_4, (app::SqlInt16 x));
    IL2CPP_REGISTER_METHOD(0x022B7350, app::SqlMoney, op_Implicit_5, (app::SqlInt32 x));
    IL2CPP_REGISTER_METHOD(0x022B7490, app::SqlMoney, op_Implicit_6, (app::SqlInt64 x));
    IL2CPP_REGISTER_METHOD(0x022B7590, app::SqlMoney, op_Explicit, (app::SqlDecimal x));
    IL2CPP_REGISTER_METHOD(0x022B76A0, app::SqlBoolean, op_Equality, (app::SqlMoney x, app::SqlMoney y));
    IL2CPP_REGISTER_METHOD(0x022B7790, app::SqlBoolean, op_LessThan, (app::SqlMoney x, app::SqlMoney y));
    IL2CPP_REGISTER_METHOD(0x022B7880, app::SqlBoolean, op_GreaterThan, (app::SqlMoney x, app::SqlMoney y));
    IL2CPP_REGISTER_METHOD(0x022B7970, app::SqlBoolean, LessThan, (app::SqlMoney x, app::SqlMoney y));
    IL2CPP_REGISTER_METHOD(0x022B7A30, app::SqlBoolean, GreaterThan, (app::SqlMoney x, app::SqlMoney y));
    IL2CPP_REGISTER_METHOD(0x001E5620, app::SqlDouble, ToSqlDouble, (app::SqlMoney__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001E5650, app::SqlDecimal, ToSqlDecimal, (app::SqlMoney__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001E5680, int32_t, CompareTo_1, (app::SqlMoney__Boxed * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x04723158, SqlMoney_CompareTo__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x001E57D0, int32_t, CompareTo_2, (app::SqlMoney__Boxed * this_ptr, app::SqlMoney value));
    IL2CPP_REGISTER_METHOD(0x001E57F0, bool, Equals, (app::SqlMoney__Boxed * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x001E5800, int32_t, GetHashCode, (app::SqlMoney__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0013BB70, app::XmlSchema *, IXmlSerializable_GetSchema, (app::SqlMoney__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001E5820, void, IXmlSerializable_ReadXml, (app::SqlMoney__Boxed * this_ptr, app::XmlReader * reader));
    IL2CPP_REGISTER_METHOD(0x001E59B0, void, IXmlSerializable_WriteXml, (app::SqlMoney__Boxed * this_ptr, app::XmlWriter * writer));
    IL2CPP_REGISTER_METHOD(0x022B8100, app::XmlQualifiedName *, GetXsdType, (app::XmlSchemaSet * schema_set));
    IL2CPP_REGISTER_METHOD(0x022B8250, void, __cctor, ());
    app::SqlMoney operator - (app::SqlMoney x) {
        return op_UnaryNegation(x);
    }
    app::SqlMoney operator + (app::SqlMoney x, app::SqlMoney y) {
        return op_Addition(x, y);
    }
    app::SqlMoney operator - (app::SqlMoney x, app::SqlMoney y) {
        return op_Subtraction(x, y);
    }
    app::SqlMoney operator * (app::SqlMoney x, app::SqlMoney y) {
        return op_Multiply(x, y);
    }
    app::SqlMoney operator / (app::SqlMoney x, app::SqlMoney y) {
        return op_Division(x, y);
    }
    app::SqlBoolean operator == (app::SqlMoney x, app::SqlMoney y) {
        return op_Equality(x, y);
    }
    app::SqlBoolean operator < (app::SqlMoney x, app::SqlMoney y) {
        return op_LessThan(x, y);
    }
    app::SqlBoolean operator > (app::SqlMoney x, app::SqlMoney y) {
        return op_GreaterThan(x, y);
    }
}
