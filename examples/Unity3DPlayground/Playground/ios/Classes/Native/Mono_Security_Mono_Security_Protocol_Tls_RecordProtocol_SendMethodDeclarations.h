#pragma once

// Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult
struct SendRecordAsyncResult_t1975;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t1963;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t121;
// System.Threading.WaitHandle
struct WaitHandle_t533;
// System.AsyncCallback
struct AsyncCallback_t189;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,Mono.Security.Protocol.Tls.Handshake.HandshakeMessage)
 void SendRecordAsyncResult__ctor_m7163 (SendRecordAsyncResult_t1975 * __this, AsyncCallback_t189 * ___userCallback, Object_t * ___userState, HandshakeMessage_t1963 * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_Message()
 HandshakeMessage_t1963 * SendRecordAsyncResult_get_Message_m7164 (SendRecordAsyncResult_t1975 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncState()
 Object_t * SendRecordAsyncResult_get_AsyncState_m7165 (SendRecordAsyncResult_t1975 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncException()
 Exception_t121 * SendRecordAsyncResult_get_AsyncException_m7166 (SendRecordAsyncResult_t1975 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_CompletedWithError()
 bool SendRecordAsyncResult_get_CompletedWithError_m7167 (SendRecordAsyncResult_t1975 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t533 * SendRecordAsyncResult_get_AsyncWaitHandle_m7168 (SendRecordAsyncResult_t1975 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_IsCompleted()
 bool SendRecordAsyncResult_get_IsCompleted_m7169 (SendRecordAsyncResult_t1975 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::SetComplete(System.Exception)
 void SendRecordAsyncResult_SetComplete_m7170 (SendRecordAsyncResult_t1975 * __this, Exception_t121 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::SetComplete()
 void SendRecordAsyncResult_SetComplete_m7171 (SendRecordAsyncResult_t1975 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
