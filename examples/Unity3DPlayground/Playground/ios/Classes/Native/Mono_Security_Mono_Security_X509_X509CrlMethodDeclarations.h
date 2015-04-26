#pragma once

// Mono.Security.X509.X509Crl
struct X509Crl_t1714;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1868;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t1716;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1670;
// System.Security.Cryptography.DSA
struct DSA_t1693;
// System.Security.Cryptography.RSA
struct RSA_t1694;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1568;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
 void X509Crl__ctor_m6916 (X509Crl_t1714 * __this, ByteU5BU5D_t1071* ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
 void X509Crl_Parse_m6917 (X509Crl_t1714 * __this, ByteU5BU5D_t1071* ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
 X509ExtensionCollection_t1868 * X509Crl_get_Extensions_m6567 (X509Crl_t1714 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
 ByteU5BU5D_t1071* X509Crl_get_Hash_m6918 (X509Crl_t1714 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
 String_t* X509Crl_get_IssuerName_m6575 (X509Crl_t1714 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
 DateTime_t1141  X509Crl_get_NextUpdate_m6573 (X509Crl_t1714 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
 bool X509Crl_Compare_m6919 (X509Crl_t1714 * __this, ByteU5BU5D_t1071* ___array1, ByteU5BU5D_t1071* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
 X509CrlEntry_t1716 * X509Crl_GetCrlEntry_m6571 (X509Crl_t1714 * __this, X509Certificate_t1670 * ___x509, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
 X509CrlEntry_t1716 * X509Crl_GetCrlEntry_m6920 (X509Crl_t1714 * __this, ByteU5BU5D_t1071* ___serialNumber, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
 String_t* X509Crl_GetHashName_m6921 (X509Crl_t1714 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
 bool X509Crl_VerifySignature_m6922 (X509Crl_t1714 * __this, DSA_t1693 * ___dsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
 bool X509Crl_VerifySignature_m6923 (X509Crl_t1714 * __this, RSA_t1694 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
 bool X509Crl_VerifySignature_m6570 (X509Crl_t1714 * __this, AsymmetricAlgorithm_t1568 * ___aa, MethodInfo* method) IL2CPP_METHOD_ATTR;
