#pragma once

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify
struct TlsClientCertificateVerify_t1989;
// Mono.Security.Protocol.Tls.Context
struct Context_t1954;
// System.Security.Cryptography.RSA
struct RSA_t1694;
// System.Byte[]
struct ByteU5BU5D_t1071;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::.ctor(Mono.Security.Protocol.Tls.Context)
 void TlsClientCertificateVerify__ctor_m7400 (TlsClientCertificateVerify_t1989 * __this, Context_t1954 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::Update()
 void TlsClientCertificateVerify_Update_m7401 (TlsClientCertificateVerify_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsSsl3()
 void TlsClientCertificateVerify_ProcessAsSsl3_m7402 (TlsClientCertificateVerify_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsTls1()
 void TlsClientCertificateVerify_ProcessAsTls1_m7403 (TlsClientCertificateVerify_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getClientCertRSA(System.Security.Cryptography.RSA)
 RSA_t1694 * TlsClientCertificateVerify_getClientCertRSA_m7404 (TlsClientCertificateVerify_t1989 * __this, RSA_t1694 * ___privKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getUnsignedBigInteger(System.Byte[])
 ByteU5BU5D_t1071* TlsClientCertificateVerify_getUnsignedBigInteger_m7405 (TlsClientCertificateVerify_t1989 * __this, ByteU5BU5D_t1071* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
