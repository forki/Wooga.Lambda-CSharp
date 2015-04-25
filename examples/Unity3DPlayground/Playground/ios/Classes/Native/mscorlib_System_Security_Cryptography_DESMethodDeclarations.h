#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DES
struct DES_t3379;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.DES::.ctor()
 void DES__ctor_m12069 (DES_t3379 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DES::.cctor()
 void DES__cctor_m12070 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DES System.Security.Cryptography.DES::Create()
 DES_t3379 * DES_Create_m8898 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DES System.Security.Cryptography.DES::Create(System.String)
 DES_t3379 * DES_Create_m12071 (Object_t * __this/* static, unused */, String_t* ___algName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DES::IsWeakKey(System.Byte[])
 bool DES_IsWeakKey_m12072 (Object_t * __this/* static, unused */, ByteU5BU5D_t961* ___rgbKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DES::IsSemiWeakKey(System.Byte[])
 bool DES_IsSemiWeakKey_m12073 (Object_t * __this/* static, unused */, ByteU5BU5D_t961* ___rgbKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DES::get_Key()
 ByteU5BU5D_t961* DES_get_Key_m12074 (DES_t3379 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DES::set_Key(System.Byte[])
 void DES_set_Key_m12075 (DES_t3379 * __this, ByteU5BU5D_t961* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
