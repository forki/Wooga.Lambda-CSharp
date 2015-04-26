#pragma once

// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct RSASslSignatureDeformatter_t1976;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1568;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.String
struct String_t;

// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSASslSignatureDeformatter__ctor_m7202 (RSASslSignatureDeformatter_t1976 * __this, AsymmetricAlgorithm_t1568 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
 bool RSASslSignatureDeformatter_VerifySignature_m7203 (RSASslSignatureDeformatter_t1976 * __this, ByteU5BU5D_t1071* ___rgbHash, ByteU5BU5D_t1071* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetHashAlgorithm(System.String)
 void RSASslSignatureDeformatter_SetHashAlgorithm_m7204 (RSASslSignatureDeformatter_t1976 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSASslSignatureDeformatter_SetKey_m7205 (RSASslSignatureDeformatter_t1976 * __this, AsymmetricAlgorithm_t1568 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
