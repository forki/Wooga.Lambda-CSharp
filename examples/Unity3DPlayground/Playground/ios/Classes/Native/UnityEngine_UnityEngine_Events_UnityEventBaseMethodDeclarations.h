#pragma once

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t1274;
// System.Reflection.MethodInfo
struct MethodInfo_t1265;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1264;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t1273;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t149;
// System.Type[]
struct TypeU5BU5D_t1229;
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"

// System.Void UnityEngine.Events.UnityEventBase::.ctor()
 void UnityEventBase__ctor_m4004 (UnityEventBase_t1274 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
 void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m1790 (UnityEventBase_t1274 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
 void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m1791 (UnityEventBase_t1274 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
 MethodInfo_t1265 * UnityEventBase_FindMethod_m4005 (UnityEventBase_t1274 * __this, PersistentCall_t1273 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
 MethodInfo_t1265 * UnityEventBase_FindMethod_m4006 (UnityEventBase_t1274 * __this, String_t* ___name, Object_t * ___listener, int32_t ___mode, Type_t * ___argumentType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
 void UnityEventBase_DirtyPersistentCalls_m4007 (UnityEventBase_t1274 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
 void UnityEventBase_RebuildPersistentCallsIfNeeded_m4008 (UnityEventBase_t1274 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
 void UnityEventBase_AddCall_m4009 (UnityEventBase_t1274 * __this, BaseInvokableCall_t1264 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
 void UnityEventBase_RemoveListener_m4010 (UnityEventBase_t1274 * __this, Object_t * ___targetObj, MethodInfo_t1265 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
 void UnityEventBase_Invoke_m4011 (UnityEventBase_t1274 * __this, ObjectU5BU5D_t149* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.UnityEventBase::ToString()
 String_t* UnityEventBase_ToString_m1789 (UnityEventBase_t1274 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
 MethodInfo_t1265 * UnityEventBase_GetValidMethodInfo_m4012 (Object_t * __this/* static, unused */, Object_t * ___obj, String_t* ___functionName, TypeU5BU5D_t1229* ___argumentTypes, MethodInfo* method) IL2CPP_METHOD_ATTR;
