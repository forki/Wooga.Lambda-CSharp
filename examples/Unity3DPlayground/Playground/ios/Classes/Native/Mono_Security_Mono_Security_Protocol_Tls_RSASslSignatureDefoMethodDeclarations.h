#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct RSASslSignatureDeformatter_t3325;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3013;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.String
struct String_t;

// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSASslSignatureDeformatter__ctor_m8521 (RSASslSignatureDeformatter_t3325 * __this, AsymmetricAlgorithm_t3013 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
 bool RSASslSignatureDeformatter_VerifySignature_m8522 (RSASslSignatureDeformatter_t3325 * __this, ByteU5BU5D_t961* ___rgbHash, ByteU5BU5D_t961* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetHashAlgorithm(System.String)
 void RSASslSignatureDeformatter_SetHashAlgorithm_m8523 (RSASslSignatureDeformatter_t3325 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSASslSignatureDeformatter_SetKey_m8524 (RSASslSignatureDeformatter_t3325 * __this, AsymmetricAlgorithm_t3013 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
