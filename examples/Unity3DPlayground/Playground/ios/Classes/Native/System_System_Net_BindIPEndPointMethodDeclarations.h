#pragma once

// System.Net.BindIPEndPoint
struct BindIPEndPoint_t1663;
// System.Object
struct Object_t;
// System.Net.IPEndPoint
struct IPEndPoint_t1644;
// System.Net.ServicePoint
struct ServicePoint_t1616;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.BindIPEndPoint::.ctor(System.Object,System.IntPtr)
 void BindIPEndPoint__ctor_m6090 (BindIPEndPoint_t1663 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.BindIPEndPoint::Invoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32)
 IPEndPoint_t1644 * BindIPEndPoint_Invoke_m6091 (BindIPEndPoint_t1663 * __this, ServicePoint_t1616 * ___servicePoint, IPEndPoint_t1644 * ___remoteEndPoint, int32_t ___retryCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.BindIPEndPoint::BeginInvoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32,System.AsyncCallback,System.Object)
 Object_t * BindIPEndPoint_BeginInvoke_m6092 (BindIPEndPoint_t1663 * __this, ServicePoint_t1616 * ___servicePoint, IPEndPoint_t1644 * ___remoteEndPoint, int32_t ___retryCount, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.BindIPEndPoint::EndInvoke(System.IAsyncResult)
 IPEndPoint_t1644 * BindIPEndPoint_EndInvoke_m6093 (BindIPEndPoint_t1663 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
