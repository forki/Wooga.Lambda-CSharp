#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t3388;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3013;
// System.Byte[]
struct ByteU5BU5D_t961;

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSAPKCS1KeyExchangeFormatter__ctor_m8974 (RSAPKCS1KeyExchangeFormatter_t3388 * __this, AsymmetricAlgorithm_t3013 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[])
 ByteU5BU5D_t961* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m8975 (RSAPKCS1KeyExchangeFormatter_t3388 * __this, ByteU5BU5D_t961* ___rgbData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetRSAKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSAPKCS1KeyExchangeFormatter_SetRSAKey_m12230 (RSAPKCS1KeyExchangeFormatter_t3388 * __this, AsymmetricAlgorithm_t3013 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
