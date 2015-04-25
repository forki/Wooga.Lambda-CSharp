#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>
struct SortedInt32KeyNode_1_t5559;
// System.Collections.Immutable.IBinaryTree
struct IBinaryTree_t960;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t4557;
// System.Object
struct Object_t;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4468;
// System.Action`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct Action_1_t5560;
// System.Collections.Immutable.IOrderedCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IOrderedCollection_1_t5561;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
// System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_118.h"

// System.Void System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::.ctor()
 void SortedInt32KeyNode_1__ctor_m22423_gshared (SortedInt32KeyNode_1_t5559 * __this, MethodInfo* method);
#define SortedInt32KeyNode_1__ctor_m22423(__this, method) (void)SortedInt32KeyNode_1__ctor_m22423_gshared((SortedInt32KeyNode_1_t5559 *)__this, method)
// System.Void System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::.ctor(System.Int32,TValue,System.Collections.Immutable.SortedInt32KeyNode`1<TValue>,System.Collections.Immutable.SortedInt32KeyNode`1<TValue>,System.Boolean)
 void SortedInt32KeyNode_1__ctor_m22424_gshared (SortedInt32KeyNode_1_t5559 * __this, int32_t ___key, Object_t * ___value, SortedInt32KeyNode_1_t5559 * ___left, SortedInt32KeyNode_1_t5559 * ___right, bool ___frozen, MethodInfo* method);
#define SortedInt32KeyNode_1__ctor_m22424(__this, ___key, ___value, ___left, ___right, ___frozen, method) (void)SortedInt32KeyNode_1__ctor_m22424_gshared((SortedInt32KeyNode_1_t5559 *)__this, (int32_t)___key, (Object_t *)___value, (SortedInt32KeyNode_1_t5559 *)___left, (SortedInt32KeyNode_1_t5559 *)___right, (bool)___frozen, method)
// System.Boolean System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::get_IsEmpty()
 bool SortedInt32KeyNode_1_get_IsEmpty_m22425_gshared (SortedInt32KeyNode_1_t5559 * __this, MethodInfo* method);
#define SortedInt32KeyNode_1_get_IsEmpty_m22425(__this, method) (bool)SortedInt32KeyNode_1_get_IsEmpty_m22425_gshared((SortedInt32KeyNode_1_t5559 *)__this, method)
// System.Int32 System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::get_Height()
 int32_t SortedInt32KeyNode_1_get_Height_m22426_gshared (SortedInt32KeyNode_1_t5559 * __this, MethodInfo* method);
#define SortedInt32KeyNode_1_get_Height_m22426(__this, method) (int32_t)SortedInt32KeyNode_1_get_Height_m22426_gshared((SortedInt32KeyNode_1_t5559 *)__this, method)
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::get_Left()
 SortedInt32KeyNode_1_t5559 * SortedInt32KeyNode_1_get_Left_m22427_gshared (SortedInt32KeyNode_1_t5559 * __this, MethodInfo* method);
#define SortedInt32KeyNode_1_get_Left_m22427(__this, method) (SortedInt32KeyNode_1_t5559 *)SortedInt32KeyNode_1_get_Left_m22427_gshared((SortedInt32KeyNode_1_t5559 *)__this, method)
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::get_Right()
 SortedInt32KeyNode_1_t5559 * SortedInt32KeyNode_1_get_Right_m22428_gshared (SortedInt32KeyNode_1_t5559 * __this, MethodInfo* method);
#define SortedInt32KeyNode_1_get_Right_m22428(__this, method) (SortedInt32KeyNode_1_t5559 *)SortedInt32KeyNode_1_get_Right_m22428_gshared((SortedInt32KeyNode_1_t5559 *)__this, method)
// System.Collections.Immutable.IBinaryTree System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::System.Collections.Immutable.IBinaryTree.get_Left()
 Object_t * SortedInt32KeyNode_1_System_Collections_Immutable_IBinaryTree_get_Left_m22429_gshared (SortedInt32KeyNode_1_t5559 * __this, MethodInfo* method);
#define SortedInt32KeyNode_1_System_Collections_Immutable_IBinaryTree_get_Left_m22429(__this, method) (Object_t *)SortedInt32KeyNode_1_System_Collections_Immutable_IBinaryTree_get_Left_m22429_gshared((SortedInt32KeyNode_1_t5559 *)__this, method)
// System.Collections.Immutable.IBinaryTree System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::System.Collections.Immutable.IBinaryTree.get_Right()
 Object_t * SortedInt32KeyNode_1_System_Collections_Immutable_IBinaryTree_get_Right_m22430_gshared (SortedInt32KeyNode_1_t5559 * __this, MethodInfo* method);
