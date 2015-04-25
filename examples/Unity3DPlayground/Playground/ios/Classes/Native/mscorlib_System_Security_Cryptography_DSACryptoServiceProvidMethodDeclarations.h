#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSACryptoServiceProvider
struct DSACryptoServiceProvider_t3217;
// System.Security.Cryptography.CspParameters
struct CspParameters_t3368;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t3276;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor()
 void DSACryptoServiceProvider__ctor_m12095 (DSACryptoServiceProvider_t3217 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32)
 void DSACryptoServiceProvider__ctor_m7746 (DSACryptoServiceProvider_t3217 * __this, int32_t ___dwKeySize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32,System.Security.Cryptography.CspParameters)
 void DSACryptoServiceProvider__ctor_m12096 (DSACryptoServiceProvider_t3217 * __this, int32_t ___dwKeySize, CspParameters_t3368 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.cctor()
 void DSACryptoServiceProvider__cctor_m12097 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::Finalize()
 void DSACryptoServiceProvider_Finalize_m12098 (DSACryptoServiceProvider_t3217 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.DSACryptoServiceProvider::get_KeySize()
 int32_t DSACryptoServiceProvider_get_KeySize_m12099 (DSACryptoServiceProvider_t3217 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::get_PublicOnly()
 bool DSACryptoServiceProvider_get_PublicOnly_m7732 (DSACryptoServiceProvider_t3217 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters System.Security.Cryptography.DSACryptoServiceProvider::ExportParameters(System.Boolean)
 DSAParameters_t3218  DSACryptoServiceProvider_ExportParameters_m12100 (DSACryptoServiceProvider_t3217 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.DSAParameters)
 void DSACryptoServiceProvider_ImportParameters_m12101 (DSACryptoServiceProvider_t3217 * __this, DSAParameters_t3218  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSACryptoServiceProvider::CreateSignature(System.Byte[])
 ByteU5BU5D_t961* DSACryptoServiceProvider_CreateSignature_m12102 (DSACryptoServiceProvider_t3217 * __this, ByteU5BU5D_t961* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::VerifySignature(System.Byte[],System.Byte[])
 bool DSACryptoServiceProvider_VerifySignature_m12103 (DSACryptoServiceProvider_t3217 * __this, ByteU5BU5D_t961* ___rgbHash, ByteU5BU5D_t961* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::Dispose(System.Boolean)
 void DSACryptoServiceProvider_Dispose_m12104 (DSACryptoServiceProvider_t3217 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
 void DSACryptoServiceProvider_OnKeyGenerated_m12105 (DSACryptoServiceProvider_t3217 * __this, Object_t * ___sender, EventArgs_t3276 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
