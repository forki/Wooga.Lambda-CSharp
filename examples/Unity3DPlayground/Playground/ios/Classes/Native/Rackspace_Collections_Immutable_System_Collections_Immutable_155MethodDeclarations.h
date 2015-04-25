#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>
struct SortedInt32KeyNode_1_t5629;
// System.Collections.Immutable.IBinaryTree
struct IBinaryTree_t960;
// System.Collections.Generic.IEnumerable`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>
struct IEnumerable_1_t5687;
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>
struct IEqualityComparer_1_t5634;
// System.Action`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>>
struct Action_1_t5628;
// System.Collections.Immutable.IOrderedCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>>
struct IOrderedCollection_1_t5688;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_136.h"
// System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_154.h"

// System.Void System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::.ctor()
 void SortedInt32KeyNode_1__ctor_m23648 (SortedInt32KeyNode_1_t5629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::.ctor(System.Int32,TValue,System.Collections.Immutable.SortedInt32KeyNode`1<TValue>,System.Collections.Immutable.SortedInt32KeyNode`1<TValue>,System.Boolean)
 void SortedInt32KeyNode_1__ctor_m23649 (SortedInt32KeyNode_1_t5629 * __this, int32_t ___key, HashBucket_t5638  ___value, SortedInt32KeyNode_1_t5629 * ___left, SortedInt32KeyNode_1_t5629 * ___right, bool ___frozen, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::get_IsEmpty()
 bool SortedInt32KeyNode_1_get_IsEmpty_m23650 (SortedInt32KeyNode_1_t5629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::get_Height()
 int32_t SortedInt32KeyNode_1_get_Height_m23651 (SortedInt32KeyNode_1_t5629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::get_Left()
 SortedInt32KeyNode_1_t5629 * SortedInt32KeyNode_1_get_Left_m23652 (SortedInt32KeyNode_1_t5629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::get_Right()
 SortedInt32KeyNode_1_t5629 * SortedInt32KeyNode_1_get_Right_m23653 (SortedInt32KeyNode_1_t5629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IBinaryTree System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::System.Collections.Immutable.IBinaryTree.get_Left()
 Object_t * SortedInt32KeyNode_1_System_Collections_Immutable_IBinaryTree_get_Left_m23654 (SortedInt32KeyNode_1_t5629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IBinaryTree System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::System.Collections.Immutable.IBinaryTree.get_Right()
 Object_t * SortedInt32KeyNode_1_System_Collections_Immutable_IBinaryTree_get_Right_m23655 (SortedInt32KeyNode_1_t5629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::System.Collections.Immutable.IBinaryTree.get_Count()
 int32_t SortedInt32KeyNode_1_System_Collections_Immutable_IBinaryTree_get_Count_m23656 (SortedInt32KeyNode_1_t5629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.Int32,TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::get_Value()
 KeyValuePair_2_t5639  SortedInt32KeyNode_1_get_Value_m23657 (SortedInt32KeyNode_1_t5629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::get_Values()
 Object_t* SortedInt32KeyNode_1_get_Values_m23658 (SortedInt32KeyNode_1_t5629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::GetEnumerator()
 Enumerator_t5684  SortedInt32KeyNode_1_GetEnumerator_m23659 (SortedInt32KeyNode_1_t5629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::SetItem(System.Int32,TValue,System.Collections.Generic.IEqualityComparer`1<TValue>,System.Boolean&,System.Boolean&)
 SortedInt32KeyNode_1_t5629 * SortedInt32KeyNode_1_SetItem_m23660 (SortedInt32KeyNode_1_t5629 * __this, int32_t ___key, HashBucket_t5638  ___value, Object_t* ___valueComparer, bool* ___replacedExistingValue, bool* ___mutated, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::Remove(System.Int32,System.Boolean&)
 SortedInt32KeyNode_1_t5629 * SortedInt32KeyNode_1_Remove_m23661 (SortedInt32KeyNode_1_t5629 * __this, int32_t ___key, bool* ___mutated, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::GetValueOrDefault(System.Int32)
 HashBucket_t5638  SortedInt32KeyNode_1_GetValueOrDefault_m23662 (SortedInt32KeyNode_1_t5629 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::TryGetValue(System.Int32,TValue&)
 bool SortedInt32KeyNode_1_TryGetValue_m23663 (SortedInt32KeyNode_1_t5629 * __this, int32_t ___key, HashBucket_t5638 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::Freeze(System.Action`1<System.Collections.Generic.KeyValuePair`2<System.Int32,TValue>>)
 void SortedInt32KeyNode_1_Freeze_m23664 (SortedInt32KeyNode_1_t5629 * __this, Action_1_t5628 * ___freezeAction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::RotateLeft(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 SortedInt32KeyNode_1_t5629 * SortedInt32KeyNode_1_RotateLeft_m23665 (Object_t * __this/* static, unused */, SortedInt32KeyNode_1_t5629 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::RotateRight(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 SortedInt32KeyNode_1_t5629 * SortedInt32KeyNode_1_RotateRight_m23666 (Object_t * __this/* static, unused */, SortedInt32KeyNode_1_t5629 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::DoubleLeft(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 SortedInt32KeyNode_1_t5629 * SortedInt32KeyNode_1_DoubleLeft_m23667 (Object_t * __this/* static, unused */, SortedInt32KeyNode_1_t5629 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::DoubleRight(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 SortedInt32KeyNode_1_t5629 * SortedInt32KeyNode_1_DoubleRight_m23668 (Object_t * __this/* static, unused */, SortedInt32KeyNode_1_t5629 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::Balance(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 int32_t SortedInt32KeyNode_1_Balance_m23669 (Object_t * __this/* static, unused */, SortedInt32KeyNode_1_t5629 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::IsRightHeavy(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 bool SortedInt32KeyNode_1_IsRightHeavy_m23670 (Object_t * __this/* static, unused */, SortedInt32KeyNode_1_t5629 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::IsLeftHeavy(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 bool SortedInt32KeyNode_1_IsLeftHeavy_m23671 (Object_t * __this/* static, unused */, SortedInt32KeyNode_1_t5629 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::MakeBalanced(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 SortedInt32KeyNode_1_t5629 * SortedInt32KeyNode_1_MakeBalanced_m23672 (Object_t * __this/* static, unused */, SortedInt32KeyNode_1_t5629 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::NodeTreeFromList(System.Collections.Immutable.IOrderedCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,TValue>>,System.Int32,System.Int32)
 SortedInt32KeyNode_1_t5629 * SortedInt32KeyNode_1_NodeTreeFromList_m23673 (Object_t * __this/* static, unused */, Object_t* ___items, int32_t ___start, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::SetOrAdd(System.Int32,TValue,System.Collections.Generic.IEqualityComparer`1<TValue>,System.Boolean,System.Boolean&,System.Boolean&)
 SortedInt32KeyNode_1_t5629 * SortedInt32KeyNode_1_SetOrAdd_m23674 (SortedInt32KeyNode_1_t5629 * __this, int32_t ___key, HashBucket_t5638  ___value, Object_t* ___valueComparer, bool ___overwriteExistingValue, bool* ___replacedExistingValue, bool* ___mutated, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::RemoveRecursive(System.Int32,System.Boolean&)
 SortedInt32KeyNode_1_t5629 * SortedInt32KeyNode_1_RemoveRecursive_m23675 (SortedInt32KeyNode_1_t5629 * __this, int32_t ___key, bool* ___mutated, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::Mutate(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>,System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 SortedInt32KeyNode_1_t5629 * SortedInt32KeyNode_1_Mutate_m23676 (SortedInt32KeyNode_1_t5629 * __this, SortedInt32KeyNode_1_t5629 * ___left, SortedInt32KeyNode_1_t5629 * ___right, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::Search(System.Int32)
 SortedInt32KeyNode_1_t5629 * SortedInt32KeyNode_1_Search_m23677 (SortedInt32KeyNode_1_t5629 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::.cctor()
 void SortedInt32KeyNode_1__cctor_m23678 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
