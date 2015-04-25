#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.KeyBuilder
struct KeyBuilder_t3266;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3251;
// System.Byte[]
struct ByteU5BU5D_t961;

// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::get_Rng()
 RandomNumberGenerator_t3251 * KeyBuilder_get_Rng_m8091 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::Key(System.Int32)
 ByteU5BU5D_t961* KeyBuilder_Key_m8092 (Object_t * __this/* static, unused */, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
