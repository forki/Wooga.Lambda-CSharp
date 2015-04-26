#pragma once

// System.Func`2<Wooga.Lambda.Network.HttpRequest,Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse>>
struct Func_2_t1032;
// System.Object
struct Object_t;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse>
struct Async_1_t142;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Wooga.Lambda.Network.HttpRequest
#include "Wooga_Lambda_Network_Wooga_Lambda_Network_HttpRequest.h"

// System.Void System.Func`2<Wooga.Lambda.Network.HttpRequest,Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse>>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m2977 (Func_2_t1032 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<Wooga.Lambda.Network.HttpRequest,Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse>>::Invoke(T)
 Async_1_t142 * Func_2_Invoke_m2979 (Func_2_t1032 * __this, HttpRequest_t1029  ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<Wooga.Lambda.Network.HttpRequest,Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse>>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m20858 (Func_2_t1032 * __this, HttpRequest_t1029  ___arg1, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<Wooga.Lambda.Network.HttpRequest,Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse>>::EndInvoke(System.IAsyncResult)
 Async_1_t142 * Func_2_EndInvoke_m20859 (Func_2_t1032 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
