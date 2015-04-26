#pragma once

// System.Security.Cryptography.RC2CryptoServiceProvider
struct RC2CryptoServiceProvider_t2442;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1923;
// System.Byte[]
struct ByteU5BU5D_t1071;

// System.Void System.Security.Cryptography.RC2CryptoServiceProvider::.ctor()
 void RC2CryptoServiceProvider__ctor_m10592 (RC2CryptoServiceProvider_t2442 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RC2CryptoServiceProvider::get_EffectiveKeySize()
 int32_t RC2CryptoServiceProvider_get_EffectiveKeySize_m10593 (RC2CryptoServiceProvider_t2442 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RC2CryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * RC2CryptoServiceProvider_CreateDecryptor_m10594 (RC2CryptoServiceProvider_t2442 * __this, ByteU5BU5D_t1071* ___rgbKey, ByteU5BU5D_t1071* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RC2CryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * RC2CryptoServiceProvider_CreateEncryptor_m10595 (RC2CryptoServiceProvider_t2442 * __this, ByteU5BU5D_t1071* ___rgbKey, ByteU5BU5D_t1071* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2CryptoServiceProvider::GenerateIV()
 void RC2CryptoServiceProvider_GenerateIV_m10596 (RC2CryptoServiceProvider_t2442 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2CryptoServiceProvider::GenerateKey()
 void RC2CryptoServiceProvider_GenerateKey_m10597 (RC2CryptoServiceProvider_t2442 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
