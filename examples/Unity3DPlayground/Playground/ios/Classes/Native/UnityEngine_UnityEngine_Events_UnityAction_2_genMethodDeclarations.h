#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_t6246;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
 void UnityAction_2__ctor_m27610_gshared (UnityAction_2_t6246 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method);
#define UnityAction_2__ctor_m27610(__this, ___object, ___method, method) (void)UnityAction_2__ctor_m27610_gshared((UnityAction_2_t6246 *)__this, (Object_t *)___object, (IntPtr_t31)___method, method)
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
 void UnityAction_2_Invoke_m27611_gshared (UnityAction_2_t6246 * __this, Object_t * ___arg0, Object_t * ___arg1, MethodInfo* method);
#define UnityAction_2_Invoke_m27611(__this, ___arg0, ___arg1, method) (void)UnityAction_2_Invoke_m27611_gshared((UnityAction_2_t6246 *)__this, (Object_t *)___arg0, (Object_t *)___arg1, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Object>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
 Object_t * UnityAction_2_BeginInvoke_m27612_gshared (UnityAction_2_t6246 * __this, Object_t * ___arg0, Object_t * ___arg1, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_2_BeginInvoke_m27612(__this, ___arg0, ___arg1, ___callback, ___object, method) (Object_t *)UnityAction_2_BeginInvoke_m27612_gshared((UnityAction_2_t6246 *)__this, (Object_t *)___arg0, (Object_t *)___arg1, (AsyncCallback_t184 *)___callback, (Object_t *)___object, method)
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
 void UnityAction_2_EndInvoke_m27613_gshared (UnityAction_2_t6246 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_2_EndInvoke_m27613(__this, ___result, method) (void)UnityAction_2_EndInvoke_m27613_gshared((UnityAction_2_t6246 *)__this, (Object_t *)___result, method)
