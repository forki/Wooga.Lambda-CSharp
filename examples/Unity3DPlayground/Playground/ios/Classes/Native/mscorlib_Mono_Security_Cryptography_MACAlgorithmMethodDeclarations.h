#pragma once

// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t2109;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1933;
// System.Byte[]
struct ByteU5BU5D_t1071;

// System.Void Mono.Security.Cryptography.MACAlgorithm::.ctor(System.Security.Cryptography.SymmetricAlgorithm)
 void MACAlgorithm__ctor_m8645 (MACAlgorithm_t2109 * __this, SymmetricAlgorithm_t1933 * ___algorithm, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Initialize(System.Byte[])
 void MACAlgorithm_Initialize_m8646 (MACAlgorithm_t2109 * __this, ByteU5BU5D_t1071* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Core(System.Byte[],System.Int32,System.Int32)
 void MACAlgorithm_Core_m8647 (MACAlgorithm_t2109 * __this, ByteU5BU5D_t1071* ___rgb, int32_t ___ib, int32_t ___cb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MACAlgorithm::Final()
 ByteU5BU5D_t1071* MACAlgorithm_Final_m8648 (MACAlgorithm_t2109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
