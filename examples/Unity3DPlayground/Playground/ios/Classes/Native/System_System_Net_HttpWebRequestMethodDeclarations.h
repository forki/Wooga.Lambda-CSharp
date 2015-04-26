#pragma once

// System.Net.HttpWebRequest
struct HttpWebRequest_t1056;
// System.Uri
struct Uri_t1041;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1565;
// System.Net.ICredentials
struct ICredentials_t1600;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1051;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t1629;
// System.Net.ServicePoint
struct ServicePoint_t1616;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.Object
struct Object_t;
// System.IO.Stream
struct Stream_t1049;
// System.Net.WebResponse
struct WebResponse_t1066;
// System.Net.WebAsyncResult
struct WebAsyncResult_t1652;
// System.Exception
struct Exception_t121;
// System.Net.WebConnectionStream
struct WebConnectionStream_t1651;
// System.Net.WebConnectionData
struct WebConnectionData_t1655;
// System.Net.DecompressionMethods
#include "System_System_Net_DecompressionMethods.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Net.HttpStatusCode
#include "System_System_Net_HttpStatusCode.h"
// System.Net.WebExceptionStatus
#include "System_System_Net_WebExceptionStatus.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
 void HttpWebRequest__ctor_m5006 (HttpWebRequest_t1056 * __this, Uri_t1041 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void HttpWebRequest__ctor_m5007 (HttpWebRequest_t1056 * __this, SerializationInfo_t1255 * ___serializationInfo, StreamingContext_t1256  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
 void HttpWebRequest__cctor_m5008 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m5009 (HttpWebRequest_t1056 * __this, SerializationInfo_t1255 * ___serializationInfo, StreamingContext_t1256  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
 Uri_t1041 * HttpWebRequest_get_Address_m5010 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.DecompressionMethods System.Net.HttpWebRequest::get_AutomaticDecompression()
 int32_t HttpWebRequest_get_AutomaticDecompression_m5011 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_InternalAllowBuffering()
 bool HttpWebRequest_get_InternalAllowBuffering_m5012 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::get_ClientCertificates()
 X509CertificateCollection_t1565 * HttpWebRequest_get_ClientCertificates_m5013 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.HttpWebRequest::get_ContentLength()
 int64_t HttpWebRequest_get_ContentLength_m5014 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_InternalContentLength(System.Int64)
 void HttpWebRequest_set_InternalContentLength_m5015 (HttpWebRequest_t1056 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.HttpWebRequest::get_Credentials()
 Object_t * HttpWebRequest_get_Credentials_m5016 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.HttpWebRequest::get_Headers()
 WebHeaderCollection_t1051 * HttpWebRequest_get_Headers_m5017 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_Headers(System.Net.WebHeaderCollection)
 void HttpWebRequest_set_Headers_m5018 (HttpWebRequest_t1056 * __this, WebHeaderCollection_t1051 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_KeepAlive()
 bool HttpWebRequest_get_KeepAlive_m5019 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpWebRequest::get_ReadWriteTimeout()
 int32_t HttpWebRequest_get_ReadWriteTimeout_m5020 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_Method()
 String_t* HttpWebRequest_get_Method_m5021 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_Method(System.String)
 void HttpWebRequest_set_Method_m5022 (HttpWebRequest_t1056 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.HttpWebRequest::get_Proxy()
 Object_t * HttpWebRequest_get_Proxy_m5023 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_RequestUri()
 Uri_t1041 * HttpWebRequest_get_RequestUri_m5024 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_SendChunked()
 bool HttpWebRequest_get_SendChunked_m5025 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
 ServicePoint_t1616 * HttpWebRequest_get_ServicePoint_m5026 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_TransferEncoding()
 String_t* HttpWebRequest_get_TransferEncoding_m5027 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_UnsafeAuthenticatedConnectionSharing()
 bool HttpWebRequest_get_UnsafeAuthenticatedConnectionSharing_m5028 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_ExpectContinue()
 bool HttpWebRequest_get_ExpectContinue_m5029 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_ExpectContinue(System.Boolean)
 void HttpWebRequest_set_ExpectContinue_m5030 (HttpWebRequest_t1056 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_AuthUri()
 Uri_t1041 * HttpWebRequest_get_AuthUri_m5031 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_ProxyQuery()
 bool HttpWebRequest_get_ProxyQuery_m5032 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
 ServicePoint_t1616 * HttpWebRequest_GetServicePoint_m5033 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.HttpWebRequest::BeginGetRequestStream(System.AsyncCallback,System.Object)
 Object_t * HttpWebRequest_BeginGetRequestStream_m5034 (HttpWebRequest_t1056 * __this, AsyncCallback_t189 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.HttpWebRequest::EndGetRequestStream(System.IAsyncResult)
 Stream_t1049 * HttpWebRequest_EndGetRequestStream_m5035 (HttpWebRequest_t1056 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.HttpWebRequest::GetRequestStream()
 Stream_t1049 * HttpWebRequest_GetRequestStream_m5036 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::CheckIfForceWrite()
 void HttpWebRequest_CheckIfForceWrite_m5037 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.HttpWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
 Object_t * HttpWebRequest_BeginGetResponse_m5038 (HttpWebRequest_t1056 * __this, AsyncCallback_t189 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.HttpWebRequest::EndGetResponse(System.IAsyncResult)
 WebResponse_t1066 * HttpWebRequest_EndGetResponse_m5039 (HttpWebRequest_t1056 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.HttpWebRequest::GetResponse()
 WebResponse_t1066 * HttpWebRequest_GetResponse_m5040 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_FinishedReading()
 bool HttpWebRequest_get_FinishedReading_m5041 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_FinishedReading(System.Boolean)
 void HttpWebRequest_set_FinishedReading_m5042 (HttpWebRequest_t1056 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_Aborted()
 bool HttpWebRequest_get_Aborted_m5043 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::Abort()
 void HttpWebRequest_Abort_m5044 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void HttpWebRequest_GetObjectData_m5045 (HttpWebRequest_t1056 * __this, SerializationInfo_t1255 * ___serializationInfo, StreamingContext_t1256  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::CheckRequestStarted()
 void HttpWebRequest_CheckRequestStarted_m5046 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::DoContinueDelegate(System.Int32,System.Net.WebHeaderCollection)
 void HttpWebRequest_DoContinueDelegate_m5047 (HttpWebRequest_t1056 * __this, int32_t ___statusCode, WebHeaderCollection_t1051 * ___headers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::Redirect(System.Net.WebAsyncResult,System.Net.HttpStatusCode)
 bool HttpWebRequest_Redirect_m5048 (HttpWebRequest_t1056 * __this, WebAsyncResult_t1652 * ___result, int32_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::GetHeaders()
 String_t* HttpWebRequest_GetHeaders_m5049 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::DoPreAuthenticate()
 void HttpWebRequest_DoPreAuthenticate_m5050 (HttpWebRequest_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetWriteStreamError(System.Net.WebExceptionStatus,System.Exception)
 void HttpWebRequest_SetWriteStreamError_m5051 (HttpWebRequest_t1056 * __this, int32_t ___status, Exception_t121 * ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SendRequestHeaders(System.Boolean)
 void HttpWebRequest_SendRequestHeaders_m5052 (HttpWebRequest_t1056 * __this, bool ___propagate_error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetWriteStream(System.Net.WebConnectionStream)
 void HttpWebRequest_SetWriteStream_m5053 (HttpWebRequest_t1056 * __this, WebConnectionStream_t1651 * ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetResponseError(System.Net.WebExceptionStatus,System.Exception,System.String)
 void HttpWebRequest_SetResponseError_m5054 (HttpWebRequest_t1056 * __this, int32_t ___status, Exception_t121 * ___e, String_t* ___where, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::CheckSendError(System.Net.WebConnectionData)
 void HttpWebRequest_CheckSendError_m5055 (HttpWebRequest_t1056 * __this, WebConnectionData_t1655 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::HandleNtlmAuth(System.Net.WebAsyncResult)
 void HttpWebRequest_HandleNtlmAuth_m5056 (HttpWebRequest_t1056 * __this, WebAsyncResult_t1652 * ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetResponseData(System.Net.WebConnectionData)
 void HttpWebRequest_SetResponseData_m5057 (HttpWebRequest_t1056 * __this, WebConnectionData_t1655 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::CheckAuthorization(System.Net.WebResponse,System.Net.HttpStatusCode)
 bool HttpWebRequest_CheckAuthorization_m5058 (HttpWebRequest_t1056 * __this, WebResponse_t1066 * ___response, int32_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::CheckFinalStatus(System.Net.WebAsyncResult)
 bool HttpWebRequest_CheckFinalStatus_m5059 (HttpWebRequest_t1056 * __this, WebAsyncResult_t1652 * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
