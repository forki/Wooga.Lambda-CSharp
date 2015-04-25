#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Enum
struct Enum_t108;
// System.Object
struct Object_t;
// System.IFormatProvider
struct IFormatProvider_t3366;
// System.Type
struct Type_t;
// System.Array
struct Array_t;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t2960;
// System.String[]
struct StringU5BU5D_t127;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"

// System.Void System.Enum::.ctor()
 void Enum__ctor_m9558 (Object_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Enum::.cctor()
 void Enum__cctor_m9559 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Enum::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool Enum_System_IConvertible_ToBoolean_m295 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Enum::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t Enum_System_IConvertible_ToByte_m296 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Enum::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t Enum_System_IConvertible_ToChar_m297 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Enum::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t2501  Enum_System_IConvertible_ToDateTime_m298 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Enum::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t3391  Enum_System_IConvertible_ToDecimal_m299 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Enum::System.IConvertible.ToDouble(System.IFormatProvider)
 double Enum_System_IConvertible_ToDouble_m300 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Enum::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t Enum_System_IConvertible_ToInt16_m301 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t Enum_System_IConvertible_ToInt32_m302 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Enum::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t Enum_System_IConvertible_ToInt64_m303 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Enum::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t Enum_System_IConvertible_ToSByte_m304 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Enum::System.IConvertible.ToSingle(System.IFormatProvider)
 float Enum_System_IConvertible_ToSingle_m305 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * Enum_System_IConvertible_ToType_m307 (Object_t * __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Enum::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t Enum_System_IConvertible_ToUInt16_m308 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Enum::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t Enum_System_IConvertible_ToUInt32_m309 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Enum::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t Enum_System_IConvertible_ToUInt64_m310 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Enum::GetTypeCode()
 int32_t Enum_GetTypeCode_m312 (Object_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::get_value()
 Object_t * Enum_get_value_m9560 (Object_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::get_Value()
 Object_t * Enum_get_Value_m9561 (Object_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::FindPosition(System.Object,System.Array)
 int32_t Enum_FindPosition_m9562 (Object_t * __this/* static, unused */, Object_t * ___value, Array_t * ___values, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::GetName(System.Type,System.Object)
 String_t* Enum_GetName_m9563 (Object_t * __this/* static, unused */, Type_t * ___enumType, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
 bool Enum_IsDefined_m8935 (Object_t * __this/* static, unused */, Type_t * ___enumType, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Enum::get_underlying_type(System.Type)
 Type_t * Enum_get_underlying_type_m9564 (Object_t * __this/* static, unused */, Type_t * ___enumType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Enum::GetUnderlyingType(System.Type)
 Type_t * Enum_GetUnderlyingType_m9565 (Object_t * __this/* static, unused */, Type_t * ___enumType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::FindName(System.Collections.Hashtable,System.String[],System.String,System.Boolean)
 int32_t Enum_FindName_m9566 (Object_t * __this/* static, unused */, Hashtable_t2960 * ___name_hash, StringU5BU5D_t127* ___names, String_t* ___name, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Enum::GetValue(System.Object,System.TypeCode)
 uint64_t Enum_GetValue_m9567 (Object_t * __this/* static, unused */, Object_t * ___value, int32_t ___typeCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::Parse(System.Type,System.String,System.Boolean)
 Object_t * Enum_Parse_m7902 (Object_t * __this/* static, unused */, Type_t * ___enumType, String_t* ___value, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::compare_value_to(System.Object)
 int32_t Enum_compare_value_to_m9568 (Object_t * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::CompareTo(System.Object)
 int32_t Enum_CompareTo_m311 (Object_t * __this, Object_t * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::ToString()
 String_t* Enum_ToString_m293 (Object_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::ToString(System.IFormatProvider)
 String_t* Enum_ToString_m306 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::ToString(System.String)
 String_t* Enum_ToString_m9569 (Object_t * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::ToString(System.String,System.IFormatProvider)
 String_t* Enum_ToString_m294 (Object_t * __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.Byte)
 Object_t * Enum_ToObject_m9570 (Object_t * __this/* static, unused */, Type_t * ___enumType, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.Int16)
 Object_t * Enum_ToObject_m9571 (Object_t * __this/* static, unused */, Type_t * ___enumType, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.Int32)
 Object_t * Enum_ToObject_m9572 (Object_t * __this/* static, unused */, Type_t * ___enumType, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.Int64)
 Object_t * Enum_ToObject_m9573 (Object_t * __this/* static, unused */, Type_t * ___enumType, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.Object)
 Object_t * Enum_ToObject_m9574 (Object_t * __this/* static, unused */, Type_t * ___enumType, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.SByte)
 Object_t * Enum_ToObject_m9575 (Object_t * __this/* static, unused */, Type_t * ___enumType, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.UInt16)
 Object_t * Enum_ToObject_m9576 (Object_t * __this/* static, unused */, Type_t * ___enumType, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.UInt32)
 Object_t * Enum_ToObject_m9577 (Object_t * __this/* static, unused */, Type_t * ___enumType, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.UInt64)
 Object_t * Enum_ToObject_m9578 (Object_t * __this/* static, unused */, Type_t * ___enumType, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Enum::Equals(System.Object)
 bool Enum_Equals_m291 (Object_t * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::get_hashcode()
 int32_t Enum_get_hashcode_m9579 (Object_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::GetHashCode()
 int32_t Enum_GetHashCode_m292 (Object_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::FormatSpecifier_X(System.Type,System.Object,System.Boolean)
 String_t* Enum_FormatSpecifier_X_m9580 (Object_t * __this/* static, unused */, Type_t * ___enumType, Object_t * ___value, bool ___upper, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::FormatFlags(System.Type,System.Object)
 String_t* Enum_FormatFlags_m9581 (Object_t * __this/* static, unused */, Type_t * ___enumType, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::Format(System.Type,System.Object,System.String)
 String_t* Enum_Format_m9582 (Object_t * __this/* static, unused */, Type_t * ___enumType, Object_t * ___value, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
