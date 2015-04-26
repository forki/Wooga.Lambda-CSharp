#pragma once

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t2122;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t2130;
// System.Byte[]
struct ByteU5BU5D_t1071;
// Mono.Security.ASN1
struct ASN1_t2117;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
 void EncryptedData__ctor_m8821 (EncryptedData_t2122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
 void EncryptedData__ctor_m8822 (EncryptedData_t2122 * __this, ASN1_t2117 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
 ContentInfo_t2130 * EncryptedData_get_EncryptionAlgorithm_m8823 (EncryptedData_t2122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
 ByteU5BU5D_t1071* EncryptedData_get_EncryptedContent_m8824 (EncryptedData_t2122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
