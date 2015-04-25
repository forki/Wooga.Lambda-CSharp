#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t4430;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void UnityAction_1__ctor_m14320_gshared (UnityAction_1_t4430 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method);
#define UnityAction_1__ctor_m14320(__this, ___object, ___method, method) (void)UnityAction_1__ctor_m14320_gshared((UnityAction_1_t4430 *)__this, (Object_t *)___object, (IntPtr_t31)___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
 void UnityAction_1_Invoke_m14321_gshared (UnityAction_1_t4430 * __this, Object_t * ___arg0, MethodInfo* method);
#define UnityAction_1_Invoke_m14321(__this, ___arg0, method) (void)UnityAction_1_Invoke_m14321_gshared((UnityAction_1_t4430 *)__this, (Object_t *)___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
 Object_t * UnityAction_1_BeginInvoke_m14322_gshared (UnityAction_1_t4430 * __this, Object_t * ___arg0, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_1_BeginInvoke_m14322(__this, ___arg0, ___callback, ___object, method) (Object_t *)UnityAction_1_BeginInvoke_m14322_gshared((UnityAction_1_t4430 *)__this, (Object_t *)___arg0, (AsyncCallback_t184 *)___callback, (Object_t *)___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
 void UnityAction_1_EndInvoke_m14323_gshared (UnityAction_1_t4430 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_1_EndInvoke_m14323(__this, ___result, method) (void)UnityAction_1_EndInvoke_m14323_gshared((UnityAction_1_t4430 *)__this, (Object_t *)___result, method)
