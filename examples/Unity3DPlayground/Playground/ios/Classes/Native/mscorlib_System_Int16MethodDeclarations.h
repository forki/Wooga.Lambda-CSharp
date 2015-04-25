#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Int16
struct Int16_t457;
// System.IFormatProvider
struct IFormatProvider_t3366;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Exception
struct Exception_t115;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Boolean System.Int16::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool Int16_System_IConvertible_ToBoolean_m9164 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Int16::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t Int16_System_IConvertible_ToByte_m9165 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Int16::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t Int16_System_IConvertible_ToChar_m9166 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Int16::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t2501  Int16_System_IConvertible_ToDateTime_m9167 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Int16::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t3391  Int16_System_IConvertible_ToDecimal_m9168 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Int16::System.IConvertible.ToDouble(System.IFormatProvider)
 double Int16_System_IConvertible_ToDouble_m9169 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Int16::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t Int16_System_IConvertible_ToInt16_m9170 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int16::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t Int16_System_IConvertible_ToInt32_m9171 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Int16::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t Int16_System_IConvertible_ToInt64_m9172 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Int16::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t Int16_System_IConvertible_ToSByte_m9173 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Int16::System.IConvertible.ToSingle(System.IFormatProvider)
 float Int16_System_IConvertible_ToSingle_m9174 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Int16::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * Int16_System_IConvertible_ToType_m9175 (int16_t* __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Int16::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t Int16_System_IConvertible_ToUInt16_m9176 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Int16::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t Int16_System_IConvertible_ToUInt32_m9177 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Int16::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t Int16_System_IConvertible_ToUInt64_m9178 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int16::CompareTo(System.Object)
 int32_t Int16_CompareTo_m9179 (int16_t* __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int16::Equals(System.Object)
 bool Int16_Equals_m9180 (int16_t* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int16::GetHashCode()
 int32_t Int16_GetHashCode_m9181 (int16_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int16::CompareTo(System.Int16)
 int32_t Int16_CompareTo_m9182 (int16_t* __this, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int16::Equals(System.Int16)
 bool Int16_Equals_m9183 (int16_t* __this, int16_t ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int16::Parse(System.String,System.Boolean,System.Int16&,System.Exception&)
 bool Int16_Parse_m9184 (Object_t * __this/* static, unused */, String_t* ___s, bool ___tryParse, int16_t* ___result, Exception_t115 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Int16::Parse(System.String,System.IFormatProvider)
 int16_t Int16_Parse_m9185 (Object_t * __this/* static, unused */, String_t* ___s, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Int16::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
 int16_t Int16_Parse_m9186 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int16::TryParse(System.String,System.Int16&)
 bool Int16_TryParse_m9187 (Object_t * __this/* static, unused */, String_t* ___s, int16_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int16::ToString()
 String_t* Int16_ToString_m9188 (int16_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int16::ToString(System.IFormatProvider)
 String_t* Int16_ToString_m9189 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int16::ToString(System.String)
 String_t* Int16_ToString_m9190 (int16_t* __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int16::ToString(System.String,System.IFormatProvider)
 String_t* Int16_ToString_m9191 (int16_t* __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
