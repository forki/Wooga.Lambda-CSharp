#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.ASN1Convert
struct ASN1Convert_t3489;
// Mono.Security.ASN1
struct ASN1_t3477;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromInt32(System.Int32)
 ASN1_t3477 * ASN1Convert_FromInt32_m10212 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromOid(System.String)
 ASN1_t3477 * ASN1Convert_FromOid_m10213 (Object_t * __this/* static, unused */, String_t* ___oid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.ASN1Convert::ToInt32(Mono.Security.ASN1)
 int32_t ASN1Convert_ToInt32_m10214 (Object_t * __this/* static, unused */, ASN1_t3477 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.ASN1Convert::ToOid(Mono.Security.ASN1)
 String_t* ASN1Convert_ToOid_m10215 (Object_t * __this/* static, unused */, ASN1_t3477 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.ASN1Convert::ToDateTime(Mono.Security.ASN1)
 DateTime_t2501  ASN1Convert_ToDateTime_m10216 (Object_t * __this/* static, unused */, ASN1_t3477 * ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
