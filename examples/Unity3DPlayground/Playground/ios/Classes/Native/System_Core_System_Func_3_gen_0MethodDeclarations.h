#pragma once

// System.Func`3<System.Net.WebHeaderCollection,Wooga.Lambda.Network.HttpHeader,System.Net.WebHeaderCollection>
struct Func_3_t1054;
// System.Object
struct Object_t;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1051;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Wooga.Lambda.Network.HttpHeader
#include "Wooga_Lambda_Network_Wooga_Lambda_Network_HttpHeader.h"

// System.Void System.Func`3<System.Net.WebHeaderCollection,Wooga.Lambda.Network.HttpHeader,System.Net.WebHeaderCollection>::.ctor(System.Object,System.IntPtr)
 void Func_3__ctor_m3025 (Func_3_t1054 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`3<System.Net.WebHeaderCollection,Wooga.Lambda.Network.HttpHeader,System.Net.WebHeaderCollection>::Invoke(T1,T2)
 WebHeaderCollection_t1051 * Func_3_Invoke_m21381 (Func_3_t1054 * __this, WebHeaderCollection_t1051 * ___arg1, HttpHeader_t1034  ___arg2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`3<System.Net.WebHeaderCollection,Wooga.Lambda.Network.HttpHeader,System.Net.WebHeaderCollection>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
 Object_t * Func_3_BeginInvoke_m21382 (Func_3_t1054 * __this, WebHeaderCollection_t1051 * ___arg1, HttpHeader_t1034  ___arg2, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`3<System.Net.WebHeaderCollection,Wooga.Lambda.Network.HttpHeader,System.Net.WebHeaderCollection>::EndInvoke(System.IAsyncResult)
 WebHeaderCollection_t1051 * Func_3_EndInvoke_m21383 (Func_3_t1054 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
