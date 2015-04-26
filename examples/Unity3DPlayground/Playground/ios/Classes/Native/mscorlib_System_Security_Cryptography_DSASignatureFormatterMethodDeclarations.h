#pragma once

// System.Security.Cryptography.DSASignatureFormatter
struct DSASignatureFormatter_t2434;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1568;

// System.Void System.Security.Cryptography.DSASignatureFormatter::.ctor()
 void DSASignatureFormatter__ctor_m10528 (DSASignatureFormatter_t2434 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSASignatureFormatter::CreateSignature(System.Byte[])
 ByteU5BU5D_t1071* DSASignatureFormatter_CreateSignature_m10529 (DSASignatureFormatter_t2434 * __this, ByteU5BU5D_t1071* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetHashAlgorithm(System.String)
 void DSASignatureFormatter_SetHashAlgorithm_m10530 (DSASignatureFormatter_t2434 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void DSASignatureFormatter_SetKey_m10531 (DSASignatureFormatter_t2434 * __this, AsymmetricAlgorithm_t1568 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
