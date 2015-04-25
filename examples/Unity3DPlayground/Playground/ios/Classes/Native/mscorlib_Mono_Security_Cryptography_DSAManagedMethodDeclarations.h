#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t3467;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3251;
// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t3466;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.DSAManaged::.ctor(System.Int32)
 void DSAManaged__ctor_m9996 (DSAManaged_t3467 * __this, int32_t ___dwKeySize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::add_KeyGenerated(Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler)
 void DSAManaged_add_KeyGenerated_m9997 (DSAManaged_t3467 * __this, KeyGeneratedEventHandler_t3466 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::remove_KeyGenerated(Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler)
 void DSAManaged_remove_KeyGenerated_m9998 (DSAManaged_t3467 * __this, KeyGeneratedEventHandler_t3466 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Finalize()
 void DSAManaged_Finalize_m9999 (DSAManaged_t3467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Generate()
 void DSAManaged_Generate_m10000 (DSAManaged_t3467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::GenerateKeyPair()
 void DSAManaged_GenerateKeyPair_m10001 (DSAManaged_t3467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::add(System.Byte[],System.Byte[],System.Int32)
 void DSAManaged_add_m10002 (DSAManaged_t3467 * __this, ByteU5BU5D_t961* ___a, ByteU5BU5D_t961* ___b, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::GenerateParams(System.Int32)
 void DSAManaged_GenerateParams_m10003 (DSAManaged_t3467 * __this, int32_t ___keyLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.DSAManaged::get_Random()
 RandomNumberGenerator_t3251 * DSAManaged_get_Random_m10004 (DSAManaged_t3467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.DSAManaged::get_KeySize()
 int32_t DSAManaged_get_KeySize_m10005 (DSAManaged_t3467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.DSAManaged::get_PublicOnly()
 bool DSAManaged_get_PublicOnly_m10006 (DSAManaged_t3467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.DSAManaged::NormalizeArray(System.Byte[])
 ByteU5BU5D_t961* DSAManaged_NormalizeArray_m10007 (DSAManaged_t3467 * __this, ByteU5BU5D_t961* ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.Cryptography.DSAManaged::ExportParameters(System.Boolean)
 DSAParameters_t3218  DSAManaged_ExportParameters_m10008 (DSAManaged_t3467 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::ImportParameters(System.Security.Cryptography.DSAParameters)
 void DSAManaged_ImportParameters_m10009 (DSAManaged_t3467 * __this, DSAParameters_t3218  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.DSAManaged::CreateSignature(System.Byte[])
 ByteU5BU5D_t961* DSAManaged_CreateSignature_m10010 (DSAManaged_t3467 * __this, ByteU5BU5D_t961* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.DSAManaged::VerifySignature(System.Byte[],System.Byte[])
 bool DSAManaged_VerifySignature_m10011 (DSAManaged_t3467 * __this, ByteU5BU5D_t961* ___rgbHash, ByteU5BU5D_t961* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Dispose(System.Boolean)
 void DSAManaged_Dispose_m10012 (DSAManaged_t3467 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
