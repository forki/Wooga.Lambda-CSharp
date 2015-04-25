#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify
struct TlsClientCertificateVerify_t3344;
// Mono.Security.Protocol.Tls.Context
struct Context_t3298;
// System.Security.Cryptography.RSA
struct RSA_t3019;
// System.Byte[]
struct ByteU5BU5D_t961;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::.ctor(Mono.Security.Protocol.Tls.Context)
 void TlsClientCertificateVerify__ctor_m8729 (TlsClientCertificateVerify_t3344 * __this, Context_t3298 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::Update()
 void TlsClientCertificateVerify_Update_m8730 (TlsClientCertificateVerify_t3344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsSsl3()
 void TlsClientCertificateVerify_ProcessAsSsl3_m8731 (TlsClientCertificateVerify_t3344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsTls1()
 void TlsClientCertificateVerify_ProcessAsTls1_m8732 (TlsClientCertificateVerify_t3344 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getClientCertRSA(System.Security.Cryptography.RSA)
 RSA_t3019 * TlsClientCertificateVerify_getClientCertRSA_m8733 (TlsClientCertificateVerify_t3344 * __this, RSA_t3019 * ___privKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getUnsignedBigInteger(System.Byte[])
 ByteU5BU5D_t961* TlsClientCertificateVerify_getUnsignedBigInteger_m8734 (TlsClientCertificateVerify_t3344 * __this, ByteU5BU5D_t961* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
