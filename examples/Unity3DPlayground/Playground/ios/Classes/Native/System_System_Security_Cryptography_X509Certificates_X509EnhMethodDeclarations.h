#pragma once

// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct X509EnhancedKeyUsageExtension_t1720;
// System.Security.Cryptography.OidCollection
struct OidCollection_t1718;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1690;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.String
struct String_t;
// System.Security.Cryptography.AsnDecodeStatus
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
 void X509EnhancedKeyUsageExtension__ctor_m5549 (X509EnhancedKeyUsageExtension_t1720 * __this, AsnEncodedData_t1690 * ___encodedEnhancedKeyUsages, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::get_EnhancedKeyUsages()
 OidCollection_t1718 * X509EnhancedKeyUsageExtension_get_EnhancedKeyUsages_m5550 (X509EnhancedKeyUsageExtension_t1720 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
 void X509EnhancedKeyUsageExtension_CopyFrom_m5551 (X509EnhancedKeyUsageExtension_t1720 * __this, AsnEncodedData_t1690 * ___asnEncodedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Decode(System.Byte[])
 int32_t X509EnhancedKeyUsageExtension_Decode_m5552 (X509EnhancedKeyUsageExtension_t1720 * __this, ByteU5BU5D_t1071* ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::ToString(System.Boolean)
 String_t* X509EnhancedKeyUsageExtension_ToString_m5553 (X509EnhancedKeyUsageExtension_t1720 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
