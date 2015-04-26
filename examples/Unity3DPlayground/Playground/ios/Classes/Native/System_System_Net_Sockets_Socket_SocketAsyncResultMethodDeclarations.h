#pragma once

// System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t1584;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t533;
// System.Net.Sockets.Socket
struct Socket_t1576;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.Collections.Queue
struct Queue_t1585;
// System.Net.Sockets.Socket/SocketAsyncCall
struct SocketAsyncCall_t1586;
// System.Net.Sockets.Socket/Worker
struct Worker_t1587;
// System.Exception
struct Exception_t121;
// System.Net.Sockets.SocketError
#include "System_System_Net_Sockets_SocketError.h"
// System.Net.Sockets.Socket/SocketOperation
#include "System_System_Net_Sockets_Socket_SocketOperation.h"

// System.Void System.Net.Sockets.Socket/SocketAsyncResult::.ctor(System.Net.Sockets.Socket,System.Object,System.AsyncCallback,System.Net.Sockets.Socket/SocketOperation)
 void SocketAsyncResult__ctor_m4589 (SocketAsyncResult_t1584 * __this, Socket_t1576 * ___sock, Object_t * ___state, AsyncCallback_t189 * ___callback, int32_t ___operation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CheckIfThrowDelayedException()
 void SocketAsyncResult_CheckIfThrowDelayedException_m4590 (SocketAsyncResult_t1584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CompleteAllOnDispose(System.Collections.Queue)
 void SocketAsyncResult_CompleteAllOnDispose_m4591 (SocketAsyncResult_t1584 * __this, Queue_t1585 * ___queue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CompleteDisposed(System.Object)
 void SocketAsyncResult_CompleteDisposed_m4592 (SocketAsyncResult_t1584 * __this, Object_t * ___unused, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete()
 void SocketAsyncResult_Complete_m4593 (SocketAsyncResult_t1584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket/SocketAsyncCall System.Net.Sockets.Socket/SocketAsyncResult::GetDelegate(System.Net.Sockets.Socket/Worker,System.Net.Sockets.Socket/SocketOperation)
 SocketAsyncCall_t1586 * SocketAsyncResult_GetDelegate_m4594 (SocketAsyncResult_t1584 * __this, Worker_t1587 * ___worker, int32_t ___op, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Int32)
 void SocketAsyncResult_Complete_m4595 (SocketAsyncResult_t1584 * __this, int32_t ___total, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Exception)
 void SocketAsyncResult_Complete_m4596 (SocketAsyncResult_t1584 * __this, Exception_t121 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Sockets.Socket/SocketAsyncResult::get_AsyncState()
 Object_t * SocketAsyncResult_get_AsyncState_m4597 (SocketAsyncResult_t1584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.Sockets.Socket/SocketAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t533 * SocketAsyncResult_get_AsyncWaitHandle_m4598 (SocketAsyncResult_t1584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::get_IsCompleted()
 bool SocketAsyncResult_get_IsCompleted_m4599 (SocketAsyncResult_t1584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::set_IsCompleted(System.Boolean)
 void SocketAsyncResult_set_IsCompleted_m4600 (SocketAsyncResult_t1584 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::get_Total()
 int32_t SocketAsyncResult_get_Total_m4601 (SocketAsyncResult_t1584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::set_Total(System.Int32)
 void SocketAsyncResult_set_Total_m4602 (SocketAsyncResult_t1584 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketError System.Net.Sockets.Socket/SocketAsyncResult::get_ErrorCode()
 int32_t SocketAsyncResult_get_ErrorCode_m4603 (SocketAsyncResult_t1584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
