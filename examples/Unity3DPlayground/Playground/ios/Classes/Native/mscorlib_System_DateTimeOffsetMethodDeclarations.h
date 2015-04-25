#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DateTimeOffset
struct DateTimeOffset_t3917;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t3366;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.DateTimeOffset::.ctor(System.DateTime)
 void DateTimeOffset__ctor_m13099 (DateTimeOffset_t3917 * __this, DateTime_t2501  ___dateTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.DateTime,System.TimeSpan)
 void DateTimeOffset__ctor_m13100 (DateTimeOffset_t3917 * __this, DateTime_t2501  ___dateTime, TimeSpan_t164  ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Int64,System.TimeSpan)
 void DateTimeOffset__ctor_m13101 (DateTimeOffset_t3917 * __this, int64_t ___ticks, TimeSpan_t164  ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void DateTimeOffset__ctor_m13102 (DateTimeOffset_t3917 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.cctor()
 void DateTimeOffset__cctor_m13103 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::System.IComparable.CompareTo(System.Object)
 int32_t DateTimeOffset_System_IComparable_CompareTo_m13104 (DateTimeOffset_t3917 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void DateTimeOffset_System_Runtime_Serialization_ISerializable_GetObjectData_m13105 (DateTimeOffset_t3917 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
 void DateTimeOffset_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m13106 (DateTimeOffset_t3917 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::CompareTo(System.DateTimeOffset)
 int32_t DateTimeOffset_CompareTo_m13107 (DateTimeOffset_t3917 * __this, DateTimeOffset_t3917  ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.DateTimeOffset)
 bool DateTimeOffset_Equals_m13108 (DateTimeOffset_t3917 * __this, DateTimeOffset_t3917  ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.Object)
 bool DateTimeOffset_Equals_m13109 (DateTimeOffset_t3917 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::GetHashCode()
 int32_t DateTimeOffset_GetHashCode_m13110 (DateTimeOffset_t3917 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString()
 String_t* DateTimeOffset_ToString_m13111 (DateTimeOffset_t3917 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString(System.String,System.IFormatProvider)
 String_t* DateTimeOffset_ToString_m13112 (DateTimeOffset_t3917 * __this, String_t* ___format, Object_t * ___formatProvider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_DateTime()
 DateTime_t2501  DateTimeOffset_get_DateTime_m13113 (DateTimeOffset_t3917 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTimeOffset::get_Offset()
 TimeSpan_t164  DateTimeOffset_get_Offset_m13114 (DateTimeOffset_t3917 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_UtcDateTime()
 DateTime_t2501  DateTimeOffset_get_UtcDateTime_m13115 (DateTimeOffset_t3917 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
