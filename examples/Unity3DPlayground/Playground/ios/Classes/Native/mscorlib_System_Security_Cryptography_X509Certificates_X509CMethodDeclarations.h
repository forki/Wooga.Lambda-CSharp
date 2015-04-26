#pragma once

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1569;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509K.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Byte[],System.Boolean)
 void X509Certificate__ctor_m10469 (X509Certificate_t1569 * __this, ByteU5BU5D_t1071* ___data, bool ___dates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Byte[])
 void X509Certificate__ctor_m7579 (X509Certificate_t1569 * __this, ByteU5BU5D_t1071* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate)
 void X509Certificate__ctor_m6502 (X509Certificate_t1569 * __this, X509Certificate_t1569 * ___cert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor()
 void X509Certificate__ctor_m6501 (X509Certificate_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void X509Certificate__ctor_m10470 (X509Certificate_t1569 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
 void X509Certificate_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m6526 (X509Certificate_t1569 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void X509Certificate_System_Runtime_Serialization_ISerializable_GetObjectData_m6525 (X509Certificate_t1569 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::tostr(System.Byte[])
 String_t* X509Certificate_tostr_m10471 (X509Certificate_t1569 * __this, ByteU5BU5D_t1071* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::Equals(System.Security.Cryptography.X509Certificates.X509Certificate)
 bool X509Certificate_Equals_m6527 (X509Certificate_t1569 * __this, X509Certificate_t1569 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetCertHash()
 ByteU5BU5D_t1071* X509Certificate_GetCertHash_m6528 (X509Certificate_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetCertHashString()
 String_t* X509Certificate_GetCertHashString_m6212 (X509Certificate_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetEffectiveDateString()
 String_t* X509Certificate_GetEffectiveDateString_m6529 (X509Certificate_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetExpirationDateString()
 String_t* X509Certificate_GetExpirationDateString_m6530 (X509Certificate_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate::GetHashCode()
 int32_t X509Certificate_GetHashCode_m6524 (X509Certificate_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetIssuerName()
 String_t* X509Certificate_GetIssuerName_m6217 (X509Certificate_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetName()
 String_t* X509Certificate_GetName_m6531 (X509Certificate_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetPublicKey()
 ByteU5BU5D_t1071* X509Certificate_GetPublicKey_m6532 (X509Certificate_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetRawCertData()
 ByteU5BU5D_t1071* X509Certificate_GetRawCertData_m6503 (X509Certificate_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::ToString()
 String_t* X509Certificate_ToString_m10472 (X509Certificate_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::ToString(System.Boolean)
 String_t* X509Certificate_ToString_m6516 (X509Certificate_t1569 * __this, bool ___fVerbose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Issuer()
 String_t* X509Certificate_get_Issuer_m6519 (X509Certificate_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Subject()
 String_t* X509Certificate_get_Subject_m6518 (X509Certificate_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::Equals(System.Object)
 bool X509Certificate_Equals_m6523 (X509Certificate_t1569 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
 void X509Certificate_Import_m6514 (X509Certificate_t1569 * __this, ByteU5BU5D_t1071* ___rawData, String_t* ___password, int32_t ___keyStorageFlags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::Reset()
 void X509Certificate_Reset_m6515 (X509Certificate_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
