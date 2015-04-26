#pragma once

// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t1669;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t1701;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t1697;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1568;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1692;
// System.String
struct String_t;
// System.Security.Cryptography.Oid
struct Oid_t1691;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1670;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1569;
// Mono.Security.ASN1
struct ASN1_t1702;
// System.Text.StringBuilder
struct StringBuilder_t404;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Security.Cryptography.X509Certificates.X509NameType
#include "System_System_Security_Cryptography_X509Certificates_X509Nam.h"
// System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509K.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Byte[])
 void X509Certificate2__ctor_m5432 (X509Certificate2_t1669 * __this, ByteU5BU5D_t1071* ___rawData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate)
 void X509Certificate2__ctor_m5433 (X509Certificate2_t1669 * __this, X509Certificate_t1569 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.cctor()
 void X509Certificate2__cctor_m5434 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection System.Security.Cryptography.X509Certificates.X509Certificate2::get_Extensions()
 X509ExtensionCollection_t1701 * X509Certificate2_get_Extensions_m5435 (X509Certificate2_t1669 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_IssuerName()
 X500DistinguishedName_t1697 * X509Certificate2_get_IssuerName_m5436 (X509Certificate2_t1669 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotAfter()
 DateTime_t1141  X509Certificate2_get_NotAfter_m5437 (X509Certificate2_t1669 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotBefore()
 DateTime_t1141  X509Certificate2_get_NotBefore_m5438 (X509Certificate2_t1669 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2::get_PrivateKey()
 AsymmetricAlgorithm_t1568 * X509Certificate2_get_PrivateKey_m5439 (X509Certificate2_t1669 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2::get_PublicKey()
 PublicKey_t1692 * X509Certificate2_get_PublicKey_m5440 (X509Certificate2_t1669 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_SerialNumber()
 String_t* X509Certificate2_get_SerialNumber_m5441 (X509Certificate2_t1669 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2::get_SignatureAlgorithm()
 Oid_t1691 * X509Certificate2_get_SignatureAlgorithm_m5442 (X509Certificate2_t1669 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_SubjectName()
 X500DistinguishedName_t1697 * X509Certificate2_get_SubjectName_m5443 (X509Certificate2_t1669 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_Thumbprint()
 String_t* X509Certificate2_get_Thumbprint_m5444 (X509Certificate2_t1669 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2::get_Version()
 int32_t X509Certificate2_get_Version_m5445 (X509Certificate2_t1669 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetNameInfo(System.Security.Cryptography.X509Certificates.X509NameType,System.Boolean)
 String_t* X509Certificate2_GetNameInfo_m5446 (X509Certificate2_t1669 * __this, int32_t ___nameType, bool ___forIssuer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 System.Security.Cryptography.X509Certificates.X509Certificate2::Find(System.Byte[],Mono.Security.ASN1)
 ASN1_t1702 * X509Certificate2_Find_m5447 (X509Certificate2_t1669 * __this, ByteU5BU5D_t1071* ___oid, ASN1_t1702 * ___dn, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetValueAsString(Mono.Security.ASN1)
 String_t* X509Certificate2_GetValueAsString_m5448 (X509Certificate2_t1669 * __this, ASN1_t1702 * ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::ImportPkcs12(System.Byte[],System.String)
 void X509Certificate2_ImportPkcs12_m5449 (X509Certificate2_t1669 * __this, ByteU5BU5D_t1071* ___rawData, String_t* ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
 void X509Certificate2_Import_m5450 (X509Certificate2_t1669 * __this, ByteU5BU5D_t1071* ___rawData, String_t* ___password, int32_t ___keyStorageFlags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Reset()
 void X509Certificate2_Reset_m5451 (X509Certificate2_t1669 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString()
 String_t* X509Certificate2_ToString_m5452 (X509Certificate2_t1669 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString(System.Boolean)
 String_t* X509Certificate2_ToString_m5453 (X509Certificate2_t1669 * __this, bool ___verbose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::AppendBuffer(System.Text.StringBuilder,System.Byte[])
 void X509Certificate2_AppendBuffer_m5454 (Object_t * __this/* static, unused */, StringBuilder_t404 * ___sb, ByteU5BU5D_t1071* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2::Verify()
 bool X509Certificate2_Verify_m5455 (X509Certificate2_t1669 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2::get_MonoCertificate()
 X509Certificate_t1670 * X509Certificate2_get_MonoCertificate_m5456 (X509Certificate2_t1669 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
