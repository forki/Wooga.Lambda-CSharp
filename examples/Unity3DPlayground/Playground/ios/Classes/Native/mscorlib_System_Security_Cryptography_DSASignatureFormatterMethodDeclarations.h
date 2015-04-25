#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSASignatureFormatter
struct DSASignatureFormatter_t3808;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3013;

// System.Void System.Security.Cryptography.DSASignatureFormatter::.ctor()
 void DSASignatureFormatter__ctor_m12108 (DSASignatureFormatter_t3808 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSASignatureFormatter::CreateSignature(System.Byte[])
 ByteU5BU5D_t961* DSASignatureFormatter_CreateSignature_m12109 (DSASignatureFormatter_t3808 * __this, ByteU5BU5D_t961* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetHashAlgorithm(System.String)
 void DSASignatureFormatter_SetHashAlgorithm_m12110 (DSASignatureFormatter_t3808 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void DSASignatureFormatter_SetKey_m12111 (DSASignatureFormatter_t3808 * __this, AsymmetricAlgorithm_t3013 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
