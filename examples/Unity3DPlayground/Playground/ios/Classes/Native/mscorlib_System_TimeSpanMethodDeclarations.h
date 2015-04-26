#pragma once

// System.TimeSpan
struct TimeSpan_t143;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.TimeSpan::.ctor(System.Int64)
 void TimeSpan__ctor_m11879 (TimeSpan_t143 * __this, int64_t ___ticks, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
 void TimeSpan__ctor_m11880 (TimeSpan_t143 * __this, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 void TimeSpan__ctor_m11881 (TimeSpan_t143 * __this, int32_t ___days, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, int32_t ___milliseconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.cctor()
 void TimeSpan__cctor_m11882 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::CalculateTicks(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 int64_t TimeSpan_CalculateTicks_m11883 (Object_t * __this/* static, unused */, int32_t ___days, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, int32_t ___milliseconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Days()
 int32_t TimeSpan_get_Days_m11884 (TimeSpan_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Hours()
 int32_t TimeSpan_get_Hours_m11885 (TimeSpan_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Milliseconds()
 int32_t TimeSpan_get_Milliseconds_m11886 (TimeSpan_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Minutes()
 int32_t TimeSpan_get_Minutes_m11887 (TimeSpan_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Seconds()
 int32_t TimeSpan_get_Seconds_m11888 (TimeSpan_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::get_Ticks()
 int64_t TimeSpan_get_Ticks_m6321 (TimeSpan_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalDays()
 double TimeSpan_get_TotalDays_m11889 (TimeSpan_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalHours()
 double TimeSpan_get_TotalHours_m11890 (TimeSpan_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalMilliseconds()
 double TimeSpan_get_TotalMilliseconds_m11891 (TimeSpan_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalMinutes()
 double TimeSpan_get_TotalMinutes_m11892 (TimeSpan_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalSeconds()
 double TimeSpan_get_TotalSeconds_m405 (TimeSpan_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Add(System.TimeSpan)
 TimeSpan_t143  TimeSpan_Add_m11893 (TimeSpan_t143 * __this, TimeSpan_t143  ___ts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::Compare(System.TimeSpan,System.TimeSpan)
 int32_t TimeSpan_Compare_m11894 (Object_t * __this/* static, unused */, TimeSpan_t143  ___t1, TimeSpan_t143  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::CompareTo(System.Object)
 int32_t TimeSpan_CompareTo_m11895 (TimeSpan_t143 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::CompareTo(System.TimeSpan)
 int32_t TimeSpan_CompareTo_m11896 (TimeSpan_t143 * __this, TimeSpan_t143  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::Equals(System.TimeSpan)
 bool TimeSpan_Equals_m11897 (TimeSpan_t143 * __this, TimeSpan_t143  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Duration()
 TimeSpan_t143  TimeSpan_Duration_m11898 (TimeSpan_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::Equals(System.Object)
 bool TimeSpan_Equals_m11899 (TimeSpan_t143 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromMinutes(System.Double)
 TimeSpan_t143  TimeSpan_FromMinutes_m11900 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::From(System.Double,System.Int64)
 TimeSpan_t143  TimeSpan_From_m11901 (Object_t * __this/* static, unused */, double ___value, int64_t ___tickMultiplicator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromTicks(System.Int64)
 TimeSpan_t143  TimeSpan_FromTicks_m6180 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::GetHashCode()
 int32_t TimeSpan_GetHashCode_m11902 (TimeSpan_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Negate()
 TimeSpan_t143  TimeSpan_Negate_m11903 (TimeSpan_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Subtract(System.TimeSpan)
 TimeSpan_t143  TimeSpan_Subtract_m11904 (TimeSpan_t143 * __this, TimeSpan_t143  ___ts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeSpan::ToString()
 String_t* TimeSpan_ToString_m11905 (TimeSpan_t143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Addition(System.TimeSpan,System.TimeSpan)
 TimeSpan_t143  TimeSpan_op_Addition_m11906 (Object_t * __this/* static, unused */, TimeSpan_t143  ___t1, TimeSpan_t143  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_Equality_m11907 (Object_t * __this/* static, unused */, TimeSpan_t143  ___t1, TimeSpan_t143  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThan(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_GreaterThan_m11908 (Object_t * __this/* static, unused */, TimeSpan_t143  ___t1, TimeSpan_t143  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThanOrEqual(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_GreaterThanOrEqual_m11909 (Object_t * __this/* static, unused */, TimeSpan_t143  ___t1, TimeSpan_t143  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Inequality(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_Inequality_m11910 (Object_t * __this/* static, unused */, TimeSpan_t143  ___t1, TimeSpan_t143  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThan(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_LessThan_m11911 (Object_t * __this/* static, unused */, TimeSpan_t143  ___t1, TimeSpan_t143  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThanOrEqual(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_LessThanOrEqual_m11912 (Object_t * __this/* static, unused */, TimeSpan_t143  ___t1, TimeSpan_t143  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Subtraction(System.TimeSpan,System.TimeSpan)
 TimeSpan_t143  TimeSpan_op_Subtraction_m11913 (Object_t * __this/* static, unused */, TimeSpan_t143  ___t1, TimeSpan_t143  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
