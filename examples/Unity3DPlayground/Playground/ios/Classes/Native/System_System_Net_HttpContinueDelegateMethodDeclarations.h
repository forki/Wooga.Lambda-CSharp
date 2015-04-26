#pragma once

// System.Net.HttpContinueDelegate
struct HttpContinueDelegate_t1650;
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

// System.Void System.Net.HttpContinueDelegate::.ctor(System.Object,System.IntPtr)
 void HttpContinueDelegate__ctor_m6094 (HttpContinueDelegate_t1650 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpContinueDelegate::Invoke(System.Int32,System.Net.WebHeaderCollection)
 void HttpContinueDelegate_Invoke_m6095 (HttpContinueDelegate_t1650 * __this, int32_t ___StatusCode, WebHeaderCollection_t1051 * ___httpHeaders, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.HttpContinueDelegate::BeginInvoke(System.Int32,System.Net.WebHeaderCollection,System.AsyncCallback,System.Object)
 Object_t * HttpContinueDelegate_BeginInvoke_m6096 (HttpContinueDelegate_t1650 * __this, int32_t ___StatusCode, WebHeaderCollection_t1051 * ___httpHeaders, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpContinueDelegate::EndInvoke(System.IAsyncResult)
 void HttpContinueDelegate_EndInvoke_m6097 (HttpContinueDelegate_t1650 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
