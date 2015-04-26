#pragma once

// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t2107;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1618;
// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t2106;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.DSAManaged::.ctor(System.Int32)
 void DSAManaged__ctor_m8600 (DSAManaged_t2107 * __this, int32_t ___dwKeySize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::add_KeyGenerated(Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler)
 void DSAManaged_add_KeyGenerated_m8601 (DSAManaged_t2107 * __this, KeyGeneratedEventHandler_t2106 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::remove_KeyGenerated(Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler)
 void DSAManaged_remove_KeyGenerated_m8602 (DSAManaged_t2107 * __this, KeyGeneratedEventHandler_t2106 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Finalize()
 void DSAManaged_Finalize_m8603 (DSAManaged_t2107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Generate()
 void DSAManaged_Generate_m8604 (DSAManaged_t2107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::GenerateKeyPair()
 void DSAManaged_GenerateKeyPair_m8605 (DSAManaged_t2107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::add(System.Byte[],System.Byte[],System.Int32)
 void DSAManaged_add_m8606 (DSAManaged_t2107 * __this, ByteU5BU5D_t1071* ___a, ByteU5BU5D_t1071* ___b, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::GenerateParams(System.Int32)
 void DSAManaged_GenerateParams_m8607 (DSAManaged_t2107 * __this, int32_t ___keyLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.DSAManaged::get_Random()
 RandomNumberGenerator_t1618 * DSAManaged_get_Random_m8608 (DSAManaged_t2107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.DSAManaged::get_KeySize()
 int32_t DSAManaged_get_KeySize_m8609 (DSAManaged_t2107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.DSAManaged::get_PublicOnly()
 bool DSAManaged_get_PublicOnly_m8610 (DSAManaged_t2107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.DSAManaged::NormalizeArray(System.Byte[])
 ByteU5BU5D_t1071* DSAManaged_NormalizeArray_m8611 (DSAManaged_t2107 * __this, ByteU5BU5D_t1071* ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.Cryptography.DSAManaged::ExportParameters(System.Boolean)
 DSAParameters_t1882  DSAManaged_ExportParameters_m8612 (DSAManaged_t2107 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::ImportParameters(System.Security.Cryptography.DSAParameters)
 void DSAManaged_ImportParameters_m8613 (DSAManaged_t2107 * __this, DSAParameters_t1882  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.DSAManaged::CreateSignature(System.Byte[])
 ByteU5BU5D_t1071* DSAManaged_CreateSignature_m8614 (DSAManaged_t2107 * __this, ByteU5BU5D_t1071* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.DSAManaged::VerifySignature(System.Byte[],System.Byte[])
 bool DSAManaged_VerifySignature_m8615 (DSAManaged_t2107 * __this, ByteU5BU5D_t1071* ___rgbHash, ByteU5BU5D_t1071* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Dispose(System.Boolean)
 void DSAManaged_Dispose_m8616 (DSAManaged_t2107 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
