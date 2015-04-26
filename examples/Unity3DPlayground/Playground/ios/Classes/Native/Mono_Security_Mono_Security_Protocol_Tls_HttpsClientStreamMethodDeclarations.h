#pragma once

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t1870;
// System.IO.Stream
struct Stream_t1049;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1565;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1056;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1569;
// System.Int32[]
struct Int32U5BU5D_t1424;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1568;

// System.Void Mono.Security.Protocol.Tls.HttpsClientStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.HttpWebRequest,System.Byte[])
 void HttpsClientStream__ctor_m7146 (HttpsClientStream_t1870 * __this, Stream_t1049 * ___stream, X509CertificateCollection_t1565 * ___clientCertificates, HttpWebRequest_t1056 * ___request, ByteU5BU5D_t1071* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::get_TrustFailure()
 bool HttpsClientStream_get_TrustFailure_m7147 (HttpsClientStream_t1870 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
 bool HttpsClientStream_RaiseServerCertificateValidation_m7148 (HttpsClientStream_t1870 * __this, X509Certificate_t1569 * ___certificate, Int32U5BU5D_t1424* ___certificateErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__0(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 X509Certificate_t1569 * HttpsClientStream_U3CHttpsClientStreamU3Em__0_m7149 (Object_t * __this/* static, unused */, X509CertificateCollection_t1565 * ___clientCerts, X509Certificate_t1569 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1565 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__1(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
 AsymmetricAlgorithm_t1568 * HttpsClientStream_U3CHttpsClientStreamU3Em__1_m7150 (Object_t * __this/* static, unused */, X509Certificate_t1569 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
