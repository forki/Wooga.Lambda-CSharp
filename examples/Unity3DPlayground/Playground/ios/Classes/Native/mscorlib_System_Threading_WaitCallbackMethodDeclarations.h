#pragma once

// System.Threading.WaitCallback
struct WaitCallback_t1676;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
 void WaitCallback__ctor_m6237 (WaitCallback_t1676 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitCallback::Invoke(System.Object)
 void WaitCallback_Invoke_m11984 (WaitCallback_t1676 * __this, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Threading.WaitCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
 Object_t * WaitCallback_BeginInvoke_m11985 (WaitCallback_t1676 * __this, Object_t * ___state, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitCallback::EndInvoke(System.IAsyncResult)
 void WaitCallback_EndInvoke_m11986 (WaitCallback_t1676 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
