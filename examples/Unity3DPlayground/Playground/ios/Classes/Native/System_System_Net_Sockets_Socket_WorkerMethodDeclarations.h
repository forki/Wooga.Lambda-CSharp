#pragma once

// System.Net.Sockets.Socket/Worker
struct Worker_t1587;
// System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t1584;

// System.Void System.Net.Sockets.Socket/Worker::.ctor(System.Net.Sockets.Socket/SocketAsyncResult)
 void Worker__ctor_m4604 (Worker_t1587 * __this, SocketAsyncResult_t1584 * ___ares, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::.ctor(System.Net.Sockets.Socket/SocketAsyncResult,System.Boolean)
 void Worker__ctor_m4605 (Worker_t1587 * __this, SocketAsyncResult_t1584 * ___ares, bool ___requireSocketSecurity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::Receive()
 void Worker_Receive_m4606 (Worker_t1587 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::ReceiveFrom()
 void Worker_ReceiveFrom_m4607 (Worker_t1587 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::UpdateSendValues(System.Int32)
 void Worker_UpdateSendValues_m4608 (Worker_t1587 * __this, int32_t ___last_sent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::Send()
 void Worker_Send_m4609 (Worker_t1587 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::SendTo()
 void Worker_SendTo_m4610 (Worker_t1587 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
