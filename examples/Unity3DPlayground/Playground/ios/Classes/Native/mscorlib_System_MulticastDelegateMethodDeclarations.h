#pragma once

// System.MulticastDelegate
struct MulticastDelegate_t311;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t2035;
// System.Delegate
struct Delegate_t452;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MulticastDelegate_GetObjectData_m2120 (MulticastDelegate_t311 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
 bool MulticastDelegate_Equals_m2118 (MulticastDelegate_t311 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
 int32_t MulticastDelegate_GetHashCode_m2119 (MulticastDelegate_t311 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
 DelegateU5BU5D_t2035* MulticastDelegate_GetInvocationList_m2122 (MulticastDelegate_t311 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
 Delegate_t452 * MulticastDelegate_CombineImpl_m2123 (MulticastDelegate_t311 * __this, Delegate_t452 * ___follow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
 bool MulticastDelegate_BaseEquals_m8148 (MulticastDelegate_t311 * __this, MulticastDelegate_t311 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
 MulticastDelegate_t311 * MulticastDelegate_KPM_m8149 (Object_t * __this/* static, unused */, MulticastDelegate_t311 * ___needle, MulticastDelegate_t311 * ___haystack, MulticastDelegate_t311 ** ___tail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
 Delegate_t452 * MulticastDelegate_RemoveImpl_m2124 (MulticastDelegate_t311 * __this, Delegate_t452 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
