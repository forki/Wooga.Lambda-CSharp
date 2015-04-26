#pragma once

// Mono.Security.X509.X509Certificate
struct X509Certificate_t1670;
// System.Security.Cryptography.DSA
struct DSA_t1693;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1868;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.String
struct String_t;
// System.Security.Cryptography.RSA
struct RSA_t1694;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1568;
// Mono.Security.ASN1
struct ASN1_t1702;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
 void X509Certificate__ctor_m6504 (X509Certificate_t1670 * __this, ByteU5BU5D_t1071* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
 void X509Certificate__cctor_m6878 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
 void X509Certificate_Parse_m6879 (X509Certificate_t1670 * __this, ByteU5BU5D_t1071* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
 ByteU5BU5D_t1071* X509Certificate_GetUnsignedBigInteger_m6880 (X509Certificate_t1670 * __this, ByteU5BU5D_t1071* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
 DSA_t1693 * X509Certificate_get_DSA_m6466 (X509Certificate_t1670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_DSA(System.Security.Cryptography.DSA)
 void X509Certificate_set_DSA_m6513 (X509Certificate_t1670 * __this, DSA_t1693 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::get_Extensions()
 X509ExtensionCollection_t1868 * X509Certificate_get_Extensions_m6408 (X509Certificate_t1670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Hash()
 ByteU5BU5D_t1071* X509Certificate_get_Hash_m6881 (X509Certificate_t1670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
 String_t* X509Certificate_get_IssuerName_m6882 (X509Certificate_t1670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_KeyAlgorithm()
 String_t* X509Certificate_get_KeyAlgorithm_m6459 (X509Certificate_t1670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
 ByteU5BU5D_t1071* X509Certificate_get_KeyAlgorithmParameters_m6472 (X509Certificate_t1670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_KeyAlgorithmParameters(System.Byte[])
 void X509Certificate_set_KeyAlgorithmParameters_m6565 (X509Certificate_t1670 * __this, ByteU5BU5D_t1071* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
 ByteU5BU5D_t1071* X509Certificate_get_PublicKey_m6471 (X509Certificate_t1670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA()
 RSA_t1694 * X509Certificate_get_RSA_m6460 (X509Certificate_t1670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_RSA(System.Security.Cryptography.RSA)
 void X509Certificate_set_RSA_m6512 (X509Certificate_t1670 * __this, RSA_t1694 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
 ByteU5BU5D_t1071* X509Certificate_get_RawData_m6403 (X509Certificate_t1670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_SerialNumber()
 ByteU5BU5D_t1071* X509Certificate_get_SerialNumber_m6497 (X509Certificate_t1670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Signature()
 ByteU5BU5D_t1071* X509Certificate_get_Signature_m6883 (X509Certificate_t1670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SignatureAlgorithm()
 String_t* X509Certificate_get_SignatureAlgorithm_m6498 (X509Certificate_t1670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
 String_t* X509Certificate_get_SubjectName_m6413 (X509Certificate_t1670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
 DateTime_t1141  X509Certificate_get_ValidFrom_m6496 (X509Certificate_t1670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
 DateTime_t1141  X509Certificate_get_ValidUntil_m6494 (X509Certificate_t1670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Certificate::get_Version()
 int32_t X509Certificate_get_Version_m6500 (X509Certificate_t1670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsCurrent()
 bool X509Certificate_get_IsCurrent_m6884 (X509Certificate_t1670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::WasCurrent(System.DateTime)
 bool X509Certificate_WasCurrent_m6885 (X509Certificate_t1670 * __this, DateTime_t1141  ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.DSA)
 bool X509Certificate_VerifySignature_m6886 (X509Certificate_t1670 * __this, DSA_t1693 * ___dsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.RSA)
 bool X509Certificate_VerifySignature_m6887 (X509Certificate_t1670 * __this, RSA_t1694 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
 bool X509Certificate_VerifySignature_m6566 (X509Certificate_t1670 * __this, AsymmetricAlgorithm_t1568 * ___aa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsSelfSigned()
 bool X509Certificate_get_IsSelfSigned_m6888 (X509Certificate_t1670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
 ASN1_t1702 * X509Certificate_GetIssuerName_m6493 (X509Certificate_t1670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
 ASN1_t1702 * X509Certificate_GetSubjectName_m6499 (X509Certificate_t1670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void X509Certificate_GetObjectData_m6889 (X509Certificate_t1670 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
 ByteU5BU5D_t1071* X509Certificate_PEM_m6890 (Object_t * __this/* static, unused */, String_t* ___type, ByteU5BU5D_t1071* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
