#pragma once

// System.Security.Cryptography.DSASignatureDeformatter
struct DSASignatureDeformatter_t2018;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1568;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1071;

// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor()
 void DSASignatureDeformatter__ctor_m10526 (DSASignatureDeformatter_t2018 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
 void DSASignatureDeformatter__ctor_m7529 (DSASignatureDeformatter_t2018 * __this, AsymmetricAlgorithm_t1568 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetHashAlgorithm(System.String)
 void DSASignatureDeformatter_SetHashAlgorithm_m7530 (DSASignatureDeformatter_t2018 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void DSASignatureDeformatter_SetKey_m10527 (DSASignatureDeformatter_t2018 * __this, AsymmetricAlgorithm_t1568 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSASignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
 bool DSASignatureDeformatter_VerifySignature_m7531 (DSASignatureDeformatter_t2018 * __this, ByteU5BU5D_t1071* ___rgbHash, ByteU5BU5D_t1071* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
