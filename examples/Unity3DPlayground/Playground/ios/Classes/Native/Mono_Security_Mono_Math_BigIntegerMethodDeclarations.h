#pragma once

// Mono.Math.BigInteger
struct BigInteger_t1906;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1618;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.String
struct String_t;
// System.Object
struct Object_t;
// Mono.Math.BigInteger/Sign
#include "Mono_Security_Mono_Math_BigInteger_Sign.h"

// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger/Sign,System.UInt32)
 void BigInteger__ctor_m6699 (BigInteger_t1906 * __this, int32_t ___sign, uint32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger)
 void BigInteger__ctor_m6700 (BigInteger_t1906 * __this, BigInteger_t1906 * ___bi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger,System.UInt32)
 void BigInteger__ctor_m6701 (BigInteger_t1906 * __this, BigInteger_t1906 * ___bi, uint32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.Byte[])
 void BigInteger__ctor_m6702 (BigInteger_t1906 * __this, ByteU5BU5D_t1071* ___inData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.UInt32)
 void BigInteger__ctor_m6703 (BigInteger_t1906 * __this, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.cctor()
 void BigInteger__cctor_m6704 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::get_Rng()
 RandomNumberGenerator_t1618 * BigInteger_get_Rng_m6705 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32,System.Security.Cryptography.RandomNumberGenerator)
 BigInteger_t1906 * BigInteger_GenerateRandom_m6706 (Object_t * __this/* static, unused */, int32_t ___bits, RandomNumberGenerator_t1618 * ___rng, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32)
 BigInteger_t1906 * BigInteger_GenerateRandom_m6707 (Object_t * __this/* static, unused */, int32_t ___bits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::BitCount()
 int32_t BigInteger_BitCount_m6708 (BigInteger_t1906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::TestBit(System.Int32)
 bool BigInteger_TestBit_m6709 (BigInteger_t1906 * __this, int32_t ___bitNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32)
 void BigInteger_SetBit_m6710 (BigInteger_t1906 * __this, uint32_t ___bitNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32,System.Boolean)
 void BigInteger_SetBit_m6711 (BigInteger_t1906 * __this, uint32_t ___bitNum, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::LowestSetBit()
 int32_t BigInteger_LowestSetBit_m6712 (BigInteger_t1906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Math.BigInteger::GetBytes()
 ByteU5BU5D_t1071* BigInteger_GetBytes_m6713 (BigInteger_t1906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32)
 String_t* BigInteger_ToString_m6714 (BigInteger_t1906 * __this, uint32_t ___radix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32,System.String)
 String_t* BigInteger_ToString_m6715 (BigInteger_t1906 * __this, uint32_t ___radix, String_t* ___characterSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Normalize()
 void BigInteger_Normalize_m6716 (BigInteger_t1906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Clear()
 void BigInteger_Clear_m6717 (BigInteger_t1906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::GetHashCode()
 int32_t BigInteger_GetHashCode_m6718 (BigInteger_t1906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString()
 String_t* BigInteger_ToString_m6719 (BigInteger_t1906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::Equals(System.Object)
 bool BigInteger_Equals_m6720 (BigInteger_t1906 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModInverse(Mono.Math.BigInteger)
 BigInteger_t1906 * BigInteger_ModInverse_m6721 (BigInteger_t1906 * __this, BigInteger_t1906 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModPow(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1906 * BigInteger_ModPow_m6722 (BigInteger_t1906 * __this, BigInteger_t1906 * ___exp, BigInteger_t1906 * ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GeneratePseudoPrime(System.Int32)
 BigInteger_t1906 * BigInteger_GeneratePseudoPrime_m6723 (Object_t * __this/* static, unused */, int32_t ___bits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Incr2()
 void BigInteger_Incr2_m6724 (BigInteger_t1906 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.UInt32)
 BigInteger_t1906 * BigInteger_op_Implicit_m6725 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.Int32)
 BigInteger_t1906 * BigInteger_op_Implicit_m6726 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Addition(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1906 * BigInteger_op_Addition_m6727 (Object_t * __this/* static, unused */, BigInteger_t1906 * ___bi1, BigInteger_t1906 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Subtraction(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1906 * BigInteger_op_Subtraction_m6728 (Object_t * __this/* static, unused */, BigInteger_t1906 * ___bi1, BigInteger_t1906 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,System.UInt32)
 uint32_t BigInteger_op_Modulus_m6729 (Object_t * __this/* static, unused */, BigInteger_t1906 * ___bi, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1906 * BigInteger_op_Modulus_m6730 (Object_t * __this/* static, unused */, BigInteger_t1906 * ___bi1, BigInteger_t1906 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Division(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1906 * BigInteger_op_Division_m6731 (Object_t * __this/* static, unused */, BigInteger_t1906 * ___bi1, BigInteger_t1906 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1906 * BigInteger_op_Multiply_m6732 (Object_t * __this/* static, unused */, BigInteger_t1906 * ___bi1, BigInteger_t1906 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_LeftShift(Mono.Math.BigInteger,System.Int32)
 BigInteger_t1906 * BigInteger_op_LeftShift_m6733 (Object_t * __this/* static, unused */, BigInteger_t1906 * ___bi1, int32_t ___shiftVal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_RightShift(Mono.Math.BigInteger,System.Int32)
 BigInteger_t1906 * BigInteger_op_RightShift_m6734 (Object_t * __this/* static, unused */, BigInteger_t1906 * ___bi1, int32_t ___shiftVal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,System.UInt32)
 bool BigInteger_op_Equality_m6735 (Object_t * __this/* static, unused */, BigInteger_t1906 * ___bi1, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,System.UInt32)
 bool BigInteger_op_Inequality_m6736 (Object_t * __this/* static, unused */, BigInteger_t1906 * ___bi1, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_Equality_m6737 (Object_t * __this/* static, unused */, BigInteger_t1906 * ___bi1, BigInteger_t1906 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_Inequality_m6738 (Object_t * __this/* static, unused */, BigInteger_t1906 * ___bi1, BigInteger_t1906 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_GreaterThan_m6739 (Object_t * __this/* static, unused */, BigInteger_t1906 * ___bi1, BigInteger_t1906 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_LessThan_m6740 (Object_t * __this/* static, unused */, BigInteger_t1906 * ___bi1, BigInteger_t1906 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_GreaterThanOrEqual_m6741 (Object_t * __this/* static, unused */, BigInteger_t1906 * ___bi1, BigInteger_t1906 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_LessThanOrEqual_m6742 (Object_t * __this/* static, unused */, BigInteger_t1906 * ___bi1, BigInteger_t1906 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
