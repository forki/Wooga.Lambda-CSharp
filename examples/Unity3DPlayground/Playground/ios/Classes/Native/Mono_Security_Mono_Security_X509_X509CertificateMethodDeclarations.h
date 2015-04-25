#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Certificate
struct X509Certificate_t3017;
// System.Security.Cryptography.DSA
struct DSA_t3018;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t3228;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.String
struct String_t;
// System.Security.Cryptography.RSA
struct RSA_t3019;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3013;
// Mono.Security.ASN1
struct ASN1_t3028;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
 void X509Certificate__ctor_m7785 (X509Certificate_t3017 * __this, ByteU5BU5D_t961* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
 void X509Certificate__cctor_m8191 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
 void X509Certificate_Parse_m8192 (X509Certificate_t3017 * __this, ByteU5BU5D_t961* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
 ByteU5BU5D_t961* X509Certificate_GetUnsignedBigInteger_m8193 (X509Certificate_t3017 * __this, ByteU5BU5D_t961* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
 DSA_t3018 * X509Certificate_get_DSA_m7731 (X509Certificate_t3017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_DSA(System.Security.Cryptography.DSA)
 void X509Certificate_set_DSA_m7783 (X509Certificate_t3017 * __this, DSA_t3018 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::get_Extensions()
 X509ExtensionCollection_t3228 * X509Certificate_get_Extensions_m7844 (X509Certificate_t3017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Hash()
 ByteU5BU5D_t961* X509Certificate_get_Hash_m8194 (X509Certificate_t3017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
 String_t* X509Certificate_get_IssuerName_m8195 (X509Certificate_t3017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_KeyAlgorithm()
 String_t* X509Certificate_get_KeyAlgorithm_m7724 (X509Certificate_t3017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
 ByteU5BU5D_t961* X509Certificate_get_KeyAlgorithmParameters_m7737 (X509Certificate_t3017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_KeyAlgorithmParameters(System.Byte[])
 void X509Certificate_set_KeyAlgorithmParameters_m7842 (X509Certificate_t3017 * __this, ByteU5BU5D_t961* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
 ByteU5BU5D_t961* X509Certificate_get_PublicKey_m7736 (X509Certificate_t3017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA()
 RSA_t3019 * X509Certificate_get_RSA_m7725 (X509Certificate_t3017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_RSA(System.Security.Cryptography.RSA)
 void X509Certificate_set_RSA_m7782 (X509Certificate_t3017 * __this, RSA_t3019 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
 ByteU5BU5D_t961* X509Certificate_get_RawData_m7874 (X509Certificate_t3017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_SerialNumber()
 ByteU5BU5D_t961* X509Certificate_get_SerialNumber_m7765 (X509Certificate_t3017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Signature()
 ByteU5BU5D_t961* X509Certificate_get_Signature_m8196 (X509Certificate_t3017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SignatureAlgorithm()
 String_t* X509Certificate_get_SignatureAlgorithm_m7767 (X509Certificate_t3017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
 String_t* X509Certificate_get_SubjectName_m8197 (X509Certificate_t3017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
 DateTime_t2501  X509Certificate_get_ValidFrom_m7764 (X509Certificate_t3017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
 DateTime_t2501  X509Certificate_get_ValidUntil_m7762 (X509Certificate_t3017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Certificate::get_Version()
 int32_t X509Certificate_get_Version_m7770 (X509Certificate_t3017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsCurrent()
 bool X509Certificate_get_IsCurrent_m8198 (X509Certificate_t3017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::WasCurrent(System.DateTime)
 bool X509Certificate_WasCurrent_m8199 (X509Certificate_t3017 * __this, DateTime_t2501  ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.DSA)
 bool X509Certificate_VerifySignature_m8200 (X509Certificate_t3017 * __this, DSA_t3018 * ___dsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.RSA)
 bool X509Certificate_VerifySignature_m8201 (X509Certificate_t3017 * __this, RSA_t3019 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
 bool X509Certificate_VerifySignature_m7843 (X509Certificate_t3017 * __this, AsymmetricAlgorithm_t3013 * ___aa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsSelfSigned()
 bool X509Certificate_get_IsSelfSigned_m8202 (X509Certificate_t3017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
 ASN1_t3028 * X509Certificate_GetIssuerName_m7761 (X509Certificate_t3017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
 ASN1_t3028 * X509Certificate_GetSubjectName_m7768 (X509Certificate_t3017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void X509Certificate_GetObjectData_m8203 (X509Certificate_t3017 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
 ByteU5BU5D_t961* X509Certificate_PEM_m8204 (Object_t * __this/* static, unused */, String_t* ___type, ByteU5BU5D_t961* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
