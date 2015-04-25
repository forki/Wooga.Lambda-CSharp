#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Wooga.Lambda.Control.Concurrent.Async`1<System.Int32>
struct Async_1_t148;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Wooga.Lambda.Control.Concurrent.Async`1<System.Int32>::.ctor(System.Object,System.IntPtr)
 void Async_1__ctor_m544 (Async_1_t148 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Wooga.Lambda.Control.Concurrent.Async`1<System.Int32>::Invoke()
 int32_t Async_1_Invoke_m16052 (Async_1_t148 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Wooga.Lambda.Control.Concurrent.Async`1<System.Int32>::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * Async_1_BeginInvoke_m16053 (Async_1_t148 * __this, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Wooga.Lambda.Control.Concurrent.Async`1<System.Int32>::EndInvoke(System.IAsyncResult)
 int32_t Async_1_EndInvoke_m16054 (Async_1_t148 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
