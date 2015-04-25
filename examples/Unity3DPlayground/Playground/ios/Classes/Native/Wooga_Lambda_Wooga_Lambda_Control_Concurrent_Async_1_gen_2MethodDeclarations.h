#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Wooga.Lambda.Control.Concurrent.Async`1<System.Object>
struct Async_1_t162;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Wooga.Lambda.Control.Concurrent.Async`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void Async_1__ctor_m16585_gshared (Async_1_t162 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method);
#define Async_1__ctor_m16585(__this, ___object, ___method, method) (void)Async_1__ctor_m16585_gshared((Async_1_t162 *)__this, (Object_t *)___object, (IntPtr_t31)___method, method)
// T Wooga.Lambda.Control.Concurrent.Async`1<System.Object>::Invoke()
 Object_t * Async_1_Invoke_m16587_gshared (Async_1_t162 * __this, MethodInfo* method);
#define Async_1_Invoke_m16587(__this, method) (Object_t *)Async_1_Invoke_m16587_gshared((Async_1_t162 *)__this, method)
// System.IAsyncResult Wooga.Lambda.Control.Concurrent.Async`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * Async_1_BeginInvoke_m16589_gshared (Async_1_t162 * __this, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method);
#define Async_1_BeginInvoke_m16589(__this, ___callback, ___object, method) (Object_t *)Async_1_BeginInvoke_m16589_gshared((Async_1_t162 *)__this, (AsyncCallback_t184 *)___callback, (Object_t *)___object, method)
// T Wooga.Lambda.Control.Concurrent.Async`1<System.Object>::EndInvoke(System.IAsyncResult)
 Object_t * Async_1_EndInvoke_m16591_gshared (Async_1_t162 * __this, Object_t * ___result, MethodInfo* method);
#define Async_1_EndInvoke_m16591(__this, ___result, method) (Object_t *)Async_1_EndInvoke_m16591_gshared((Async_1_t162 *)__this, (Object_t *)___result, method)
