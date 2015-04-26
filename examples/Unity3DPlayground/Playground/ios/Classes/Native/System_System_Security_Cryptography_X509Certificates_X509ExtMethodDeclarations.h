#pragma once

// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t1700;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1690;

// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor()
 void X509Extension__ctor_m5554 (X509Extension_t1700 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor(System.String,System.Byte[],System.Boolean)
 void X509Extension__ctor_m5555 (X509Extension_t1700 * __this, String_t* ___oid, ByteU5BU5D_t1071* ___rawData, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::get_Critical()
 bool X509Extension_get_Critical_m5556 (X509Extension_t1700 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::set_Critical(System.Boolean)
 void X509Extension_set_Critical_m5557 (X509Extension_t1700 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
 void X509Extension_CopyFrom_m5558 (X509Extension_t1700 * __this, AsnEncodedData_t1690 * ___asnEncodedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Extension::FormatUnkownData(System.Byte[])
 String_t* X509Extension_FormatUnkownData_m5559 (X509Extension_t1700 * __this, ByteU5BU5D_t1071* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
