#pragma once

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
struct X509SubjectKeyIdentifierExtension_t1730;
// System.String
struct String_t;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1690;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1692;
// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm
#include "System_System_Security_Cryptography_X509Certificates_X509Sub_0.h"
// System.Security.Cryptography.AsnDecodeStatus
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor()
 void X509SubjectKeyIdentifierExtension__ctor_m5587 (X509SubjectKeyIdentifierExtension_t1730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
 void X509SubjectKeyIdentifierExtension__ctor_m5588 (X509SubjectKeyIdentifierExtension_t1730 * __this, AsnEncodedData_t1690 * ___encodedSubjectKeyIdentifier, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Byte[],System.Boolean)
 void X509SubjectKeyIdentifierExtension__ctor_m5589 (X509SubjectKeyIdentifierExtension_t1730 * __this, ByteU5BU5D_t1071* ___subjectKeyIdentifier, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.String,System.Boolean)
 void X509SubjectKeyIdentifierExtension__ctor_m5590 (X509SubjectKeyIdentifierExtension_t1730 * __this, String_t* ___subjectKeyIdentifier, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Boolean)
 void X509SubjectKeyIdentifierExtension__ctor_m5591 (X509SubjectKeyIdentifierExtension_t1730 * __this, PublicKey_t1692 * ___key, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm,System.Boolean)
 void X509SubjectKeyIdentifierExtension__ctor_m5592 (X509SubjectKeyIdentifierExtension_t1730 * __this, PublicKey_t1692 * ___key, int32_t ___algorithm, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::get_SubjectKeyIdentifier()
 String_t* X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_m5593 (X509SubjectKeyIdentifierExtension_t1730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
 void X509SubjectKeyIdentifierExtension_CopyFrom_m5594 (X509SubjectKeyIdentifierExtension_t1730 * __this, AsnEncodedData_t1690 * ___encodedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChar(System.Char)
 uint8_t X509SubjectKeyIdentifierExtension_FromHexChar_m5595 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChars(System.Char,System.Char)
 uint8_t X509SubjectKeyIdentifierExtension_FromHexChars_m5596 (Object_t * __this/* static, unused */, uint16_t ___c1, uint16_t ___c2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHex(System.String)
 ByteU5BU5D_t1071* X509SubjectKeyIdentifierExtension_FromHex_m5597 (Object_t * __this/* static, unused */, String_t* ___hex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Decode(System.Byte[])
 int32_t X509SubjectKeyIdentifierExtension_Decode_m5598 (X509SubjectKeyIdentifierExtension_t1730 * __this, ByteU5BU5D_t1071* ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Encode()
 ByteU5BU5D_t1071* X509SubjectKeyIdentifierExtension_Encode_m5599 (X509SubjectKeyIdentifierExtension_t1730 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::ToString(System.Boolean)
 String_t* X509SubjectKeyIdentifierExtension_ToString_m5600 (X509SubjectKeyIdentifierExtension_t1730 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
