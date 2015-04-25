#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t306;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t3394;
// System.Delegate
struct Delegate_t447;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MulticastDelegate_GetObjectData_m2115 (MulticastDelegate_t306 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
 bool MulticastDelegate_Equals_m2112 (MulticastDelegate_t306 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
 int32_t MulticastDelegate_GetHashCode_m2113 (MulticastDelegate_t306 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
 DelegateU5BU5D_t3394* MulticastDelegate_GetInvocationList_m2116 (MulticastDelegate_t306 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
 Delegate_t447 * MulticastDelegate_CombineImpl_m2117 (MulticastDelegate_t306 * __this, Delegate_t447 * ___follow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
 bool MulticastDelegate_BaseEquals_m9537 (MulticastDelegate_t306 * __this, MulticastDelegate_t306 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
 MulticastDelegate_t306 * MulticastDelegate_KPM_m9538 (Object_t * __this/* static, unused */, MulticastDelegate_t306 * ___needle, MulticastDelegate_t306 * ___haystack, MulticastDelegate_t306 ** ___tail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
 Delegate_t447 * MulticastDelegate_RemoveImpl_m2118 (MulticastDelegate_t306 * __this, Delegate_t447 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
