#pragma once

// Mono.Security.Cryptography.MD5SHA1
struct MD5SHA1_t1949;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Security.Cryptography.RSA
struct RSA_t1694;

// System.Void Mono.Security.Cryptography.MD5SHA1::.ctor()
 void MD5SHA1__ctor_m6980 (MD5SHA1_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD5SHA1::Initialize()
 void MD5SHA1_Initialize_m6981 (MD5SHA1_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD5SHA1::HashFinal()
 ByteU5BU5D_t1071* MD5SHA1_HashFinal_m6982 (MD5SHA1_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD5SHA1::HashCore(System.Byte[],System.Int32,System.Int32)
 void MD5SHA1_HashCore_m6983 (MD5SHA1_t1949 * __this, ByteU5BU5D_t1071* ___array, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD5SHA1::CreateSignature(System.Security.Cryptography.RSA)
 ByteU5BU5D_t1071* MD5SHA1_CreateSignature_m6984 (MD5SHA1_t1949 * __this, RSA_t1694 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.MD5SHA1::VerifySignature(System.Security.Cryptography.RSA,System.Byte[])
 bool MD5SHA1_VerifySignature_m6985 (MD5SHA1_t1949 * __this, RSA_t1694 * ___rsa, ByteU5BU5D_t1071* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
