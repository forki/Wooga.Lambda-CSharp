#pragma once

// System.TimeZone
struct TimeZone_t1862;
// System.Globalization.DaylightTime
struct DaylightTime_t2202;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.TimeZone::.ctor()
 void TimeZone__ctor_m11914 (TimeZone_t1862 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZone::.cctor()
 void TimeZone__cctor_m11915 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZone System.TimeZone::get_CurrentTimeZone()
 TimeZone_t1862 * TimeZone_get_CurrentTimeZone_m6386 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.TimeZone::GetDaylightChanges(System.Int32)
// System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime)
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime)
 bool TimeZone_IsDaylightSavingTime_m11916 (TimeZone_t1862 * __this, DateTime_t1141  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime,System.Globalization.DaylightTime)
 bool TimeZone_IsDaylightSavingTime_m11917 (Object_t * __this/* static, unused */, DateTime_t1141  ___time, DaylightTime_t2202 * ___daylightTimes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToLocalTime(System.DateTime)
 DateTime_t1141  TimeZone_ToLocalTime_m6387 (TimeZone_t1862 * __this, DateTime_t1141  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToUniversalTime(System.DateTime)
 DateTime_t1141  TimeZone_ToUniversalTime_m11918 (TimeZone_t1862 * __this, DateTime_t1141  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime)
 TimeSpan_t143  TimeZone_GetLocalTimeDiff_m11919 (TimeZone_t1862 * __this, DateTime_t1141  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime,System.TimeSpan)
 TimeSpan_t143  TimeZone_GetLocalTimeDiff_m11920 (TimeZone_t1862 * __this, DateTime_t1141  ___time, TimeSpan_t143  ___utc_offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
