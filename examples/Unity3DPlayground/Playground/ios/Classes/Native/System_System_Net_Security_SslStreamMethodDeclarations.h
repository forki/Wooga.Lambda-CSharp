#pragma once

// System.Net.Security.SslStream
struct SslStream_t1566;
// System.IO.Stream
struct Stream_t1049;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t1571;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t1572;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1569;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1565;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Security.Authentication.SslProtocols
#include "System_System_Security_Authentication_SslProtocols.h"
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.RemoteCertificateValidationCallback,System.Net.Security.LocalCertificateSelectionCallback)
 void SslStream__ctor_m4538 (SslStream_t1566 * __this, Stream_t1049 * ___innerStream, bool ___leaveStreamOpen, RemoteCertificateValidationCallback_t1571 * ___certValidationCallback, LocalCertificateSelectionCallback_t1572 * ___certSelectionCallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanRead()
 bool SslStream_get_CanRead_m4539 (SslStream_t1566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanSeek()
 bool SslStream_get_CanSeek_m4540 (SslStream_t1566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanWrite()
 bool SslStream_get_CanWrite_m4541 (SslStream_t1566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::get_Length()
 int64_t SslStream_get_Length_m4542 (SslStream_t1566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::get_Position()
 int64_t SslStream_get_Position_m4543 (SslStream_t1566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::set_Position(System.Int64)
 void SslStream_set_Position_m4544 (SslStream_t1566 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_IsAuthenticated()
 bool SslStream_get_IsAuthenticated_m4545 (SslStream_t1566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::get_ReadTimeout()
 int32_t SslStream_get_ReadTimeout_m4546 (SslStream_t1566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::get_WriteTimeout()
 int32_t SslStream_get_WriteTimeout_m4547 (SslStream_t1566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.SslStream::OnCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 X509Certificate_t1569 * SslStream_OnCertificateSelection_m4548 (SslStream_t1566 * __this, X509CertificateCollection_t1565 * ___clientCerts, X509Certificate_t1569 * ___serverCert, String_t* ___targetHost, X509CertificateCollection_t1565 * ___serverRequestedCerts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginAuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean,System.AsyncCallback,System.Object)
 Object_t * SslStream_BeginAuthenticateAsClient_m4549 (SslStream_t1566 * __this, String_t* ___targetHost, X509CertificateCollection_t1565 * ___clientCertificates, int32_t ___sslProtocolType, bool ___checkCertificateRevocation, AsyncCallback_t189 * ___asyncCallback, Object_t * ___asyncState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * SslStream_BeginRead_m4550 (SslStream_t1566 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t189 * ___asyncCallback, Object_t * ___asyncState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType System.Net.Security.SslStream::GetMonoSslProtocol(System.Security.Authentication.SslProtocols)
 int32_t SslStream_GetMonoSslProtocol_m4551 (SslStream_t1566 * __this, int32_t ___ms, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * SslStream_BeginWrite_m4552 (SslStream_t1566 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t189 * ___asyncCallback, Object_t * ___asyncState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::AuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean)
 void SslStream_AuthenticateAsClient_m4553 (SslStream_t1566 * __this, String_t* ___targetHost, X509CertificateCollection_t1565 * ___clientCertificates, int32_t ___sslProtocolType, bool ___checkCertificateRevocation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Dispose(System.Boolean)
 void SslStream_Dispose_m4554 (SslStream_t1566 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::EndAuthenticateAsClient(System.IAsyncResult)
 void SslStream_EndAuthenticateAsClient_m4555 (SslStream_t1566 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::EndRead(System.IAsyncResult)
 int32_t SslStream_EndRead_m4556 (SslStream_t1566 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::EndWrite(System.IAsyncResult)
 void SslStream_EndWrite_m4557 (SslStream_t1566 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Flush()
 void SslStream_Flush_m4558 (SslStream_t1566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::Read(System.Byte[],System.Int32,System.Int32)
 int32_t SslStream_Read_m4559 (SslStream_t1566 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::Seek(System.Int64,System.IO.SeekOrigin)
 int64_t SslStream_Seek_m4560 (SslStream_t1566 * __this, int64_t ___offset, int32_t ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::SetLength(System.Int64)
 void SslStream_SetLength_m4561 (SslStream_t1566 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Write(System.Byte[],System.Int32,System.Int32)
 void SslStream_Write_m4562 (SslStream_t1566 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::CheckConnectionAuthenticated()
 void SslStream_CheckConnectionAuthenticated_m4563 (SslStream_t1566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
