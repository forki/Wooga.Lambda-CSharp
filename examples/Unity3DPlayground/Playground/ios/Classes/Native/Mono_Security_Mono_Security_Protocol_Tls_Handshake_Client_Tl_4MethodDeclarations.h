#pragma once

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
struct TlsServerCertificate_t1993;
// Mono.Security.Protocol.Tls.Context
struct Context_t1954;
// System.Byte[]
struct ByteU5BU5D_t1071;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1670;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1668;
// System.String
struct String_t;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
 void TlsServerCertificate__ctor_m7419 (TlsServerCertificate_t1993 * __this, Context_t1954 * ___context, ByteU5BU5D_t1071* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Update()
 void TlsServerCertificate_Update_m7420 (TlsServerCertificate_t1993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsSsl3()
 void TlsServerCertificate_ProcessAsSsl3_m7421 (TlsServerCertificate_t1993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsTls1()
 void TlsServerCertificate_ProcessAsTls1_m7422 (TlsServerCertificate_t1993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkCertificateUsage(Mono.Security.X509.X509Certificate)
 bool TlsServerCertificate_checkCertificateUsage_m7423 (TlsServerCertificate_t1993 * __this, X509Certificate_t1670 * ___cert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::validateCertificates(Mono.Security.X509.X509CertificateCollection)
 void TlsServerCertificate_validateCertificates_m7424 (TlsServerCertificate_t1993 * __this, X509CertificateCollection_t1668 * ___certificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkServerIdentity(Mono.Security.X509.X509Certificate)
 bool TlsServerCertificate_checkServerIdentity_m7425 (TlsServerCertificate_t1993 * __this, X509Certificate_t1670 * ___cert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkDomainName(System.String)
 bool TlsServerCertificate_checkDomainName_m7426 (TlsServerCertificate_t1993 * __this, String_t* ___subjectName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Match(System.String,System.String)
 bool TlsServerCertificate_Match_m7427 (Object_t * __this/* static, unused */, String_t* ___hostname, String_t* ___pattern, MethodInfo* method) IL2CPP_METHOD_ATTR;
