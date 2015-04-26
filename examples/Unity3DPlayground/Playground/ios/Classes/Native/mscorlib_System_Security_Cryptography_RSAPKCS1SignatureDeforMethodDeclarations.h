#pragma once

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct RSAPKCS1SignatureDeformatter_t2019;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1568;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1071;

// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor()
 void RSAPKCS1SignatureDeformatter__ctor_m10651 (RSAPKCS1SignatureDeformatter_t2019 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSAPKCS1SignatureDeformatter__ctor_m7532 (RSAPKCS1SignatureDeformatter_t2019 * __this, AsymmetricAlgorithm_t1568 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String)
 void RSAPKCS1SignatureDeformatter_SetHashAlgorithm_m7533 (RSAPKCS1SignatureDeformatter_t2019 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSAPKCS1SignatureDeformatter_SetKey_m10652 (RSAPKCS1SignatureDeformatter_t2019 * __this, AsymmetricAlgorithm_t1568 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSAPKCS1SignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
 bool RSAPKCS1SignatureDeformatter_VerifySignature_m7534 (RSAPKCS1SignatureDeformatter_t2019 * __this, ByteU5BU5D_t1071* ___rgbHash, ByteU5BU5D_t1071* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
