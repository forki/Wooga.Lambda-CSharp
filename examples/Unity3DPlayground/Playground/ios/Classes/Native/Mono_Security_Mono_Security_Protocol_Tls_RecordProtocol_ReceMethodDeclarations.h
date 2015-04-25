#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t3323;
// System.IO.Stream
struct Stream_t3308;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t115;
// System.Threading.WaitHandle
struct WaitHandle_t527;
// System.AsyncCallback
struct AsyncCallback_t184;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
 void ReceiveRecordAsyncResult__ctor_m8470 (ReceiveRecordAsyncResult_t3323 * __this, AsyncCallback_t184 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t961* ___initialBuffer, Stream_t3308 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
 Stream_t3308 * ReceiveRecordAsyncResult_get_Record_m8471 (ReceiveRecordAsyncResult_t3323 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
 ByteU5BU5D_t961* ReceiveRecordAsyncResult_get_ResultingBuffer_m8472 (ReceiveRecordAsyncResult_t3323 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
 ByteU5BU5D_t961* ReceiveRecordAsyncResult_get_InitialBuffer_m8473 (ReceiveRecordAsyncResult_t3323 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
 Object_t * ReceiveRecordAsyncResult_get_AsyncState_m8474 (ReceiveRecordAsyncResult_t3323 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
 Exception_t115 * ReceiveRecordAsyncResult_get_AsyncException_m8475 (ReceiveRecordAsyncResult_t3323 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
 bool ReceiveRecordAsyncResult_get_CompletedWithError_m8476 (ReceiveRecordAsyncResult_t3323 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t527 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m8477 (ReceiveRecordAsyncResult_t3323 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
 bool ReceiveRecordAsyncResult_get_IsCompleted_m8478 (ReceiveRecordAsyncResult_t3323 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
 void ReceiveRecordAsyncResult_SetComplete_m8479 (ReceiveRecordAsyncResult_t3323 * __this, Exception_t115 * ___ex, ByteU5BU5D_t961* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
 void ReceiveRecordAsyncResult_SetComplete_m8480 (ReceiveRecordAsyncResult_t3323 * __this, Exception_t115 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
 void ReceiveRecordAsyncResult_SetComplete_m8481 (ReceiveRecordAsyncResult_t3323 * __this, ByteU5BU5D_t961* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
