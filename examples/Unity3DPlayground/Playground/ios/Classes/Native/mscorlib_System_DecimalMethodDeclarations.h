#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Decimal
struct Decimal_t3391;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t3366;
// System.Int32[]
struct Int32U5BU5D_t156;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t3390;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Void System.Decimal::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean,System.Byte)
 void Decimal__ctor_m9392 (Decimal_t3391 * __this, int32_t ___lo, int32_t ___mid, int32_t ___hi, bool ___isNegative, uint8_t ___scale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int32)
 void Decimal__ctor_m9393 (Decimal_t3391 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.UInt32)
 void Decimal__ctor_m9394 (Decimal_t3391 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int64)
 void Decimal__ctor_m9395 (Decimal_t3391 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.UInt64)
 void Decimal__ctor_m9396 (Decimal_t3391 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Single)
 void Decimal__ctor_m9397 (Decimal_t3391 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Double)
 void Decimal__ctor_m9398 (Decimal_t3391 * __this, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.cctor()
 void Decimal__cctor_m9399 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Decimal::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * Decimal_System_IConvertible_ToType_m9400 (Decimal_t3391 * __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool Decimal_System_IConvertible_ToBoolean_m9401 (Decimal_t3391 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Decimal::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t Decimal_System_IConvertible_ToByte_m9402 (Decimal_t3391 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Decimal::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t Decimal_System_IConvertible_ToChar_m9403 (Decimal_t3391 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Decimal::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t2501  Decimal_System_IConvertible_ToDateTime_m9404 (Decimal_t3391 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t3391  Decimal_System_IConvertible_ToDecimal_m9405 (Decimal_t3391 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::System.IConvertible.ToDouble(System.IFormatProvider)
 double Decimal_System_IConvertible_ToDouble_m9406 (Decimal_t3391 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Decimal::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t Decimal_System_IConvertible_ToInt16_m9407 (Decimal_t3391 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t Decimal_System_IConvertible_ToInt32_m9408 (Decimal_t3391 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t Decimal_System_IConvertible_ToInt64_m9409 (Decimal_t3391 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Decimal::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t Decimal_System_IConvertible_ToSByte_m9410 (Decimal_t3391 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Decimal::System.IConvertible.ToSingle(System.IFormatProvider)
 float Decimal_System_IConvertible_ToSingle_m9411 (Decimal_t3391 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Decimal::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t Decimal_System_IConvertible_ToUInt16_m9412 (Decimal_t3391 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Decimal::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t Decimal_System_IConvertible_ToUInt32_m9413 (Decimal_t3391 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t Decimal_System_IConvertible_ToUInt64_m9414 (Decimal_t3391 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Decimal::GetBits(System.Decimal)
 Int32U5BU5D_t156* Decimal_GetBits_m9415 (Object_t * __this/* static, unused */, Decimal_t3391  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Add(System.Decimal,System.Decimal)
 Decimal_t3391  Decimal_Add_m9416 (Object_t * __this/* static, unused */, Decimal_t3391  ___d1, Decimal_t3391  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Subtract(System.Decimal,System.Decimal)
 Decimal_t3391  Decimal_Subtract_m9417 (Object_t * __this/* static, unused */, Decimal_t3391  ___d1, Decimal_t3391  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::GetHashCode()
 int32_t Decimal_GetHashCode_m9418 (Decimal_t3391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::u64(System.Decimal)
 uint64_t Decimal_u64_m9419 (Object_t * __this/* static, unused */, Decimal_t3391  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::s64(System.Decimal)
 int64_t Decimal_s64_m9420 (Object_t * __this/* static, unused */, Decimal_t3391  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal,System.Decimal)
 bool Decimal_Equals_m9421 (Object_t * __this/* static, unused */, Decimal_t3391  ___d1, Decimal_t3391  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Object)
 bool Decimal_Equals_m9422 (Decimal_t3391 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::IsZero()
 bool Decimal_IsZero_m9423 (Decimal_t3391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Floor(System.Decimal)
 Decimal_t3391  Decimal_Floor_m9424 (Object_t * __this/* static, unused */, Decimal_t3391  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Multiply(System.Decimal,System.Decimal)
 Decimal_t3391  Decimal_Multiply_m9425 (Object_t * __this/* static, unused */, Decimal_t3391  ___d1, Decimal_t3391  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Divide(System.Decimal,System.Decimal)
 Decimal_t3391  Decimal_Divide_m9426 (Object_t * __this/* static, unused */, Decimal_t3391  ___d1, Decimal_t3391  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::Compare(System.Decimal,System.Decimal)
 int32_t Decimal_Compare_m9427 (Object_t * __this/* static, unused */, Decimal_t3391  ___d1, Decimal_t3391  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::CompareTo(System.Object)
 int32_t Decimal_CompareTo_m9428 (Decimal_t3391 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::CompareTo(System.Decimal)
 int32_t Decimal_CompareTo_m9429 (Decimal_t3391 * __this, Decimal_t3391  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal)
 bool Decimal_Equals_m9430 (Decimal_t3391 * __this, Decimal_t3391  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.IFormatProvider)
 Decimal_t3391  Decimal_Parse_m9431 (Object_t * __this/* static, unused */, String_t* ___s, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::ThrowAtPos(System.Int32)
 void Decimal_ThrowAtPos_m9432 (Object_t * __this/* static, unused */, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::ThrowInvalidExp()
 void Decimal_ThrowInvalidExp_m9433 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::stripStyles(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo,System.Int32&,System.Boolean&,System.Boolean&,System.Int32&,System.Boolean)
 String_t* Decimal_stripStyles_m9434 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, NumberFormatInfo_t3390 * ___nfi, int32_t* ___decPos, bool* ___isNegative, bool* ___expFlag, int32_t* ___exp, bool ___throwex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
 Decimal_t3391  Decimal_Parse_m9435 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::PerformParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Decimal&,System.Boolean)
 bool Decimal_PerformParse_m9436 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, Decimal_t3391 * ___res, bool ___throwex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.String,System.IFormatProvider)
 String_t* Decimal_ToString_m9437 (Decimal_t3391 * __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString()
 String_t* Decimal_ToString_m9438 (Decimal_t3391 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.IFormatProvider)
 String_t* Decimal_ToString_m9439 (Decimal_t3391 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimal2UInt64(System.Decimal&,System.UInt64&)
 int32_t Decimal_decimal2UInt64_m9440 (Object_t * __this/* static, unused */, Decimal_t3391 * ___val, uint64_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimal2Int64(System.Decimal&,System.Int64&)
 int32_t Decimal_decimal2Int64_m9441 (Object_t * __this/* static, unused */, Decimal_t3391 * ___val, int64_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalIncr(System.Decimal&,System.Decimal&)
 int32_t Decimal_decimalIncr_m9442 (Object_t * __this/* static, unused */, Decimal_t3391 * ___d1, Decimal_t3391 * ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::string2decimal(System.Decimal&,System.String,System.UInt32,System.Int32)
 int32_t Decimal_string2decimal_m9443 (Object_t * __this/* static, unused */, Decimal_t3391 * ___val, String_t* ___sDigits, uint32_t ___decPos, int32_t ___sign, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalSetExponent(System.Decimal&,System.Int32)
 int32_t Decimal_decimalSetExponent_m9444 (Object_t * __this/* static, unused */, Decimal_t3391 * ___val, int32_t ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::decimal2double(System.Decimal&)
 double Decimal_decimal2double_m9445 (Object_t * __this/* static, unused */, Decimal_t3391 * ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::decimalFloorAndTrunc(System.Decimal&,System.Int32)
 void Decimal_decimalFloorAndTrunc_m9446 (Object_t * __this/* static, unused */, Decimal_t3391 * ___val, int32_t ___floorFlag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalMult(System.Decimal&,System.Decimal&)
 int32_t Decimal_decimalMult_m9447 (Object_t * __this/* static, unused */, Decimal_t3391 * ___pd1, Decimal_t3391 * ___pd2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalDiv(System.Decimal&,System.Decimal&,System.Decimal&)
 int32_t Decimal_decimalDiv_m9448 (Object_t * __this/* static, unused */, Decimal_t3391 * ___pc, Decimal_t3391 * ___pa, Decimal_t3391 * ___pb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalCompare(System.Decimal&,System.Decimal&)
 int32_t Decimal_decimalCompare_m9449 (Object_t * __this/* static, unused */, Decimal_t3391 * ___d1, Decimal_t3391 * ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Increment(System.Decimal)
 Decimal_t3391  Decimal_op_Increment_m9450 (Object_t * __this/* static, unused */, Decimal_t3391  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Subtraction(System.Decimal,System.Decimal)
 Decimal_t3391  Decimal_op_Subtraction_m9451 (Object_t * __this/* static, unused */, Decimal_t3391  ___d1, Decimal_t3391  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Multiply(System.Decimal,System.Decimal)
 Decimal_t3391  Decimal_op_Multiply_m9452 (Object_t * __this/* static, unused */, Decimal_t3391  ___d1, Decimal_t3391  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Division(System.Decimal,System.Decimal)
 Decimal_t3391  Decimal_op_Division_m9453 (Object_t * __this/* static, unused */, Decimal_t3391  ___d1, Decimal_t3391  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Decimal::op_Explicit(System.Decimal)
 uint8_t Decimal_op_Explicit_m9454 (Object_t * __this/* static, unused */, Decimal_t3391  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Decimal::op_Explicit(System.Decimal)
 int8_t Decimal_op_Explicit_m9455 (Object_t * __this/* static, unused */, Decimal_t3391  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Decimal::op_Explicit(System.Decimal)
 int16_t Decimal_op_Explicit_m9456 (Object_t * __this/* static, unused */, Decimal_t3391  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Decimal::op_Explicit(System.Decimal)
 uint16_t Decimal_op_Explicit_m9457 (Object_t * __this/* static, unused */, Decimal_t3391  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::op_Explicit(System.Decimal)
 int32_t Decimal_op_Explicit_m9458 (Object_t * __this/* static, unused */, Decimal_t3391  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Decimal::op_Explicit(System.Decimal)
 uint32_t Decimal_op_Explicit_m9459 (Object_t * __this/* static, unused */, Decimal_t3391  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::op_Explicit(System.Decimal)
 int64_t Decimal_op_Explicit_m9460 (Object_t * __this/* static, unused */, Decimal_t3391  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::op_Explicit(System.Decimal)
 uint64_t Decimal_op_Explicit_m9461 (Object_t * __this/* static, unused */, Decimal_t3391  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Byte)
 Decimal_t3391  Decimal_op_Implicit_m9462 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.SByte)
 Decimal_t3391  Decimal_op_Implicit_m9463 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int16)
 Decimal_t3391  Decimal_op_Implicit_m9464 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt16)
 Decimal_t3391  Decimal_op_Implicit_m9465 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int32)
 Decimal_t3391  Decimal_op_Implicit_m9466 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt32)
 Decimal_t3391  Decimal_op_Implicit_m9467 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int64)
 Decimal_t3391  Decimal_op_Implicit_m9468 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt64)
 Decimal_t3391  Decimal_op_Implicit_m9469 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Single)
 Decimal_t3391  Decimal_op_Explicit_m9470 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Double)
 Decimal_t3391  Decimal_op_Explicit_m9471 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Decimal::op_Explicit(System.Decimal)
 float Decimal_op_Explicit_m9472 (Object_t * __this/* static, unused */, Decimal_t3391  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::op_Explicit(System.Decimal)
 double Decimal_op_Explicit_m9473 (Object_t * __this/* static, unused */, Decimal_t3391  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Inequality(System.Decimal,System.Decimal)
 bool Decimal_op_Inequality_m9474 (Object_t * __this/* static, unused */, Decimal_t3391  ___d1, Decimal_t3391  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Equality(System.Decimal,System.Decimal)
 bool Decimal_op_Equality_m9475 (Object_t * __this/* static, unused */, Decimal_t3391  ___d1, Decimal_t3391  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_GreaterThan(System.Decimal,System.Decimal)
 bool Decimal_op_GreaterThan_m9476 (Object_t * __this/* static, unused */, Decimal_t3391  ___d1, Decimal_t3391  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_LessThan(System.Decimal,System.Decimal)
 bool Decimal_op_LessThan_m9477 (Object_t * __this/* static, unused */, Decimal_t3391  ___d1, Decimal_t3391  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
