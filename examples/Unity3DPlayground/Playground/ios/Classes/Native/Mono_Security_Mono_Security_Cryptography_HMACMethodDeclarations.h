#pragma once

// Mono.Security.Cryptography.HMAC
struct HMAC_t1947;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.String
struct String_t;

// System.Void Mono.Security.Cryptography.HMAC::.ctor(System.String,System.Byte[])
 void HMAC__ctor_m6973 (HMAC_t1947 * __this, String_t* ___hashName, ByteU5BU5D_t1071* ___rgbKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.HMAC::get_Key()
 ByteU5BU5D_t1071* HMAC_get_Key_m6974 (HMAC_t1947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::set_Key(System.Byte[])
 void HMAC_set_Key_m6975 (HMAC_t1947 * __this, ByteU5BU5D_t1071* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::Initialize()
 void HMAC_Initialize_m6976 (HMAC_t1947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.HMAC::HashFinal()
 ByteU5BU5D_t1071* HMAC_HashFinal_m6977 (HMAC_t1947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::HashCore(System.Byte[],System.Int32,System.Int32)
 void HMAC_HashCore_m6978 (HMAC_t1947 * __this, ByteU5BU5D_t1071* ___array, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::initializePad()
 void HMAC_initializePad_m6979 (HMAC_t1947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
