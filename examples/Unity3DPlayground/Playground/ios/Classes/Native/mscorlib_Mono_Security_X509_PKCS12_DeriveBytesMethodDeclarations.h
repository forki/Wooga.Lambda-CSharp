#pragma once

// Mono.Security.X509.PKCS12/DeriveBytes
struct DeriveBytes_t2119;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1071;

// System.Void Mono.Security.X509.PKCS12/DeriveBytes::.ctor()
 void DeriveBytes__ctor_m8717 (DeriveBytes_t2119 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::.cctor()
 void DeriveBytes__cctor_m8718 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_HashName(System.String)
 void DeriveBytes_set_HashName_m8719 (DeriveBytes_t2119 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_IterationCount(System.Int32)
 void DeriveBytes_set_IterationCount_m8720 (DeriveBytes_t2119 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_Password(System.Byte[])
 void DeriveBytes_set_Password_m8721 (DeriveBytes_t2119 * __this, ByteU5BU5D_t1071* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_Salt(System.Byte[])
 void DeriveBytes_set_Salt_m8722 (DeriveBytes_t2119 * __this, ByteU5BU5D_t1071* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::Adjust(System.Byte[],System.Int32,System.Byte[])
 void DeriveBytes_Adjust_m8723 (DeriveBytes_t2119 * __this, ByteU5BU5D_t1071* ___a, int32_t ___aOff, ByteU5BU5D_t1071* ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::Derive(System.Byte[],System.Int32)
 ByteU5BU5D_t1071* DeriveBytes_Derive_m8724 (DeriveBytes_t2119 * __this, ByteU5BU5D_t1071* ___diversifier, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveKey(System.Int32)
 ByteU5BU5D_t1071* DeriveBytes_DeriveKey_m8725 (DeriveBytes_t2119 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveIV(System.Int32)
 ByteU5BU5D_t1071* DeriveBytes_DeriveIV_m8726 (DeriveBytes_t2119 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveMAC(System.Int32)
 ByteU5BU5D_t1071* DeriveBytes_DeriveMAC_m8727 (DeriveBytes_t2119 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
