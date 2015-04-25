#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DateTime
struct DateTime_t2501;
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
// System.String[]
struct StringU5BU5D_t127;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t3556;
// System.DayOfWeek
#include "mscorlib_System_DayOfWeek.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DateTimeKind
#include "mscorlib_System_DateTimeKind.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.DateTime/Which
#include "mscorlib_System_DateTime_Which.h"
// System.Globalization.DateTimeStyles
#include "mscorlib_System_Globalization_DateTimeStyles.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.DateTime::.ctor(System.Int64)
 void DateTime__ctor_m13030 (DateTime_t2501 * __this, int64_t ___ticks, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32)
 void DateTime__ctor_m13031 (DateTime_t2501 * __this, int32_t ___year, int32_t ___month, int32_t ___day, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 void DateTime__ctor_m6241 (DateTime_t2501 * __this, int32_t ___year, int32_t ___month, int32_t ___day, int32_t ___hour, int32_t ___minute, int32_t ___second, int32_t ___millisecond, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Boolean,System.TimeSpan)
 void DateTime__ctor_m13032 (DateTime_t2501 * __this, bool ___check, TimeSpan_t164  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int64,System.DateTimeKind)
 void DateTime__ctor_m13033 (DateTime_t2501 * __this, int64_t ___ticks, int32_t ___kind, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.cctor()
 void DateTime__cctor_m13034 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool DateTime_System_IConvertible_ToBoolean_m13035 (DateTime_t2501 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.DateTime::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t DateTime_System_IConvertible_ToByte_m13036 (DateTime_t2501 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.DateTime::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t DateTime_System_IConvertible_ToChar_m13037 (DateTime_t2501 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t2501  DateTime_System_IConvertible_ToDateTime_m13038 (DateTime_t2501 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.DateTime::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t3391  DateTime_System_IConvertible_ToDecimal_m13039 (DateTime_t2501 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.DateTime::System.IConvertible.ToDouble(System.IFormatProvider)
 double DateTime_System_IConvertible_ToDouble_m13040 (DateTime_t2501 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.DateTime::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t DateTime_System_IConvertible_ToInt16_m13041 (DateTime_t2501 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t DateTime_System_IConvertible_ToInt32_m13042 (DateTime_t2501 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t DateTime_System_IConvertible_ToInt64_m13043 (DateTime_t2501 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.DateTime::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t DateTime_System_IConvertible_ToSByte_m13044 (DateTime_t2501 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.DateTime::System.IConvertible.ToSingle(System.IFormatProvider)
 float DateTime_System_IConvertible_ToSingle_m13045 (DateTime_t2501 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.DateTime::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * DateTime_System_IConvertible_ToType_m13046 (DateTime_t2501 * __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.DateTime::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t DateTime_System_IConvertible_ToUInt16_m13047 (DateTime_t2501 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.DateTime::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t DateTime_System_IConvertible_ToUInt32_m13048 (DateTime_t2501 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.DateTime::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t DateTime_System_IConvertible_ToUInt64_m13049 (DateTime_t2501 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::AbsoluteDays(System.Int32,System.Int32,System.Int32)
 int32_t DateTime_AbsoluteDays_m13050 (Object_t * __this/* static, unused */, int32_t ___year, int32_t ___month, int32_t ___day, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::FromTicks(System.DateTime/Which)
 int32_t DateTime_FromTicks_m13051 (DateTime_t2501 * __this, int32_t ___what, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Month()
 int32_t DateTime_get_Month_m13052 (DateTime_t2501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Day()
 int32_t DateTime_get_Day_m13053 (DateTime_t2501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DayOfWeek System.DateTime::get_DayOfWeek()
 int32_t DateTime_get_DayOfWeek_m13054 (DateTime_t2501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Hour()
 int32_t DateTime_get_Hour_m13055 (DateTime_t2501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Minute()
 int32_t DateTime_get_Minute_m13056 (DateTime_t2501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Second()
 int32_t DateTime_get_Second_m13057 (DateTime_t2501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::GetNow()
 int64_t DateTime_GetNow_m13058 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Now()
 DateTime_t2501  DateTime_get_Now_m6163 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::get_Ticks()
 int64_t DateTime_get_Ticks_m8919 (DateTime_t2501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Today()
 DateTime_t2501  DateTime_get_Today_m13059 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_UtcNow()
 DateTime_t2501  DateTime_get_UtcNow_m8868 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Year()
 int32_t DateTime_get_Year_m13060 (DateTime_t2501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeKind System.DateTime::get_Kind()
 int32_t DateTime_get_Kind_m13061 (DateTime_t2501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Add(System.TimeSpan)
 DateTime_t2501  DateTime_Add_m13062 (DateTime_t2501 * __this, TimeSpan_t164  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddTicks(System.Int64)
 DateTime_t2501  DateTime_AddTicks_m13063 (DateTime_t2501 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddMilliseconds(System.Double)
 DateTime_t2501  DateTime_AddMilliseconds_m7702 (DateTime_t2501 * __this, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddSeconds(System.Double)
 DateTime_t2501  DateTime_AddSeconds_m6242 (DateTime_t2501 * __this, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::Compare(System.DateTime,System.DateTime)
 int32_t DateTime_Compare_m13064 (Object_t * __this/* static, unused */, DateTime_t2501  ___t1, DateTime_t2501  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::CompareTo(System.Object)
 int32_t DateTime_CompareTo_m13065 (DateTime_t2501 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::CompareTo(System.DateTime)
 int32_t DateTime_CompareTo_m13066 (DateTime_t2501 * __this, DateTime_t2501  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::Equals(System.DateTime)
 bool DateTime_Equals_m13067 (DateTime_t2501 * __this, DateTime_t2501  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::FromBinary(System.Int64)
 DateTime_t2501  DateTime_FromBinary_m13068 (Object_t * __this/* static, unused */, int64_t ___dateData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::SpecifyKind(System.DateTime,System.DateTimeKind)
 DateTime_t2501  DateTime_SpecifyKind_m13069 (Object_t * __this/* static, unused */, DateTime_t2501  ___value, int32_t ___kind, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::DaysInMonth(System.Int32,System.Int32)
 int32_t DateTime_DaysInMonth_m13070 (Object_t * __this/* static, unused */, int32_t ___year, int32_t ___month, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::Equals(System.Object)
 bool DateTime_Equals_m13071 (DateTime_t2501 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::CheckDateTimeKind(System.DateTimeKind)
 void DateTime_CheckDateTimeKind_m13072 (DateTime_t2501 * __this, int32_t ___kind, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::GetHashCode()
 int32_t DateTime_GetHashCode_m13073 (DateTime_t2501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::IsLeapYear(System.Int32)
 bool DateTime_IsLeapYear_m13074 (Object_t * __this/* static, unused */, int32_t ___year, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Parse(System.String,System.IFormatProvider)
 DateTime_t2501  DateTime_Parse_m13075 (Object_t * __this/* static, unused */, String_t* ___s, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Parse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
 DateTime_t2501  DateTime_Parse_m13076 (Object_t * __this/* static, unused */, String_t* ___s, Object_t * ___provider, int32_t ___styles, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::CoreParse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles,System.DateTime&,System.DateTimeOffset&,System.Boolean,System.Exception&)
 bool DateTime_CoreParse_m13077 (Object_t * __this/* static, unused */, String_t* ___s, Object_t * ___provider, int32_t ___styles, DateTime_t2501 * ___result, DateTimeOffset_t3917 * ___dto, bool ___setExceptionOnError, Exception_t115 ** ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.DateTime::YearMonthDayFormats(System.Globalization.DateTimeFormatInfo,System.Boolean,System.Exception&)
 StringU5BU5D_t127* DateTime_YearMonthDayFormats_m13078 (Object_t * __this/* static, unused */, DateTimeFormatInfo_t3556 * ___dfi, bool ___setExceptionOnError, Exception_t115 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::_ParseNumber(System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean,System.Int32&)
 int32_t DateTime__ParseNumber_m13079 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___valuePos, int32_t ___min_digits, int32_t ___digits, bool ___leadingzero, bool ___sloppy_parsing, int32_t* ___num_parsed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::_ParseEnum(System.String,System.Int32,System.String[],System.String[],System.Boolean,System.Int32&)
 int32_t DateTime__ParseEnum_m13080 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___sPos, StringU5BU5D_t127* ___values, StringU5BU5D_t127* ___invValues, bool ___exact, int32_t* ___num_parsed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseString(System.String,System.Int32,System.Int32,System.String,System.Int32&)
 bool DateTime__ParseString_m13081 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___sPos, int32_t ___maxlength, String_t* ___value, int32_t* ___num_parsed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseAmPm(System.String,System.Int32,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&,System.Int32&)
 bool DateTime__ParseAmPm_m13082 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___valuePos, int32_t ___num, DateTimeFormatInfo_t3556 * ___dfi, bool ___exact, int32_t* ___num_parsed, int32_t* ___ampm, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseTimeSeparator(System.String,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&)
 bool DateTime__ParseTimeSeparator_m13083 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___sPos, DateTimeFormatInfo_t3556 * ___dfi, bool ___exact, int32_t* ___num_parsed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseDateSeparator(System.String,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&)
 bool DateTime__ParseDateSeparator_m13084 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___sPos, DateTimeFormatInfo_t3556 * ___dfi, bool ___exact, int32_t* ___num_parsed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::IsLetter(System.String,System.Int32)
 bool DateTime_IsLetter_m13085 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_DoParse(System.String,System.String,System.String,System.Boolean,System.DateTime&,System.DateTimeOffset&,System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles,System.Boolean,System.Boolean&,System.Boolean&)
 bool DateTime__DoParse_m13086 (Object_t * __this/* static, unused */, String_t* ___s, String_t* ___firstPart, String_t* ___secondPart, bool ___exact, DateTime_t2501 * ___result, DateTimeOffset_t3917 * ___dto, DateTimeFormatInfo_t3556 * ___dfi, int32_t ___style, bool ___firstPartIsDate, bool* ___incompleteFormat, bool* ___longYear, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ParseExact(System.String,System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
 DateTime_t2501  DateTime_ParseExact_m8809 (Object_t * __this/* static, unused */, String_t* ___s, String_t* ___format, Object_t * ___provider, int32_t ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ParseExact(System.String,System.String[],System.IFormatProvider,System.Globalization.DateTimeStyles)
 DateTime_t2501  DateTime_ParseExact_m13087 (Object_t * __this/* static, unused */, String_t* ___s, StringU5BU5D_t127* ___formats, Object_t * ___provider, int32_t ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::CheckStyle(System.Globalization.DateTimeStyles)
 void DateTime_CheckStyle_m13088 (Object_t * __this/* static, unused */, int32_t ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::ParseExact(System.String,System.String[],System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles,System.DateTime&,System.Boolean,System.Boolean&,System.Boolean,System.Exception&)
 bool DateTime_ParseExact_m13089 (Object_t * __this/* static, unused */, String_t* ___s, StringU5BU5D_t127* ___formats, DateTimeFormatInfo_t3556 * ___dfi, int32_t ___style, DateTime_t2501 * ___ret, bool ___exact, bool* ___longYear, bool ___setExceptionOnError, Exception_t115 ** ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Subtract(System.TimeSpan)
 DateTime_t2501  DateTime_Subtract_m13090 (DateTime_t2501 * __this, TimeSpan_t164  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString()
 String_t* DateTime_ToString_m13091 (DateTime_t2501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.IFormatProvider)
 String_t* DateTime_ToString_m13092 (DateTime_t2501 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.String,System.IFormatProvider)
 String_t* DateTime_ToString_m13093 (DateTime_t2501 * __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ToLocalTime()
 DateTime_t2501  DateTime_ToLocalTime_m7763 (DateTime_t2501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ToUniversalTime()
 DateTime_t2501  DateTime_ToUniversalTime_m13094 (DateTime_t2501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::op_Addition(System.DateTime,System.TimeSpan)
 DateTime_t2501  DateTime_op_Addition_m13095 (Object_t * __this/* static, unused */, DateTime_t2501  ___d, TimeSpan_t164  ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_Equality(System.DateTime,System.DateTime)
 bool DateTime_op_Equality_m13096 (Object_t * __this/* static, unused */, DateTime_t2501  ___d1, DateTime_t2501  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_GreaterThan(System.DateTime,System.DateTime)
 bool DateTime_op_GreaterThan_m7812 (Object_t * __this/* static, unused */, DateTime_t2501  ___t1, DateTime_t2501  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_GreaterThanOrEqual(System.DateTime,System.DateTime)
 bool DateTime_op_GreaterThanOrEqual_m7703 (Object_t * __this/* static, unused */, DateTime_t2501  ___t1, DateTime_t2501  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_Inequality(System.DateTime,System.DateTime)
 bool DateTime_op_Inequality_m13097 (Object_t * __this/* static, unused */, DateTime_t2501  ___d1, DateTime_t2501  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_LessThan(System.DateTime,System.DateTime)
 bool DateTime_op_LessThan_m7811 (Object_t * __this/* static, unused */, DateTime_t2501  ___t1, DateTime_t2501  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_LessThanOrEqual(System.DateTime,System.DateTime)
 bool DateTime_op_LessThanOrEqual_m7810 (Object_t * __this/* static, unused */, DateTime_t2501  ___t1, DateTime_t2501  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::op_Subtraction(System.DateTime,System.TimeSpan)
 DateTime_t2501  DateTime_op_Subtraction_m13098 (Object_t * __this/* static, unused */, DateTime_t2501  ___d, TimeSpan_t164  ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
