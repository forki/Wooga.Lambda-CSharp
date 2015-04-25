#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t3823;
// System.Security.Cryptography.Rijndael
struct Rijndael_t3383;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.UInt32[]
struct UInt32U5BU5D_t3250;

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
 void RijndaelTransform__ctor_m12246 (RijndaelTransform_t3823 * __this, Rijndael_t3383 * ___algo, bool ___encryption, ByteU5BU5D_t961* ___key, ByteU5BU5D_t961* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
 void RijndaelTransform__cctor_m12247 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
 void RijndaelTransform_Clear_m12248 (RijndaelTransform_t3823 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
 void RijndaelTransform_ECB_m12249 (RijndaelTransform_t3823 * __this, ByteU5BU5D_t961* ___input, ByteU5BU5D_t961* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
 uint32_t RijndaelTransform_SubByte_m12250 (RijndaelTransform_t3823 * __this, uint32_t ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Encrypt128_m12251 (RijndaelTransform_t3823 * __this, ByteU5BU5D_t961* ___indata, ByteU5BU5D_t961* ___outdata, UInt32U5BU5D_t3250* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Encrypt192_m12252 (RijndaelTransform_t3823 * __this, ByteU5BU5D_t961* ___indata, ByteU5BU5D_t961* ___outdata, UInt32U5BU5D_t3250* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Encrypt256_m12253 (RijndaelTransform_t3823 * __this, ByteU5BU5D_t961* ___indata, ByteU5BU5D_t961* ___outdata, UInt32U5BU5D_t3250* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Decrypt128_m12254 (RijndaelTransform_t3823 * __this, ByteU5BU5D_t961* ___indata, ByteU5BU5D_t961* ___outdata, UInt32U5BU5D_t3250* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Decrypt192_m12255 (RijndaelTransform_t3823 * __this, ByteU5BU5D_t961* ___indata, ByteU5BU5D_t961* ___outdata, UInt32U5BU5D_t3250* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Decrypt256_m12256 (RijndaelTransform_t3823 * __this, ByteU5BU5D_t961* ___indata, ByteU5BU5D_t961* ___outdata, UInt32U5BU5D_t3250* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
