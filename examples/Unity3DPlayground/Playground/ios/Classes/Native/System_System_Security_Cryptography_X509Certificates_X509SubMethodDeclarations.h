#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
struct X509SubjectKeyIdentifierExtension_t3056;
// System.String
struct String_t;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t3014;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t3016;
// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm
#include "System_System_Security_Cryptography_X509Certificates_X509Sub_0.h"
// System.Security.Cryptography.AsnDecodeStatus
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor()
 void X509SubjectKeyIdentifierExtension__ctor_m6992 (X509SubjectKeyIdentifierExtension_t3056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
 void X509SubjectKeyIdentifierExtension__ctor_m6993 (X509SubjectKeyIdentifierExtension_t3056 * __this, AsnEncodedData_t3014 * ___encodedSubjectKeyIdentifier, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Byte[],System.Boolean)
 void X509SubjectKeyIdentifierExtension__ctor_m6994 (X509SubjectKeyIdentifierExtension_t3056 * __this, ByteU5BU5D_t961* ___subjectKeyIdentifier, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.String,System.Boolean)
 void X509SubjectKeyIdentifierExtension__ctor_m6995 (X509SubjectKeyIdentifierExtension_t3056 * __this, String_t* ___subjectKeyIdentifier, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Boolean)
 void X509SubjectKeyIdentifierExtension__ctor_m6996 (X509SubjectKeyIdentifierExtension_t3056 * __this, PublicKey_t3016 * ___key, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm,System.Boolean)
 void X509SubjectKeyIdentifierExtension__ctor_m6997 (X509SubjectKeyIdentifierExtension_t3056 * __this, PublicKey_t3016 * ___key, int32_t ___algorithm, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::get_SubjectKeyIdentifier()
 String_t* X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_m6998 (X509SubjectKeyIdentifierExtension_t3056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
 void X509SubjectKeyIdentifierExtension_CopyFrom_m6999 (X509SubjectKeyIdentifierExtension_t3056 * __this, AsnEncodedData_t3014 * ___encodedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChar(System.Char)
 uint8_t X509SubjectKeyIdentifierExtension_FromHexChar_m7000 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChars(System.Char,System.Char)
 uint8_t X509SubjectKeyIdentifierExtension_FromHexChars_m7001 (Object_t * __this/* static, unused */, uint16_t ___c1, uint16_t ___c2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHex(System.String)
 ByteU5BU5D_t961* X509SubjectKeyIdentifierExtension_FromHex_m7002 (Object_t * __this/* static, unused */, String_t* ___hex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Decode(System.Byte[])
 int32_t X509SubjectKeyIdentifierExtension_Decode_m7003 (X509SubjectKeyIdentifierExtension_t3056 * __this, ByteU5BU5D_t961* ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Encode()
 ByteU5BU5D_t961* X509SubjectKeyIdentifierExtension_Encode_m7004 (X509SubjectKeyIdentifierExtension_t3056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::ToString(System.Boolean)
 String_t* X509SubjectKeyIdentifierExtension_ToString_m7005 (X509SubjectKeyIdentifierExtension_t3056 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
