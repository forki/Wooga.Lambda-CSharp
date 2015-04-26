#pragma once

// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t1878;
// System.Security.Cryptography.CspParameters
struct CspParameters_t2013;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t1675;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor()
 void RSACryptoServiceProvider__ctor_m10639 (RSACryptoServiceProvider_t1878 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Security.Cryptography.CspParameters)
 void RSACryptoServiceProvider__ctor_m7503 (RSACryptoServiceProvider_t1878 * __this, CspParameters_t2013 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Int32)
 void RSACryptoServiceProvider__ctor_m6481 (RSACryptoServiceProvider_t1878 * __this, int32_t ___dwKeySize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.cctor()
 void RSACryptoServiceProvider__cctor_m10640 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Common(System.Int32,System.Security.Cryptography.CspParameters)
 void RSACryptoServiceProvider_Common_m10641 (RSACryptoServiceProvider_t1878 * __this, int32_t ___dwKeySize, CspParameters_t2013 * ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Finalize()
 void RSACryptoServiceProvider_Finalize_m10642 (RSACryptoServiceProvider_t1878 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RSACryptoServiceProvider::get_KeySize()
 int32_t RSACryptoServiceProvider_get_KeySize_m10643 (RSACryptoServiceProvider_t1878 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::get_PublicOnly()
 bool RSACryptoServiceProvider_get_PublicOnly_m6461 (RSACryptoServiceProvider_t1878 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::DecryptValue(System.Byte[])
 ByteU5BU5D_t1071* RSACryptoServiceProvider_DecryptValue_m10644 (RSACryptoServiceProvider_t1878 * __this, ByteU5BU5D_t1071* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::EncryptValue(System.Byte[])
 ByteU5BU5D_t1071* RSACryptoServiceProvider_EncryptValue_m10645 (RSACryptoServiceProvider_t1878 * __this, ByteU5BU5D_t1071* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSACryptoServiceProvider::ExportParameters(System.Boolean)
 RSAParameters_t1880  RSACryptoServiceProvider_ExportParameters_m10646 (RSACryptoServiceProvider_t1878 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.RSAParameters)
 void RSACryptoServiceProvider_ImportParameters_m10647 (RSACryptoServiceProvider_t1878 * __this, RSAParameters_t1880  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Dispose(System.Boolean)
 void RSACryptoServiceProvider_Dispose_m10648 (RSACryptoServiceProvider_t1878 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
 void RSACryptoServiceProvider_OnKeyGenerated_m10649 (RSACryptoServiceProvider_t1878 * __this, Object_t * ___sender, EventArgs_t1675 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
