#pragma once

// Mono.Security.Cryptography.MD2Managed
struct MD2Managed_t1927;
// System.Byte[]
struct ByteU5BU5D_t1071;

// System.Void Mono.Security.Cryptography.MD2Managed::.ctor()
 void MD2Managed__ctor_m6795 (MD2Managed_t1927 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::.cctor()
 void MD2Managed__cctor_m6796 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD2Managed::Padding(System.Int32)
 ByteU5BU5D_t1071* MD2Managed_Padding_m6797 (MD2Managed_t1927 * __this, int32_t ___nLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::Initialize()
 void MD2Managed_Initialize_m6798 (MD2Managed_t1927 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::HashCore(System.Byte[],System.Int32,System.Int32)
 void MD2Managed_HashCore_m6799 (MD2Managed_t1927 * __this, ByteU5BU5D_t1071* ___array, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD2Managed::HashFinal()
 ByteU5BU5D_t1071* MD2Managed_HashFinal_m6800 (MD2Managed_t1927 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::MD2Transform(System.Byte[],System.Byte[],System.Byte[],System.Int32)
 void MD2Managed_MD2Transform_m6801 (MD2Managed_t1927 * __this, ByteU5BU5D_t1071* ___state, ByteU5BU5D_t1071* ___checksum, ByteU5BU5D_t1071* ___block, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
