#pragma once

// System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
struct X509KeyUsageExtension_t1723;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1690;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags
#include "System_System_Security_Cryptography_X509Certificates_X509Key.h"
// System.Security.Cryptography.AsnDecodeStatus
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor()
 void X509KeyUsageExtension__ctor_m5572 (X509KeyUsageExtension_t1723 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
 void X509KeyUsageExtension__ctor_m5573 (X509KeyUsageExtension_t1723 * __this, AsnEncodedData_t1690 * ___encodedKeyUsage, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags,System.Boolean)
 void X509KeyUsageExtension__ctor_m5574 (X509KeyUsageExtension_t1723 * __this, int32_t ___keyUsages, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::get_KeyUsages()
 int32_t X509KeyUsageExtension_get_KeyUsages_m5575 (X509KeyUsageExtension_t1723 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
 void X509KeyUsageExtension_CopyFrom_m5576 (X509KeyUsageExtension_t1723 * __this, AsnEncodedData_t1690 * ___encodedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::GetValidFlags(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags)
 int32_t X509KeyUsageExtension_GetValidFlags_m5577 (X509KeyUsageExtension_t1723 * __this, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Decode(System.Byte[])
 int32_t X509KeyUsageExtension_Decode_m5578 (X509KeyUsageExtension_t1723 * __this, ByteU5BU5D_t1071* ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Encode()
 ByteU5BU5D_t1071* X509KeyUsageExtension_Encode_m5579 (X509KeyUsageExtension_t1723 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::ToString(System.Boolean)
 String_t* X509KeyUsageExtension_ToString_m5580 (X509KeyUsageExtension_t1723 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
