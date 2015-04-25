#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t3482;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t3484;
// System.Byte[]
struct ByteU5BU5D_t961;
// Mono.Security.ASN1
struct ASN1_t3477;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
 void EncryptedData__ctor_m10236 (EncryptedData_t3482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
 void EncryptedData__ctor_m10237 (EncryptedData_t3482 * __this, ASN1_t3477 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
 ContentInfo_t3484 * EncryptedData_get_EncryptionAlgorithm_m10238 (EncryptedData_t3482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
 ByteU5BU5D_t961* EncryptedData_get_EncryptedContent_m10239 (EncryptedData_t3482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
