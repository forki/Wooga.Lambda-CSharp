#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger
struct BigInteger_t3455;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3251;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.String
struct String_t;
// System.Object
struct Object_t;
// Mono.Math.BigInteger/Sign
#include "mscorlib_Mono_Math_BigInteger_Sign.h"

// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger/Sign,System.UInt32)
 void BigInteger__ctor_m9926 (BigInteger_t3455 * __this, int32_t ___sign, uint32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger)
 void BigInteger__ctor_m9927 (BigInteger_t3455 * __this, BigInteger_t3455 * ___bi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger,System.UInt32)
 void BigInteger__ctor_m9928 (BigInteger_t3455 * __this, BigInteger_t3455 * ___bi, uint32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.Byte[])
 void BigInteger__ctor_m9929 (BigInteger_t3455 * __this, ByteU5BU5D_t961* ___inData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.UInt32)
 void BigInteger__ctor_m9930 (BigInteger_t3455 * __this, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.cctor()
 void BigInteger__cctor_m9931 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::get_Rng()
 RandomNumberGenerator_t3251 * BigInteger_get_Rng_m9932 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32,System.Security.Cryptography.RandomNumberGenerator)
 BigInteger_t3455 * BigInteger_GenerateRandom_m9933 (Object_t * __this/* static, unused */, int32_t ___bits, RandomNumberGenerator_t3251 * ___rng, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32)
 BigInteger_t3455 * BigInteger_GenerateRandom_m9934 (Object_t * __this/* static, unused */, int32_t ___bits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Randomize(System.Security.Cryptography.RandomNumberGenerator)
 void BigInteger_Randomize_m9935 (BigInteger_t3455 * __this, RandomNumberGenerator_t3251 * ___rng, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Randomize()
 void BigInteger_Randomize_m9936 (BigInteger_t3455 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::BitCount()
 int32_t BigInteger_BitCount_m9937 (BigInteger_t3455 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::TestBit(System.UInt32)
 bool BigInteger_TestBit_m9938 (BigInteger_t3455 * __this, uint32_t ___bitNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::TestBit(System.Int32)
 bool BigInteger_TestBit_m9939 (BigInteger_t3455 * __this, int32_t ___bitNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32)
 void BigInteger_SetBit_m9940 (BigInteger_t3455 * __this, uint32_t ___bitNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32,System.Boolean)
 void BigInteger_SetBit_m9941 (BigInteger_t3455 * __this, uint32_t ___bitNum, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::LowestSetBit()
 int32_t BigInteger_LowestSetBit_m9942 (BigInteger_t3455 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Math.BigInteger::GetBytes()
 ByteU5BU5D_t961* BigInteger_GetBytes_m9943 (BigInteger_t3455 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32)
 String_t* BigInteger_ToString_m9944 (BigInteger_t3455 * __this, uint32_t ___radix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32,System.String)
 String_t* BigInteger_ToString_m9945 (BigInteger_t3455 * __this, uint32_t ___radix, String_t* ___characterSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Normalize()
 void BigInteger_Normalize_m9946 (BigInteger_t3455 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Clear()
 void BigInteger_Clear_m9947 (BigInteger_t3455 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::GetHashCode()
 int32_t BigInteger_GetHashCode_m9948 (BigInteger_t3455 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString()
 String_t* BigInteger_ToString_m9949 (BigInteger_t3455 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::Equals(System.Object)
 bool BigInteger_Equals_m9950 (BigInteger_t3455 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModInverse(Mono.Math.BigInteger)
 BigInteger_t3455 * BigInteger_ModInverse_m9951 (BigInteger_t3455 * __this, BigInteger_t3455 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModPow(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3455 * BigInteger_ModPow_m9952 (BigInteger_t3455 * __this, BigInteger_t3455 * ___exp, BigInteger_t3455 * ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::IsProbablePrime()
 bool BigInteger_IsProbablePrime_m9953 (BigInteger_t3455 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GeneratePseudoPrime(System.Int32)
 BigInteger_t3455 * BigInteger_GeneratePseudoPrime_m9954 (Object_t * __this/* static, unused */, int32_t ___bits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Incr2()
 void BigInteger_Incr2_m9955 (BigInteger_t3455 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.UInt32)
 BigInteger_t3455 * BigInteger_op_Implicit_m9956 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.Int32)
 BigInteger_t3455 * BigInteger_op_Implicit_m9957 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Addition(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3455 * BigInteger_op_Addition_m9958 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___bi1, BigInteger_t3455 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Subtraction(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3455 * BigInteger_op_Subtraction_m9959 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___bi1, BigInteger_t3455 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,System.UInt32)
 uint32_t BigInteger_op_Modulus_m9960 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___bi, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3455 * BigInteger_op_Modulus_m9961 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___bi1, BigInteger_t3455 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Division(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3455 * BigInteger_op_Division_m9962 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___bi1, BigInteger_t3455 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3455 * BigInteger_op_Multiply_m9963 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___bi1, BigInteger_t3455 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,System.Int32)
 BigInteger_t3455 * BigInteger_op_Multiply_m9964 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___bi, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_LeftShift(Mono.Math.BigInteger,System.Int32)
 BigInteger_t3455 * BigInteger_op_LeftShift_m9965 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___bi1, int32_t ___shiftVal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_RightShift(Mono.Math.BigInteger,System.Int32)
 BigInteger_t3455 * BigInteger_op_RightShift_m9966 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___bi1, int32_t ___shiftVal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,System.UInt32)
 bool BigInteger_op_Equality_m9967 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___bi1, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,System.UInt32)
 bool BigInteger_op_Inequality_m9968 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___bi1, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_Equality_m9969 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___bi1, BigInteger_t3455 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_Inequality_m9970 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___bi1, BigInteger_t3455 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_GreaterThan_m9971 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___bi1, BigInteger_t3455 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_LessThan_m9972 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___bi1, BigInteger_t3455 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_GreaterThanOrEqual_m9973 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___bi1, BigInteger_t3455 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_LessThanOrEqual_m9974 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___bi1, BigInteger_t3455 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
