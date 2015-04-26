#pragma once

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t2449;
// System.Security.Cryptography.Rijndael
struct Rijndael_t2027;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.UInt32[]
struct UInt32U5BU5D_t1910;

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
 void RijndaelTransform__ctor_m10666 (RijndaelTransform_t2449 * __this, Rijndael_t2027 * ___algo, bool ___encryption, ByteU5BU5D_t1071* ___key, ByteU5BU5D_t1071* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
 void RijndaelTransform__cctor_m10667 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
 void RijndaelTransform_Clear_m10668 (RijndaelTransform_t2449 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
 void RijndaelTransform_ECB_m10669 (RijndaelTransform_t2449 * __this, ByteU5BU5D_t1071* ___input, ByteU5BU5D_t1071* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
 uint32_t RijndaelTransform_SubByte_m10670 (RijndaelTransform_t2449 * __this, uint32_t ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Encrypt128_m10671 (RijndaelTransform_t2449 * __this, ByteU5BU5D_t1071* ___indata, ByteU5BU5D_t1071* ___outdata, UInt32U5BU5D_t1910* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Encrypt192_m10672 (RijndaelTransform_t2449 * __this, ByteU5BU5D_t1071* ___indata, ByteU5BU5D_t1071* ___outdata, UInt32U5BU5D_t1910* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Encrypt256_m10673 (RijndaelTransform_t2449 * __this, ByteU5BU5D_t1071* ___indata, ByteU5BU5D_t1071* ___outdata, UInt32U5BU5D_t1910* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Decrypt128_m10674 (RijndaelTransform_t2449 * __this, ByteU5BU5D_t1071* ___indata, ByteU5BU5D_t1071* ___outdata, UInt32U5BU5D_t1910* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Decrypt192_m10675 (RijndaelTransform_t2449 * __this, ByteU5BU5D_t1071* ___indata, ByteU5BU5D_t1071* ___outdata, UInt32U5BU5D_t1910* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Decrypt256_m10676 (RijndaelTransform_t2449 * __this, ByteU5BU5D_t1071* ___indata, ByteU5BU5D_t1071* ___outdata, UInt32U5BU5D_t1910* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
