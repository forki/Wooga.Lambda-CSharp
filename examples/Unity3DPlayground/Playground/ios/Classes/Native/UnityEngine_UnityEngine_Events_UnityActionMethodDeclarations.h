#pragma once

// UnityEngine.Events.UnityAction
struct UnityAction_t275;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
 void UnityAction__ctor_m2153 (UnityAction_t275 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction::Invoke()
 void UnityAction_Invoke_m1996 (UnityAction_t275 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * UnityAction_BeginInvoke_m4026 (UnityAction_t275 * __this, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
 void UnityAction_EndInvoke_m4027 (UnityAction_t275 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
