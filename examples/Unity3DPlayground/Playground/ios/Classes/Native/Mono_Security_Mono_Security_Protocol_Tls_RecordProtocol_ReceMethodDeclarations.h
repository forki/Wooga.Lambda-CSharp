#pragma once

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t1974;
// System.IO.Stream
struct Stream_t1049;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t121;
// System.Threading.WaitHandle
struct WaitHandle_t533;
// System.AsyncCallback
struct AsyncCallback_t189;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
 void ReceiveRecordAsyncResult__ctor_m7151 (ReceiveRecordAsyncResult_t1974 * __this, AsyncCallback_t189 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t1071* ___initialBuffer, Stream_t1049 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
 Stream_t1049 * ReceiveRecordAsyncResult_get_Record_m7152 (ReceiveRecordAsyncResult_t1974 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
 ByteU5BU5D_t1071* ReceiveRecordAsyncResult_get_ResultingBuffer_m7153 (ReceiveRecordAsyncResult_t1974 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
 ByteU5BU5D_t1071* ReceiveRecordAsyncResult_get_InitialBuffer_m7154 (ReceiveRecordAsyncResult_t1974 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
 Object_t * ReceiveRecordAsyncResult_get_AsyncState_m7155 (ReceiveRecordAsyncResult_t1974 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
 Exception_t121 * ReceiveRecordAsyncResult_get_AsyncException_m7156 (ReceiveRecordAsyncResult_t1974 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
 bool ReceiveRecordAsyncResult_get_CompletedWithError_m7157 (ReceiveRecordAsyncResult_t1974 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t533 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m7158 (ReceiveRecordAsyncResult_t1974 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
 bool ReceiveRecordAsyncResult_get_IsCompleted_m7159 (ReceiveRecordAsyncResult_t1974 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
 void ReceiveRecordAsyncResult_SetComplete_m7160 (ReceiveRecordAsyncResult_t1974 * __this, Exception_t121 * ___ex, ByteU5BU5D_t1071* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
 void ReceiveRecordAsyncResult_SetComplete_m7161 (ReceiveRecordAsyncResult_t1974 * __this, Exception_t121 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
 void ReceiveRecordAsyncResult_SetComplete_m7162 (ReceiveRecordAsyncResult_t1974 * __this, ByteU5BU5D_t1071* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
