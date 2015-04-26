#pragma once

// System.Security.Cryptography.DES
struct DES_t2023;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.DES::.ctor()
 void DES__ctor_m10489 (DES_t2023 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DES::.cctor()
 void DES__cctor_m10490 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DES System.Security.Cryptography.DES::Create()
 DES_t2023 * DES_Create_m7553 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DES System.Security.Cryptography.DES::Create(System.String)
 DES_t2023 * DES_Create_m10491 (Object_t * __this/* static, unused */, String_t* ___algName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DES::IsWeakKey(System.Byte[])
 bool DES_IsWeakKey_m10492 (Object_t * __this/* static, unused */, ByteU5BU5D_t1071* ___rgbKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DES::IsSemiWeakKey(System.Byte[])
 bool DES_IsSemiWeakKey_m10493 (Object_t * __this/* static, unused */, ByteU5BU5D_t1071* ___rgbKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DES::get_Key()
 ByteU5BU5D_t1071* DES_get_Key_m10494 (DES_t2023 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DES::set_Key(System.Byte[])
 void DES_set_Key_m10495 (DES_t2023 * __this, ByteU5BU5D_t1071* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
