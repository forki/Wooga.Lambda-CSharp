#pragma once

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1692;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1690;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1568;
// System.Security.Cryptography.Oid
struct Oid_t1691;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1670;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Security.Cryptography.DSA
struct DSA_t1693;
// System.Security.Cryptography.RSA
struct RSA_t1694;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
 void PublicKey__ctor_m5408 (PublicKey_t1692 * __this, X509Certificate_t1670 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
 AsnEncodedData_t1690 * PublicKey_get_EncodedKeyValue_m5409 (PublicKey_t1692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
 AsnEncodedData_t1690 * PublicKey_get_EncodedParameters_m5410 (PublicKey_t1692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
 AsymmetricAlgorithm_t1568 * PublicKey_get_Key_m5411 (PublicKey_t1692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
 Oid_t1691 * PublicKey_get_Oid_m5412 (PublicKey_t1692 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
 ByteU5BU5D_t1071* PublicKey_GetUnsignedBigInteger_m5413 (Object_t * __this/* static, unused */, ByteU5BU5D_t1071* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
 DSA_t1693 * PublicKey_DecodeDSA_m5414 (Object_t * __this/* static, unused */, ByteU5BU5D_t1071* ___rawPublicKey, ByteU5BU5D_t1071* ___rawParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
 RSA_t1694 * PublicKey_DecodeRSA_m5415 (Object_t * __this/* static, unused */, ByteU5BU5D_t1071* ___rawPublicKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
