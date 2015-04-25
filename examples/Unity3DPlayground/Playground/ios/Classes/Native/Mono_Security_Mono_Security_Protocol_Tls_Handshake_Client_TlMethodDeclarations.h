#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate
struct TlsClientCertificate_t3343;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t2983;
// Mono.Security.Protocol.Tls.Context
struct Context_t3298;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::.ctor(Mono.Security.Protocol.Tls.Context)
 void TlsClientCertificate__ctor_m8721 (TlsClientCertificate_t3343 * __this, Context_t3298 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::get_ClientCertificate()
 X509Certificate_t2983 * TlsClientCertificate_get_ClientCertificate_m8722 (TlsClientCertificate_t3343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::Update()
 void TlsClientCertificate_Update_m8723 (TlsClientCertificate_t3343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::GetClientCertificate()
 void TlsClientCertificate_GetClientCertificate_m8724 (TlsClientCertificate_t3343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::SendCertificates()
 void TlsClientCertificate_SendCertificates_m8725 (TlsClientCertificate_t3343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::ProcessAsSsl3()
 void TlsClientCertificate_ProcessAsSsl3_m8726 (TlsClientCertificate_t3343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::ProcessAsTls1()
 void TlsClientCertificate_ProcessAsTls1_m8727 (TlsClientCertificate_t3343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::FindParentCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
 X509Certificate_t2983 * TlsClientCertificate_FindParentCertificate_m8728 (TlsClientCertificate_t3343 * __this, X509Certificate_t2983 * ___cert, MethodInfo* method) IL2CPP_METHOD_ATTR;
