#pragma once

// System.Net.FileWebRequest/GetRequestStreamCallback
struct GetRequestStreamCallback_t1627;
// System.Object
struct Object_t;
// System.IO.Stream
struct Stream_t1049;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.FileWebRequest/GetRequestStreamCallback::.ctor(System.Object,System.IntPtr)
 void GetRequestStreamCallback__ctor_m4837 (GetRequestStreamCallback_t1627 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FileWebRequest/GetRequestStreamCallback::Invoke()
 Stream_t1049 * GetRequestStreamCallback_Invoke_m4838 (GetRequestStreamCallback_t1627 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FileWebRequest/GetRequestStreamCallback::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * GetRequestStreamCallback_BeginInvoke_m4839 (GetRequestStreamCallback_t1627 * __this, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FileWebRequest/GetRequestStreamCallback::EndInvoke(System.IAsyncResult)
 Stream_t1049 * GetRequestStreamCallback_EndInvoke_m4840 (GetRequestStreamCallback_t1627 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
