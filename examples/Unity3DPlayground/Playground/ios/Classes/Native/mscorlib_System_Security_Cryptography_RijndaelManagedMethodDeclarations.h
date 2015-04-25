#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t3822;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t3264;
// System.Byte[]
struct ByteU5BU5D_t961;

// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
 void RijndaelManaged__ctor_m12241 (RijndaelManaged_t3822 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateIV()
 void RijndaelManaged_GenerateIV_m12242 (RijndaelManaged_t3822 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateKey()
 void RijndaelManaged_GenerateKey_m12243 (RijndaelManaged_t3822 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * RijndaelManaged_CreateDecryptor_m12244 (RijndaelManaged_t3822 * __this, ByteU5BU5D_t961* ___rgbKey, ByteU5BU5D_t961* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * RijndaelManaged_CreateEncryptor_m12245 (RijndaelManaged_t3822 * __this, ByteU5BU5D_t961* ___rgbKey, ByteU5BU5D_t961* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
