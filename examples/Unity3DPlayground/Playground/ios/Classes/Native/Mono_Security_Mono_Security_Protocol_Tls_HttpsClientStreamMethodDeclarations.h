#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t3322;
// System.IO.Stream
struct Stream_t3308;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2998;
// System.Net.HttpWebRequest
struct HttpWebRequest_t2999;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t2983;
// System.Int32[]
struct Int32U5BU5D_t156;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3013;

// System.Void Mono.Security.Protocol.Tls.HttpsClientStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.HttpWebRequest,System.Byte[])
 void HttpsClientStream__ctor_m8465 (HttpsClientStream_t3322 * __this, Stream_t3308 * ___stream, X509CertificateCollection_t2998 * ___clientCertificates, HttpWebRequest_t2999 * ___request, ByteU5BU5D_t961* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::get_TrustFailure()
 bool HttpsClientStream_get_TrustFailure_m8466 (HttpsClientStream_t3322 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
 bool HttpsClientStream_RaiseServerCertificateValidation_m8467 (HttpsClientStream_t3322 * __this, X509Certificate_t2983 * ___certificate, Int32U5BU5D_t156* ___certificateErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__0(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 X509Certificate_t2983 * HttpsClientStream_U3CHttpsClientStreamU3Em__0_m8468 (Object_t * __this/* static, unused */, X509CertificateCollection_t2998 * ___clientCerts, X509Certificate_t2983 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2998 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__1(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
 AsymmetricAlgorithm_t3013 * HttpsClientStream_U3CHttpsClientStreamU3Em__1_m8469 (Object_t * __this/* static, unused */, X509Certificate_t2983 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
