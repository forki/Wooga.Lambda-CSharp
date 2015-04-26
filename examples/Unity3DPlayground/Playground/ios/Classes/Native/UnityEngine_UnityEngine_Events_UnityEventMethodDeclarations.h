#pragma once

// UnityEngine.Events.UnityEvent
struct UnityEvent_t254;
// System.Reflection.MethodInfo
struct MethodInfo_t1265;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1264;

// System.Void UnityEngine.Events.UnityEvent::.ctor()
 void UnityEvent__ctor_m1948 (UnityEvent_t254 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t1265 * UnityEvent_FindMethod_Impl_m1949 (UnityEvent_t254 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t1264 * UnityEvent_GetDelegate_m1950 (UnityEvent_t254 * __this, Object_t * ___target, MethodInfo_t1265 * ___theFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
 void UnityEvent_Invoke_m1952 (UnityEvent_t254 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
