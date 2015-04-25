#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct X509EnhancedKeyUsageExtension_t3046;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t3014;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.String
struct String_t;
// System.Security.Cryptography.AsnDecodeStatus
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
 void X509EnhancedKeyUsageExtension__ctor_m6954 (X509EnhancedKeyUsageExtension_t3046 * __this, AsnEncodedData_t3014 * ___encodedEnhancedKeyUsages, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
 void X509EnhancedKeyUsageExtension_CopyFrom_m6955 (X509EnhancedKeyUsageExtension_t3046 * __this, AsnEncodedData_t3014 * ___asnEncodedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Decode(System.Byte[])
 int32_t X509EnhancedKeyUsageExtension_Decode_m6956 (X509EnhancedKeyUsageExtension_t3046 * __this, ByteU5BU5D_t961* ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::ToString(System.Boolean)
 String_t* X509EnhancedKeyUsageExtension_ToString_m6957 (X509EnhancedKeyUsageExtension_t3046 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
