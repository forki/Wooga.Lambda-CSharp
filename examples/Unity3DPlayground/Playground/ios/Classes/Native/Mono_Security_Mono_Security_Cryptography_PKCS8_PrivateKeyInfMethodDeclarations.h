#pragma once

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1929;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Security.Cryptography.RSA
struct RSA_t1694;
// System.Security.Cryptography.DSA
struct DSA_t1693;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
 void PrivateKeyInfo__ctor_m6812 (PrivateKeyInfo_t1929 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
 void PrivateKeyInfo__ctor_m6813 (PrivateKeyInfo_t1929 * __this, ByteU5BU5D_t1071* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
 ByteU5BU5D_t1071* PrivateKeyInfo_get_PrivateKey_m6814 (PrivateKeyInfo_t1929 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
 void PrivateKeyInfo_Decode_m6815 (PrivateKeyInfo_t1929 * __this, ByteU5BU5D_t1071* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
 ByteU5BU5D_t1071* PrivateKeyInfo_RemoveLeadingZero_m6816 (Object_t * __this/* static, unused */, ByteU5BU5D_t1071* ___bigInt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
 ByteU5BU5D_t1071* PrivateKeyInfo_Normalize_m6817 (Object_t * __this/* static, unused */, ByteU5BU5D_t1071* ___bigInt, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
 RSA_t1694 * PrivateKeyInfo_DecodeRSA_m6818 (Object_t * __this/* static, unused */, ByteU5BU5D_t1071* ___keypair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
 DSA_t1693 * PrivateKeyInfo_DecodeDSA_m6819 (Object_t * __this/* static, unused */, ByteU5BU5D_t1071* ___privateKey, DSAParameters_t1882  ___dsaParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
