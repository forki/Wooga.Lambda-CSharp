#pragma once

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct TripleDESCryptoServiceProvider_t2465;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1923;
// System.Byte[]
struct ByteU5BU5D_t1071;

// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::.ctor()
 void TripleDESCryptoServiceProvider__ctor_m10767 (TripleDESCryptoServiceProvider_t2465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateIV()
 void TripleDESCryptoServiceProvider_GenerateIV_m10768 (TripleDESCryptoServiceProvider_t2465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateKey()
 void TripleDESCryptoServiceProvider_GenerateKey_m10769 (TripleDESCryptoServiceProvider_t2465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * TripleDESCryptoServiceProvider_CreateDecryptor_m10770 (TripleDESCryptoServiceProvider_t2465 * __this, ByteU5BU5D_t1071* ___rgbKey, ByteU5BU5D_t1071* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * TripleDESCryptoServiceProvider_CreateEncryptor_m10771 (TripleDESCryptoServiceProvider_t2465 * __this, ByteU5BU5D_t1071* ___rgbKey, ByteU5BU5D_t1071* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
