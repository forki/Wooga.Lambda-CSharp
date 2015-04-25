#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TimeSpan
struct TimeSpan_t164;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.TimeSpan::.ctor(System.Int64)
 void TimeSpan__ctor_m13436 (TimeSpan_t164 * __this, int64_t ___ticks, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
 void TimeSpan__ctor_m13437 (TimeSpan_t164 * __this, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 void TimeSpan__ctor_m13438 (TimeSpan_t164 * __this, int32_t ___days, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, int32_t ___milliseconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.cctor()
 void TimeSpan__cctor_m13439 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::CalculateTicks(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 int64_t TimeSpan_CalculateTicks_m13440 (Object_t * __this/* static, unused */, int32_t ___days, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, int32_t ___milliseconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Days()
 int32_t TimeSpan_get_Days_m13441 (TimeSpan_t164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Hours()
 int32_t TimeSpan_get_Hours_m13442 (TimeSpan_t164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Milliseconds()
 int32_t TimeSpan_get_Milliseconds_m556 (TimeSpan_t164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Minutes()
 int32_t TimeSpan_get_Minutes_m13443 (TimeSpan_t164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Seconds()
 int32_t TimeSpan_get_Seconds_m13444 (TimeSpan_t164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::get_Ticks()
 int64_t TimeSpan_get_Ticks_m13445 (TimeSpan_t164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalDays()
 double TimeSpan_get_TotalDays_m13446 (TimeSpan_t164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalHours()
 double TimeSpan_get_TotalHours_m13447 (TimeSpan_t164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalMilliseconds()
 double TimeSpan_get_TotalMilliseconds_m13448 (TimeSpan_t164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalMinutes()
 double TimeSpan_get_TotalMinutes_m13449 (TimeSpan_t164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalSeconds()
 double TimeSpan_get_TotalSeconds_m13450 (TimeSpan_t164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Add(System.TimeSpan)
 TimeSpan_t164  TimeSpan_Add_m13451 (TimeSpan_t164 * __this, TimeSpan_t164  ___ts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::Compare(System.TimeSpan,System.TimeSpan)
 int32_t TimeSpan_Compare_m13452 (Object_t * __this/* static, unused */, TimeSpan_t164  ___t1, TimeSpan_t164  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::CompareTo(System.Object)
 int32_t TimeSpan_CompareTo_m13453 (TimeSpan_t164 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::CompareTo(System.TimeSpan)
 int32_t TimeSpan_CompareTo_m13454 (TimeSpan_t164 * __this, TimeSpan_t164  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::Equals(System.TimeSpan)
 bool TimeSpan_Equals_m13455 (TimeSpan_t164 * __this, TimeSpan_t164  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Duration()
 TimeSpan_t164  TimeSpan_Duration_m13456 (TimeSpan_t164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::Equals(System.Object)
 bool TimeSpan_Equals_m13457 (TimeSpan_t164 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromMinutes(System.Double)
 TimeSpan_t164  TimeSpan_FromMinutes_m13458 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::From(System.Double,System.Int64)
 TimeSpan_t164  TimeSpan_From_m13459 (Object_t * __this/* static, unused */, double ___value, int64_t ___tickMultiplicator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromTicks(System.Int64)
 TimeSpan_t164  TimeSpan_FromTicks_m7680 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::GetHashCode()
 int32_t TimeSpan_GetHashCode_m13460 (TimeSpan_t164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Negate()
 TimeSpan_t164  TimeSpan_Negate_m13461 (TimeSpan_t164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Subtract(System.TimeSpan)
 TimeSpan_t164  TimeSpan_Subtract_m13462 (TimeSpan_t164 * __this, TimeSpan_t164  ___ts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeSpan::ToString()
 String_t* TimeSpan_ToString_m13463 (TimeSpan_t164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Addition(System.TimeSpan,System.TimeSpan)
 TimeSpan_t164  TimeSpan_op_Addition_m13464 (Object_t * __this/* static, unused */, TimeSpan_t164  ___t1, TimeSpan_t164  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_Equality_m13465 (Object_t * __this/* static, unused */, TimeSpan_t164  ___t1, TimeSpan_t164  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThan(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_GreaterThan_m13466 (Object_t * __this/* static, unused */, TimeSpan_t164  ___t1, TimeSpan_t164  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThanOrEqual(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_GreaterThanOrEqual_m13467 (Object_t * __this/* static, unused */, TimeSpan_t164  ___t1, TimeSpan_t164  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Inequality(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_Inequality_m13468 (Object_t * __this/* static, unused */, TimeSpan_t164  ___t1, TimeSpan_t164  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThan(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_LessThan_m13469 (Object_t * __this/* static, unused */, TimeSpan_t164  ___t1, TimeSpan_t164  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThanOrEqual(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_LessThanOrEqual_m13470 (Object_t * __this/* static, unused */, TimeSpan_t164  ___t1, TimeSpan_t164  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Subtraction(System.TimeSpan,System.TimeSpan)
 TimeSpan_t164  TimeSpan_op_Subtraction_m13471 (Object_t * __this/* static, unused */, TimeSpan_t164  ___t1, TimeSpan_t164  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
