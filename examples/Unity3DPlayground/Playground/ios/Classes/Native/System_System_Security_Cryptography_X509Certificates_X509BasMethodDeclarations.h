#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
struct X509BasicConstraintsExtension_t3024;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t3014;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.String
struct String_t;
// System.Security.Cryptography.AsnDecodeStatus
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor()
 void X509BasicConstraintsExtension__ctor_m6826 (X509BasicConstraintsExtension_t3024 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
 void X509BasicConstraintsExtension__ctor_m6827 (X509BasicConstraintsExtension_t3024 * __this, AsnEncodedData_t3014 * ___encodedBasicConstraints, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Boolean,System.Boolean,System.Int32,System.Boolean)
 void X509BasicConstraintsExtension__ctor_m6828 (X509BasicConstraintsExtension_t3024 * __this, bool ___certificateAuthority, bool ___hasPathLengthConstraint, int32_t ___pathLengthConstraint, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_CertificateAuthority()
 bool X509BasicConstraintsExtension_get_CertificateAuthority_m6829 (X509BasicConstraintsExtension_t3024 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_HasPathLengthConstraint()
 bool X509BasicConstraintsExtension_get_HasPathLengthConstraint_m6830 (X509BasicConstraintsExtension_t3024 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_PathLengthConstraint()
 int32_t X509BasicConstraintsExtension_get_PathLengthConstraint_m6831 (X509BasicConstraintsExtension_t3024 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
 void X509BasicConstraintsExtension_CopyFrom_m6832 (X509BasicConstraintsExtension_t3024 * __this, AsnEncodedData_t3014 * ___asnEncodedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Decode(System.Byte[])
 int32_t X509BasicConstraintsExtension_Decode_m6833 (X509BasicConstraintsExtension_t3024 * __this, ByteU5BU5D_t961* ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Encode()
 ByteU5BU5D_t961* X509BasicConstraintsExtension_Encode_m6834 (X509BasicConstraintsExtension_t3024 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::ToString(System.Boolean)
 String_t* X509BasicConstraintsExtension_ToString_m6835 (X509BasicConstraintsExtension_t3024 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
