#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct RSAPKCS1SignatureDeformatter_t3374;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3013;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t961;

// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor()
 void RSAPKCS1SignatureDeformatter__ctor_m12231 (RSAPKCS1SignatureDeformatter_t3374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSAPKCS1SignatureDeformatter__ctor_m8873 (RSAPKCS1SignatureDeformatter_t3374 * __this, AsymmetricAlgorithm_t3013 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String)
 void RSAPKCS1SignatureDeformatter_SetHashAlgorithm_m8874 (RSAPKCS1SignatureDeformatter_t3374 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSAPKCS1SignatureDeformatter_SetKey_m12232 (RSAPKCS1SignatureDeformatter_t3374 * __this, AsymmetricAlgorithm_t3013 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSAPKCS1SignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
 bool RSAPKCS1SignatureDeformatter_VerifySignature_m8875 (RSAPKCS1SignatureDeformatter_t3374 * __this, ByteU5BU5D_t961* ___rgbHash, ByteU5BU5D_t961* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
