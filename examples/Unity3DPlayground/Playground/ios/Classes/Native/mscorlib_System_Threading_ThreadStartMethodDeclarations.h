#pragma once

// System.Threading.ThreadStart
struct ThreadStart_t1860;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
 void ThreadStart__ctor_m6353 (ThreadStart_t1860 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ThreadStart::Invoke()
 void ThreadStart_Invoke_m11981 (ThreadStart_t1860 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Threading.ThreadStart::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * ThreadStart_BeginInvoke_m11982 (ThreadStart_t1860 * __this, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ThreadStart::EndInvoke(System.IAsyncResult)
 void ThreadStart_EndInvoke_m11983 (ThreadStart_t1860 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
