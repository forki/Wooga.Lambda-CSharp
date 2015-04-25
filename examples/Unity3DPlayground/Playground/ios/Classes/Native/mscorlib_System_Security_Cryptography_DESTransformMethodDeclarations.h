#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DESTransform
struct DESTransform_t3806;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t3275;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.UInt32[]
struct UInt32U5BU5D_t3250;

// System.Void System.Security.Cryptography.DESTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[],System.Byte[])
 void DESTransform__ctor_m12076 (DESTransform_t3806 * __this, SymmetricAlgorithm_t3275 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t961* ___key, ByteU5BU5D_t961* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::.cctor()
 void DESTransform__cctor_m12077 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.DESTransform::CipherFunct(System.UInt32,System.Int32)
 uint32_t DESTransform_CipherFunct_m12078 (DESTransform_t3806 * __this, uint32_t ___r, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::Permutation(System.Byte[],System.Byte[],System.UInt32[],System.Boolean)
 void DESTransform_Permutation_m12079 (Object_t * __this/* static, unused */, ByteU5BU5D_t961* ___input, ByteU5BU5D_t961* ___output, UInt32U5BU5D_t3250* ___permTab, bool ___preSwap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::BSwap(System.Byte[])
 void DESTransform_BSwap_m12080 (Object_t * __this/* static, unused */, ByteU5BU5D_t961* ___byteBuff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::SetKey(System.Byte[])
 void DESTransform_SetKey_m12081 (DESTransform_t3806 * __this, ByteU5BU5D_t961* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ProcessBlock(System.Byte[],System.Byte[])
 void DESTransform_ProcessBlock_m12082 (DESTransform_t3806 * __this, ByteU5BU5D_t961* ___input, ByteU5BU5D_t961* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ECB(System.Byte[],System.Byte[])
 void DESTransform_ECB_m12083 (DESTransform_t3806 * __this, ByteU5BU5D_t961* ___input, ByteU5BU5D_t961* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DESTransform::GetStrongKey()
 ByteU5BU5D_t961* DESTransform_GetStrongKey_m12084 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
