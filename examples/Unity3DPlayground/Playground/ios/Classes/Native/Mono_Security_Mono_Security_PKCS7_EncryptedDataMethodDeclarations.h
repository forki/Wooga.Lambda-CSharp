#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t3260;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t3259;
// System.Byte[]
struct ByteU5BU5D_t961;
// Mono.Security.ASN1
struct ASN1_t3028;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
 void EncryptedData__ctor_m8072 (EncryptedData_t3260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
 void EncryptedData__ctor_m8073 (EncryptedData_t3260 * __this, ASN1_t3028 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
 ContentInfo_t3259 * EncryptedData_get_EncryptionAlgorithm_m8074 (EncryptedData_t3260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
 ByteU5BU5D_t961* EncryptedData_get_EncryptedContent_m8075 (EncryptedData_t3260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
