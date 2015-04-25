#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
struct X509KeyUsageExtension_t3049;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t3014;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags
#include "System_System_Security_Cryptography_X509Certificates_X509Key_0.h"
// System.Security.Cryptography.AsnDecodeStatus
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor()
 void X509KeyUsageExtension__ctor_m6977 (X509KeyUsageExtension_t3049 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
 void X509KeyUsageExtension__ctor_m6978 (X509KeyUsageExtension_t3049 * __this, AsnEncodedData_t3014 * ___encodedKeyUsage, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags,System.Boolean)
 void X509KeyUsageExtension__ctor_m6979 (X509KeyUsageExtension_t3049 * __this, int32_t ___keyUsages, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::get_KeyUsages()
 int32_t X509KeyUsageExtension_get_KeyUsages_m6980 (X509KeyUsageExtension_t3049 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
 void X509KeyUsageExtension_CopyFrom_m6981 (X509KeyUsageExtension_t3049 * __this, AsnEncodedData_t3014 * ___encodedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::GetValidFlags(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags)
 int32_t X509KeyUsageExtension_GetValidFlags_m6982 (X509KeyUsageExtension_t3049 * __this, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Decode(System.Byte[])
 int32_t X509KeyUsageExtension_Decode_m6983 (X509KeyUsageExtension_t3049 * __this, ByteU5BU5D_t961* ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Encode()
 ByteU5BU5D_t961* X509KeyUsageExtension_Encode_m6984 (X509KeyUsageExtension_t3049 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::ToString(System.Boolean)
 String_t* X509KeyUsageExtension_ToString_m6985 (X509KeyUsageExtension_t3049 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
