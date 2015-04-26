#pragma once

// System.Net.FtpWebRequest
struct FtpWebRequest_t1637;
// System.Net.ICredentials
struct ICredentials_t1600;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1051;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t1629;
// System.Uri
struct Uri_t1041;
// System.Net.ServicePoint
struct ServicePoint_t1616;
// System.Exception
struct Exception_t121;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.Object
struct Object_t;
// System.Net.WebResponse
struct WebResponse_t1066;
// System.IO.Stream
struct Stream_t1049;
// System.Net.FtpStatus
struct FtpStatus_t1640;
// System.Net.Sockets.Socket
struct Socket_t1576;
// System.String[]
struct StringU5BU5D_t150;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1569;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t1645;
// System.Net.FtpWebRequest/RequestState
#include "System_System_Net_FtpWebRequest_RequestState.h"
// System.Net.Security.SslPolicyErrors
#include "System_System_Net_Security_SslPolicyErrors.h"

// System.Void System.Net.FtpWebRequest::.ctor(System.Uri)
 void FtpWebRequest__ctor_m4930 (FtpWebRequest_t1637 * __this, Uri_t1041 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::.cctor()
 void FtpWebRequest__cctor_m4931 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpWebRequest::GetMustImplement()
 Exception_t121 * FtpWebRequest_GetMustImplement_m4932 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpWebRequest::get_ContentLength()
 int64_t FtpWebRequest_get_ContentLength_m4933 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.FtpWebRequest::get_Credentials()
 Object_t * FtpWebRequest_get_Credentials_m4934 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::get_EnableSsl()
 bool FtpWebRequest_get_EnableSsl_m4935 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FtpWebRequest::get_Headers()
 WebHeaderCollection_t1051 * FtpWebRequest_get_Headers_m4936 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_Headers(System.Net.WebHeaderCollection)
 void FtpWebRequest_set_Headers_m4937 (FtpWebRequest_t1637 * __this, WebHeaderCollection_t1051 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::get_Method()
 String_t* FtpWebRequest_get_Method_m4938 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_Method(System.String)
 void FtpWebRequest_set_Method_m4939 (FtpWebRequest_t1637 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.FtpWebRequest::get_Proxy()
 Object_t * FtpWebRequest_get_Proxy_m4940 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpWebRequest::get_ReadWriteTimeout()
 int32_t FtpWebRequest_get_ReadWriteTimeout_m4941 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.FtpWebRequest::get_RequestUri()
 Uri_t1041 * FtpWebRequest_get_RequestUri_m4942 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.FtpWebRequest::get_ServicePoint()
 ServicePoint_t1616 * FtpWebRequest_get_ServicePoint_m4943 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::get_DataType()
 String_t* FtpWebRequest_get_DataType_m4944 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpWebRequest/RequestState System.Net.FtpWebRequest::get_State()
 int32_t FtpWebRequest_get_State_m4945 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_State(System.Net.FtpWebRequest/RequestState)
 void FtpWebRequest_set_State_m4946 (FtpWebRequest_t1637 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::Abort()
 void FtpWebRequest_Abort_m4947 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FtpWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
 Object_t * FtpWebRequest_BeginGetResponse_m4948 (FtpWebRequest_t1637 * __this, AsyncCallback_t189 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FtpWebRequest::EndGetResponse(System.IAsyncResult)
 WebResponse_t1066 * FtpWebRequest_EndGetResponse_m4949 (FtpWebRequest_t1637 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FtpWebRequest::GetResponse()
 WebResponse_t1066 * FtpWebRequest_GetResponse_m4950 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FtpWebRequest::BeginGetRequestStream(System.AsyncCallback,System.Object)
 Object_t * FtpWebRequest_BeginGetRequestStream_m4951 (FtpWebRequest_t1637 * __this, AsyncCallback_t189 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FtpWebRequest::EndGetRequestStream(System.IAsyncResult)
 Stream_t1049 * FtpWebRequest_EndGetRequestStream_m4952 (FtpWebRequest_t1637 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FtpWebRequest::GetRequestStream()
 Stream_t1049 * FtpWebRequest_GetRequestStream_m4953 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.FtpWebRequest::GetServicePoint()
 ServicePoint_t1616 * FtpWebRequest_GetServicePoint_m4954 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ResolveHost()
 void FtpWebRequest_ResolveHost_m4955 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessRequest()
 void FtpWebRequest_ProcessRequest_m4956 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetType()
 void FtpWebRequest_SetType_m4957 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::GetRemoteFolderPath(System.Uri)
 String_t* FtpWebRequest_GetRemoteFolderPath_m4958 (FtpWebRequest_t1637 * __this, Uri_t1041 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CWDAndSetFileName(System.Uri)
 void FtpWebRequest_CWDAndSetFileName_m4959 (FtpWebRequest_t1637 * __this, Uri_t1041 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessMethod()
 void FtpWebRequest_ProcessMethod_m4960 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseControlConnection()
 void FtpWebRequest_CloseControlConnection_m4961 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseDataConnection()
 void FtpWebRequest_CloseDataConnection_m4962 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseConnection()
 void FtpWebRequest_CloseConnection_m4963 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessSimpleMethod()
 void FtpWebRequest_ProcessSimpleMethod_m4964 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::UploadData()
 void FtpWebRequest_UploadData_m4965 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::DownloadData()
 void FtpWebRequest_DownloadData_m4966 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckRequestStarted()
 void FtpWebRequest_CheckRequestStarted_m4967 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OpenControlConnection()
 void FtpWebRequest_OpenControlConnection_m4968 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::GetInitialPath(System.Net.FtpStatus)
 String_t* FtpWebRequest_GetInitialPath_m4969 (Object_t * __this/* static, unused */, FtpStatus_t1640 * ___status, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.FtpWebRequest::SetupPassiveConnection(System.String)
 Socket_t1576 * FtpWebRequest_SetupPassiveConnection_m4970 (FtpWebRequest_t1637 * __this, String_t* ___statusDescription, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpWebRequest::CreateExceptionFromResponse(System.Net.FtpStatus)
 Exception_t121 * FtpWebRequest_CreateExceptionFromResponse_m4971 (FtpWebRequest_t1637 * __this, FtpStatus_t1640 * ___status, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetTransferCompleted()
 void FtpWebRequest_SetTransferCompleted_m4972 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OperationCompleted()
 void FtpWebRequest_OperationCompleted_m4973 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetCompleteWithError(System.Exception)
 void FtpWebRequest_SetCompleteWithError_m4974 (FtpWebRequest_t1637 * __this, Exception_t121 * ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.FtpWebRequest::InitDataConnection()
 Socket_t1576 * FtpWebRequest_InitDataConnection_m4975 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OpenDataConnection()
 void FtpWebRequest_OpenDataConnection_m4976 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::Authenticate()
 void FtpWebRequest_Authenticate_m4977 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::SendCommand(System.String,System.String[])
 FtpStatus_t1640 * FtpWebRequest_SendCommand_m4978 (FtpWebRequest_t1637 * __this, String_t* ___command, StringU5BU5D_t150* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::SendCommand(System.Boolean,System.String,System.String[])
 FtpStatus_t1640 * FtpWebRequest_SendCommand_m4979 (FtpWebRequest_t1637 * __this, bool ___waitResponse, String_t* ___command, StringU5BU5D_t150* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::ServiceNotAvailable()
 FtpStatus_t1640 * FtpWebRequest_ServiceNotAvailable_m4980 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::GetResponseStatus()
 FtpStatus_t1640 * FtpWebRequest_GetResponseStatus_m4981 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::InitiateSecureConnection(System.IO.Stream&)
 void FtpWebRequest_InitiateSecureConnection_m4982 (FtpWebRequest_t1637 * __this, Stream_t1049 ** ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::ChangeToSSLSocket(System.IO.Stream&)
 bool FtpWebRequest_ChangeToSSLSocket_m4983 (FtpWebRequest_t1637 * __this, Stream_t1049 ** ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::InFinalState()
 bool FtpWebRequest_InFinalState_m4984 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::InProgress()
 bool FtpWebRequest_InProgress_m4985 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckIfAborted()
 void FtpWebRequest_CheckIfAborted_m4986 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckFinalState()
 void FtpWebRequest_CheckFinalState_m4987 (FtpWebRequest_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::<callback>m__B(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
 bool FtpWebRequest_U3CcallbackU3Em__B_m4988 (Object_t * __this/* static, unused */, Object_t * ___sender, X509Certificate_t1569 * ___certificate, X509Chain_t1645 * ___chain, int32_t ___sslPolicyErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
