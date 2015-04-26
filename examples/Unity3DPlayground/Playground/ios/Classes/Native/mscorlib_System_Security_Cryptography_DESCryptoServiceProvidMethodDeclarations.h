#pragma once

// System.Security.Cryptography.DESCryptoServiceProvider
struct DESCryptoServiceProvider_t2433;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1923;
// System.Byte[]
struct ByteU5BU5D_t1071;

// System.Void System.Security.Cryptography.DESCryptoServiceProvider::.ctor()
 void DESCryptoServiceProvider__ctor_m10505 (DESCryptoServiceProvider_t2433 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * DESCryptoServiceProvider_CreateDecryptor_m10506 (DESCryptoServiceProvider_t2433 * __this, ByteU5BU5D_t1071* ___rgbKey, ByteU5BU5D_t1071* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * DESCryptoServiceProvider_CreateEncryptor_m10507 (DESCryptoServiceProvider_t2433 * __this, ByteU5BU5D_t1071* ___rgbKey, ByteU5BU5D_t1071* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateIV()
 void DESCryptoServiceProvider_GenerateIV_m10508 (DESCryptoServiceProvider_t2433 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateKey()
 void DESCryptoServiceProvider_GenerateKey_m10509 (DESCryptoServiceProvider_t2433 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
