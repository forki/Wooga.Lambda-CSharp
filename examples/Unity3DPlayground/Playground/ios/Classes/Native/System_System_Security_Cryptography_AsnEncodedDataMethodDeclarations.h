#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t3014;
// System.Security.Cryptography.Oid
struct Oid_t3015;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.AsnEncodedData::.ctor()
 void AsnEncodedData__ctor_m7006 (AsnEncodedData_t3014 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.String,System.Byte[])
 void AsnEncodedData__ctor_m7007 (AsnEncodedData_t3014 * __this, String_t* ___oid, ByteU5BU5D_t961* ___rawData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.Security.Cryptography.Oid,System.Byte[])
 void AsnEncodedData__ctor_m7008 (AsnEncodedData_t3014 * __this, Oid_t3015 * ___oid, ByteU5BU5D_t961* ___rawData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.AsnEncodedData::get_Oid()
 Oid_t3015 * AsnEncodedData_get_Oid_m7009 (AsnEncodedData_t3014 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::set_Oid(System.Security.Cryptography.Oid)
 void AsnEncodedData_set_Oid_m7010 (AsnEncodedData_t3014 * __this, Oid_t3015 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AsnEncodedData::get_RawData()
 ByteU5BU5D_t961* AsnEncodedData_get_RawData_m7011 (AsnEncodedData_t3014 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::set_RawData(System.Byte[])
 void AsnEncodedData_set_RawData_m7012 (AsnEncodedData_t3014 * __this, ByteU5BU5D_t961* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::CopyFrom(System.Security.Cryptography.AsnEncodedData)
 void AsnEncodedData_CopyFrom_m7013 (AsnEncodedData_t3014 * __this, AsnEncodedData_t3014 * ___asnEncodedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean)
 String_t* AsnEncodedData_ToString_m7014 (AsnEncodedData_t3014 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::Default(System.Boolean)
 String_t* AsnEncodedData_Default_m7015 (AsnEncodedData_t3014 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::BasicConstraintsExtension(System.Boolean)
 String_t* AsnEncodedData_BasicConstraintsExtension_m7016 (AsnEncodedData_t3014 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::EnhancedKeyUsageExtension(System.Boolean)
 String_t* AsnEncodedData_EnhancedKeyUsageExtension_m7017 (AsnEncodedData_t3014 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::KeyUsageExtension(System.Boolean)
 String_t* AsnEncodedData_KeyUsageExtension_m7018 (AsnEncodedData_t3014 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectKeyIdentifierExtension(System.Boolean)
 String_t* AsnEncodedData_SubjectKeyIdentifierExtension_m7019 (AsnEncodedData_t3014 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectAltName(System.Boolean)
 String_t* AsnEncodedData_SubjectAltName_m7020 (AsnEncodedData_t3014 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::NetscapeCertType(System.Boolean)
 String_t* AsnEncodedData_NetscapeCertType_m7021 (AsnEncodedData_t3014 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
