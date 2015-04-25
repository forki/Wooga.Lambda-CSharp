#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl
struct X509Crl_t3040;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t3228;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t3042;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t3017;
// System.Security.Cryptography.DSA
struct DSA_t3018;
// System.Security.Cryptography.RSA
struct RSA_t3019;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3013;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
 void X509Crl__ctor_m8232 (X509Crl_t3040 * __this, ByteU5BU5D_t961* ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
 void X509Crl_Parse_m8233 (X509Crl_t3040 * __this, ByteU5BU5D_t961* ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
 X509ExtensionCollection_t3228 * X509Crl_get_Extensions_m7846 (X509Crl_t3040 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
 ByteU5BU5D_t961* X509Crl_get_Hash_m8234 (X509Crl_t3040 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
 String_t* X509Crl_get_IssuerName_m7854 (X509Crl_t3040 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
 DateTime_t2501  X509Crl_get_NextUpdate_m7852 (X509Crl_t3040 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
 bool X509Crl_Compare_m8235 (X509Crl_t3040 * __this, ByteU5BU5D_t961* ___array1, ByteU5BU5D_t961* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
 X509CrlEntry_t3042 * X509Crl_GetCrlEntry_m7850 (X509Crl_t3040 * __this, X509Certificate_t3017 * ___x509, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
 X509CrlEntry_t3042 * X509Crl_GetCrlEntry_m8236 (X509Crl_t3040 * __this, ByteU5BU5D_t961* ___serialNumber, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
 String_t* X509Crl_GetHashName_m8237 (X509Crl_t3040 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
 bool X509Crl_VerifySignature_m8238 (X509Crl_t3040 * __this, DSA_t3018 * ___dsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
 bool X509Crl_VerifySignature_m8239 (X509Crl_t3040 * __this, RSA_t3019 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
 bool X509Crl_VerifySignature_m7849 (X509Crl_t3040 * __this, AsymmetricAlgorithm_t3013 * ___aa, MethodInfo* method) IL2CPP_METHOD_ATTR;
