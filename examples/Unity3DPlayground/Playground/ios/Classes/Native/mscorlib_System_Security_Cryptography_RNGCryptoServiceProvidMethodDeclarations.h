#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_t3820;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::.ctor()
 void RNGCryptoServiceProvider__ctor_m12206 (RNGCryptoServiceProvider_t3820 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::.cctor()
 void RNGCryptoServiceProvider__cctor_m12207 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::Check()
 void RNGCryptoServiceProvider_Check_m12208 (RNGCryptoServiceProvider_t3820 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RNGCryptoServiceProvider::RngOpen()
 bool RNGCryptoServiceProvider_RngOpen_m12209 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::RngInitialize(System.Byte[])
 IntPtr_t31 RNGCryptoServiceProvider_RngInitialize_m12210 (Object_t * __this/* static, unused */, ByteU5BU5D_t961* ___seed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::RngGetBytes(System.IntPtr,System.Byte[])
 IntPtr_t31 RNGCryptoServiceProvider_RngGetBytes_m12211 (Object_t * __this/* static, unused */, IntPtr_t31 ___handle, ByteU5BU5D_t961* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::RngClose(System.IntPtr)
 void RNGCryptoServiceProvider_RngClose_m12212 (Object_t * __this/* static, unused */, IntPtr_t31 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::GetBytes(System.Byte[])
 void RNGCryptoServiceProvider_GetBytes_m12213 (RNGCryptoServiceProvider_t3820 * __this, ByteU5BU5D_t961* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::GetNonZeroBytes(System.Byte[])
 void RNGCryptoServiceProvider_GetNonZeroBytes_m12214 (RNGCryptoServiceProvider_t3820 * __this, ByteU5BU5D_t961* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::Finalize()
 void RNGCryptoServiceProvider_Finalize_m12215 (RNGCryptoServiceProvider_t3820 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
