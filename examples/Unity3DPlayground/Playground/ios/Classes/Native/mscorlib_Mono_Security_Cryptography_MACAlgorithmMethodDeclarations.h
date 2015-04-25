#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t3469;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t3275;
// System.Byte[]
struct ByteU5BU5D_t961;

// System.Void Mono.Security.Cryptography.MACAlgorithm::.ctor(System.Security.Cryptography.SymmetricAlgorithm)
 void MACAlgorithm__ctor_m10041 (MACAlgorithm_t3469 * __this, SymmetricAlgorithm_t3275 * ___algorithm, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Initialize(System.Byte[])
 void MACAlgorithm_Initialize_m10042 (MACAlgorithm_t3469 * __this, ByteU5BU5D_t961* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Core(System.Byte[],System.Int32,System.Int32)
 void MACAlgorithm_Core_m10043 (MACAlgorithm_t3469 * __this, ByteU5BU5D_t961* ___rgb, int32_t ___ib, int32_t ___cb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MACAlgorithm::Final()
 ByteU5BU5D_t961* MACAlgorithm_Final_m10044 (MACAlgorithm_t3469 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
