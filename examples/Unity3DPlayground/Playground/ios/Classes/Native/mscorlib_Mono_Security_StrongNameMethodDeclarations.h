#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.StrongName
struct StrongName_t3492;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.String
struct String_t;

// System.Void Mono.Security.StrongName::.cctor()
 void StrongName__cctor_m10240 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.StrongName::get_PublicKey()
 ByteU5BU5D_t961* StrongName_get_PublicKey_m10241 (StrongName_t3492 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.StrongName::get_PublicKeyToken()
 ByteU5BU5D_t961* StrongName_get_PublicKeyToken_m10242 (StrongName_t3492 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.StrongName::get_TokenAlgorithm()
 String_t* StrongName_get_TokenAlgorithm_m10243 (StrongName_t3492 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
