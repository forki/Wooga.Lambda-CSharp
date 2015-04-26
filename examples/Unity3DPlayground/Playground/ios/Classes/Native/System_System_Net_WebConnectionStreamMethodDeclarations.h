#pragma once

// System.Net.WebConnectionStream
struct WebConnectionStream_t1651;
// System.Net.WebConnection
struct WebConnection_t1654;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1056;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.Object
struct Object_t;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.Net.WebConnectionStream::.ctor(System.Net.WebConnection)
 void WebConnectionStream__ctor_m5274 (WebConnectionStream_t1651 * __this, WebConnection_t1654 * ___cnc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::.ctor(System.Net.WebConnection,System.Net.HttpWebRequest)
 void WebConnectionStream__ctor_m5275 (WebConnectionStream_t1651 * __this, WebConnection_t1654 * ___cnc, HttpWebRequest_t1056 * ___request, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::.cctor()
 void WebConnectionStream__cctor_m5276 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::IsNtlmAuth()
 bool WebConnectionStream_IsNtlmAuth_m5277 (WebConnectionStream_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckResponseInBuffer()
 void WebConnectionStream_CheckResponseInBuffer_m5278 (WebConnectionStream_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionStream::get_Connection()
 WebConnection_t1654 * WebConnectionStream_get_Connection_m5279 (WebConnectionStream_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_ReadTimeout()
 int32_t WebConnectionStream_get_ReadTimeout_m5280 (WebConnectionStream_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_WriteTimeout()
 int32_t WebConnectionStream_get_WriteTimeout_m5281 (WebConnectionStream_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CompleteRequestWritten()
 bool WebConnectionStream_get_CompleteRequestWritten_m5282 (WebConnectionStream_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_SendChunked(System.Boolean)
 void WebConnectionStream_set_SendChunked_m5283 (WebConnectionStream_t1651 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBuffer(System.Byte[])
 void WebConnectionStream_set_ReadBuffer_m5284 (WebConnectionStream_t1651 * __this, ByteU5BU5D_t1071* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBufferOffset(System.Int32)
 void WebConnectionStream_set_ReadBufferOffset_m5285 (WebConnectionStream_t1651 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBufferSize(System.Int32)
 void WebConnectionStream_set_ReadBufferSize_m5286 (WebConnectionStream_t1651 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebConnectionStream::get_WriteBuffer()
 ByteU5BU5D_t1071* WebConnectionStream_get_WriteBuffer_m5287 (WebConnectionStream_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_WriteBufferLength()
 int32_t WebConnectionStream_get_WriteBufferLength_m5288 (WebConnectionStream_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ForceCompletion()
 void WebConnectionStream_ForceCompletion_m5289 (WebConnectionStream_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckComplete()
 void WebConnectionStream_CheckComplete_m5290 (WebConnectionStream_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ReadAll()
 void WebConnectionStream_ReadAll_m5291 (WebConnectionStream_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteCallbackWrapper(System.IAsyncResult)
 void WebConnectionStream_WriteCallbackWrapper_m5292 (WebConnectionStream_t1651 * __this, Object_t * ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ReadCallbackWrapper(System.IAsyncResult)
 void WebConnectionStream_ReadCallbackWrapper_m5293 (WebConnectionStream_t1651 * __this, Object_t * ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::Read(System.Byte[],System.Int32,System.Int32)
 int32_t WebConnectionStream_Read_m5294 (WebConnectionStream_t1651 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * WebConnectionStream_BeginRead_m5295 (WebConnectionStream_t1651 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t189 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::EndRead(System.IAsyncResult)
 int32_t WebConnectionStream_EndRead_m5296 (WebConnectionStream_t1651 * __this, Object_t * ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteRequestAsyncCB(System.IAsyncResult)
 void WebConnectionStream_WriteRequestAsyncCB_m5297 (WebConnectionStream_t1651 * __this, Object_t * ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * WebConnectionStream_BeginWrite_m5298 (WebConnectionStream_t1651 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t189 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckWriteOverflow(System.Int64,System.Int64,System.Int64)
 void WebConnectionStream_CheckWriteOverflow_m5299 (WebConnectionStream_t1651 * __this, int64_t ___contentLength, int64_t ___totalWritten, int64_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::EndWrite(System.IAsyncResult)
 void WebConnectionStream_EndWrite_m5300 (WebConnectionStream_t1651 * __this, Object_t * ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Write(System.Byte[],System.Int32,System.Int32)
 void WebConnectionStream_Write_m5301 (WebConnectionStream_t1651 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Flush()
 void WebConnectionStream_Flush_m5302 (WebConnectionStream_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::SetHeaders(System.Byte[])
 void WebConnectionStream_SetHeaders_m5303 (WebConnectionStream_t1651 * __this, ByteU5BU5D_t1071* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_RequestWritten()
 bool WebConnectionStream_get_RequestWritten_m5304 (WebConnectionStream_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::WriteRequestAsync(System.AsyncCallback,System.Object)
 Object_t * WebConnectionStream_WriteRequestAsync_m5305 (WebConnectionStream_t1651 * __this, AsyncCallback_t189 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteHeaders()
 void WebConnectionStream_WriteHeaders_m5306 (WebConnectionStream_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteRequest()
 void WebConnectionStream_WriteRequest_m5307 (WebConnectionStream_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::InternalClose()
 void WebConnectionStream_InternalClose_m5308 (WebConnectionStream_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Close()
 void WebConnectionStream_Close_m5309 (WebConnectionStream_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::KillBuffer()
 void WebConnectionStream_KillBuffer_m5310 (WebConnectionStream_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::Seek(System.Int64,System.IO.SeekOrigin)
 int64_t WebConnectionStream_Seek_m5311 (WebConnectionStream_t1651 * __this, int64_t ___a, int32_t ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::SetLength(System.Int64)
 void WebConnectionStream_SetLength_m5312 (WebConnectionStream_t1651 * __this, int64_t ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanSeek()
 bool WebConnectionStream_get_CanSeek_m5313 (WebConnectionStream_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanRead()
 bool WebConnectionStream_get_CanRead_m5314 (WebConnectionStream_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanWrite()
 bool WebConnectionStream_get_CanWrite_m5315 (WebConnectionStream_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::get_Length()
 int64_t WebConnectionStream_get_Length_m5316 (WebConnectionStream_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::get_Position()
 int64_t WebConnectionStream_get_Position_m5317 (WebConnectionStream_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_Position(System.Int64)
 void WebConnectionStream_set_Position_m5318 (WebConnectionStream_t1651 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
