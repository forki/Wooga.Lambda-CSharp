#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct TripleDESCryptoServiceProvider_t3839;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t3264;
// System.Byte[]
struct ByteU5BU5D_t961;

// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::.ctor()
 void TripleDESCryptoServiceProvider__ctor_m12347 (TripleDESCryptoServiceProvider_t3839 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateIV()
 void TripleDESCryptoServiceProvider_GenerateIV_m12348 (TripleDESCryptoServiceProvider_t3839 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateKey()
 void TripleDESCryptoServiceProvider_GenerateKey_m12349 (TripleDESCryptoServiceProvider_t3839 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * TripleDESCryptoServiceProvider_CreateDecryptor_m12350 (TripleDESCryptoServiceProvider_t3839 * __this, ByteU5BU5D_t961* ___rgbKey, ByteU5BU5D_t961* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * TripleDESCryptoServiceProvider_CreateEncryptor_m12351 (TripleDESCryptoServiceProvider_t3839 * __this, ByteU5BU5D_t961* ___rgbKey, ByteU5BU5D_t961* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
