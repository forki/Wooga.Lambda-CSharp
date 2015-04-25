#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.BitConverter
struct BitConverter_t3209;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.String
struct String_t;

// System.Void System.BitConverter::.cctor()
 void BitConverter__cctor_m12784 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.BitConverter::AmILittleEndian()
 bool BitConverter_AmILittleEndian_m12785 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.BitConverter::DoubleWordsAreSwapped()
 bool BitConverter_DoubleWordsAreSwapped_m12786 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
 int64_t BitConverter_DoubleToInt64Bits_m12787 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Byte*,System.Int32)
 ByteU5BU5D_t961* BitConverter_GetBytes_m12788 (Object_t * __this/* static, unused */, uint8_t* ___ptr, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Double)
 ByteU5BU5D_t961* BitConverter_GetBytes_m12789 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.BitConverter::PutBytes(System.Byte*,System.Byte[],System.Int32,System.Int32)
 void BitConverter_PutBytes_m12790 (Object_t * __this/* static, unused */, uint8_t* ___dst, ByteU5BU5D_t961* ___src, int32_t ___start_index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.BitConverter::ToInt64(System.Byte[],System.Int32)
 int64_t BitConverter_ToInt64_m12791 (Object_t * __this/* static, unused */, ByteU5BU5D_t961* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.BitConverter::ToString(System.Byte[])
 String_t* BitConverter_ToString_m8917 (Object_t * __this/* static, unused */, ByteU5BU5D_t961* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.BitConverter::ToString(System.Byte[],System.Int32,System.Int32)
 String_t* BitConverter_ToString_m12792 (Object_t * __this/* static, unused */, ByteU5BU5D_t961* ___value, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
