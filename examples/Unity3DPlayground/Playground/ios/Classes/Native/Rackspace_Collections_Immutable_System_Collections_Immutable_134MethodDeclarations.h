#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableDictionary`2/MutationResult<System.Object,System.Object>
struct MutationResult_t5637;
// System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>
struct SortedInt32KeyNode_1_t5629;
// System.Collections.Immutable.ImmutableDictionary`2<System.Object,System.Object>
struct ImmutableDictionary_2_t5627;
// System.Collections.Immutable.ImmutableDictionary`2/MutationInput<System.Object,System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_132.h"

// System.Void System.Collections.Immutable.ImmutableDictionary`2/MutationResult<System.Object,System.Object>::.ctor(System.Collections.Immutable.ImmutableDictionary`2/MutationInput<TKey,TValue>)
 void MutationResult__ctor_m24320 (MutationResult_t5637 * __this, MutationInput_t5635  ___unchangedInput, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableDictionary`2/MutationResult<System.Object,System.Object>::.ctor(System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<TKey,TValue>>,System.Int32)
 void MutationResult__ctor_m24321_gshared (MutationResult_t5637 * __this, SortedInt32KeyNode_1_t5629 * ___root, int32_t ___countAdjustment, MethodInfo* method);
#define MutationResult__ctor_m24321(__this, ___root, ___countAdjustment, method) (void)MutationResult__ctor_m24321_gshared((MutationResult_t5637 *)__this, (SortedInt32KeyNode_1_t5629 *)___root, (int32_t)___countAdjustment, method)
// System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<TKey,TValue>> System.Collections.Immutable.ImmutableDictionary`2/MutationResult<System.Object,System.Object>::get_Root()
 SortedInt32KeyNode_1_t5629 * MutationResult_get_Root_m24322_gshared (MutationResult_t5637 * __this, MethodInfo* method);
#define MutationResult_get_Root_m24322(__this, method) (SortedInt32KeyNode_1_t5629 *)MutationResult_get_Root_m24322_gshared((MutationResult_t5637 *)__this, method)
// System.Int32 System.Collections.Immutable.ImmutableDictionary`2/MutationResult<System.Object,System.Object>::get_CountAdjustment()
 int32_t MutationResult_get_CountAdjustment_m24323_gshared (MutationResult_t5637 * __this, MethodInfo* method);
#define MutationResult_get_CountAdjustment_m24323(__this, method) (int32_t)MutationResult_get_CountAdjustment_m24323_gshared((MutationResult_t5637 *)__this, method)
// System.Collections.Immutable.ImmutableDictionary`2<TKey,TValue> System.Collections.Immutable.ImmutableDictionary`2/MutationResult<System.Object,System.Object>::Finalize(System.Collections.Immutable.ImmutableDictionary`2<TKey,TValue>)
 ImmutableDictionary_2_t5627 * MutationResult_Finalize_m24324_gshared (MutationResult_t5637 * __this, ImmutableDictionary_2_t5627 * ___priorMap, MethodInfo* method);
#define MutationResult_Finalize_m24324(__this, ___priorMap, method) (ImmutableDictionary_2_t5627 *)MutationResult_Finalize_m24324_gshared((MutationResult_t5637 *)__this, (ImmutableDictionary_2_t5627 *)___priorMap, method)
