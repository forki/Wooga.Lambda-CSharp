#pragma once

// System.Security.Cryptography.DSACryptoServiceProvider
struct DSACryptoServiceProvider_t1881;
// System.Security.Cryptography.CspParameters
struct CspParameters_t2013;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t1675;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor()
 void DSACryptoServiceProvider__ctor_m10515 (DSACryptoServiceProvider_t1881 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32)
 void DSACryptoServiceProvider__ctor_m6480 (DSACryptoServiceProvider_t1881 * __this, int32_t ___dwKeySize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32,System.Security.Cryptography.CspParameters)
 void DSACryptoServiceProvider__ctor_m10516 (DSACryptoServiceProvider_t1881 * __this, int32_t ___dwKeySize, CspParameters_t2013 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.cctor()
 void DSACryptoServiceProvider__cctor_m10517 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::Finalize()
 void DSACryptoServiceProvider_Finalize_m10518 (DSACryptoServiceProvider_t1881 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.DSACryptoServiceProvider::get_KeySize()
 int32_t DSACryptoServiceProvider_get_KeySize_m10519 (DSACryptoServiceProvider_t1881 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::get_PublicOnly()
 bool DSACryptoServiceProvider_get_PublicOnly_m6467 (DSACryptoServiceProvider_t1881 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters System.Security.Cryptography.DSACryptoServiceProvider::ExportParameters(System.Boolean)
 DSAParameters_t1882  DSACryptoServiceProvider_ExportParameters_m10520 (DSACryptoServiceProvider_t1881 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.DSAParameters)
 void DSACryptoServiceProvider_ImportParameters_m10521 (DSACryptoServiceProvider_t1881 * __this, DSAParameters_t1882  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSACryptoServiceProvider::CreateSignature(System.Byte[])
 ByteU5BU5D_t1071* DSACryptoServiceProvider_CreateSignature_m10522 (DSACryptoServiceProvider_t1881 * __this, ByteU5BU5D_t1071* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::VerifySignature(System.Byte[],System.Byte[])
 bool DSACryptoServiceProvider_VerifySignature_m10523 (DSACryptoServiceProvider_t1881 * __this, ByteU5BU5D_t1071* ___rgbHash, ByteU5BU5D_t1071* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::Dispose(System.Boolean)
 void DSACryptoServiceProvider_Dispose_m10524 (DSACryptoServiceProvider_t1881 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
 void DSACryptoServiceProvider_OnKeyGenerated_m10525 (DSACryptoServiceProvider_t1881 * __this, Object_t * ___sender, EventArgs_t1675 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
