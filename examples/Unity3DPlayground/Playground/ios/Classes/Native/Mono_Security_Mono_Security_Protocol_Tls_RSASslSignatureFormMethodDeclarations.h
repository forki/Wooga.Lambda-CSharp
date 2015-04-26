#pragma once

// Mono.Security.Protocol.Tls.RSASslSignatureFormatter
struct RSASslSignatureFormatter_t1978;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1568;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.String
struct String_t;

// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSASslSignatureFormatter__ctor_m7206 (RSASslSignatureFormatter_t1978 * __this, AsymmetricAlgorithm_t1568 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RSASslSignatureFormatter::CreateSignature(System.Byte[])
 ByteU5BU5D_t1071* RSASslSignatureFormatter_CreateSignature_m7207 (RSASslSignatureFormatter_t1978 * __this, ByteU5BU5D_t1071* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::SetHashAlgorithm(System.String)
 void RSASslSignatureFormatter_SetHashAlgorithm_m7208 (RSASslSignatureFormatter_t1978 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSASslSignatureFormatter_SetKey_m7209 (RSASslSignatureFormatter_t1978 * __this, AsymmetricAlgorithm_t1568 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
