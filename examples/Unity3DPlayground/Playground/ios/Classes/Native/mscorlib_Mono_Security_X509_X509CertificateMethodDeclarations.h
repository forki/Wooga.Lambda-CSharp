#pragma once

// Mono.Security.X509.X509Certificate
struct X509Certificate_t2125;
// System.Security.Cryptography.DSA
struct DSA_t1693;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1071;
// Mono.Security.ASN1
struct ASN1_t2117;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
 void X509Certificate__ctor_m8749 (X509Certificate_t2125 * __this, ByteU5BU5D_t1071* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
 void X509Certificate__cctor_m8750 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
 void X509Certificate_Parse_m8751 (X509Certificate_t2125 * __this, ByteU5BU5D_t1071* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
 ByteU5BU5D_t1071* X509Certificate_GetUnsignedBigInteger_m8752 (X509Certificate_t2125 * __this, ByteU5BU5D_t1071* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
 DSA_t1693 * X509Certificate_get_DSA_m8753 (X509Certificate_t2125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
 String_t* X509Certificate_get_IssuerName_m8754 (X509Certificate_t2125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
 ByteU5BU5D_t1071* X509Certificate_get_KeyAlgorithmParameters_m8755 (X509Certificate_t2125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
 ByteU5BU5D_t1071* X509Certificate_get_PublicKey_m8756 (X509Certificate_t2125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
 ByteU5BU5D_t1071* X509Certificate_get_RawData_m8757 (X509Certificate_t2125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
 String_t* X509Certificate_get_SubjectName_m8758 (X509Certificate_t2125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
 DateTime_t1141  X509Certificate_get_ValidFrom_m8759 (X509Certificate_t2125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
 DateTime_t1141  X509Certificate_get_ValidUntil_m8760 (X509Certificate_t2125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
 ASN1_t2117 * X509Certificate_GetIssuerName_m8761 (X509Certificate_t2125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
 ASN1_t2117 * X509Certificate_GetSubjectName_m8762 (X509Certificate_t2125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void X509Certificate_GetObjectData_m8763 (X509Certificate_t2125 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
 ByteU5BU5D_t1071* X509Certificate_PEM_m8764 (Object_t * __this/* static, unused */, String_t* ___type, ByteU5BU5D_t1071* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
