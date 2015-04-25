#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TimeZone
struct TimeZone_t3968;
// System.Globalization.DaylightTime
struct DaylightTime_t3560;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.TimeZone::.ctor()
 void TimeZone__ctor_m13472 (TimeZone_t3968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZone::.cctor()
 void TimeZone__cctor_m13473 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZone System.TimeZone::get_CurrentTimeZone()
 TimeZone_t3968 * TimeZone_get_CurrentTimeZone_m13474 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.TimeZone::GetDaylightChanges(System.Int32)
// System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime)
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime)
 bool TimeZone_IsDaylightSavingTime_m13475 (TimeZone_t3968 * __this, DateTime_t2501  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime,System.Globalization.DaylightTime)
 bool TimeZone_IsDaylightSavingTime_m13476 (Object_t * __this/* static, unused */, DateTime_t2501  ___time, DaylightTime_t3560 * ___daylightTimes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToLocalTime(System.DateTime)
 DateTime_t2501  TimeZone_ToLocalTime_m13477 (TimeZone_t3968 * __this, DateTime_t2501  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToUniversalTime(System.DateTime)
 DateTime_t2501  TimeZone_ToUniversalTime_m13478 (TimeZone_t3968 * __this, DateTime_t2501  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime)
 TimeSpan_t164  TimeZone_GetLocalTimeDiff_m13479 (TimeZone_t3968 * __this, DateTime_t2501  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime,System.TimeSpan)
 TimeSpan_t164  TimeZone_GetLocalTimeDiff_m13480 (TimeZone_t3968 * __this, DateTime_t2501  ___time, TimeSpan_t164  ___utc_offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
