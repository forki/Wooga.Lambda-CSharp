#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.MD5SHA1
struct MD5SHA1_t3293;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.Security.Cryptography.RSA
struct RSA_t3019;

// System.Void Mono.Security.Cryptography.MD5SHA1::.ctor()
 void MD5SHA1__ctor_m8299 (MD5SHA1_t3293 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD5SHA1::Initialize()
 void MD5SHA1_Initialize_m8300 (MD5SHA1_t3293 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD5SHA1::HashFinal()
 ByteU5BU5D_t961* MD5SHA1_HashFinal_m8301 (MD5SHA1_t3293 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD5SHA1::HashCore(System.Byte[],System.Int32,System.Int32)
 void MD5SHA1_HashCore_m8302 (MD5SHA1_t3293 * __this, ByteU5BU5D_t961* ___array, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD5SHA1::CreateSignature(System.Security.Cryptography.RSA)
 ByteU5BU5D_t961* MD5SHA1_CreateSignature_m8303 (MD5SHA1_t3293 * __this, RSA_t3019 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.MD5SHA1::VerifySignature(System.Security.Cryptography.RSA,System.Byte[])
 bool MD5SHA1_VerifySignature_m8304 (MD5SHA1_t3293 * __this, RSA_t3019 * ___rsa, ByteU5BU5D_t961* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
