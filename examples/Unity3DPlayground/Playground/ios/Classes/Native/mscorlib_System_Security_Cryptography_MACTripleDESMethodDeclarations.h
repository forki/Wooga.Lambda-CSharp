#pragma once

// System.Security.Cryptography.MACTripleDES
struct MACTripleDES_t2440;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1071;

// System.Void System.Security.Cryptography.MACTripleDES::.ctor()
 void MACTripleDES__ctor_m10568 (MACTripleDES_t2440 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Setup(System.String,System.Byte[])
 void MACTripleDES_Setup_m10569 (MACTripleDES_t2440 * __this, String_t* ___strTripleDES, ByteU5BU5D_t1071* ___rgbKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Finalize()
 void MACTripleDES_Finalize_m10570 (MACTripleDES_t2440 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Dispose(System.Boolean)
 void MACTripleDES_Dispose_m10571 (MACTripleDES_t2440 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Initialize()
 void MACTripleDES_Initialize_m10572 (MACTripleDES_t2440 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::HashCore(System.Byte[],System.Int32,System.Int32)
 void MACTripleDES_HashCore_m10573 (MACTripleDES_t2440 * __this, ByteU5BU5D_t1071* ___rgbData, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.MACTripleDES::HashFinal()
 ByteU5BU5D_t1071* MACTripleDES_HashFinal_m10574 (MACTripleDES_t2440 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
