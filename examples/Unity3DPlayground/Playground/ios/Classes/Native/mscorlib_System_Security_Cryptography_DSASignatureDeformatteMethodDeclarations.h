#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSASignatureDeformatter
struct DSASignatureDeformatter_t3373;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3013;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t961;

// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor()
 void DSASignatureDeformatter__ctor_m12106 (DSASignatureDeformatter_t3373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
 void DSASignatureDeformatter__ctor_m8870 (DSASignatureDeformatter_t3373 * __this, AsymmetricAlgorithm_t3013 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetHashAlgorithm(System.String)
 void DSASignatureDeformatter_SetHashAlgorithm_m8871 (DSASignatureDeformatter_t3373 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void DSASignatureDeformatter_SetKey_m12107 (DSASignatureDeformatter_t3373 * __this, AsymmetricAlgorithm_t3013 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSASignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
 bool DSASignatureDeformatter_VerifySignature_m8872 (DSASignatureDeformatter_t3373 * __this, ByteU5BU5D_t961* ___rgbHash, ByteU5BU5D_t961* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
