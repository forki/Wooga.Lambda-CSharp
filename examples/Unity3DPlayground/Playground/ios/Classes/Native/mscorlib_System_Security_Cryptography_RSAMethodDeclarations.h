#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSA
struct RSA_t3019;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void System.Security.Cryptography.RSA::.ctor()
 void RSA__ctor_m8847 (RSA_t3019 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.RSA::Create()
 RSA_t3019 * RSA_Create_m7729 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.RSA::Create(System.String)
 RSA_t3019 * RSA_Create_m12216 (Object_t * __this/* static, unused */, String_t* ___algName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSA::EncryptValue(System.Byte[])
// System.Byte[] System.Security.Cryptography.RSA::DecryptValue(System.Byte[])
// System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSA::ExportParameters(System.Boolean)
// System.Void System.Security.Cryptography.RSA::ImportParameters(System.Security.Cryptography.RSAParameters)
// System.Void System.Security.Cryptography.RSA::ZeroizePrivateKey(System.Security.Cryptography.RSAParameters)
 void RSA_ZeroizePrivateKey_m12217 (RSA_t3019 * __this, RSAParameters_t3216  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSA::FromXmlString(System.String)
 void RSA_FromXmlString_m8851 (RSA_t3019 * __this, String_t* ___xmlString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.RSA::ToXmlString(System.Boolean)
 String_t* RSA_ToXmlString_m12218 (RSA_t3019 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
