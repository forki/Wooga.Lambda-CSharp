#pragma once

// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t1955;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1923;
// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t1948;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.Context
struct Context_t1954;
// System.Byte[]
struct ByteU5BU5D_t1071;
// Mono.Security.Protocol.Tls.CipherAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlgorithmType.h"
// Mono.Security.Protocol.Tls.HashAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgorithmType.h"
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
// System.Security.Cryptography.CipherMode
#include "mscorlib_System_Security_Cryptography_CipherMode.h"
// Mono.Security.Protocol.Tls.ContentType
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentType.h"

// System.Void Mono.Security.Protocol.Tls.CipherSuite::.ctor(System.Int16,System.String,Mono.Security.Protocol.Tls.CipherAlgorithmType,Mono.Security.Protocol.Tls.HashAlgorithmType,Mono.Security.Protocol.Tls.ExchangeAlgorithmType,System.Boolean,System.Boolean,System.Byte,System.Byte,System.Int16,System.Byte,System.Byte)
 void CipherSuite__ctor_m6994 (CipherSuite_t1955 * __this, int16_t ___code, String_t* ___name, int32_t ___cipherAlgorithmType, int32_t ___hashAlgorithmType, int32_t ___exchangeAlgorithmType, bool ___exportable, bool ___blockMode, uint8_t ___keyMaterialSize, uint8_t ___expandedKeyMaterialSize, int16_t ___effectiveKeyBits, uint8_t ___ivSize, uint8_t ___blockSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::.cctor()
 void CipherSuite__cctor_m6995 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::get_EncryptionCipher()
 Object_t * CipherSuite_get_EncryptionCipher_m6996 (CipherSuite_t1955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::get_DecryptionCipher()
 Object_t * CipherSuite_get_DecryptionCipher_m6997 (CipherSuite_t1955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::get_ClientHMAC()
 KeyedHashAlgorithm_t1948 * CipherSuite_get_ClientHMAC_m6998 (CipherSuite_t1955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::get_ServerHMAC()
 KeyedHashAlgorithm_t1948 * CipherSuite_get_ServerHMAC_m6999 (CipherSuite_t1955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_CipherAlgorithmType()
 int32_t CipherSuite_get_CipherAlgorithmType_m7000 (CipherSuite_t1955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.CipherSuite::get_HashAlgorithmName()
 String_t* CipherSuite_get_HashAlgorithmName_m7001 (CipherSuite_t1955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HashAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_HashAlgorithmType()
 int32_t CipherSuite_get_HashAlgorithmType_m7002 (CipherSuite_t1955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuite::get_HashSize()
 int32_t CipherSuite_get_HashSize_m7003 (CipherSuite_t1955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_ExchangeAlgorithmType()
 int32_t CipherSuite_get_ExchangeAlgorithmType_m7004 (CipherSuite_t1955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CipherMode Mono.Security.Protocol.Tls.CipherSuite::get_CipherMode()
 int32_t CipherSuite_get_CipherMode_m7005 (CipherSuite_t1955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::get_Code()
 int16_t CipherSuite_get_Code_m7006 (CipherSuite_t1955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.CipherSuite::get_Name()
 String_t* CipherSuite_get_Name_m7007 (CipherSuite_t1955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuite::get_IsExportable()
 bool CipherSuite_get_IsExportable_m7008 (CipherSuite_t1955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_KeyMaterialSize()
 uint8_t CipherSuite_get_KeyMaterialSize_m7009 (CipherSuite_t1955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuite::get_KeyBlockSize()
 int32_t CipherSuite_get_KeyBlockSize_m7010 (CipherSuite_t1955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_ExpandedKeyMaterialSize()
 uint8_t CipherSuite_get_ExpandedKeyMaterialSize_m7011 (CipherSuite_t1955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::get_EffectiveKeyBits()
 int16_t CipherSuite_get_EffectiveKeyBits_m7012 (CipherSuite_t1955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_IvSize()
 uint8_t CipherSuite_get_IvSize_m7013 (CipherSuite_t1955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.CipherSuite::get_Context()
 Context_t1954 * CipherSuite_get_Context_m7014 (CipherSuite_t1955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::set_Context(Mono.Security.Protocol.Tls.Context)
 void CipherSuite_set_Context_m7015 (CipherSuite_t1955 * __this, Context_t1954 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::Write(System.Byte[],System.Int32,System.Int16)
 void CipherSuite_Write_m7016 (CipherSuite_t1955 * __this, ByteU5BU5D_t1071* ___array, int32_t ___offset, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::Write(System.Byte[],System.Int32,System.UInt64)
 void CipherSuite_Write_m7017 (CipherSuite_t1955 * __this, ByteU5BU5D_t1071* ___array, int32_t ___offset, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::InitializeCipher()
 void CipherSuite_InitializeCipher_m7018 (CipherSuite_t1955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::EncryptRecord(System.Byte[],System.Byte[])
 ByteU5BU5D_t1071* CipherSuite_EncryptRecord_m7019 (CipherSuite_t1955 * __this, ByteU5BU5D_t1071* ___fragment, ByteU5BU5D_t1071* ___mac, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::DecryptRecord(System.Byte[],System.Byte[]&,System.Byte[]&)
 void CipherSuite_DecryptRecord_m7020 (CipherSuite_t1955 * __this, ByteU5BU5D_t1071* ___fragment, ByteU5BU5D_t1071** ___dcrFragment, ByteU5BU5D_t1071** ___dcrMAC, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::ComputeClientRecordMAC(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::ComputeServerRecordMAC(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
// System.Void Mono.Security.Protocol.Tls.CipherSuite::ComputeMasterSecret(System.Byte[])
// System.Void Mono.Security.Protocol.Tls.CipherSuite::ComputeKeys()
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::CreatePremasterSecret()
 ByteU5BU5D_t1071* CipherSuite_CreatePremasterSecret_m7021 (CipherSuite_t1955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::PRF(System.Byte[],System.String,System.Byte[],System.Int32)
 ByteU5BU5D_t1071* CipherSuite_PRF_m7022 (CipherSuite_t1955 * __this, ByteU5BU5D_t1071* ___secret, String_t* ___label, ByteU5BU5D_t1071* ___data, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::Expand(System.String,System.Byte[],System.Byte[],System.Int32)
 ByteU5BU5D_t1071* CipherSuite_Expand_m7023 (CipherSuite_t1955 * __this, String_t* ___hashName, ByteU5BU5D_t1071* ___secret, ByteU5BU5D_t1071* ___seed, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::createEncryptionCipher()
 void CipherSuite_createEncryptionCipher_m7024 (CipherSuite_t1955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::createDecryptionCipher()
 void CipherSuite_createDecryptionCipher_m7025 (CipherSuite_t1955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
