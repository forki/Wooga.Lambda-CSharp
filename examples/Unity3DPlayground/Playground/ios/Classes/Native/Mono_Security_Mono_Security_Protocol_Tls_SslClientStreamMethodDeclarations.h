#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t3304;
// System.IO.Stream
struct Stream_t3308;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2998;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t2983;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t3333;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t3320;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t3321;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t3334;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.Object
struct Object_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t3332;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3225;
// System.Int32[]
struct Int32U5BU5D_t156;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3013;
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean)
 void SslClientStream__ctor_m8539 (SslClientStream_t3304 * __this, Stream_t3308 * ___stream, String_t* ___targetHost, bool ___ownsStream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Security.Cryptography.X509Certificates.X509Certificate)
 void SslClientStream__ctor_m8540 (SslClientStream_t3304 * __this, Stream_t3308 * ___stream, String_t* ___targetHost, X509Certificate_t2983 * ___clientCertificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 void SslClientStream__ctor_m8541 (SslClientStream_t3304 * __this, Stream_t3308 * ___stream, String_t* ___targetHost, X509CertificateCollection_t2998 * ___clientCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType)
 void SslClientStream__ctor_m8542 (SslClientStream_t3304 * __this, Stream_t3308 * ___stream, String_t* ___targetHost, bool ___ownsStream, int32_t ___securityProtocolType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 void SslClientStream__ctor_m8543 (SslClientStream_t3304 * __this, Stream_t3308 * ___stream, String_t* ___targetHost, bool ___ownsStream, int32_t ___securityProtocolType, X509CertificateCollection_t2998 * ___clientCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ServerCertValidation(Mono.Security.Protocol.Tls.CertificateValidationCallback)
 void SslClientStream_add_ServerCertValidation_m8544 (SslClientStream_t3304 * __this, CertificateValidationCallback_t3333 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ServerCertValidation(Mono.Security.Protocol.Tls.CertificateValidationCallback)
 void SslClientStream_remove_ServerCertValidation_m8545 (SslClientStream_t3304 * __this, CertificateValidationCallback_t3333 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ClientCertSelection(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
 void SslClientStream_add_ClientCertSelection_m8546 (SslClientStream_t3304 * __this, CertificateSelectionCallback_t3320 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ClientCertSelection(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
 void SslClientStream_remove_ClientCertSelection_m8547 (SslClientStream_t3304 * __this, CertificateSelectionCallback_t3320 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_PrivateKeySelection(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
 void SslClientStream_add_PrivateKeySelection_m8548 (SslClientStream_t3304 * __this, PrivateKeySelectionCallback_t3321 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_PrivateKeySelection(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
 void SslClientStream_remove_PrivateKeySelection_m8549 (SslClientStream_t3304 * __this, PrivateKeySelectionCallback_t3321 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ServerCertValidation2(Mono.Security.Protocol.Tls.CertificateValidationCallback2)
 void SslClientStream_add_ServerCertValidation2_m8550 (SslClientStream_t3304 * __this, CertificateValidationCallback2_t3334 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ServerCertValidation2(Mono.Security.Protocol.Tls.CertificateValidationCallback2)
 void SslClientStream_remove_ServerCertValidation2_m8551 (SslClientStream_t3304 * __this, CertificateValidationCallback2_t3334 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.SslClientStream::get_InputBuffer()
 Stream_t3308 * SslClientStream_get_InputBuffer_m8552 (SslClientStream_t3304 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Protocol.Tls.SslClientStream::get_ClientCertificates()
 X509CertificateCollection_t2998 * SslClientStream_get_ClientCertificates_m8553 (SslClientStream_t3304 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::get_SelectedClientCertificate()
 X509Certificate_t2983 * SslClientStream_get_SelectedClientCertificate_m8554 (SslClientStream_t3304 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CertificateValidationCallback Mono.Security.Protocol.Tls.SslClientStream::get_ServerCertValidationDelegate()
 CertificateValidationCallback_t3333 * SslClientStream_get_ServerCertValidationDelegate_m8555 (SslClientStream_t3304 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_ServerCertValidationDelegate(Mono.Security.Protocol.Tls.CertificateValidationCallback)
 void SslClientStream_set_ServerCertValidationDelegate_m8556 (SslClientStream_t3304 * __this, CertificateValidationCallback_t3333 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.SslClientStream::get_ClientCertSelectionDelegate()
 CertificateSelectionCallback_t3320 * SslClientStream_get_ClientCertSelectionDelegate_m8557 (SslClientStream_t3304 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_ClientCertSelectionDelegate(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
 void SslClientStream_set_ClientCertSelectionDelegate_m8558 (SslClientStream_t3304 * __this, CertificateSelectionCallback_t3320 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslClientStream::get_PrivateKeyCertSelectionDelegate()
 PrivateKeySelectionCallback_t3321 * SslClientStream_get_PrivateKeyCertSelectionDelegate_m8559 (SslClientStream_t3304 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_PrivateKeyCertSelectionDelegate(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
 void SslClientStream_set_PrivateKeyCertSelectionDelegate_m8560 (SslClientStream_t3304 * __this, PrivateKeySelectionCallback_t3321 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::Finalize()
 void SslClientStream_Finalize_m8561 (SslClientStream_t3304 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::Dispose(System.Boolean)
 void SslClientStream_Dispose_m8562 (SslClientStream_t3304 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslClientStream::OnBeginNegotiateHandshake(System.AsyncCallback,System.Object)
 Object_t * SslClientStream_OnBeginNegotiateHandshake_m8563 (SslClientStream_t3304 * __this, AsyncCallback_t184 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::SafeReceiveRecord(System.IO.Stream)
 void SslClientStream_SafeReceiveRecord_m8564 (SslClientStream_t3304 * __this, Stream_t3308 * ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::OnNegotiateHandshakeCallback(System.IAsyncResult)
 void SslClientStream_OnNegotiateHandshakeCallback_m8565 (SslClientStream_t3304 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::OnLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 X509Certificate_t2983 * SslClientStream_OnLocalCertificateSelection_m8566 (SslClientStream_t3304 * __this, X509CertificateCollection_t2998 * ___clientCertificates, X509Certificate_t2983 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2998 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::get_HaveRemoteValidation2Callback()
 bool SslClientStream_get_HaveRemoteValidation2Callback_m8567 (SslClientStream_t3304 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::OnRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
 ValidationResult_t3332 * SslClientStream_OnRemoteCertificateValidation2_m8568 (SslClientStream_t3304 * __this, X509CertificateCollection_t3225 * ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::OnRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
 bool SslClientStream_OnRemoteCertificateValidation_m8569 (SslClientStream_t3304 * __this, X509Certificate_t2983 * ___certificate, Int32U5BU5D_t156* ___errors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
 bool SslClientStream_RaiseServerCertificateValidation_m8570 (SslClientStream_t3304 * __this, X509Certificate_t2983 * ___certificate, Int32U5BU5D_t156* ___certificateErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
 ValidationResult_t3332 * SslClientStream_RaiseServerCertificateValidation2_m8571 (SslClientStream_t3304 * __this, X509CertificateCollection_t3225 * ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::RaiseClientCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 X509Certificate_t2983 * SslClientStream_RaiseClientCertificateSelection_m8572 (SslClientStream_t3304 * __this, X509CertificateCollection_t2998 * ___clientCertificates, X509Certificate_t2983 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2998 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslClientStream::OnLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
 AsymmetricAlgorithm_t3013 * SslClientStream_OnLocalPrivateKeySelection_m8573 (SslClientStream_t3304 * __this, X509Certificate_t2983 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslClientStream::RaisePrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
 AsymmetricAlgorithm_t3013 * SslClientStream_RaisePrivateKeySelection_m8574 (SslClientStream_t3304 * __this, X509Certificate_t2983 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
