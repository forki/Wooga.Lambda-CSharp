#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult
struct InternalAsyncResult_t3337;
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

// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
 void InternalAsyncResult__ctor_m8587 (InternalAsyncResult_t3337 * __this, AsyncCallback_t184 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t961* ___buffer, int32_t ___offset, int32_t ___count, bool ___fromWrite, bool ___proceedAfterHandshake, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_ProceedAfterHandshake()
 bool InternalAsyncResult_get_ProceedAfterHandshake_m8588 (InternalAsyncResult_t3337 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_FromWrite()
 bool InternalAsyncResult_get_FromWrite_m8589 (InternalAsyncResult_t3337 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Buffer()
 ByteU5BU5D_t961* InternalAsyncResult_get_Buffer_m8590 (InternalAsyncResult_t3337 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Offset()
 int32_t InternalAsyncResult_get_Offset_m8591 (InternalAsyncResult_t3337 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Count()
 int32_t InternalAsyncResult_get_Count_m8592 (InternalAsyncResult_t3337 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_BytesRead()
 int32_t InternalAsyncResult_get_BytesRead_m8593 (InternalAsyncResult_t3337 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncState()
 Object_t * InternalAsyncResult_get_AsyncState_m8594 (InternalAsyncResult_t3337 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncException()
 Exception_t115 * InternalAsyncResult_get_AsyncException_m8595 (InternalAsyncResult_t3337 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_CompletedWithError()
 bool InternalAsyncResult_get_CompletedWithError_m8596 (InternalAsyncResult_t3337 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t527 * InternalAsyncResult_get_AsyncWaitHandle_m8597 (InternalAsyncResult_t3337 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_IsCompleted()
 bool InternalAsyncResult_get_IsCompleted_m8598 (InternalAsyncResult_t3337 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception,System.Int32)
 void InternalAsyncResult_SetComplete_m8599 (InternalAsyncResult_t3337 * __this, Exception_t115 * ___ex, int32_t ___bytesRead, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception)
 void InternalAsyncResult_SetComplete_m8600 (InternalAsyncResult_t3337 * __this, Exception_t115 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Int32)
 void InternalAsyncResult_SetComplete_m8601 (InternalAsyncResult_t3337 * __this, int32_t ___bytesRead, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete()
 void InternalAsyncResult_SetComplete_m8602 (InternalAsyncResult_t3337 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
