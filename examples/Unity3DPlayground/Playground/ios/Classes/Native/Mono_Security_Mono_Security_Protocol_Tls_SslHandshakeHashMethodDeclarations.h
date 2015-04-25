#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SslHandshakeHash
struct SslHandshakeHash_t3336;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.Security.Cryptography.RSA
struct RSA_t3019;

// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::.ctor(System.Byte[])
 void SslHandshakeHash__ctor_m8581 (SslHandshakeHash_t3336 * __this, ByteU5BU5D_t961* ___secret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::Initialize()
 void SslHandshakeHash_Initialize_m8582 (SslHandshakeHash_t3336 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::HashFinal()
 ByteU5BU5D_t961* SslHandshakeHash_HashFinal_m8583 (SslHandshakeHash_t3336 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::HashCore(System.Byte[],System.Int32,System.Int32)
 void SslHandshakeHash_HashCore_m8584 (SslHandshakeHash_t3336 * __this, ByteU5BU5D_t961* ___array, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::CreateSignature(System.Security.Cryptography.RSA)
 ByteU5BU5D_t961* SslHandshakeHash_CreateSignature_m8585 (SslHandshakeHash_t3336 * __this, RSA_t3019 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::initializePad()
 void SslHandshakeHash_initializePad_m8586 (SslHandshakeHash_t3336 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
