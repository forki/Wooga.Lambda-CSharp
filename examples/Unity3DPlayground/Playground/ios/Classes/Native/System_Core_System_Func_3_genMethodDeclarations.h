#pragma once

// System.Func`3<Wooga.Lambda.Network.HttpClient,Wooga.Lambda.Network.HttpRequest,Wooga.Lambda.Network.HttpResponse>
struct Func_3_t1031;
// System.Object
struct Object_t;
// Wooga.Lambda.Network.HttpClient
struct HttpClient_t144;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Wooga.Lambda.Network.HttpResponse
#include "Wooga_Lambda_Network_Wooga_Lambda_Network_HttpResponse.h"
// Wooga.Lambda.Network.HttpRequest
#include "Wooga_Lambda_Network_Wooga_Lambda_Network_HttpRequest.h"

// System.Void System.Func`3<Wooga.Lambda.Network.HttpClient,Wooga.Lambda.Network.HttpRequest,Wooga.Lambda.Network.HttpResponse>::.ctor(System.Object,System.IntPtr)
 void Func_3__ctor_m3009 (Func_3_t1031 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`3<Wooga.Lambda.Network.HttpClient,Wooga.Lambda.Network.HttpRequest,Wooga.Lambda.Network.HttpResponse>::Invoke(T1,T2)
 HttpResponse_t1030  Func_3_Invoke_m2975 (Func_3_t1031 * __this, HttpClient_t144 * ___arg1, HttpRequest_t1029  ___arg2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`3<Wooga.Lambda.Network.HttpClient,Wooga.Lambda.Network.HttpRequest,Wooga.Lambda.Network.HttpResponse>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
 Object_t * Func_3_BeginInvoke_m20860 (Func_3_t1031 * __this, HttpClient_t144 * ___arg1, HttpRequest_t1029  ___arg2, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`3<Wooga.Lambda.Network.HttpClient,Wooga.Lambda.Network.HttpRequest,Wooga.Lambda.Network.HttpResponse>::EndInvoke(System.IAsyncResult)
 HttpResponse_t1030  Func_3_EndInvoke_m20861 (Func_3_t1031 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
