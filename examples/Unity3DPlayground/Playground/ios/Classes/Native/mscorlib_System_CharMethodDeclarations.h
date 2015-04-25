#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Char
struct Char_t304;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t3366;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t921;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.UnicodeCategory
#include "mscorlib_System_Globalization_UnicodeCategory.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"

// System.Void System.Char::.cctor()
 void Char__cctor_m9220 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Char::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * Char_System_IConvertible_ToType_m9221 (uint16_t* __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool Char_System_IConvertible_ToBoolean_m9222 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Char::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t Char_System_IConvertible_ToByte_m9223 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t Char_System_IConvertible_ToChar_m9224 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Char::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t2501  Char_System_IConvertible_ToDateTime_m9225 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Char::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t3391  Char_System_IConvertible_ToDecimal_m9226 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Char::System.IConvertible.ToDouble(System.IFormatProvider)
 double Char_System_IConvertible_ToDouble_m9227 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Char::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t Char_System_IConvertible_ToInt16_m9228 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Char::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t Char_System_IConvertible_ToInt32_m9229 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Char::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t Char_System_IConvertible_ToInt64_m9230 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Char::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t Char_System_IConvertible_ToSByte_m9231 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Char::System.IConvertible.ToSingle(System.IFormatProvider)
 float Char_System_IConvertible_ToSingle_m9232 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Char::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t Char_System_IConvertible_ToUInt16_m9233 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Char::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t Char_System_IConvertible_ToUInt32_m9234 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Char::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t Char_System_IConvertible_ToUInt64_m9235 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Char::GetDataTablePointers(System.Byte*&,System.Byte*&,System.Double*&,System.UInt16*&,System.UInt16*&,System.UInt16*&,System.UInt16*&)
 void Char_GetDataTablePointers_m9236 (Object_t * __this/* static, unused */, uint8_t** ___category_data, uint8_t** ___numeric_data, double** ___numeric_data_values, uint16_t** ___to_lower_data_low, uint16_t** ___to_lower_data_high, uint16_t** ___to_upper_data_low, uint16_t** ___to_upper_data_high, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Char::CompareTo(System.Object)
 int32_t Char_CompareTo_m9237 (uint16_t* __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::Equals(System.Object)
 bool Char_Equals_m9238 (uint16_t* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Char::CompareTo(System.Char)
 int32_t Char_CompareTo_m9239 (uint16_t* __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::Equals(System.Char)
 bool Char_Equals_m9240 (uint16_t* __this, uint16_t ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Char::GetHashCode()
 int32_t Char_GetHashCode_m9241 (uint16_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.UnicodeCategory System.Char::GetUnicodeCategory(System.Char)
 int32_t Char_GetUnicodeCategory_m7906 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsDigit(System.Char)
 bool Char_IsDigit_m7904 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsLetter(System.Char)
 bool Char_IsLetter_m2212 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsLetterOrDigit(System.Char)
 bool Char_IsLetterOrDigit_m7903 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsLower(System.Char)
 bool Char_IsLower_m2213 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsSurrogate(System.Char)
 bool Char_IsSurrogate_m9242 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsUpper(System.Char)
 bool Char_IsUpper_m2215 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsWhiteSpace(System.Char)
 bool Char_IsWhiteSpace_m7905 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsWhiteSpace(System.String,System.Int32)
 bool Char_IsWhiteSpace_m7750 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Char::CheckParameter(System.String,System.Int32)
 void Char_CheckParameter_m9243 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::Parse(System.String)
 uint16_t Char_Parse_m9244 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToLower(System.Char)
 uint16_t Char_ToLower_m2216 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToLowerInvariant(System.Char)
 uint16_t Char_ToLowerInvariant_m9245 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToLower(System.Char,System.Globalization.CultureInfo)
 uint16_t Char_ToLower_m9246 (Object_t * __this/* static, unused */, uint16_t ___c, CultureInfo_t921 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToUpper(System.Char)
 uint16_t Char_ToUpper_m2214 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToUpperInvariant(System.Char)
 uint16_t Char_ToUpperInvariant_m7752 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Char::ToString()
 String_t* Char_ToString_m2177 (uint16_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Char::ToString(System.IFormatProvider)
 String_t* Char_ToString_m9247 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Char::GetTypeCode()
 int32_t Char_GetTypeCode_m9248 (uint16_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
