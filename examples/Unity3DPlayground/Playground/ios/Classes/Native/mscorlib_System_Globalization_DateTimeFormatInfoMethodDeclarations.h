#pragma once

// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2198;
// System.String[]
struct StringU5BU5D_t150;
// System.String
struct String_t;
// System.Globalization.Calendar
struct Calendar_t2194;
// System.IFormatProvider
struct IFormatProvider_t2011;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.DayOfWeek
#include "mscorlib_System_DayOfWeek.h"

// System.Void System.Globalization.DateTimeFormatInfo::.ctor(System.Boolean)
 void DateTimeFormatInfo__ctor_m9198 (DateTimeFormatInfo_t2198 * __this, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::.ctor()
 void DateTimeFormatInfo__ctor_m9199 (DateTimeFormatInfo_t2198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::.cctor()
 void DateTimeFormatInfo__cctor_m9200 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::GetInstance(System.IFormatProvider)
 DateTimeFormatInfo_t2198 * DateTimeFormatInfo_GetInstance_m9201 (Object_t * __this/* static, unused */, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.DateTimeFormatInfo::get_IsReadOnly()
 bool DateTimeFormatInfo_get_IsReadOnly_m9202 (DateTimeFormatInfo_t2198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::ReadOnly(System.Globalization.DateTimeFormatInfo)
 DateTimeFormatInfo_t2198 * DateTimeFormatInfo_ReadOnly_m9203 (Object_t * __this/* static, unused */, DateTimeFormatInfo_t2198 * ___dtfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.DateTimeFormatInfo::Clone()
 Object_t * DateTimeFormatInfo_Clone_m9204 (DateTimeFormatInfo_t2198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.DateTimeFormatInfo::GetFormat(System.Type)
 Object_t * DateTimeFormatInfo_GetFormat_m9205 (DateTimeFormatInfo_t2198 * __this, Type_t * ___formatType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedMonthName(System.Int32)
 String_t* DateTimeFormatInfo_GetAbbreviatedMonthName_m9206 (DateTimeFormatInfo_t2198 * __this, int32_t ___month, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetEraName(System.Int32)
 String_t* DateTimeFormatInfo_GetEraName_m9207 (DateTimeFormatInfo_t2198 * __this, int32_t ___era, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetMonthName(System.Int32)
 String_t* DateTimeFormatInfo_GetMonthName_m9208 (DateTimeFormatInfo_t2198 * __this, int32_t ___month, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawAbbreviatedDayNames()
 StringU5BU5D_t150* DateTimeFormatInfo_get_RawAbbreviatedDayNames_m9209 (DateTimeFormatInfo_t2198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawAbbreviatedMonthNames()
 StringU5BU5D_t150* DateTimeFormatInfo_get_RawAbbreviatedMonthNames_m9210 (DateTimeFormatInfo_t2198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawDayNames()
 StringU5BU5D_t150* DateTimeFormatInfo_get_RawDayNames_m9211 (DateTimeFormatInfo_t2198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawMonthNames()
 StringU5BU5D_t150* DateTimeFormatInfo_get_RawMonthNames_m9212 (DateTimeFormatInfo_t2198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_AMDesignator()
 String_t* DateTimeFormatInfo_get_AMDesignator_m9213 (DateTimeFormatInfo_t2198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_PMDesignator()
 String_t* DateTimeFormatInfo_get_PMDesignator_m9214 (DateTimeFormatInfo_t2198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_DateSeparator()
 String_t* DateTimeFormatInfo_get_DateSeparator_m9215 (DateTimeFormatInfo_t2198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_TimeSeparator()
 String_t* DateTimeFormatInfo_get_TimeSeparator_m9216 (DateTimeFormatInfo_t2198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_LongDatePattern()
 String_t* DateTimeFormatInfo_get_LongDatePattern_m9217 (DateTimeFormatInfo_t2198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_ShortDatePattern()
 String_t* DateTimeFormatInfo_get_ShortDatePattern_m9218 (DateTimeFormatInfo_t2198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_ShortTimePattern()
 String_t* DateTimeFormatInfo_get_ShortTimePattern_m9219 (DateTimeFormatInfo_t2198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_LongTimePattern()
 String_t* DateTimeFormatInfo_get_LongTimePattern_m9220 (DateTimeFormatInfo_t2198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_MonthDayPattern()
 String_t* DateTimeFormatInfo_get_MonthDayPattern_m9221 (DateTimeFormatInfo_t2198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_YearMonthPattern()
 String_t* DateTimeFormatInfo_get_YearMonthPattern_m9222 (DateTimeFormatInfo_t2198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_FullDateTimePattern()
 String_t* DateTimeFormatInfo_get_FullDateTimePattern_m9223 (DateTimeFormatInfo_t2198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_CurrentInfo()
 DateTimeFormatInfo_t2198 * DateTimeFormatInfo_get_CurrentInfo_m9224 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_InvariantInfo()
 DateTimeFormatInfo_t2198 * DateTimeFormatInfo_get_InvariantInfo_m9225 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::get_Calendar()
 Calendar_t2194 * DateTimeFormatInfo_get_Calendar_m9226 (DateTimeFormatInfo_t2198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::set_Calendar(System.Globalization.Calendar)
 void DateTimeFormatInfo_set_Calendar_m9227 (DateTimeFormatInfo_t2198 * __this, Calendar_t2194 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_RFC1123Pattern()
 String_t* DateTimeFormatInfo_get_RFC1123Pattern_m9228 (DateTimeFormatInfo_t2198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_RoundtripPattern()
 String_t* DateTimeFormatInfo_get_RoundtripPattern_m9229 (DateTimeFormatInfo_t2198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_SortableDateTimePattern()
 String_t* DateTimeFormatInfo_get_SortableDateTimePattern_m9230 (DateTimeFormatInfo_t2198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_UniversalSortableDateTimePattern()
 String_t* DateTimeFormatInfo_get_UniversalSortableDateTimePattern_m9231 (DateTimeFormatInfo_t2198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::GetAllDateTimePatternsInternal()
 StringU5BU5D_t150* DateTimeFormatInfo_GetAllDateTimePatternsInternal_m9232 (DateTimeFormatInfo_t2198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::FillAllDateTimePatterns()
 void DateTimeFormatInfo_FillAllDateTimePatterns_m9233 (DateTimeFormatInfo_t2198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::GetAllRawDateTimePatterns(System.Char)
 StringU5BU5D_t150* DateTimeFormatInfo_GetAllRawDateTimePatterns_m9234 (DateTimeFormatInfo_t2198 * __this, uint16_t ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetDayName(System.DayOfWeek)
 String_t* DateTimeFormatInfo_GetDayName_m9235 (DateTimeFormatInfo_t2198 * __this, int32_t ___dayofweek, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedDayName(System.DayOfWeek)
 String_t* DateTimeFormatInfo_GetAbbreviatedDayName_m9236 (DateTimeFormatInfo_t2198 * __this, int32_t ___dayofweek, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::FillInvariantPatterns()
 void DateTimeFormatInfo_FillInvariantPatterns_m9237 (DateTimeFormatInfo_t2198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::PopulateCombinedList(System.String[],System.String[])
 StringU5BU5D_t150* DateTimeFormatInfo_PopulateCombinedList_m9238 (DateTimeFormatInfo_t2198 * __this, StringU5BU5D_t150* ___dates, StringU5BU5D_t150* ___times, MethodInfo* method) IL2CPP_METHOD_ATTR;
