#pragma once

// System.Double
struct Double_t131;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t2011;
// System.String
struct String_t;
// System.Exception
struct Exception_t121;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Object System.Double::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * Double_System_IConvertible_ToType_m7974 (double* __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool Double_System_IConvertible_ToBoolean_m7975 (double* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Double::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t Double_System_IConvertible_ToByte_m7976 (double* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Double::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t Double_System_IConvertible_ToChar_m7977 (double* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Double::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t1141  Double_System_IConvertible_ToDateTime_m7978 (double* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Double::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t2031  Double_System_IConvertible_ToDecimal_m7979 (double* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Double::System.IConvertible.ToDouble(System.IFormatProvider)
 double Double_System_IConvertible_ToDouble_m7980 (double* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Double::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t Double_System_IConvertible_ToInt16_m7981 (double* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Double::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t Double_System_IConvertible_ToInt32_m7982 (double* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Double::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t Double_System_IConvertible_ToInt64_m7983 (double* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Double::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t Double_System_IConvertible_ToSByte_m7984 (double* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Double::System.IConvertible.ToSingle(System.IFormatProvider)
 float Double_System_IConvertible_ToSingle_m7985 (double* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Double::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t Double_System_IConvertible_ToUInt16_m7986 (double* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Double::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t Double_System_IConvertible_ToUInt32_m7987 (double* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Double::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t Double_System_IConvertible_ToUInt64_m7988 (double* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Double::CompareTo(System.Object)
 int32_t Double_CompareTo_m7989 (double* __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::Equals(System.Object)
 bool Double_Equals_m7990 (double* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Double::CompareTo(System.Double)
 int32_t Double_CompareTo_m7991 (double* __this, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::Equals(System.Double)
 bool Double_Equals_m7992 (double* __this, double ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Double::GetHashCode()
 int32_t Double_GetHashCode_m7993 (double* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::IsInfinity(System.Double)
 bool Double_IsInfinity_m7994 (Object_t * __this/* static, unused */, double ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::IsNaN(System.Double)
 bool Double_IsNaN_m7995 (Object_t * __this/* static, unused */, double ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::IsNegativeInfinity(System.Double)
 bool Double_IsNegativeInfinity_m7996 (Object_t * __this/* static, unused */, double ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::IsPositiveInfinity(System.Double)
 bool Double_IsPositiveInfinity_m7997 (Object_t * __this/* static, unused */, double ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Double::Parse(System.String,System.IFormatProvider)
 double Double_Parse_m7998 (Object_t * __this/* static, unused */, String_t* ___s, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Double::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
 double Double_Parse_m7999 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,System.Double&,System.Exception&)
 bool Double_Parse_m8000 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, bool ___tryParse, double* ___result, Exception_t121 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::TryParseStringConstant(System.String,System.String,System.Int32,System.Int32)
 bool Double_TryParseStringConstant_m8001 (Object_t * __this/* static, unused */, String_t* ___format, String_t* ___s, int32_t ___start, int32_t ___end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::ParseImpl(System.Byte*,System.Double&)
 bool Double_ParseImpl_m8002 (Object_t * __this/* static, unused */, uint8_t* ___byte_ptr, double* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString()
 String_t* Double_ToString_m8003 (double* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString(System.IFormatProvider)
 String_t* Double_ToString_m8004 (double* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString(System.String,System.IFormatProvider)
 String_t* Double_ToString_m8005 (double* __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
