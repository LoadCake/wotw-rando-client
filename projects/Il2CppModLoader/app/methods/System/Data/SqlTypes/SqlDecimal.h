#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Data::SqlTypes::SqlDecimal {
    IL2CPP_REGISTER_METHOD(0x001E3420, uint8_t, CalculatePrecision, (app::SqlDecimal__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E3430, bool, VerifyPrecision, (app::SqlDecimal__Boxed * this_ptr, uint8_t precision))
    IL2CPP_REGISTER_METHODINFO(0x047182F0, SqlDecimal_VerifyPrecision__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E3440, void, ctor_1, (app::SqlDecimal__Boxed * this_ptr, bool f_null))
    IL2CPP_REGISTER_METHOD(0x001E3450, void, ctor_2, (app::SqlDecimal__Boxed * this_ptr, app::Decimal value))
    IL2CPP_REGISTER_METHOD(0x001E3470, void, ctor_3, (app::SqlDecimal__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x001E3480, void, ctor_4, (app::SqlDecimal__Boxed * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x001E3490, void, ctor_5, (app::SqlDecimal__Boxed * this_ptr, app::UInt32__Array * rgl_data, uint8_t b_len, uint8_t b_prec, uint8_t b_scale, bool f_positive))
    IL2CPP_REGISTER_METHOD(0x001E34B0, bool, get_IsNull, (app::SqlDecimal__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E34C0, app::Decimal, get_Value, (app::SqlDecimal__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E34F0, bool, get_IsPositive, (app::SqlDecimal__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047909D0, SqlDecimal_get_IsPositive__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E3500, void, SetPositive, (app::SqlDecimal__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E3510, void, SetSignBit, (app::SqlDecimal__Boxed * this_ptr, bool f_positive))
    IL2CPP_REGISTER_METHOD(0x001E3520, uint8_t, get_Scale, (app::SqlDecimal__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476CAA0, SqlDecimal_get_Scale__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E3530, app::Int32__Array *, get_Data, (app::SqlDecimal__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047140E0, SqlDecimal_get_Data__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E3540, app::String *, ToString, (app::SqlDecimal__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A6EC0, app::SqlDecimal, Parse, (app::String * s))
    IL2CPP_REGISTER_METHODINFO(0x0474B5E8, SqlDecimal_Parse__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E3550, double, ToDouble, (app::SqlDecimal__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473D478, SqlDecimal_ToDouble__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E34C0, app::Decimal, ToDecimal, (app::SqlDecimal__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04777DE0, SqlDecimal_ToDecimal__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A7980, app::SqlDecimal, op_Implicit_1, (app::Decimal x))
    IL2CPP_REGISTER_METHOD(0x022A79B0, app::SqlDecimal, op_Implicit_2, (int64_t x))
    IL2CPP_REGISTER_METHOD(0x022A7A20, app::SqlDecimal, op_UnaryNegation, (app::SqlDecimal x))
    IL2CPP_REGISTER_METHOD(0x022A7B60, app::SqlDecimal, op_Addition, (app::SqlDecimal x, app::SqlDecimal y))
    IL2CPP_REGISTER_METHODINFO(0x04739388, SqlDecimal_op_Addition__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A8320, app::SqlDecimal, op_Subtraction, (app::SqlDecimal x, app::SqlDecimal y))
    IL2CPP_REGISTER_METHOD(0x022A8440, app::SqlDecimal, op_Multiply, (app::SqlDecimal x, app::SqlDecimal y))
    IL2CPP_REGISTER_METHODINFO(0x04796D10, SqlDecimal_op_Multiply__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A91A0, app::SqlDecimal, op_Division, (app::SqlDecimal x, app::SqlDecimal y))
    IL2CPP_REGISTER_METHODINFO(0x04799A58, SqlDecimal_op_Division__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A97F0, app::SqlDecimal, op_Implicit_3, (app::SqlByte x))
    IL2CPP_REGISTER_METHOD(0x022A9940, app::SqlDecimal, op_Implicit_4, (app::SqlInt16 x))
    IL2CPP_REGISTER_METHOD(0x022A9A90, app::SqlDecimal, op_Implicit_5, (app::SqlInt32 x))
    IL2CPP_REGISTER_METHOD(0x022A9BE0, app::SqlDecimal, op_Implicit_6, (app::SqlInt64 x))
    IL2CPP_REGISTER_METHOD(0x022A9CE0, app::SqlDecimal, op_Implicit_7, (app::SqlMoney x))
    IL2CPP_REGISTER_METHOD(0x022A9DF0, void, ZeroToMaxLen, (app::UInt32__Array * rgul_data, int32_t c_u_i4s_cur))
    IL2CPP_REGISTER_METHOD(0x001E3560, bool, FZero, (app::SqlDecimal__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E3580, bool, FGt10_38_1, (app::SqlDecimal__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E35C0, bool, FGt10_38_2, (app::SqlDecimal__Boxed * this_ptr, app::UInt32__Array * rgl_data))
    IL2CPP_REGISTER_METHOD(0x022A9F60, uint8_t, BGetPrecUI4, (uint32_t value))
    IL2CPP_REGISTER_METHOD(0x022AA1A0, uint8_t, BGetPrecUI8, (uint64_t dwl_val))
    IL2CPP_REGISTER_METHOD(0x001E35D0, void, AddULong, (app::SqlDecimal__Boxed * this_ptr, uint32_t ul_add))
    IL2CPP_REGISTER_METHODINFO(0x0471A2E8, SqlDecimal_AddULong__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E35E0, void, MultByULong, (app::SqlDecimal__Boxed * this_ptr, uint32_t ui_multiplier))
    IL2CPP_REGISTER_METHODINFO(0x04788120, SqlDecimal_MultByULong__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E35F0, uint32_t, DivByULong, (app::SqlDecimal__Boxed * this_ptr, uint32_t i_divisor))
    IL2CPP_REGISTER_METHODINFO(0x04756718, SqlDecimal_DivByULong__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E3600, void, AdjustScale, (app::SqlDecimal__Boxed * this_ptr, int32_t digits, bool f_round))
    IL2CPP_REGISTER_METHODINFO(0x0471A330, SqlDecimal_AdjustScale__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E3610, int32_t, LAbsCmp, (app::SqlDecimal__Boxed * this_ptr, app::SqlDecimal snum_op))
    IL2CPP_REGISTER_METHOD(0x022AB480, void, MpMove, (app::UInt32__Array * rgul_s, int32_t ciul_s, app::UInt32__Array * rgul_d, int32_t * ciul_d))
    IL2CPP_REGISTER_METHOD(0x022AB4F0, void, MpSet, (app::UInt32__Array * rgul_d, int32_t * ciul_d, uint32_t iul_n))
    IL2CPP_REGISTER_METHOD(0x021E6970, void, MpNormalize, (app::UInt32__Array * rgul_u, int32_t * ciul_u))
    IL2CPP_REGISTER_METHOD(0x022AB530, void, MpMul1, (app::UInt32__Array * piul_d, int32_t * ciul_d, uint32_t iul_x))
    IL2CPP_REGISTER_METHOD(0x022AB690, void, MpDiv1, (app::UInt32__Array * rgul_u, int32_t * ciul_u, uint32_t iul_d, uint32_t * iul_r))
    IL2CPP_REGISTER_METHOD(0x022AB810, uint64_t, DWL, (uint32_t lo, uint32_t hi))
    IL2CPP_REGISTER_METHOD(0x022AB820, uint32_t, HI, (uint64_t x))
    IL2CPP_REGISTER_METHOD(0x006CE970, uint32_t, LO, (uint64_t x))
    IL2CPP_REGISTER_METHOD(0x022AB830, void, MpDiv, (app::UInt32__Array * rgul_u, int32_t ciul_u, app::UInt32__Array * rgul_d, int32_t ciul_d, app::UInt32__Array * rgul_q, int32_t * ciul_q, app::UInt32__Array * rgul_r, int32_t * ciul_r))
    IL2CPP_REGISTER_METHOD(0x001E3640, app::EComparison__Enum, CompareNm, (app::SqlDecimal__Boxed * this_ptr, app::SqlDecimal snum_op))
    IL2CPP_REGISTER_METHOD(0x022AC6E0, void, CheckValidPrecScale, (uint8_t b_prec, uint8_t b_scale))
    IL2CPP_REGISTER_METHODINFO(0x04707450, SqlDecimal_CheckValidPrecScale__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022AC800, app::SqlBoolean, op_Equality, (app::SqlDecimal x, app::SqlDecimal y))
    IL2CPP_REGISTER_METHOD(0x022AC900, app::SqlBoolean, op_LessThan, (app::SqlDecimal x, app::SqlDecimal y))
    IL2CPP_REGISTER_METHOD(0x022ACA00, app::SqlBoolean, op_GreaterThan, (app::SqlDecimal x, app::SqlDecimal y))
    IL2CPP_REGISTER_METHOD(0x022ACB00, app::SqlBoolean, LessThan, (app::SqlDecimal x, app::SqlDecimal y))
    IL2CPP_REGISTER_METHOD(0x022ACBD0, app::SqlBoolean, GreaterThan, (app::SqlDecimal x, app::SqlDecimal y))
    IL2CPP_REGISTER_METHOD(0x001E3670, app::SqlDouble, ToSqlDouble, (app::SqlDecimal__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E36A0, app::SqlInt64, ToSqlInt64, (app::SqlDecimal__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E36D0, app::SqlMoney, ToSqlMoney, (app::SqlDecimal__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021E69C0, uint16_t, ChFromDigit, (uint32_t ui_digit))
    IL2CPP_REGISTER_METHOD(0x001E3700, void, StoreFromWorkingArray, (app::SqlDecimal__Boxed * this_ptr, app::UInt32__Array * rgui_data))
    IL2CPP_REGISTER_METHOD(0x001E3710, void, SetToZero, (app::SqlDecimal__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E3720, int32_t, CompareTo_1, (app::SqlDecimal__Boxed * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x0475D030, SqlDecimal_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E3870, int32_t, CompareTo_2, (app::SqlDecimal__Boxed * this_ptr, app::SqlDecimal value))
    IL2CPP_REGISTER_METHOD(0x001E38A0, bool, Equals, (app::SqlDecimal__Boxed * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x001E38B0, int32_t, GetHashCode, (app::SqlDecimal__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013BB70, app::XmlSchema *, IXmlSerializable_GetSchema, (app::SqlDecimal__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E3A00, void, IXmlSerializable_ReadXml, (app::SqlDecimal__Boxed * this_ptr, app::XmlReader * reader))
    IL2CPP_REGISTER_METHOD(0x001E3A10, void, IXmlSerializable_WriteXml, (app::SqlDecimal__Boxed * this_ptr, app::XmlWriter * writer))
    IL2CPP_REGISTER_METHOD(0x022AD760, app::XmlQualifiedName *, GetXsdType, (app::XmlSchemaSet * schema_set))
    IL2CPP_REGISTER_METHOD(0x022AD8B0, void, cctor, ())
    app::SqlDecimal operator - (app::SqlDecimal x) {
        return op_UnaryNegation(x);
    }
    app::SqlDecimal operator + (app::SqlDecimal x, app::SqlDecimal y) {
        return op_Addition(x, y);
    }
    app::SqlDecimal operator - (app::SqlDecimal x, app::SqlDecimal y) {
        return op_Subtraction(x, y);
    }
    app::SqlDecimal operator * (app::SqlDecimal x, app::SqlDecimal y) {
        return op_Multiply(x, y);
    }
    app::SqlDecimal operator / (app::SqlDecimal x, app::SqlDecimal y) {
        return op_Division(x, y);
    }
    app::SqlBoolean operator == (app::SqlDecimal x, app::SqlDecimal y) {
        return op_Equality(x, y);
    }
    app::SqlBoolean operator < (app::SqlDecimal x, app::SqlDecimal y) {
        return op_LessThan(x, y);
    }
    app::SqlBoolean operator > (app::SqlDecimal x, app::SqlDecimal y) {
        return op_GreaterThan(x, y);
    }
}