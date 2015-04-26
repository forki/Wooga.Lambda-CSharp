#pragma once

// System.Net.FileWebRequest/GetResponseCallback
struct GetResponseCallback_t1628;
// System.Object
struct Object_t;
// System.Net.WebResponse
struct WebResponse_t1066;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.FileWebRequest/GetResponseCallback::.ctor(System.Object,System.IntPtr)
 void GetResponseCallback__ctor_m4841 (GetResponseCallback_t1628 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest/GetResponseCallback::Invoke()
 WebResponse_t1066 * GetResponseCallback_Invoke_m4842 (GetResponseCallback_t1628 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FileWebRequest/GetResponseCallback::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * GetResponseCallback_BeginInvoke_m4843 (GetResponseCallback_t1628 * __this, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest/GetResponseCallback::EndInvoke(System.IAsyncResult)
 WebResponse_t1066 * GetResponseCallback_EndInvoke_m4844 (GetResponseCallback_t1628 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
