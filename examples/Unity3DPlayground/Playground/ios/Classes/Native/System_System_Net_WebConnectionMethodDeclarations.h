#pragma once

// System.Net.WebConnection
struct WebConnection_t1654;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1056;
// System.Net.NetworkCredential
struct NetworkCredential_t1643;
// System.Net.WebConnectionGroup
struct WebConnectionGroup_t1664;
// System.Net.ServicePoint
struct ServicePoint_t1616;
// System.Exception
struct Exception_t121;
// System.IO.Stream
struct Stream_t1049;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1051;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.Object
struct Object_t;
// System.EventHandler
struct EventHandler_t1653;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.EventArgs
struct EventArgs_t1675;
// System.Net.WebExceptionStatus
#include "System_System_Net_WebExceptionStatus.h"

// System.Void System.Net.WebConnection::.ctor(System.Net.WebConnectionGroup,System.Net.ServicePoint)
 void WebConnection__ctor_m5227 (WebConnection_t1654 * __this, WebConnectionGroup_t1664 * ___group, ServicePoint_t1616 * ___sPoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::.cctor()
 void WebConnection__cctor_m5228 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CanReuse()
 bool WebConnection_CanReuse_m5229 (WebConnection_t1654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::LoggedThrow(System.Exception)
 void WebConnection_LoggedThrow_m5230 (WebConnection_t1654 * __this, Exception_t121 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::CheckUnityWebSecurity(System.Net.HttpWebRequest)
 void WebConnection_CheckUnityWebSecurity_m5231 (WebConnection_t1654 * __this, HttpWebRequest_t1056 * ___request, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::Connect(System.Net.HttpWebRequest)
 void WebConnection_Connect_m5232 (WebConnection_t1654 * __this, HttpWebRequest_t1056 * ___request, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::EnsureSSLStreamAvailable()
 void WebConnection_EnsureSSLStreamAvailable_m5233 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CreateTunnel(System.Net.HttpWebRequest,System.IO.Stream,System.Byte[]&)
 bool WebConnection_CreateTunnel_m5234 (WebConnection_t1654 * __this, HttpWebRequest_t1056 * ___request, Stream_t1049 * ___stream, ByteU5BU5D_t1071** ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebConnection::ReadHeaders(System.Net.HttpWebRequest,System.IO.Stream,System.Byte[]&,System.Int32&)
 WebHeaderCollection_t1051 * WebConnection_ReadHeaders_m5235 (WebConnection_t1654 * __this, HttpWebRequest_t1056 * ___request, Stream_t1049 * ___stream, ByteU5BU5D_t1071** ___retBuffer, int32_t* ___status, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CreateStream(System.Net.HttpWebRequest)
 bool WebConnection_CreateStream_m5236 (WebConnection_t1654 * __this, HttpWebRequest_t1056 * ___request, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::HandleError(System.Net.WebExceptionStatus,System.Exception,System.String)
 void WebConnection_HandleError_m5237 (WebConnection_t1654 * __this, int32_t ___st, Exception_t121 * ___e, String_t* ___where, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::ReadDone(System.IAsyncResult)
 void WebConnection_ReadDone_m5238 (Object_t * __this/* static, unused */, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::ExpectContent(System.Int32)
 bool WebConnection_ExpectContent_m5239 (Object_t * __this/* static, unused */, int32_t ___statusCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::GetCertificates()
 void WebConnection_GetCertificates_m5240 (WebConnection_t1654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::InitRead(System.Object)
 void WebConnection_InitRead_m5241 (Object_t * __this/* static, unused */, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::GetResponse(System.Byte[],System.Int32)
 int32_t WebConnection_GetResponse_m5242 (WebConnection_t1654 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::InitConnection(System.Object)
 void WebConnection_InitConnection_m5243 (WebConnection_t1654 * __this, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.EventHandler System.Net.WebConnection::SendRequest(System.Net.HttpWebRequest)
 EventHandler_t1653 * WebConnection_SendRequest_m5244 (WebConnection_t1654 * __this, HttpWebRequest_t1056 * ___request, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::SendNext()
 void WebConnection_SendNext_m5245 (WebConnection_t1654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::NextRead()
 void WebConnection_NextRead_m5246 (WebConnection_t1654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::ReadLine(System.Byte[],System.Int32&,System.Int32,System.String&)
 bool WebConnection_ReadLine_m5247 (Object_t * __this/* static, unused */, ByteU5BU5D_t1071* ___buffer, int32_t* ___start, int32_t ___max, String_t** ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnection::BeginRead(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * WebConnection_BeginRead_m5248 (WebConnection_t1654 * __this, HttpWebRequest_t1056 * ___request, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t189 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::EndRead(System.Net.HttpWebRequest,System.IAsyncResult)
 int32_t WebConnection_EndRead_m5249 (WebConnection_t1654 * __this, HttpWebRequest_t1056 * ___request, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::EnsureRead(System.Byte[],System.Int32,System.Int32)
 int32_t WebConnection_EnsureRead_m5250 (WebConnection_t1654 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CompleteChunkedRead()
 bool WebConnection_CompleteChunkedRead_m5251 (WebConnection_t1654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnection::BeginWrite(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * WebConnection_BeginWrite_m5252 (WebConnection_t1654 * __this, HttpWebRequest_t1056 * ___request, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t189 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::EndWrite2(System.Net.HttpWebRequest,System.IAsyncResult)
 void WebConnection_EndWrite2_m5253 (WebConnection_t1654 * __this, HttpWebRequest_t1056 * ___request, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::EndWrite(System.Net.HttpWebRequest,System.IAsyncResult)
 bool WebConnection_EndWrite_m5254 (WebConnection_t1654 * __this, HttpWebRequest_t1056 * ___request, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::Read(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32)
 int32_t WebConnection_Read_m5255 (WebConnection_t1654 * __this, HttpWebRequest_t1056 * ___request, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::Write(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32,System.String&)
 bool WebConnection_Write_m5256 (WebConnection_t1654 * __this, HttpWebRequest_t1056 * ___request, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, String_t** ___err_msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::Close(System.Boolean)
 void WebConnection_Close_m5257 (WebConnection_t1654 * __this, bool ___sendNext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::Abort(System.Object,System.EventArgs)
 void WebConnection_Abort_m5258 (WebConnection_t1654 * __this, Object_t * ___sender, EventArgs_t1675 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::ResetNtlm()
 void WebConnection_ResetNtlm_m5259 (WebConnection_t1654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::get_Busy()
 bool WebConnection_get_Busy_m5260 (WebConnection_t1654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_PriorityRequest(System.Net.HttpWebRequest)
 void WebConnection_set_PriorityRequest_m5261 (WebConnection_t1654 * __this, HttpWebRequest_t1056 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::get_NtlmAuthenticated()
 bool WebConnection_get_NtlmAuthenticated_m5262 (WebConnection_t1654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_NtlmAuthenticated(System.Boolean)
 void WebConnection_set_NtlmAuthenticated_m5263 (WebConnection_t1654 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.WebConnection::get_NtlmCredential()
 NetworkCredential_t1643 * WebConnection_get_NtlmCredential_m5264 (WebConnection_t1654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_NtlmCredential(System.Net.NetworkCredential)
 void WebConnection_set_NtlmCredential_m5265 (WebConnection_t1654 * __this, NetworkCredential_t1643 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::get_UnsafeAuthenticatedConnectionSharing()
 bool WebConnection_get_UnsafeAuthenticatedConnectionSharing_m5266 (WebConnection_t1654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_UnsafeAuthenticatedConnectionSharing(System.Boolean)
 void WebConnection_set_UnsafeAuthenticatedConnectionSharing_m5267 (WebConnection_t1654 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
