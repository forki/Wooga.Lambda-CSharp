#pragma once

// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t1879;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.String
struct String_t;
// Mono.Math.BigInteger
struct BigInteger_t1906;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void Mono.Security.Cryptography.RSAManaged::.ctor()
 void RSAManaged__ctor_m6835 (RSAManaged_t1879 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::.ctor(System.Int32)
 void RSAManaged__ctor_m6836 (RSAManaged_t1879 * __this, int32_t ___keySize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Finalize()
 void RSAManaged_Finalize_m6837 (RSAManaged_t1879 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::GenerateKeyPair()
 void RSAManaged_GenerateKeyPair_m6838 (RSAManaged_t1879 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.RSAManaged::get_KeySize()
 int32_t RSAManaged_get_KeySize_m6839 (RSAManaged_t1879 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.RSAManaged::get_PublicOnly()
 bool RSAManaged_get_PublicOnly_m6462 (RSAManaged_t1879 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::DecryptValue(System.Byte[])
 ByteU5BU5D_t1071* RSAManaged_DecryptValue_m6840 (RSAManaged_t1879 * __this, ByteU5BU5D_t1071* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::EncryptValue(System.Byte[])
 ByteU5BU5D_t1071* RSAManaged_EncryptValue_m6841 (RSAManaged_t1879 * __this, ByteU5BU5D_t1071* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Cryptography.RSAManaged::ExportParameters(System.Boolean)
 RSAParameters_t1880  RSAManaged_ExportParameters_m6842 (RSAManaged_t1879 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::ImportParameters(System.Security.Cryptography.RSAParameters)
 void RSAManaged_ImportParameters_m6843 (RSAManaged_t1879 * __this, RSAParameters_t1880  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Dispose(System.Boolean)
 void RSAManaged_Dispose_m6844 (RSAManaged_t1879 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.RSAManaged::ToXmlString(System.Boolean)
 String_t* RSAManaged_ToXmlString_m6845 (RSAManaged_t1879 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::GetPaddedValue(Mono.Math.BigInteger,System.Int32)
 ByteU5BU5D_t1071* RSAManaged_GetPaddedValue_m6846 (RSAManaged_t1879 * __this, BigInteger_t1906 * ___value, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
