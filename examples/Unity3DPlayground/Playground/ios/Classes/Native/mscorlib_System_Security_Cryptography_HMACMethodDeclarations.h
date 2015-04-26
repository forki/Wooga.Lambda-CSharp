#pragma once

// System.Security.Cryptography.HMAC
struct HMAC_t2017;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1071;
// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t2105;

// System.Void System.Security.Cryptography.HMAC::.ctor()
 void HMAC__ctor_m10532 (HMAC_t2017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.HMAC::get_BlockSizeValue()
 int32_t HMAC_get_BlockSizeValue_m10533 (HMAC_t2017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_BlockSizeValue(System.Int32)
 void HMAC_set_BlockSizeValue_m10534 (HMAC_t2017 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_HashName(System.String)
 void HMAC_set_HashName_m10535 (HMAC_t2017 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::get_Key()
 ByteU5BU5D_t1071* HMAC_get_Key_m10536 (HMAC_t2017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_Key(System.Byte[])
 void HMAC_set_Key_m7522 (HMAC_t2017 * __this, ByteU5BU5D_t1071* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Cryptography.BlockProcessor System.Security.Cryptography.HMAC::get_Block()
 BlockProcessor_t2105 * HMAC_get_Block_m10537 (HMAC_t2017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::KeySetup(System.Byte[],System.Byte)
 ByteU5BU5D_t1071* HMAC_KeySetup_m10538 (HMAC_t2017 * __this, ByteU5BU5D_t1071* ___key, uint8_t ___padding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::Dispose(System.Boolean)
 void HMAC_Dispose_m10539 (HMAC_t2017 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::HashCore(System.Byte[],System.Int32,System.Int32)
 void HMAC_HashCore_m10540 (HMAC_t2017 * __this, ByteU5BU5D_t1071* ___rgb, int32_t ___ib, int32_t ___cb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::HashFinal()
 ByteU5BU5D_t1071* HMAC_HashFinal_m10541 (HMAC_t2017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::Initialize()
 void HMAC_Initialize_m10542 (HMAC_t2017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HMAC System.Security.Cryptography.HMAC::Create()
 HMAC_t2017 * HMAC_Create_m7521 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HMAC System.Security.Cryptography.HMAC::Create(System.String)
 HMAC_t2017 * HMAC_Create_m10543 (Object_t * __this/* static, unused */, String_t* ___algorithmName, MethodInfo* method) IL2CPP_METHOD_ATTR;
