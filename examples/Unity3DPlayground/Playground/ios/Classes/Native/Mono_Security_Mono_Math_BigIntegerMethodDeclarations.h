#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger
struct BigInteger_t3246;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3251;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.String
struct String_t;
// System.Object
struct Object_t;
// Mono.Math.BigInteger/Sign
#include "Mono_Security_Mono_Math_BigInteger_Sign.h"

// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger/Sign,System.UInt32)
 void BigInteger__ctor_m7997 (BigInteger_t3246 * __this, int32_t ___sign, uint32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger)
 void BigInteger__ctor_m7998 (BigInteger_t3246 * __this, BigInteger_t3246 * ___bi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger,System.UInt32)
 void BigInteger__ctor_m7999 (BigInteger_t3246 * __this, BigInteger_t3246 * ___bi, uint32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.Byte[])
 void BigInteger__ctor_m8000 (BigInteger_t3246 * __this, ByteU5BU5D_t961* ___inData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.UInt32)
 void BigInteger__ctor_m8001 (BigInteger_t3246 * __this, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.cctor()
 void BigInteger__cctor_m8002 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::get_Rng()
 RandomNumberGenerator_t3251 * BigInteger_get_Rng_m8003 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32,System.Security.Cryptography.RandomNumberGenerator)
 BigInteger_t3246 * BigInteger_GenerateRandom_m8004 (Object_t * __this/* static, unused */, int32_t ___bits, RandomNumberGenerator_t3251 * ___rng, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32)
 BigInteger_t3246 * BigInteger_GenerateRandom_m8005 (Object_t * __this/* static, unused */, int32_t ___bits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::BitCount()
 int32_t BigInteger_BitCount_m8006 (BigInteger_t3246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::TestBit(System.Int32)
 bool BigInteger_TestBit_m8007 (BigInteger_t3246 * __this, int32_t ___bitNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32)
 void BigInteger_SetBit_m8008 (BigInteger_t3246 * __this, uint32_t ___bitNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32,System.Boolean)
 void BigInteger_SetBit_m8009 (BigInteger_t3246 * __this, uint32_t ___bitNum, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::LowestSetBit()
 int32_t BigInteger_LowestSetBit_m8010 (BigInteger_t3246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Math.BigInteger::GetBytes()
 ByteU5BU5D_t961* BigInteger_GetBytes_m8011 (BigInteger_t3246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32)
 String_t* BigInteger_ToString_m8012 (BigInteger_t3246 * __this, uint32_t ___radix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32,System.String)
 String_t* BigInteger_ToString_m8013 (BigInteger_t3246 * __this, uint32_t ___radix, String_t* ___characterSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Normalize()
 void BigInteger_Normalize_m8014 (BigInteger_t3246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Clear()
 void BigInteger_Clear_m8015 (BigInteger_t3246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::GetHashCode()
 int32_t BigInteger_GetHashCode_m8016 (BigInteger_t3246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString()
 String_t* BigInteger_ToString_m8017 (BigInteger_t3246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::Equals(System.Object)
 bool BigInteger_Equals_m8018 (BigInteger_t3246 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModInverse(Mono.Math.BigInteger)
 BigInteger_t3246 * BigInteger_ModInverse_m8019 (BigInteger_t3246 * __this, BigInteger_t3246 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModPow(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3246 * BigInteger_ModPow_m8020 (BigInteger_t3246 * __this, BigInteger_t3246 * ___exp, BigInteger_t3246 * ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GeneratePseudoPrime(System.Int32)
 BigInteger_t3246 * BigInteger_GeneratePseudoPrime_m8021 (Object_t * __this/* static, unused */, int32_t ___bits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Incr2()
 void BigInteger_Incr2_m8022 (BigInteger_t3246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.UInt32)
 BigInteger_t3246 * BigInteger_op_Implicit_m8023 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.Int32)
 BigInteger_t3246 * BigInteger_op_Implicit_m8024 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Addition(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3246 * BigInteger_op_Addition_m8025 (Object_t * __this/* static, unused */, BigInteger_t3246 * ___bi1, BigInteger_t3246 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Subtraction(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3246 * BigInteger_op_Subtraction_m8026 (Object_t * __this/* static, unused */, BigInteger_t3246 * ___bi1, BigInteger_t3246 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,System.UInt32)
 uint32_t BigInteger_op_Modulus_m8027 (Object_t * __this/* static, unused */, BigInteger_t3246 * ___bi, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3246 * BigInteger_op_Modulus_m8028 (Object_t * __this/* static, unused */, BigInteger_t3246 * ___bi1, BigInteger_t3246 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Division(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3246 * BigInteger_op_Division_m8029 (Object_t * __this/* static, unused */, BigInteger_t3246 * ___bi1, BigInteger_t3246 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3246 * BigInteger_op_Multiply_m8030 (Object_t * __this/* static, unused */, BigInteger_t3246 * ___bi1, BigInteger_t3246 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_LeftShift(Mono.Math.BigInteger,System.Int32)
 BigInteger_t3246 * BigInteger_op_LeftShift_m8031 (Object_t * __this/* static, unused */, BigInteger_t3246 * ___bi1, int32_t ___shiftVal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_RightShift(Mono.Math.BigInteger,System.Int32)
 BigInteger_t3246 * BigInteger_op_RightShift_m8032 (Object_t * __this/* static, unused */, BigInteger_t3246 * ___bi1, int32_t ___shiftVal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,System.UInt32)
 bool BigInteger_op_Equality_m8033 (Object_t * __this/* static, unused */, BigInteger_t3246 * ___bi1, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,System.UInt32)
 bool BigInteger_op_Inequality_m8034 (Object_t * __this/* static, unused */, BigInteger_t3246 * ___bi1, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_Equality_m8035 (Object_t * __this/* static, unused */, BigInteger_t3246 * ___bi1, BigInteger_t3246 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_Inequality_m8036 (Object_t * __this/* static, unused */, BigInteger_t3246 * ___bi1, BigInteger_t3246 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_GreaterThan_m8037 (Object_t * __this/* static, unused */, BigInteger_t3246 * ___bi1, BigInteger_t3246 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_LessThan_m8038 (Object_t * __this/* static, unused */, BigInteger_t3246 * ___bi1, BigInteger_t3246 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_GreaterThanOrEqual_m8039 (Object_t * __this/* static, unused */, BigInteger_t3246 * ___bi1, BigInteger_t3246 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_LessThanOrEqual_m8040 (Object_t * __this/* static, unused */, BigInteger_t3246 * ___bi1, BigInteger_t3246 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
