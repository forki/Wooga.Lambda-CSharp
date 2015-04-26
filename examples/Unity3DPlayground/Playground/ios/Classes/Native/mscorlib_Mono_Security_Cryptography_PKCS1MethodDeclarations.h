#pragma once

// Mono.Security.Cryptography.PKCS1
struct PKCS1_t2110;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Security.Cryptography.RSA
struct RSA_t1694;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1618;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1619;

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
 void PKCS1__cctor_m8649 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
 bool PKCS1_Compare_m8650 (Object_t * __this/* static, unused */, ByteU5BU5D_t1071* ___array1, ByteU5BU5D_t1071* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
 ByteU5BU5D_t1071* PKCS1_I2OSP_m8651 (Object_t * __this/* static, unused */, ByteU5BU5D_t1071* ___x, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
 ByteU5BU5D_t1071* PKCS1_OS2IP_m8652 (Object_t * __this/* static, unused */, ByteU5BU5D_t1071* ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAEP(System.Security.Cryptography.RSA,System.Byte[])
 ByteU5BU5D_t1071* PKCS1_RSAEP_m8653 (Object_t * __this/* static, unused */, RSA_t1694 * ___rsa, ByteU5BU5D_t1071* ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
 ByteU5BU5D_t1071* PKCS1_RSASP1_m8654 (Object_t * __this/* static, unused */, RSA_t1694 * ___rsa, ByteU5BU5D_t1071* ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
 ByteU5BU5D_t1071* PKCS1_RSAVP1_m8655 (Object_t * __this/* static, unused */, RSA_t1694 * ___rsa, ByteU5BU5D_t1071* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encrypt_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.RandomNumberGenerator,System.Byte[])
 ByteU5BU5D_t1071* PKCS1_Encrypt_v15_m8656 (Object_t * __this/* static, unused */, RSA_t1694 * ___rsa, RandomNumberGenerator_t1618 * ___rng, ByteU5BU5D_t1071* ___M, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
 ByteU5BU5D_t1071* PKCS1_Sign_v15_m8657 (Object_t * __this/* static, unused */, RSA_t1694 * ___rsa, HashAlgorithm_t1619 * ___hash, ByteU5BU5D_t1071* ___hashValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
 bool PKCS1_Verify_v15_m8658 (Object_t * __this/* static, unused */, RSA_t1694 * ___rsa, HashAlgorithm_t1619 * ___hash, ByteU5BU5D_t1071* ___hashValue, ByteU5BU5D_t1071* ___signature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
 bool PKCS1_Verify_v15_m8659 (Object_t * __this/* static, unused */, RSA_t1694 * ___rsa, HashAlgorithm_t1619 * ___hash, ByteU5BU5D_t1071* ___hashValue, ByteU5BU5D_t1071* ___signature, bool ___tryNonStandardEncoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
 ByteU5BU5D_t1071* PKCS1_Encode_v15_m8660 (Object_t * __this/* static, unused */, HashAlgorithm_t1619 * ___hash, ByteU5BU5D_t1071* ___hashValue, int32_t ___emLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
