#pragma once

// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse>
struct Async_1_t142;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Wooga.Lambda.Network.HttpResponse
#include "Wooga_Lambda_Network_Wooga_Lambda_Network_HttpResponse.h"

// System.Void Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse>::.ctor(System.Object,System.IntPtr)
 void Async_1__ctor_m2976 (Async_1_t142 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse>::Invoke()
 HttpResponse_t1030  Async_1_Invoke_m13724 (Async_1_t142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse>::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * Async_1_BeginInvoke_m13725 (Async_1_t142 * __this, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse>::EndInvoke(System.IAsyncResult)
 HttpResponse_t1030  Async_1_EndInvoke_m13726 (Async_1_t142 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
