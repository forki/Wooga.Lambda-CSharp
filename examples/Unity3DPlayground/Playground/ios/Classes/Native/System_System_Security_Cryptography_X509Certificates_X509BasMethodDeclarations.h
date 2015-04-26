#pragma once

// System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
struct X509BasicConstraintsExtension_t1699;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1690;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.String
struct String_t;
// System.Security.Cryptography.AsnDecodeStatus
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor()
 void X509BasicConstraintsExtension__ctor_m5422 (X509BasicConstraintsExtension_t1699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
 void X509BasicConstraintsExtension__ctor_m5423 (X509BasicConstraintsExtension_t1699 * __this, AsnEncodedData_t1690 * ___encodedBasicConstraints, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Boolean,System.Boolean,System.Int32,System.Boolean)
 void X509BasicConstraintsExtension__ctor_m5424 (X509BasicConstraintsExtension_t1699 * __this, bool ___certificateAuthority, bool ___hasPathLengthConstraint, int32_t ___pathLengthConstraint, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_CertificateAuthority()
 bool X509BasicConstraintsExtension_get_CertificateAuthority_m5425 (X509BasicConstraintsExtension_t1699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_HasPathLengthConstraint()
 bool X509BasicConstraintsExtension_get_HasPathLengthConstraint_m5426 (X509BasicConstraintsExtension_t1699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_PathLengthConstraint()
 int32_t X509BasicConstraintsExtension_get_PathLengthConstraint_m5427 (X509BasicConstraintsExtension_t1699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
 void X509BasicConstraintsExtension_CopyFrom_m5428 (X509BasicConstraintsExtension_t1699 * __this, AsnEncodedData_t1690 * ___asnEncodedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Decode(System.Byte[])
 int32_t X509BasicConstraintsExtension_Decode_m5429 (X509BasicConstraintsExtension_t1699 * __this, ByteU5BU5D_t1071* ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Encode()
 ByteU5BU5D_t1071* X509BasicConstraintsExtension_Encode_m5430 (X509BasicConstraintsExtension_t1699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::ToString(System.Boolean)
 String_t* X509BasicConstraintsExtension_ToString_m5431 (X509BasicConstraintsExtension_t1699 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
