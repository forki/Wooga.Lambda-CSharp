#pragma once

// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t1838;
// System.IO.Stream
struct Stream_t1049;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1565;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1569;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t1840;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t1841;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t1839;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t1871;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.Object
struct Object_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t1667;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1668;
// System.Int32[]
struct Int32U5BU5D_t1424;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1568;
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean)
 void SslClientStream__ctor_m7220 (SslClientStream_t1838 * __this, Stream_t1049 * ___stream, String_t* ___targetHost, bool ___ownsStream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Security.Cryptography.X509Certificates.X509Certificate)
 void SslClientStream__ctor_m7221 (SslClientStream_t1838 * __this, Stream_t1049 * ___stream, String_t* ___targetHost, X509Certificate_t1569 * ___clientCertificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 void SslClientStream__ctor_m7222 (SslClientStream_t1838 * __this, Stream_t1049 * ___stream, String_t* ___targetHost, X509CertificateCollection_t1565 * ___clientCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType)
 void SslClientStream__ctor_m7223 (SslClientStream_t1838 * __this, Stream_t1049 * ___stream, String_t* ___targetHost, bool ___ownsStream, int32_t ___securityProtocolType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 void SslClientStream__ctor_m6218 (SslClientStream_t1838 * __this, Stream_t1049 * ___stream, String_t* ___targetHost, bool ___ownsStream, int32_t ___securityProtocolType, X509CertificateCollection_t1565 * ___clientCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ServerCertValidation(Mono.Security.Protocol.Tls.CertificateValidationCallback)
 void SslClientStream_add_ServerCertValidation_m7224 (SslClientStream_t1838 * __this, CertificateValidationCallback_t1840 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ServerCertValidation(Mono.Security.Protocol.Tls.CertificateValidationCallback)
 void SslClientStream_remove_ServerCertValidation_m7225 (SslClientStream_t1838 * __this, CertificateValidationCallback_t1840 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ClientCertSelection(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
 void SslClientStream_add_ClientCertSelection_m7226 (SslClientStream_t1838 * __this, CertificateSelectionCallback_t1841 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ClientCertSelection(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
 void SslClientStream_remove_ClientCertSelection_m7227 (SslClientStream_t1838 * __this, CertificateSelectionCallback_t1841 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_PrivateKeySelection(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
 void SslClientStream_add_PrivateKeySelection_m7228 (SslClientStream_t1838 * __this, PrivateKeySelectionCallback_t1839 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_PrivateKeySelection(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
 void SslClientStream_remove_PrivateKeySelection_m7229 (SslClientStream_t1838 * __this, PrivateKeySelectionCallback_t1839 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ServerCertValidation2(Mono.Security.Protocol.Tls.CertificateValidationCallback2)
 void SslClientStream_add_ServerCertValidation2_m6434 (SslClientStream_t1838 * __this, CertificateValidationCallback2_t1871 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ServerCertValidation2(Mono.Security.Protocol.Tls.CertificateValidationCallback2)
 void SslClientStream_remove_ServerCertValidation2_m7230 (SslClientStream_t1838 * __this, CertificateValidationCallback2_t1871 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.SslClientStream::get_InputBuffer()
 Stream_t1049 * SslClientStream_get_InputBuffer_m7231 (SslClientStream_t1838 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Protocol.Tls.SslClientStream::get_ClientCertificates()
 X509CertificateCollection_t1565 * SslClientStream_get_ClientCertificates_m7232 (SslClientStream_t1838 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::get_SelectedClientCertificate()
 X509Certificate_t1569 * SslClientStream_get_SelectedClientCertificate_m7233 (SslClientStream_t1838 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CertificateValidationCallback Mono.Security.Protocol.Tls.SslClientStream::get_ServerCertValidationDelegate()
 CertificateValidationCallback_t1840 * SslClientStream_get_ServerCertValidationDelegate_m7234 (SslClientStream_t1838 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_ServerCertValidationDelegate(Mono.Security.Protocol.Tls.CertificateValidationCallback)
 void SslClientStream_set_ServerCertValidationDelegate_m6223 (SslClientStream_t1838 * __this, CertificateValidationCallback_t1840 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.SslClientStream::get_ClientCertSelectionDelegate()
 CertificateSelectionCallback_t1841 * SslClientStream_get_ClientCertSelectionDelegate_m7235 (SslClientStream_t1838 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_ClientCertSelectionDelegate(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
 void SslClientStream_set_ClientCertSelectionDelegate_m6225 (SslClientStream_t1838 * __this, CertificateSelectionCallback_t1841 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslClientStream::get_PrivateKeyCertSelectionDelegate()
 PrivateKeySelectionCallback_t1839 * SslClientStream_get_PrivateKeyCertSelectionDelegate_m7236 (SslClientStream_t1838 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_PrivateKeyCertSelectionDelegate(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
 void SslClientStream_set_PrivateKeyCertSelectionDelegate_m6221 (SslClientStream_t1838 * __this, PrivateKeySelectionCallback_t1839 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::Finalize()
 void SslClientStream_Finalize_m7237 (SslClientStream_t1838 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::Dispose(System.Boolean)
 void SslClientStream_Dispose_m7238 (SslClientStream_t1838 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslClientStream::OnBeginNegotiateHandshake(System.AsyncCallback,System.Object)
 Object_t * SslClientStream_OnBeginNegotiateHandshake_m7239 (SslClientStream_t1838 * __this, AsyncCallback_t189 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::SafeReceiveRecord(System.IO.Stream)
 void SslClientStream_SafeReceiveRecord_m7240 (SslClientStream_t1838 * __this, Stream_t1049 * ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::OnNegotiateHandshakeCallback(System.IAsyncResult)
 void SslClientStream_OnNegotiateHandshakeCallback_m7241 (SslClientStream_t1838 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::OnLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 X509Certificate_t1569 * SslClientStream_OnLocalCertificateSelection_m7242 (SslClientStream_t1838 * __this, X509CertificateCollection_t1565 * ___clientCertificates, X509Certificate_t1569 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1565 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::get_HaveRemoteValidation2Callback()
 bool SslClientStream_get_HaveRemoteValidation2Callback_m7243 (SslClientStream_t1838 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::OnRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
 ValidationResult_t1667 * SslClientStream_OnRemoteCertificateValidation2_m7244 (SslClientStream_t1838 * __this, X509CertificateCollection_t1668 * ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::OnRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
 bool SslClientStream_OnRemoteCertificateValidation_m7245 (SslClientStream_t1838 * __this, X509Certificate_t1569 * ___certificate, Int32U5BU5D_t1424* ___errors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
 bool SslClientStream_RaiseServerCertificateValidation_m7246 (SslClientStream_t1838 * __this, X509Certificate_t1569 * ___certificate, Int32U5BU5D_t1424* ___certificateErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
 ValidationResult_t1667 * SslClientStream_RaiseServerCertificateValidation2_m7247 (SslClientStream_t1838 * __this, X509CertificateCollection_t1668 * ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::RaiseClientCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 X509Certificate_t1569 * SslClientStream_RaiseClientCertificateSelection_m7248 (SslClientStream_t1838 * __this, X509CertificateCollection_t1565 * ___clientCertificates, X509Certificate_t1569 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1565 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslClientStream::OnLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
 AsymmetricAlgorithm_t1568 * SslClientStream_OnLocalPrivateKeySelection_m7249 (SslClientStream_t1838 * __this, X509Certificate_t1569 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslClientStream::RaisePrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
 AsymmetricAlgorithm_t1568 * SslClientStream_RaisePrivateKeySelection_m7250 (SslClientStream_t1838 * __this, X509Certificate_t1569 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