#define SortedInt32KeyNode_1_System_Collections_Immutable_IBinaryTree_get_Right_m22430(__this, method) (Object_t *)SortedInt32KeyNode_1_System_Collections_Immutable_IBinaryTree_get_Right_m22430_gshared((SortedInt32KeyNode_1_t5559 *)__this, method)
// System.Int32 System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::System.Collections.Immutable.IBinaryTree.get_Count()
 int32_t SortedInt32KeyNode_1_System_Collections_Immutable_IBinaryTree_get_Count_m22431_gshared (SortedInt32KeyNode_1_t5559 * __this, MethodInfo* method);
#define SortedInt32KeyNode_1_System_Collections_Immutable_IBinaryTree_get_Count_m22431(__this, method) (int32_t)SortedInt32KeyNode_1_System_Collections_Immutable_IBinaryTree_get_Count_m22431_gshared((SortedInt32KeyNode_1_t5559 *)__this, method)
// System.Collections.Generic.KeyValuePair`2<System.Int32,TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::get_Value()
 KeyValuePair_2_t5562  SortedInt32KeyNode_1_get_Value_m22432 (SortedInt32KeyNode_1_t5559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::get_Values()
 Object_t* SortedInt32KeyNode_1_get_Values_m22433_gshared (SortedInt32KeyNode_1_t5559 * __this, MethodInfo* method);
#define SortedInt32KeyNode_1_get_Values_m22433(__this, method) (Object_t*)SortedInt32KeyNode_1_get_Values_m22433_gshared((SortedInt32KeyNode_1_t5559 *)__this, method)
// System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::GetEnumerator()
 Enumerator_t5563  SortedInt32KeyNode_1_GetEnumerator_m22434 (SortedInt32KeyNode_1_t5559 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::SetItem(System.Int32,TValue,System.Collections.Generic.IEqualityComparer`1<TValue>,System.Boolean&,System.Boolean&)
 SortedInt32KeyNode_1_t5559 * SortedInt32KeyNode_1_SetItem_m22435_gshared (SortedInt32KeyNode_1_t5559 * __this, int32_t ___key, Object_t * ___value, Object_t* ___valueComparer, bool* ___replacedExistingValue, bool* ___mutated, MethodInfo* method);
#define SortedInt32KeyNode_1_SetItem_m22435(__this, ___key, ___value, ___valueComparer, ___replacedExistingValue, ___mutated, method) (SortedInt32KeyNode_1_t5559 *)SortedInt32KeyNode_1_SetItem_m22435_gshared((SortedInt32KeyNode_1_t5559 *)__this, (int32_t)___key, (Object_t *)___value, (Object_t*)___valueComparer, (bool*)___replacedExistingValue, (bool*)___mutated, method)
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::Remove(System.Int32,System.Boolean&)
 SortedInt32KeyNode_1_t5559 * SortedInt32KeyNode_1_Remove_m22436_gshared (SortedInt32KeyNode_1_t5559 * __this, int32_t ___key, bool* ___mutated, MethodInfo* method);
#define SortedInt32KeyNode_1_Remove_m22436(__this, ___key, ___mutated, method) (SortedInt32KeyNode_1_t5559 *)SortedInt32KeyNode_1_Remove_m22436_gshared((SortedInt32KeyNode_1_t5559 *)__this, (int32_t)___key, (bool*)___mutated, method)
// TValue System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::GetValueOrDefault(System.Int32)
 Object_t * SortedInt32KeyNode_1_GetValueOrDefault_m22437_gshared (SortedInt32KeyNode_1_t5559 * __this, int32_t ___key, MethodInfo* method);
#define SortedInt32KeyNode_1_GetValueOrDefault_m22437(__this, ___key, method) (Object_t *)SortedInt32KeyNode_1_GetValueOrDefault_m22437_gshared((SortedInt32KeyNode_1_t5559 *)__this, (int32_t)___key, method)
// System.Boolean System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::TryGetValue(System.Int32,TValue&)
 bool SortedInt32KeyNode_1_TryGetValue_m22438_gshared (SortedInt32KeyNode_1_t5559 * __this, int32_t ___key, Object_t ** ___value, MethodInfo* method);
#define SortedInt32KeyNode_1_TryGetValue_m22438(__this, ___key, ___value, method) (bool)SortedInt32KeyNode_1_TryGetValue_m22438_gshared((SortedInt32KeyNode_1_t5559 *)__this, (int32_t)___key, (Object_t **)___value, method)
// System.Void System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::Freeze(System.Action`1<System.Collections.Generic.KeyValuePair`2<System.Int32,TValue>>)
 void SortedInt32KeyNode_1_Freeze_m22439_gshared (SortedInt32KeyNode_1_t5559 * __this, Action_1_t5560 * ___freezeAction, MethodInfo* method);
#define SortedInt32KeyNode_1_Freeze_m22439(__this, ___freezeAction, method) (void)SortedInt32KeyNode_1_Freeze_m22439_gshared((SortedInt32KeyNode_1_t5559 *)__this, (Action_1_t5560 *)___freezeAction, method)
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::RotateLeft(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 SortedInt32KeyNode_1_t5559 * SortedInt32KeyNode_1_RotateLeft_m22440_gshared (Object_t * __this/* static, unused */, SortedInt32KeyNode_1_t5559 * ___tree, MethodInfo* method);
#define SortedInt32KeyNode_1_RotateLeft_m22440(__this/* static, unused */, ___tree, method) (SortedInt32KeyNode_1_t5559 *)SortedInt32KeyNode_1_RotateLeft_m22440_gshared((Object_t *)__this/* static, unused */, (SortedInt32KeyNode_1_t5559 *)___tree, method)
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::RotateRight(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 SortedInt32KeyNode_1_t5559 * SortedInt32KeyNode_1_RotateRight_m22441_gshared (Object_t * __this/* static, unused */, SortedInt32KeyNode_1_t5559 * ___tree, MethodInfo* method);
#define SortedInt32KeyNode_1_RotateRight_m22441(__this/* static, unused */, ___tree, method) (SortedInt32KeyNode_1_t5559 *)SortedInt32KeyNode_1_RotateRight_m22441_gshared((Object_t *)__this/* static, unused */, (SortedInt32KeyNode_1_t5559 *)___tree, method)
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::DoubleLeft(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 SortedInt32KeyNode_1_t5559 * SortedInt32KeyNode_1_DoubleLeft_m22442_gshared (Object_t * __this/* static, unused */, SortedInt32KeyNode_1_t5559 * ___tree, MethodInfo* method);
#define SortedInt32KeyNode_1_DoubleLeft_m22442(__this/* static, unused */, ___tree, method) (SortedInt32KeyNode_1_t5559 *)SortedInt32KeyNode_1_DoubleLeft_m22442_gshared((Object_t *)__this/* static, unused */, (SortedInt32KeyNode_1_t5559 *)___tree, method)
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::DoubleRight(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 SortedInt32KeyNode_1_t5559 * SortedInt32KeyNode_1_DoubleRight_m22443_gshared (Object_t * __this/* static, unused */, SortedInt32KeyNode_1_t5559 * ___tree, MethodInfo* method);
#define SortedInt32KeyNode_1_DoubleRight_m22443(__this/* static, unused */, ___tree, method) (SortedInt32KeyNode_1_t5559 *)SortedInt32KeyNode_1_DoubleRight_m22443_gshared((Object_t *)__this/* static, unused */, (SortedInt32KeyNode_1_t5559 *)___tree, method)
// System.Int32 System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::Balance(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 int32_t SortedInt32KeyNode_1_Balance_m22444_gshared (Object_t * __this/* static, unused */, SortedInt32KeyNode_1_t5559 * ___tree, MethodInfo* method);
#define SortedInt32KeyNode_1_Balance_m22444(__this/* static, unused */, ___tree, method) (int32_t)SortedInt32KeyNode_1_Balance_m22444_gshared((Object_t *)__this/* static, unused */, (SortedInt32KeyNode_1_t5559 *)___tree, method)
// System.Boolean System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::IsRightHeavy(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 bool SortedInt32KeyNode_1_IsRightHeavy_m22445_gshared (Object_t * __this/* static, unused */, SortedInt32KeyNode_1_t5559 * ___tree, MethodInfo* method);
#define SortedInt32KeyNode_1_IsRightHeavy_m22445(__this/* static, unused */, ___tree, method) (bool)SortedInt32KeyNode_1_IsRightHeavy_m22445_gshared((Object_t *)__this/* static, unused */, (SortedInt32KeyNode_1_t5559 *)___tree, method)
// System.Boolean System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::IsLeftHeavy(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 bool SortedInt32KeyNode_1_IsLeftHeavy_m22446_gshared (Object_t * __this/* static, unused */, SortedInt32KeyNode_1_t5559 * ___tree, MethodInfo* method);
#define SortedInt32KeyNode_1_IsLeftHeavy_m22446(__this/* static, unused */, ___tree, method) (bool)SortedInt32KeyNode_1_IsLeftHeavy_m22446_gshared((Object_t *)__this/* static, unused */, (SortedInt32KeyNode_1_t5559 *)___tree, method)
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::MakeBalanced(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 SortedInt32KeyNode_1_t5559 * SortedInt32KeyNode_1_MakeBalanced_m22447_gshared (Object_t * __this/* static, unused */, SortedInt32KeyNode_1_t5559 * ___tree, MethodInfo* method);
#define SortedInt32KeyNode_1_MakeBalanced_m22447(__this/* static, unused */, ___tree, method) (SortedInt32KeyNode_1_t5559 *)SortedInt32KeyNode_1_MakeBalanced_m22447_gshared((Object_t *)__this/* static, unused */, (SortedInt32KeyNode_1_t5559 *)___tree, method)
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::NodeTreeFromList(System.Collections.Immutable.IOrderedCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,TValue>>,System.Int32,System.Int32)
 SortedInt32KeyNode_1_t5559 * SortedInt32KeyNode_1_NodeTreeFromList_m22448_gshared (Object_t * __this/* static, unused */, Object_t* ___items, int32_t ___start, int32_t ___length, MethodInfo* method);
#define SortedInt32KeyNode_1_NodeTreeFromList_m22448(__this/* static, unused */, ___items, ___start, ___length, method) (SortedInt32KeyNode_1_t5559 *)SortedInt32KeyNode_1_NodeTreeFromList_m22448_gshared((Object_t *)__this/* static, unused */, (Object_t*)___items, (int32_t)___start, (int32_t)___length, method)
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::SetOrAdd(System.Int32,TValue,System.Collections.Generic.IEqualityComparer`1<TValue>,System.Boolean,System.Boolean&,System.Boolean&)
 SortedInt32KeyNode_1_t5559 * SortedInt32KeyNode_1_SetOrAdd_m22449_gshared (SortedInt32KeyNode_1_t5559 * __this, int32_t ___key, Object_t * ___value, Object_t* ___valueComparer, bool ___overwriteExistingValue, bool* ___replacedExistingValue, bool* ___mutated, MethodInfo* method);
#define SortedInt32KeyNode_1_SetOrAdd_m22449(__this, ___key, ___value, ___valueComparer, ___overwriteExistingValue, ___replacedExistingValue, ___mutated, method) (SortedInt32KeyNode_1_t5559 *)SortedInt32KeyNode_1_SetOrAdd_m22449_gshared((SortedInt32KeyNode_1_t5559 *)__this, (int32_t)___key, (Object_t *)___value, (Object_t*)___valueComparer, (bool)___overwriteExistingValue, (bool*)___replacedExistingValue, (bool*)___mutated, method)
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::RemoveRecursive(System.Int32,System.Boolean&)
 SortedInt32KeyNode_1_t5559 * SortedInt32KeyNode_1_RemoveRecursive_m22450_gshared (SortedInt32KeyNode_1_t5559 * __this, int32_t ___key, bool* ___mutated, MethodInfo* method);
#define SortedInt32KeyNode_1_RemoveRecursive_m22450(__this, ___key, ___mutated, method) (SortedInt32KeyNode_1_t5559 *)SortedInt32KeyNode_1_RemoveRecursive_m22450_gshared((SortedInt32KeyNode_1_t5559 *)__this, (int32_t)___key, (bool*)___mutated, method)
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::Mutate(System.Collections.Immutable.SortedInt32KeyNode`1<TValue>,System.Collections.Immutable.SortedInt32KeyNode`1<TValue>)
 SortedInt32KeyNode_1_t5559 * SortedInt32KeyNode_1_Mutate_m22451_gshared (SortedInt32KeyNode_1_t5559 * __this, SortedInt32KeyNode_1_t5559 * ___left, SortedInt32KeyNode_1_t5559 * ___right, MethodInfo* method);
#define SortedInt32KeyNode_1_Mutate_m22451(__this, ___left, ___right, method) (SortedInt32KeyNode_1_t5559 *)SortedInt32KeyNode_1_Mutate_m22451_gshared((SortedInt32KeyNode_1_t5559 *)__this, (SortedInt32KeyNode_1_t5559 *)___left, (SortedInt32KeyNode_1_t5559 *)___right, method)
// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::Search(System.Int32)
 SortedInt32KeyNode_1_t5559 * SortedInt32KeyNode_1_Search_m22452_gshared (SortedInt32KeyNode_1_t5559 * __this, int32_t ___key, MethodInfo* method);
#define SortedInt32KeyNode_1_Search_m22452(__this, ___key, method) (SortedInt32KeyNode_1_t5559 *)SortedInt32KeyNode_1_Search_m22452_gshared((SortedInt32KeyNode_1_t5559 *)__this, (int32_t)___key, method)
// System.Void System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>::.cctor()
 void SortedInt32KeyNode_1__cctor_m22453_gshared (Object_t * __this/* static, unused */, MethodInfo* method);
#define SortedInt32KeyNode_1__cctor_m22453(__this/* static, unused */, method) (void)SortedInt32KeyNode_1__cctor_m22453_gshared((Object_t *)__this/* static, unused */, method)
