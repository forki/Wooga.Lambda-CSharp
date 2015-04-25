#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t3027;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t3026;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t3022;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3013;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t3016;
// System.String
struct String_t;
// System.Security.Cryptography.Oid
struct Oid_t3015;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t3017;
// System.Byte[]
struct ByteU5BU5D_t961;
// Mono.Security.ASN1
struct ASN1_t3028;
// System.Text.StringBuilder
struct StringBuilder_t399;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Security.Cryptography.X509Certificates.X509NameType
#include "System_System_Security_Cryptography_X509Certificates_X509Nam.h"
// System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509K.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Byte[])
 void X509Certificate2__ctor_m6836 (X509Certificate2_t3027 * __this, ByteU5BU5D_t961* ___rawData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.cctor()
 void X509Certificate2__cctor_m6837 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection System.Security.Cryptography.X509Certificates.X509Certificate2::get_Extensions()
 X509ExtensionCollection_t3026 * X509Certificate2_get_Extensions_m6838 (X509Certificate2_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_IssuerName()
 X500DistinguishedName_t3022 * X509Certificate2_get_IssuerName_m6839 (X509Certificate2_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotAfter()
 DateTime_t2501  X509Certificate2_get_NotAfter_m6840 (X509Certificate2_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotBefore()
 DateTime_t2501  X509Certificate2_get_NotBefore_m6841 (X509Certificate2_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2::get_PrivateKey()
 AsymmetricAlgorithm_t3013 * X509Certificate2_get_PrivateKey_m6842 (X509Certificate2_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2::get_PublicKey()
 PublicKey_t3016 * X509Certificate2_get_PublicKey_m6843 (X509Certificate2_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_SerialNumber()
 String_t* X509Certificate2_get_SerialNumber_m6844 (X509Certificate2_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2::get_SignatureAlgorithm()
 Oid_t3015 * X509Certificate2_get_SignatureAlgorithm_m6845 (X509Certificate2_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_SubjectName()
 X500DistinguishedName_t3022 * X509Certificate2_get_SubjectName_m6846 (X509Certificate2_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_Thumbprint()
 String_t* X509Certificate2_get_Thumbprint_m6847 (X509Certificate2_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2::get_Version()
 int32_t X509Certificate2_get_Version_m6848 (X509Certificate2_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetNameInfo(System.Security.Cryptography.X509Certificates.X509NameType,System.Boolean)
 String_t* X509Certificate2_GetNameInfo_m6849 (X509Certificate2_t3027 * __this, int32_t ___nameType, bool ___forIssuer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 System.Security.Cryptography.X509Certificates.X509Certificate2::Find(System.Byte[],Mono.Security.ASN1)
 ASN1_t3028 * X509Certificate2_Find_m6850 (X509Certificate2_t3027 * __this, ByteU5BU5D_t961* ___oid, ASN1_t3028 * ___dn, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetValueAsString(Mono.Security.ASN1)
 String_t* X509Certificate2_GetValueAsString_m6851 (X509Certificate2_t3027 * __this, ASN1_t3028 * ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::ImportPkcs12(System.Byte[],System.String)
 void X509Certificate2_ImportPkcs12_m6852 (X509Certificate2_t3027 * __this, ByteU5BU5D_t961* ___rawData, String_t* ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
 void X509Certificate2_Import_m6853 (X509Certificate2_t3027 * __this, ByteU5BU5D_t961* ___rawData, String_t* ___password, int32_t ___keyStorageFlags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Reset()
 void X509Certificate2_Reset_m6854 (X509Certificate2_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString()
 String_t* X509Certificate2_ToString_m6855 (X509Certificate2_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString(System.Boolean)
 String_t* X509Certificate2_ToString_m6856 (X509Certificate2_t3027 * __this, bool ___verbose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::AppendBuffer(System.Text.StringBuilder,System.Byte[])
 void X509Certificate2_AppendBuffer_m6857 (Object_t * __this/* static, unused */, StringBuilder_t399 * ___sb, ByteU5BU5D_t961* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2::Verify()
 bool X509Certificate2_Verify_m6858 (X509Certificate2_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2::get_MonoCertificate()
 X509Certificate_t3017 * X509Certificate2_get_MonoCertificate_m6859 (X509Certificate2_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
