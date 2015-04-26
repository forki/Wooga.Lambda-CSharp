#pragma once

// System.Security.Cryptography.TripleDESTransform
struct TripleDESTransform_t2466;
// System.Security.Cryptography.TripleDES
struct TripleDES_t2026;
// System.Byte[]
struct ByteU5BU5D_t1071;

// System.Void System.Security.Cryptography.TripleDESTransform::.ctor(System.Security.Cryptography.TripleDES,System.Boolean,System.Byte[],System.Byte[])
 void TripleDESTransform__ctor_m10772 (TripleDESTransform_t2466 * __this, TripleDES_t2026 * ___algo, bool ___encryption, ByteU5BU5D_t1071* ___key, ByteU5BU5D_t1071* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESTransform::ECB(System.Byte[],System.Byte[])
 void TripleDESTransform_ECB_m10773 (TripleDESTransform_t2466 * __this, ByteU5BU5D_t1071* ___input, ByteU5BU5D_t1071* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.TripleDESTransform::GetStrongKey()
 ByteU5BU5D_t1071* TripleDESTransform_GetStrongKey_m10774 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
