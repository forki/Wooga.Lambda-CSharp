#pragma once

// Mono.Security.Cryptography.ARC4Managed
struct ARC4Managed_t1921;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1923;

// System.Void Mono.Security.Cryptography.ARC4Managed::.ctor()
 void ARC4Managed__ctor_m6775 (ARC4Managed_t1921 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::Finalize()
 void ARC4Managed_Finalize_m6776 (ARC4Managed_t1921 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::Dispose(System.Boolean)
 void ARC4Managed_Dispose_m6777 (ARC4Managed_t1921 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.ARC4Managed::get_Key()
 ByteU5BU5D_t1071* ARC4Managed_get_Key_m6778 (ARC4Managed_t1921 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::set_Key(System.Byte[])
 void ARC4Managed_set_Key_m6779 (ARC4Managed_t1921 * __this, ByteU5BU5D_t1071* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.ARC4Managed::get_CanReuseTransform()
 bool ARC4Managed_get_CanReuseTransform_m6780 (ARC4Managed_t1921 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.ARC4Managed::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * ARC4Managed_CreateEncryptor_m6781 (ARC4Managed_t1921 * __this, ByteU5BU5D_t1071* ___rgbKey, ByteU5BU5D_t1071* ___rgvIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.ARC4Managed::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * ARC4Managed_CreateDecryptor_m6782 (ARC4Managed_t1921 * __this, ByteU5BU5D_t1071* ___rgbKey, ByteU5BU5D_t1071* ___rgvIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::GenerateIV()
 void ARC4Managed_GenerateIV_m6783 (ARC4Managed_t1921 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::GenerateKey()
 void ARC4Managed_GenerateKey_m6784 (ARC4Managed_t1921 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::KeySetup(System.Byte[])
 void ARC4Managed_KeySetup_m6785 (ARC4Managed_t1921 * __this, ByteU5BU5D_t1071* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::CheckInput(System.Byte[],System.Int32,System.Int32)
 void ARC4Managed_CheckInput_m6786 (ARC4Managed_t1921 * __this, ByteU5BU5D_t1071* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.ARC4Managed::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t ARC4Managed_TransformBlock_m6787 (ARC4Managed_t1921 * __this, ByteU5BU5D_t1071* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t1071* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.ARC4Managed::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t ARC4Managed_InternalTransformBlock_m6788 (ARC4Managed_t1921 * __this, ByteU5BU5D_t1071* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t1071* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.ARC4Managed::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t1071* ARC4Managed_TransformFinalBlock_m6789 (ARC4Managed_t1921 * __this, ByteU5BU5D_t1071* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
