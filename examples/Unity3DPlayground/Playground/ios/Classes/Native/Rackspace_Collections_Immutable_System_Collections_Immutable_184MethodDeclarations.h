#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableHashSet`1/MutationResult<System.Object>
struct MutationResult_t5764;
// System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>
struct SortedInt32KeyNode_1_t5759;
// System.Collections.Immutable.ImmutableHashSet`1<System.Object>
struct ImmutableHashSet_1_t5757;
// System.Collections.Immutable.ImmutableHashSet`1/CountType<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_198.h"

// System.Void System.Collections.Immutable.ImmutableHashSet`1/MutationResult<System.Object>::.ctor(System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<T>>,System.Int32,System.Collections.Immutable.ImmutableHashSet`1/CountType<T>)
 void MutationResult__ctor_m24599 (MutationResult_t5764 * __this, SortedInt32KeyNode_1_t5759 * ___root, int32_t ___count, int32_t ___countType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<T>> System.Collections.Immutable.ImmutableHashSet`1/MutationResult<System.Object>::get_Root()
 SortedInt32KeyNode_1_t5759 * MutationResult_get_Root_m24600_gshared (MutationResult_t5764 * __this, MethodInfo* method);
#define MutationResult_get_Root_m24600(__this, method) (SortedInt32KeyNode_1_t5759 *)MutationResult_get_Root_m24600_gshared((MutationResult_t5764 *)__this, method)
// System.Int32 System.Collections.Immutable.ImmutableHashSet`1/MutationResult<System.Object>::get_Count()
 int32_t MutationResult_get_Count_m24601_gshared (MutationResult_t5764 * __this, MethodInfo* method);
#define MutationResult_get_Count_m24601(__this, method) (int32_t)MutationResult_get_Count_m24601_gshared((MutationResult_t5764 *)__this, method)
// System.Collections.Immutable.ImmutableHashSet`1/CountType<T> System.Collections.Immutable.ImmutableHashSet`1/MutationResult<System.Object>::get_CountType()
 int32_t MutationResult_get_CountType_m24602 (MutationResult_t5764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableHashSet`1<T> System.Collections.Immutable.ImmutableHashSet`1/MutationResult<System.Object>::Finalize(System.Collections.Immutable.ImmutableHashSet`1<T>)
 ImmutableHashSet_1_t5757 * MutationResult_Finalize_m24603_gshared (MutationResult_t5764 * __this, ImmutableHashSet_1_t5757 * ___priorSet, MethodInfo* method);
#define MutationResult_Finalize_m24603(__this, ___priorSet, method) (ImmutableHashSet_1_t5757 *)MutationResult_Finalize_m24603_gshared((MutationResult_t5764 *)__this, (ImmutableHashSet_1_t5757 *)___priorSet, method)
