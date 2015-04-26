#pragma once

// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1690;
// System.Security.Cryptography.Oid
struct Oid_t1691;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.AsnEncodedData::.ctor()
 void AsnEncodedData__ctor_m5601 (AsnEncodedData_t1690 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.String,System.Byte[])
 void AsnEncodedData__ctor_m5602 (AsnEncodedData_t1690 * __this, String_t* ___oid, ByteU5BU5D_t1071* ___rawData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.Security.Cryptography.Oid,System.Byte[])
 void AsnEncodedData__ctor_m5603 (AsnEncodedData_t1690 * __this, Oid_t1691 * ___oid, ByteU5BU5D_t1071* ___rawData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.AsnEncodedData::get_Oid()
 Oid_t1691 * AsnEncodedData_get_Oid_m5604 (AsnEncodedData_t1690 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::set_Oid(System.Security.Cryptography.Oid)
 void AsnEncodedData_set_Oid_m5605 (AsnEncodedData_t1690 * __this, Oid_t1691 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AsnEncodedData::get_RawData()
 ByteU5BU5D_t1071* AsnEncodedData_get_RawData_m5606 (AsnEncodedData_t1690 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::set_RawData(System.Byte[])
 void AsnEncodedData_set_RawData_m5607 (AsnEncodedData_t1690 * __this, ByteU5BU5D_t1071* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::CopyFrom(System.Security.Cryptography.AsnEncodedData)
 void AsnEncodedData_CopyFrom_m5608 (AsnEncodedData_t1690 * __this, AsnEncodedData_t1690 * ___asnEncodedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean)
 String_t* AsnEncodedData_ToString_m5609 (AsnEncodedData_t1690 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::Default(System.Boolean)
 String_t* AsnEncodedData_Default_m5610 (AsnEncodedData_t1690 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::BasicConstraintsExtension(System.Boolean)
 String_t* AsnEncodedData_BasicConstraintsExtension_m5611 (AsnEncodedData_t1690 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::EnhancedKeyUsageExtension(System.Boolean)
 String_t* AsnEncodedData_EnhancedKeyUsageExtension_m5612 (AsnEncodedData_t1690 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::KeyUsageExtension(System.Boolean)
 String_t* AsnEncodedData_KeyUsageExtension_m5613 (AsnEncodedData_t1690 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectKeyIdentifierExtension(System.Boolean)
 String_t* AsnEncodedData_SubjectKeyIdentifierExtension_m5614 (AsnEncodedData_t1690 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectAltName(System.Boolean)
 String_t* AsnEncodedData_SubjectAltName_m5615 (AsnEncodedData_t1690 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::NetscapeCertType(System.Boolean)
 String_t* AsnEncodedData_NetscapeCertType_m5616 (AsnEncodedData_t1690 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
