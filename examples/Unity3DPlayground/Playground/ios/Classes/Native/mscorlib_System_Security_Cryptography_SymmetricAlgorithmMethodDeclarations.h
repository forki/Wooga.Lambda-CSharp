#pragma once

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1933;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t1932;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1923;
// System.String
struct String_t;
// System.Security.Cryptography.CipherMode
#include "mscorlib_System_Security_Cryptography_CipherMode.h"
// System.Security.Cryptography.PaddingMode
#include "mscorlib_System_Security_Cryptography_PaddingMode.h"

// System.Void System.Security.Cryptography.SymmetricAlgorithm::.ctor()
 void SymmetricAlgorithm__ctor_m7504 (SymmetricAlgorithm_t1933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::System.IDisposable.Dispose()
 void SymmetricAlgorithm_System_IDisposable_Dispose_m7476 (SymmetricAlgorithm_t1933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Finalize()
 void SymmetricAlgorithm_Finalize_m7474 (SymmetricAlgorithm_t1933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Clear()
 void SymmetricAlgorithm_Clear_m7520 (SymmetricAlgorithm_t1933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Dispose(System.Boolean)
 void SymmetricAlgorithm_Dispose_m7506 (SymmetricAlgorithm_t1933 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize()
 int32_t SymmetricAlgorithm_get_BlockSize_m7477 (SymmetricAlgorithm_t1933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_BlockSize(System.Int32)
 void SymmetricAlgorithm_set_BlockSize_m7478 (SymmetricAlgorithm_t1933 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_FeedbackSize()
 int32_t SymmetricAlgorithm_get_FeedbackSize_m7479 (SymmetricAlgorithm_t1933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV()
 ByteU5BU5D_t1071* SymmetricAlgorithm_get_IV_m10751 (SymmetricAlgorithm_t1933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[])
 void SymmetricAlgorithm_set_IV_m7518 (SymmetricAlgorithm_t1933 * __this, ByteU5BU5D_t1071* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key()
 ByteU5BU5D_t1071* SymmetricAlgorithm_get_Key_m7507 (SymmetricAlgorithm_t1933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[])
 void SymmetricAlgorithm_set_Key_m7508 (SymmetricAlgorithm_t1933 * __this, ByteU5BU5D_t1071* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_KeySize()
 int32_t SymmetricAlgorithm_get_KeySize_m7480 (SymmetricAlgorithm_t1933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_KeySize(System.Int32)
 void SymmetricAlgorithm_set_KeySize_m7481 (SymmetricAlgorithm_t1933 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::get_LegalKeySizes()
 KeySizesU5BU5D_t1932* SymmetricAlgorithm_get_LegalKeySizes_m7482 (SymmetricAlgorithm_t1933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::get_Mode()
 int32_t SymmetricAlgorithm_get_Mode_m7483 (SymmetricAlgorithm_t1933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode)
 void SymmetricAlgorithm_set_Mode_m7484 (SymmetricAlgorithm_t1933 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding()
 int32_t SymmetricAlgorithm_get_Padding_m7485 (SymmetricAlgorithm_t1933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode)
 void SymmetricAlgorithm_set_Padding_m7486 (SymmetricAlgorithm_t1933 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor()
 Object_t * SymmetricAlgorithm_CreateDecryptor_m7487 (SymmetricAlgorithm_t1933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor(System.Byte[],System.Byte[])
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor()
 Object_t * SymmetricAlgorithm_CreateEncryptor_m7475 (SymmetricAlgorithm_t1933 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor(System.Byte[],System.Byte[])
// System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateIV()
// System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateKey()
// System.Security.Cryptography.SymmetricAlgorithm System.Security.Cryptography.SymmetricAlgorithm::Create(System.String)
 SymmetricAlgorithm_t1933 * SymmetricAlgorithm_Create_m7517 (Object_t * __this/* static, unused */, String_t* ___algName, MethodInfo* method) IL2CPP_METHOD_ATTR;
