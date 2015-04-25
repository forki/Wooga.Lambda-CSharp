#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
struct TlsServerCertificate_t3348;
// Mono.Security.Protocol.Tls.Context
struct Context_t3298;
// System.Byte[]
struct ByteU5BU5D_t961;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t3017;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3225;
// System.String
struct String_t;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
 void TlsServerCertificate__ctor_m8748 (TlsServerCertificate_t3348 * __this, Context_t3298 * ___context, ByteU5BU5D_t961* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Update()
 void TlsServerCertificate_Update_m8749 (TlsServerCertificate_t3348 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsSsl3()
 void TlsServerCertificate_ProcessAsSsl3_m8750 (TlsServerCertificate_t3348 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsTls1()
 void TlsServerCertificate_ProcessAsTls1_m8751 (TlsServerCertificate_t3348 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkCertificateUsage(Mono.Security.X509.X509Certificate)
 bool TlsServerCertificate_checkCertificateUsage_m8752 (TlsServerCertificate_t3348 * __this, X509Certificate_t3017 * ___cert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::validateCertificates(Mono.Security.X509.X509CertificateCollection)
 void TlsServerCertificate_validateCertificates_m8753 (TlsServerCertificate_t3348 * __this, X509CertificateCollection_t3225 * ___certificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkServerIdentity(Mono.Security.X509.X509Certificate)
 bool TlsServerCertificate_checkServerIdentity_m8754 (TlsServerCertificate_t3348 * __this, X509Certificate_t3017 * ___cert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkDomainName(System.String)
 bool TlsServerCertificate_checkDomainName_m8755 (TlsServerCertificate_t3348 * __this, String_t* ___subjectName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Match(System.String,System.String)
 bool TlsServerCertificate_Match_m8756 (Object_t * __this/* static, unused */, String_t* ___hostname, String_t* ___pattern, MethodInfo* method) IL2CPP_METHOD_ATTR;
