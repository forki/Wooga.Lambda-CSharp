#pragma once

// Wooga.Lambda.Control.Concurrent.Async`1<System.Object>
struct Async_1_t134;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Wooga.Lambda.Control.Concurrent.Async`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void Async_1__ctor_m13696_gshared (Async_1_t134 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method);
#define Async_1__ctor_m13696(__this, ___object, ___method, method) (void)Async_1__ctor_m13696_gshared((Async_1_t134 *)__this, (Object_t *)___object, (IntPtr_t37)___method, method)
// T Wooga.Lambda.Control.Concurrent.Async`1<System.Object>::Invoke()
 Object_t * Async_1_Invoke_m13698_gshared (Async_1_t134 * __this, MethodInfo* method);
#define Async_1_Invoke_m13698(__this, method) (Object_t *)Async_1_Invoke_m13698_gshared((Async_1_t134 *)__this, method)
// System.IAsyncResult Wooga.Lambda.Control.Concurrent.Async`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * Async_1_BeginInvoke_m13700_gshared (Async_1_t134 * __this, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method);
#define Async_1_BeginInvoke_m13700(__this, ___callback, ___object, method) (Object_t *)Async_1_BeginInvoke_m13700_gshared((Async_1_t134 *)__this, (AsyncCallback_t189 *)___callback, (Object_t *)___object, method)
// T Wooga.Lambda.Control.Concurrent.Async`1<System.Object>::EndInvoke(System.IAsyncResult)
 Object_t * Async_1_EndInvoke_m13702_gshared (Async_1_t134 * __this, Object_t * ___result, MethodInfo* method);
#define Async_1_EndInvoke_m13702(__this, ___result, method) (Object_t *)Async_1_EndInvoke_m13702_gshared((Async_1_t134 *)__this, (Object_t *)___result, method)
