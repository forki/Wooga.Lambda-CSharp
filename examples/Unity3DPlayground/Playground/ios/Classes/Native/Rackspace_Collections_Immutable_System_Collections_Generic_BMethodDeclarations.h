#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.BitHelper
struct BitHelper_t930;
// System.Int32[]
struct Int32U5BU5D_t156;

// System.Void System.Collections.Generic.BitHelper::.ctor(System.Int32*,System.Int32)
 void BitHelper__ctor_m2836 (BitHelper_t930 * __this, int32_t* ___bitArrayPtr, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.BitHelper::.ctor(System.Int32[],System.Int32)
 void BitHelper__ctor_m2837 (BitHelper_t930 * __this, Int32U5BU5D_t156* ___bitArray, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.BitHelper::MarkBit(System.Int32)
 void BitHelper_MarkBit_m2838 (BitHelper_t930 * __this, int32_t ___bitPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.BitHelper::IsMarked(System.Int32)
 bool BitHelper_IsMarked_m2839 (BitHelper_t930 * __this, int32_t ___bitPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.BitHelper::ToIntArrayLength(System.Int32)
 int32_t BitHelper_ToIntArrayLength_m2840 (Object_t * __this/* static, unused */, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
