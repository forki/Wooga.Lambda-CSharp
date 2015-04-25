#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ArrayExtensions/ArrayWrapper
struct ArrayWrapper_t924;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Collections.IComparer
struct IComparer_t925;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t926;

// System.Void System.ArrayExtensions/ArrayWrapper::.ctor(System.Array)
 void ArrayWrapper__ctor_m2828 (ArrayWrapper_t924 * __this, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.ArrayExtensions/ArrayWrapper::get_Array()
 Array_t * ArrayWrapper_get_Array_m2829 (ArrayWrapper_t924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ArrayExtensions/ArrayWrapper::CompareTo(System.Object,System.Collections.IComparer)
 int32_t ArrayWrapper_CompareTo_m2830 (ArrayWrapper_t924 * __this, Object_t * ___other, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ArrayExtensions/ArrayWrapper::Equals(System.Object,System.Collections.IEqualityComparer)
 bool ArrayWrapper_Equals_m2831 (ArrayWrapper_t924 * __this, Object_t * ___other, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ArrayExtensions/ArrayWrapper::GetHashCode(System.Collections.IEqualityComparer)
 int32_t ArrayWrapper_GetHashCode_m2832 (ArrayWrapper_t924 * __this, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ArrayExtensions/ArrayWrapper::CombineHashCodes(System.Int32,System.Int32)
 int32_t ArrayWrapper_CombineHashCodes_m2833 (Object_t * __this/* static, unused */, int32_t ___h1, int32_t ___h2, MethodInfo* method) IL2CPP_METHOD_ATTR;
