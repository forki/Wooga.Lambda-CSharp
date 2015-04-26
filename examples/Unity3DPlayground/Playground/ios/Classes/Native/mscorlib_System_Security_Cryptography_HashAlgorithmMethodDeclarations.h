#pragma once

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1619;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.HashAlgorithm::.ctor()
 void HashAlgorithm__ctor_m7489 (HashAlgorithm_t1619 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HashAlgorithm::System.IDisposable.Dispose()
 void HashAlgorithm_System_IDisposable_Dispose_m7490 (HashAlgorithm_t1619 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.HashAlgorithm::get_CanReuseTransform()
 bool HashAlgorithm_get_CanReuseTransform_m7491 (HashAlgorithm_t1619 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
 ByteU5BU5D_t1071* HashAlgorithm_ComputeHash_m6308 (HashAlgorithm_t1619 * __this, ByteU5BU5D_t1071* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t1071* HashAlgorithm_ComputeHash_m7513 (HashAlgorithm_t1619 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HashAlgorithm::Create(System.String)
 HashAlgorithm_t1619 * HashAlgorithm_Create_m6305 (Object_t * __this/* static, unused */, String_t* ___hashName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash()
 ByteU5BU5D_t1071* HashAlgorithm_get_Hash_m7494 (HashAlgorithm_t1619 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HashAlgorithm::HashCore(System.Byte[],System.Int32,System.Int32)
// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashFinal()
// System.Int32 System.Security.Cryptography.HashAlgorithm::get_HashSize()
 int32_t HashAlgorithm_get_HashSize_m7495 (HashAlgorithm_t1619 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HashAlgorithm::Initialize()
// System.Void System.Security.Cryptography.HashAlgorithm::Dispose(System.Boolean)
 void HashAlgorithm_Dispose_m7496 (HashAlgorithm_t1619 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t HashAlgorithm_TransformBlock_m7492 (HashAlgorithm_t1619 * __this, ByteU5BU5D_t1071* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t1071* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t1071* HashAlgorithm_TransformFinalBlock_m7493 (HashAlgorithm_t1619 * __this, ByteU5BU5D_t1071* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
