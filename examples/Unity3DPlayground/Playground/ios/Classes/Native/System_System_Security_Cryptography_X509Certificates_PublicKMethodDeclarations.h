#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t3016;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t3014;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3013;
// System.Security.Cryptography.Oid
struct Oid_t3015;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t3017;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.Security.Cryptography.DSA
struct DSA_t3018;
// System.Security.Cryptography.RSA
struct RSA_t3019;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
 void PublicKey__ctor_m6812 (PublicKey_t3016 * __this, X509Certificate_t3017 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
 AsnEncodedData_t3014 * PublicKey_get_EncodedKeyValue_m6813 (PublicKey_t3016 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
 AsnEncodedData_t3014 * PublicKey_get_EncodedParameters_m6814 (PublicKey_t3016 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
 AsymmetricAlgorithm_t3013 * PublicKey_get_Key_m6815 (PublicKey_t3016 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
 Oid_t3015 * PublicKey_get_Oid_m6816 (PublicKey_t3016 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
 ByteU5BU5D_t961* PublicKey_GetUnsignedBigInteger_m6817 (Object_t * __this/* static, unused */, ByteU5BU5D_t961* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
 DSA_t3018 * PublicKey_DecodeDSA_m6818 (Object_t * __this/* static, unused */, ByteU5BU5D_t961* ___rawPublicKey, ByteU5BU5D_t961* ___rawParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
 RSA_t3019 * PublicKey_DecodeRSA_m6819 (Object_t * __this/* static, unused */, ByteU5BU5D_t961* ___rawPublicKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
