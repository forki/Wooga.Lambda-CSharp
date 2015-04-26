#pragma once

// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t2115;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t2114;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.String
struct String_t;
// Mono.Math.BigInteger
struct BigInteger_t2095;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void Mono.Security.Cryptography.RSAManaged::.ctor(System.Int32)
 void RSAManaged__ctor_m8680 (RSAManaged_t2115 * __this, int32_t ___keySize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::add_KeyGenerated(Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler)
 void RSAManaged_add_KeyGenerated_m8681 (RSAManaged_t2115 * __this, KeyGeneratedEventHandler_t2114 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::remove_KeyGenerated(Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler)
 void RSAManaged_remove_KeyGenerated_m8682 (RSAManaged_t2115 * __this, KeyGeneratedEventHandler_t2114 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Finalize()
 void RSAManaged_Finalize_m8683 (RSAManaged_t2115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::GenerateKeyPair()
 void RSAManaged_GenerateKeyPair_m8684 (RSAManaged_t2115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.RSAManaged::get_KeySize()
 int32_t RSAManaged_get_KeySize_m8685 (RSAManaged_t2115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.RSAManaged::get_PublicOnly()
 bool RSAManaged_get_PublicOnly_m8686 (RSAManaged_t2115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::DecryptValue(System.Byte[])
 ByteU5BU5D_t1071* RSAManaged_DecryptValue_m8687 (RSAManaged_t2115 * __this, ByteU5BU5D_t1071* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::EncryptValue(System.Byte[])
 ByteU5BU5D_t1071* RSAManaged_EncryptValue_m8688 (RSAManaged_t2115 * __this, ByteU5BU5D_t1071* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Cryptography.RSAManaged::ExportParameters(System.Boolean)
 RSAParameters_t1880  RSAManaged_ExportParameters_m8689 (RSAManaged_t2115 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::ImportParameters(System.Security.Cryptography.RSAParameters)
 void RSAManaged_ImportParameters_m8690 (RSAManaged_t2115 * __this, RSAParameters_t1880  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Dispose(System.Boolean)
 void RSAManaged_Dispose_m8691 (RSAManaged_t2115 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.RSAManaged::ToXmlString(System.Boolean)
 String_t* RSAManaged_ToXmlString_m8692 (RSAManaged_t2115 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.RSAManaged::get_IsCrtPossible()
 bool RSAManaged_get_IsCrtPossible_m8693 (RSAManaged_t2115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::GetPaddedValue(Mono.Math.BigInteger,System.Int32)
 ByteU5BU5D_t1071* RSAManaged_GetPaddedValue_m8694 (RSAManaged_t2115 * __this, BigInteger_t2095 * ___value, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
