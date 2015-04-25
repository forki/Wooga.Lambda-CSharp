#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>
struct SortedInt32KeyNode_1_t5759;
// System.Collections.Immutable.IBinaryTree
struct IBinaryTree_t960;
// System.Collections.Generic.IEnumerable`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>
struct IEnumerable_1_t5773;
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>
struct IEqualityComparer_1_t5774;
// System.Action`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>>
struct Action_1_t5758;
// System.Collections.Immutable.IOrderedCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>>
struct IOrderedCollection_1_t5775;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_185.h"
// System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_186.h"

// System.Void System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::.ctor()
 void SortedInt32KeyNode_1__ctor_m24472 (SortedInt32KeyNode_1_t5759 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::.ctor(System.Int32,TValue,System.Collections.Immutable.SortedInt32KeyNode`1<TValue>,System.Collections.Immutable.SortedInt32KeyNode`1<TValue>,System.Boolean)
 void SortedInt32KeyNode_1__ctor_m24473 (SortedInt32KeyNode_1_t5759 * __this, int32_t ___key, HashBucket_t5765  ___value, SortedInt32KeyNode_1_t5759 * ___left, SortedInt32KeyNode_1_t5759 * ___right, bool ___frozen, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::get_IsEmpty()
 bool SortedInt32KeyNode_1_get_IsEmpty_m24474 (SortedInt32KeyNode_1_t5759 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::get_Height()
 int32_t SortedInt32KeyNode_1_get_Height_m24475 (SortedInt32KeyNode_1_t5759 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::get_Left()
 SortedInt32KeyNode_1_t5759 * SortedInt32KeyNode_1_get_Left_m24476 (SortedInt32KeyNode_1_t5759 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::get_Right()
 SortedInt32KeyNode_1_t5759 * SortedInt32KeyNode_1_get_Right_m24477 (SortedInt32KeyNode_1_t5759 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IBinaryTree System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::System.Collections.Immutable.IBinaryTree.get_Left()
 Object_t * SortedInt32KeyNode_1_System_Collections_Immutable_IBinaryTree_get_Left_m24478 (SortedInt32KeyNode_1_t5759 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IBinaryTree System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::System.Collections.Immutable.IBinaryTree.get_Right()
 Object_t * SortedInt32KeyNode_1_System_Collections_Immutable_IBinaryTree_get_Right_m24479 (SortedInt32KeyNode_1_t5759 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::System.Collections.Immutable.IBinaryTree.get_Count()
 int32_t SortedInt32KeyNode_1_System_Collections_Immutable_IBinaryTree_get_Count_m24480 (SortedInt32KeyNode_1_t5759 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<System.Int32,TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::get_Value()
 KeyValuePair_2_t5766  SortedInt32KeyNode_1_get_Value_m24481 (SortedInt32KeyNode_1_t5759 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::get_Values()
 Object_t* SortedInt32KeyNode_1_get_Values_m24482 (SortedInt32KeyNode_1_t5759 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::GetEnumerator()
 Enumerator_t5767  SortedInt32KeyNode_1_GetEnumerator_m24483 (SortedInt32KeyNode_1_t5759 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::SetItem(System.Int32,TValue,System.Collections.Generic.IEqualityComparer`1<TValue>,System.Boolean&,System.Boolean&)
 SortedInt32KeyNode_1_t5759 * SortedInt32KeyNode_1_SetItem_m24484 (SortedInt32KeyNode_1_t5759 * __this, int32_t ___key, HashBucket_t5765  ___value, Object_t* ___valueComparer, bool* ___replacedExistingValue, bool* ___mutated, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::Remove(System.Int32,System.Boolean&)
 SortedInt32KeyNode_1_t5759 * SortedInt32KeyNode_1_Remove_m24485 (SortedInt32KeyNode_1_t5759 * __this, int32_t ___key, bool* ___mutated, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::GetValueOrDefault(System.Int32)
 HashBucket_t5765  SortedInt32KeyNode_1_GetValueOrDefault_m24486 (SortedInt32KeyNode_1_t5759 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::TryGetValue(System.Int32,TValue&)
 bool SortedInt32KeyNode_1_TryGetValue_m24487 (SortedInt32KeyNode_1_t5759 * __this, int32_t ___key, HashBucket_t5765 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::Freeze(System.Action`1<System.Collections.Generic.KeyValuePair`2<System.Int32,TValue>>)
 void SortedInt32KeyNode_1_Freeze_m24488 (SortedInt32KeyNode_1_t5759 * __this, Action_1_t5758 * ___freezeAction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::RotateLeft(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 SortedInt32KeyNode_1_t5759 * SortedInt32KeyNode_1_RotateLeft_m24489 (Object_t * __this/* static, unused */, SortedInt32KeyNode_1_t5759 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::RotateRight(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 SortedInt32KeyNode_1_t5759 * SortedInt32KeyNode_1_RotateRight_m24490 (Object_t * __this/* static, unused */, SortedInt32KeyNode_1_t5759 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::DoubleLeft(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 SortedInt32KeyNode_1_t5759 * SortedInt32KeyNode_1_DoubleLeft_m24491 (Object_t * __this/* static, unused */, SortedInt32KeyNode_1_t5759 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::DoubleRight(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 SortedInt32KeyNode_1_t5759 * SortedInt32KeyNode_1_DoubleRight_m24492 (Object_t * __this/* static, unused */, SortedInt32KeyNode_1_t5759 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::Balance(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 int32_t SortedInt32KeyNode_1_Balance_m24493 (Object_t * __this/* static, unused */, SortedInt32KeyNode_1_t5759 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::IsRightHeavy(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 bool SortedInt32KeyNode_1_IsRightHeavy_m24494 (Object_t * __this/* static, unused */, SortedInt32KeyNode_1_t5759 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::IsLeftHeavy(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 bool SortedInt32KeyNode_1_IsLeftHeavy_m24495 (Object_t * __this/* static, unused */, SortedInt32KeyNode_1_t5759 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::MakeBalanced(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 SortedInt32KeyNode_1_t5759 * SortedInt32KeyNode_1_MakeBalanced_m24496 (Object_t * __this/* static, unused */, SortedInt32KeyNode_1_t5759 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::NodeTreeFromList(System.Collections.Immutable.IOrderedCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,TValue>>,System.Int32,System.Int32)
 SortedInt32KeyNode_1_t5759 * SortedInt32KeyNode_1_NodeTreeFromList_m24497 (Object_t * __this/* static, unused */, Object_t* ___items, int32_t ___start, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::SetOrAdd(System.Int32,TValue,System.Collections.Generic.IEqualityComparer`1<TValue>,System.Boolean,System.Boolean&,System.Boolean&)
 SortedInt32KeyNode_1_t5759 * SortedInt32KeyNode_1_SetOrAdd_m24498 (SortedInt32KeyNode_1_t5759 * __this, int32_t ___key, HashBucket_t5765  ___value, Object_t* ___valueComparer, bool ___overwriteExistingValue, bool* ___replacedExistingValue, bool* ___mutated, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::RemoveRecursive(System.Int32,System.Boolean&)
 SortedInt32KeyNode_1_t5759 * SortedInt32KeyNode_1_RemoveRecursive_m24499 (SortedInt32KeyNode_1_t5759 * __this, int32_t ___key, bool* ___mutated, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::Mutate(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>,System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 SortedInt32KeyNode_1_t5759 * SortedInt32KeyNode_1_Mutate_m24500 (SortedInt32KeyNode_1_t5759 * __this, SortedInt32KeyNode_1_t5759 * ___left, SortedInt32KeyNode_1_t5759 * ___right, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::Search(System.Int32)
 SortedInt32KeyNode_1_t5759 * SortedInt32KeyNode_1_Search_m24501 (SortedInt32KeyNode_1_t5759 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>::.cctor()
 void SortedInt32KeyNode_1__cctor_m24502 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
