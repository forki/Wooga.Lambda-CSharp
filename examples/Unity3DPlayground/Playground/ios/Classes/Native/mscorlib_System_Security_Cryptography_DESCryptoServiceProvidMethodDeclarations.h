#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DESCryptoServiceProvider
struct DESCryptoServiceProvider_t3807;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t3264;
// System.Byte[]
struct ByteU5BU5D_t961;

// System.Void System.Security.Cryptography.DESCryptoServiceProvider::.ctor()
 void DESCryptoServiceProvider__ctor_m12085 (DESCryptoServiceProvider_t3807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * DESCryptoServiceProvider_CreateDecryptor_m12086 (DESCryptoServiceProvider_t3807 * __this, ByteU5BU5D_t961* ___rgbKey, ByteU5BU5D_t961* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * DESCryptoServiceProvider_CreateEncryptor_m12087 (DESCryptoServiceProvider_t3807 * __this, ByteU5BU5D_t961* ___rgbKey, ByteU5BU5D_t961* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateIV()
 void DESCryptoServiceProvider_GenerateIV_m12088 (DESCryptoServiceProvider_t3807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateKey()
 void DESCryptoServiceProvider_GenerateKey_m12089 (DESCryptoServiceProvider_t3807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
