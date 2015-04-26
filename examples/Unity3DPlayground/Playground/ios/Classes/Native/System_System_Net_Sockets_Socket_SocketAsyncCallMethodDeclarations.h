#pragma once

// System.Net.Sockets.Socket/SocketAsyncCall
struct SocketAsyncCall_t1586;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.Sockets.Socket/SocketAsyncCall::.ctor(System.Object,System.IntPtr)
 void SocketAsyncCall__ctor_m4611 (SocketAsyncCall_t1586 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncCall::Invoke()
 void SocketAsyncCall_Invoke_m4612 (SocketAsyncCall_t1586 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket/SocketAsyncCall::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * SocketAsyncCall_BeginInvoke_m4613 (SocketAsyncCall_t1586 * __this, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncCall::EndInvoke(System.IAsyncResult)
 void SocketAsyncCall_EndInvoke_m4614 (SocketAsyncCall_t1586 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
