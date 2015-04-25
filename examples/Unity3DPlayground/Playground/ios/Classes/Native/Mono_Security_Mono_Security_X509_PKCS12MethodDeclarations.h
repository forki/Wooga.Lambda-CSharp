#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.PKCS12
struct PKCS12_t3223;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t2972;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3225;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3251;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t3275;
// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t3260;
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t3271;
// Mono.Security.ASN1
struct ASN1_t3028;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t3017;
// System.Collections.IDictionary
struct IDictionary_t2963;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t3259;
// System.Object
struct Object_t;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.X509.PKCS12::.ctor()
 void PKCS12__ctor_m8162 (PKCS12_t3223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[])
 void PKCS12__ctor_m7776 (PKCS12_t3223 * __this, ByteU5BU5D_t961* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[],System.String)
 void PKCS12__ctor_m7777 (PKCS12_t3223 * __this, ByteU5BU5D_t961* ___data, String_t* ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.cctor()
 void PKCS12__cctor_m8163 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Decode(System.Byte[])
 void PKCS12_Decode_m8164 (PKCS12_t3223 * __this, ByteU5BU5D_t961* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Finalize()
 void PKCS12_Finalize_m8165 (PKCS12_t3223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_Password(System.String)
 void PKCS12_set_Password_m8166 (PKCS12_t3223 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_IterationCount()
 int32_t PKCS12_get_IterationCount_m8167 (PKCS12_t3223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_IterationCount(System.Int32)
 void PKCS12_set_IterationCount_m8168 (PKCS12_t3223 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.PKCS12::get_Keys()
 ArrayList_t2972 * PKCS12_get_Keys_m7781 (PKCS12_t3223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::get_Certificates()
 X509CertificateCollection_t3225 * PKCS12_get_Certificates_m7778 (PKCS12_t3223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::get_RNG()
 RandomNumberGenerator_t3251 * PKCS12_get_RNG_m8169 (PKCS12_t3223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.PKCS12::Compare(System.Byte[],System.Byte[])
 bool PKCS12_Compare_m8170 (PKCS12_t3223 * __this, ByteU5BU5D_t961* ___expected, ByteU5BU5D_t961* ___actual, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.X509.PKCS12::GetSymmetricAlgorithm(System.String,System.Byte[],System.Int32)
 SymmetricAlgorithm_t3275 * PKCS12_GetSymmetricAlgorithm_m8171 (PKCS12_t3223 * __this, String_t* ___algorithmOid, ByteU5BU5D_t961* ___salt, int32_t ___iterationCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(System.String,System.Byte[],System.Int32,System.Byte[])
 ByteU5BU5D_t961* PKCS12_Decrypt_m8172 (PKCS12_t3223 * __this, String_t* ___algorithmOid, ByteU5BU5D_t961* ___salt, int32_t ___iterationCount, ByteU5BU5D_t961* ___encryptedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(Mono.Security.PKCS7/EncryptedData)
 ByteU5BU5D_t961* PKCS12_Decrypt_m8173 (PKCS12_t3223 * __this, EncryptedData_t3260 * ___ed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Encrypt(System.String,System.Byte[],System.Int32,System.Byte[])
 ByteU5BU5D_t961* PKCS12_Encrypt_m8174 (PKCS12_t3223 * __this, String_t* ___algorithmOid, ByteU5BU5D_t961* ___salt, int32_t ___iterationCount, ByteU5BU5D_t961* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.X509.PKCS12::GetExistingParameters(System.Boolean&)
 DSAParameters_t3218  PKCS12_GetExistingParameters_m8175 (PKCS12_t3223 * __this, bool* ___found, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddPrivateKey(Mono.Security.Cryptography.PKCS8/PrivateKeyInfo)
 void PKCS12_AddPrivateKey_m8176 (PKCS12_t3223 * __this, PrivateKeyInfo_t3271 * ___pki, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::ReadSafeBag(Mono.Security.ASN1)
 void PKCS12_ReadSafeBag_m8177 (PKCS12_t3223 * __this, ASN1_t3028 * ___safeBag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.PKCS12::CertificateSafeBag(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
 ASN1_t3028 * PKCS12_CertificateSafeBag_m8178 (PKCS12_t3223 * __this, X509Certificate_t3017 * ___x509, Object_t * ___attributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::MAC(System.Byte[],System.Byte[],System.Int32,System.Byte[])
 ByteU5BU5D_t961* PKCS12_MAC_m8179 (PKCS12_t3223 * __this, ByteU5BU5D_t961* ___password, ByteU5BU5D_t961* ___salt, int32_t ___iterations, ByteU5BU5D_t961* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::GetBytes()
 ByteU5BU5D_t961* PKCS12_GetBytes_m8180 (PKCS12_t3223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.X509.PKCS12::EncryptedContentInfo(Mono.Security.ASN1,System.String)
 ContentInfo_t3259 * PKCS12_EncryptedContentInfo_m8181 (PKCS12_t3223 * __this, ASN1_t3028 * ___safeBags, String_t* ___algorithmOid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddCertificate(Mono.Security.X509.X509Certificate)
 void PKCS12_AddCertificate_m8182 (PKCS12_t3223 * __this, X509Certificate_t3017 * ___cert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddCertificate(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
 void PKCS12_AddCertificate_m8183 (PKCS12_t3223 * __this, X509Certificate_t3017 * ___cert, Object_t * ___attributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::RemoveCertificate(Mono.Security.X509.X509Certificate)
 void PKCS12_RemoveCertificate_m8184 (PKCS12_t3223 * __this, X509Certificate_t3017 * ___cert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::RemoveCertificate(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
 void PKCS12_RemoveCertificate_m8185 (PKCS12_t3223 * __this, X509Certificate_t3017 * ___cert, Object_t * ___attrs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.X509.PKCS12::Clone()
 Object_t * PKCS12_Clone_m8186 (PKCS12_t3223 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_MaximumPasswordLength()
 int32_t PKCS12_get_MaximumPasswordLength_m8187 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
