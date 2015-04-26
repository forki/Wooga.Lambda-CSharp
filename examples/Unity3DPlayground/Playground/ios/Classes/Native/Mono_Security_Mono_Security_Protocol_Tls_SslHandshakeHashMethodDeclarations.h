#pragma once

// Mono.Security.Protocol.Tls.SslHandshakeHash
struct SslHandshakeHash_t1982;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Security.Cryptography.RSA
struct RSA_t1694;

// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::.ctor(System.Byte[])
 void SslHandshakeHash__ctor_m7257 (SslHandshakeHash_t1982 * __this, ByteU5BU5D_t1071* ___secret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::Initialize()
 void SslHandshakeHash_Initialize_m7258 (SslHandshakeHash_t1982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::HashFinal()
 ByteU5BU5D_t1071* SslHandshakeHash_HashFinal_m7259 (SslHandshakeHash_t1982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::HashCore(System.Byte[],System.Int32,System.Int32)
 void SslHandshakeHash_HashCore_m7260 (SslHandshakeHash_t1982 * __this, ByteU5BU5D_t1071* ___array, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::CreateSignature(System.Security.Cryptography.RSA)
 ByteU5BU5D_t1071* SslHandshakeHash_CreateSignature_m7261 (SslHandshakeHash_t1982 * __this, RSA_t1694 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::initializePad()
 void SslHandshakeHash_initializePad_m7262 (SslHandshakeHash_t1982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
