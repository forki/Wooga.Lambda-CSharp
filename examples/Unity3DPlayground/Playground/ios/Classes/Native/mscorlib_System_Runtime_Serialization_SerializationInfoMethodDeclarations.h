#pragma once

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Type
struct Type_t;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2425;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t2426;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Runtime.Serialization.SerializationInfo::.ctor(System.Type,System.Runtime.Serialization.IFormatterConverter)
 void SerializationInfo__ctor_m10450 (SerializationInfo_t1255 * __this, Type_t * ___type, Object_t * ___converter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object,System.Type)
 void SerializationInfo_AddValue_m6159 (SerializationInfo_t1255 * __this, String_t* ___name, Object_t * ___value, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
 Object_t * SerializationInfo_GetValue_m6162 (SerializationInfo_t1255 * __this, String_t* ___name, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::SetType(System.Type)
 void SerializationInfo_SetType_m10451 (SerializationInfo_t1255 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationInfoEnumerator System.Runtime.Serialization.SerializationInfo::GetEnumerator()
 SerializationInfoEnumerator_t2426 * SerializationInfo_GetEnumerator_m10452 (SerializationInfo_t1255 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int16)
 void SerializationInfo_AddValue_m10453 (SerializationInfo_t1255 * __this, String_t* ___name, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
 void SerializationInfo_AddValue_m6161 (SerializationInfo_t1255 * __this, String_t* ___name, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
 void SerializationInfo_AddValue_m6160 (SerializationInfo_t1255 * __this, String_t* ___name, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.DateTime)
 void SerializationInfo_AddValue_m10454 (SerializationInfo_t1255 * __this, String_t* ___name, DateTime_t1141  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Single)
 void SerializationInfo_AddValue_m10455 (SerializationInfo_t1255 * __this, String_t* ___name, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int64)
 void SerializationInfo_AddValue_m6350 (SerializationInfo_t1255 * __this, String_t* ___name, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.UInt64)
 void SerializationInfo_AddValue_m10456 (SerializationInfo_t1255 * __this, String_t* ___name, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
 void SerializationInfo_AddValue_m6349 (SerializationInfo_t1255 * __this, String_t* ___name, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
 bool SerializationInfo_GetBoolean_m6164 (SerializationInfo_t1255 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Runtime.Serialization.SerializationInfo::GetInt16(System.String)
 int16_t SerializationInfo_GetInt16_m10457 (SerializationInfo_t1255 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
 int32_t SerializationInfo_GetInt32_m6178 (SerializationInfo_t1255 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Runtime.Serialization.SerializationInfo::GetInt64(System.String)
 int64_t SerializationInfo_GetInt64_m6345 (SerializationInfo_t1255 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationInfo::GetString(System.String)
 String_t* SerializationInfo_GetString_m6344 (SerializationInfo_t1255 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
