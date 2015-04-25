#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult
struct SendRecordAsyncResult_t3324;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t3309;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t115;
// System.Threading.WaitHandle
struct WaitHandle_t527;
// System.AsyncCallback
struct AsyncCallback_t184;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,Mono.Security.Protocol.Tls.Handshake.HandshakeMessage)
 void SendRecordAsyncResult__ctor_m8482 (SendRecordAsyncResult_t3324 * __this, AsyncCallback_t184 * ___userCallback, Object_t * ___userState, HandshakeMessage_t3309 * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_Message()
 HandshakeMessage_t3309 * SendRecordAsyncResult_get_Message_m8483 (SendRecordAsyncResult_t3324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncState()
 Object_t * SendRecordAsyncResult_get_AsyncState_m8484 (SendRecordAsyncResult_t3324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncException()
 Exception_t115 * SendRecordAsyncResult_get_AsyncException_m8485 (SendRecordAsyncResult_t3324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_CompletedWithError()
 bool SendRecordAsyncResult_get_CompletedWithError_m8486 (SendRecordAsyncResult_t3324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t527 * SendRecordAsyncResult_get_AsyncWaitHandle_m8487 (SendRecordAsyncResult_t3324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_IsCompleted()
 bool SendRecordAsyncResult_get_IsCompleted_m8488 (SendRecordAsyncResult_t3324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::SetComplete(System.Exception)
 void SendRecordAsyncResult_SetComplete_m8489 (SendRecordAsyncResult_t3324 * __this, Exception_t115 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::SetComplete()
 void SendRecordAsyncResult_SetComplete_m8490 (SendRecordAsyncResult_t3324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
