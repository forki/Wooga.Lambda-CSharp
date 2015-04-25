#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.PKCS12
struct PKCS12_t3481;
// System.String
struct String_t;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3480;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3251;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t3275;
// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t3482;
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t3471;
// Mono.Security.ASN1
struct ASN1_t3477;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t3483;
// System.Collections.IDictionary
struct IDictionary_t2963;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t3484;
// System.Object
struct Object_t;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.X509.PKCS12::.ctor()
 void PKCS12__ctor_m10124 (PKCS12_t3481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[])
 void PKCS12__ctor_m10125 (PKCS12_t3481 * __this, ByteU5BU5D_t961* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[],System.String)
 void PKCS12__ctor_m10126 (PKCS12_t3481 * __this, ByteU5BU5D_t961* ___data, String_t* ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.cctor()
 void PKCS12__cctor_m10127 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Decode(System.Byte[])
 void PKCS12_Decode_m10128 (PKCS12_t3481 * __this, ByteU5BU5D_t961* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Finalize()
 void PKCS12_Finalize_m10129 (PKCS12_t3481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_Password(System.String)
 void PKCS12_set_Password_m10130 (PKCS12_t3481 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_IterationCount()
 int32_t PKCS12_get_IterationCount_m10131 (PKCS12_t3481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_IterationCount(System.Int32)
 void PKCS12_set_IterationCount_m10132 (PKCS12_t3481 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::get_Certificates()
 X509CertificateCollection_t3480 * PKCS12_get_Certificates_m10133 (PKCS12_t3481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::get_RNG()
 RandomNumberGenerator_t3251 * PKCS12_get_RNG_m10134 (PKCS12_t3481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.PKCS12::Compare(System.Byte[],System.Byte[])
 bool PKCS12_Compare_m10135 (PKCS12_t3481 * __this, ByteU5BU5D_t961* ___expected, ByteU5BU5D_t961* ___actual, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.X509.PKCS12::GetSymmetricAlgorithm(System.String,System.Byte[],System.Int32)
 SymmetricAlgorithm_t3275 * PKCS12_GetSymmetricAlgorithm_m10136 (PKCS12_t3481 * __this, String_t* ___algorithmOid, ByteU5BU5D_t961* ___salt, int32_t ___iterationCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(System.String,System.Byte[],System.Int32,System.Byte[])
 ByteU5BU5D_t961* PKCS12_Decrypt_m10137 (PKCS12_t3481 * __this, String_t* ___algorithmOid, ByteU5BU5D_t961* ___salt, int32_t ___iterationCount, ByteU5BU5D_t961* ___encryptedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(Mono.Security.PKCS7/EncryptedData)
 ByteU5BU5D_t961* PKCS12_Decrypt_m10138 (PKCS12_t3481 * __this, EncryptedData_t3482 * ___ed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Encrypt(System.String,System.Byte[],System.Int32,System.Byte[])
 ByteU5BU5D_t961* PKCS12_Encrypt_m10139 (PKCS12_t3481 * __this, String_t* ___algorithmOid, ByteU5BU5D_t961* ___salt, int32_t ___iterationCount, ByteU5BU5D_t961* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.X509.PKCS12::GetExistingParameters(System.Boolean&)
 DSAParameters_t3218  PKCS12_GetExistingParameters_m10140 (PKCS12_t3481 * __this, bool* ___found, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddPrivateKey(Mono.Security.Cryptography.PKCS8/PrivateKeyInfo)
 void PKCS12_AddPrivateKey_m10141 (PKCS12_t3481 * __this, PrivateKeyInfo_t3471 * ___pki, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::ReadSafeBag(Mono.Security.ASN1)
 void PKCS12_ReadSafeBag_m10142 (PKCS12_t3481 * __this, ASN1_t3477 * ___safeBag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.PKCS12::CertificateSafeBag(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
 ASN1_t3477 * PKCS12_CertificateSafeBag_m10143 (PKCS12_t3481 * __this, X509Certificate_t3483 * ___x509, Object_t * ___attributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::MAC(System.Byte[],System.Byte[],System.Int32,System.Byte[])
 ByteU5BU5D_t961* PKCS12_MAC_m10144 (PKCS12_t3481 * __this, ByteU5BU5D_t961* ___password, ByteU5BU5D_t961* ___salt, int32_t ___iterations, ByteU5BU5D_t961* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::GetBytes()
 ByteU5BU5D_t961* PKCS12_GetBytes_m10145 (PKCS12_t3481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.X509.PKCS12::EncryptedContentInfo(Mono.Security.ASN1,System.String)
 ContentInfo_t3484 * PKCS12_EncryptedContentInfo_m10146 (PKCS12_t3481 * __this, ASN1_t3477 * ___safeBags, String_t* ___algorithmOid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddCertificate(Mono.Security.X509.X509Certificate)
 void PKCS12_AddCertificate_m10147 (PKCS12_t3481 * __this, X509Certificate_t3483 * ___cert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddCertificate(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
 void PKCS12_AddCertificate_m10148 (PKCS12_t3481 * __this, X509Certificate_t3483 * ___cert, Object_t * ___attributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::RemoveCertificate(Mono.Security.X509.X509Certificate)
 void PKCS12_RemoveCertificate_m10149 (PKCS12_t3481 * __this, X509Certificate_t3483 * ___cert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::RemoveCertificate(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
 void PKCS12_RemoveCertificate_m10150 (PKCS12_t3481 * __this, X509Certificate_t3483 * ___cert, Object_t * ___attrs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.X509.PKCS12::Clone()
 Object_t * PKCS12_Clone_m10151 (PKCS12_t3481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_MaximumPasswordLength()
 int32_t PKCS12_get_MaximumPasswordLength_m10152 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
