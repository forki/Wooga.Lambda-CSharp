#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.SHA512Managed
struct SHA512Managed_t3833;
// System.Byte[]
struct ByteU5BU5D_t961;

// System.Void System.Security.Cryptography.SHA512Managed::.ctor()
 void SHA512Managed__ctor_m12305 (SHA512Managed_t3833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::Initialize(System.Boolean)
 void SHA512Managed_Initialize_m12306 (SHA512Managed_t3833 * __this, bool ___reuse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::Initialize()
 void SHA512Managed_Initialize_m12307 (SHA512Managed_t3833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::HashCore(System.Byte[],System.Int32,System.Int32)
 void SHA512Managed_HashCore_m12308 (SHA512Managed_t3833 * __this, ByteU5BU5D_t961* ___rgb, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA512Managed::HashFinal()
 ByteU5BU5D_t961* SHA512Managed_HashFinal_m12309 (SHA512Managed_t3833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::update(System.Byte)
 void SHA512Managed_update_m12310 (SHA512Managed_t3833 * __this, uint8_t ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::processWord(System.Byte[],System.Int32)
 void SHA512Managed_processWord_m12311 (SHA512Managed_t3833 * __this, ByteU5BU5D_t961* ___input, int32_t ___inOff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::unpackWord(System.UInt64,System.Byte[],System.Int32)
 void SHA512Managed_unpackWord_m12312 (SHA512Managed_t3833 * __this, uint64_t ___word, ByteU5BU5D_t961* ___output, int32_t ___outOff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::adjustByteCounts()
 void SHA512Managed_adjustByteCounts_m12313 (SHA512Managed_t3833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::processLength(System.UInt64,System.UInt64)
 void SHA512Managed_processLength_m12314 (SHA512Managed_t3833 * __this, uint64_t ___lowW, uint64_t ___hiW, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::processBlock()
 void SHA512Managed_processBlock_m12315 (SHA512Managed_t3833 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::rotateRight(System.UInt64,System.Int32)
 uint64_t SHA512Managed_rotateRight_m12316 (SHA512Managed_t3833 * __this, uint64_t ___x, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Ch(System.UInt64,System.UInt64,System.UInt64)
 uint64_t SHA512Managed_Ch_m12317 (SHA512Managed_t3833 * __this, uint64_t ___x, uint64_t ___y, uint64_t ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Maj(System.UInt64,System.UInt64,System.UInt64)
 uint64_t SHA512Managed_Maj_m12318 (SHA512Managed_t3833 * __this, uint64_t ___x, uint64_t ___y, uint64_t ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Sum0(System.UInt64)
 uint64_t SHA512Managed_Sum0_m12319 (SHA512Managed_t3833 * __this, uint64_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Sum1(System.UInt64)
 uint64_t SHA512Managed_Sum1_m12320 (SHA512Managed_t3833 * __this, uint64_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Sigma0(System.UInt64)
 uint64_t SHA512Managed_Sigma0_m12321 (SHA512Managed_t3833 * __this, uint64_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Sigma1(System.UInt64)
 uint64_t SHA512Managed_Sigma1_m12322 (SHA512Managed_t3833 * __this, uint64_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
