#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>
struct Node_t5708;
// System.Collections.Immutable.IBinaryTree`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IBinaryTree_1_t5643;
// System.Collections.Immutable.IBinaryTree
struct IBinaryTree_t960;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t4557;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t4474;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Collections.Immutable.ImmutableSortedDictionary`2/Builder<System.Object,System.Object>
struct Builder_t5709;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t4466;
// System.Array
struct Array_t;
// System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>
struct SortedDictionary_2_t5712;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t4559;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4468;
// System.Action`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Action_1_t5665;
// System.Collections.Immutable.IOrderedCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IOrderedCollection_1_t5645;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Immutable.ImmutableSortedDictionary`2/Enumerator<System.Object,System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_167.h"

// System.Void System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::.ctor()
 void Node__ctor_m23838_gshared (Node_t5708 * __this, MethodInfo* method);
#define Node__ctor_m23838(__this, method) (void)Node__ctor_m23838_gshared((Node_t5708 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::.ctor(TKey,TValue,System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue>,System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue>,System.Boolean)
 void Node__ctor_m23839_gshared (Node_t5708 * __this, Object_t * ___key, Object_t * ___value, Node_t5708 * ___left, Node_t5708 * ___right, bool ___frozen, MethodInfo* method);
#define Node__ctor_m23839(__this, ___key, ___value, ___left, ___right, ___frozen, method) (void)Node__ctor_m23839_gshared((Node_t5708 *)__this, (Object_t *)___key, (Object_t *)___value, (Node_t5708 *)___left, (Node_t5708 *)___right, (bool)___frozen, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::get_IsEmpty()
 bool Node_get_IsEmpty_m23840_gshared (Node_t5708 * __this, MethodInfo* method);
#define Node_get_IsEmpty_m23840(__this, method) (bool)Node_get_IsEmpty_m23840_gshared((Node_t5708 *)__this, method)
// System.Collections.Immutable.IBinaryTree`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::System.Collections.Immutable.IBinaryTree<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_Left()
 Object_t* Node_System_Collections_Immutable_IBinaryTreeU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_Left_m23841_gshared (Node_t5708 * __this, MethodInfo* method);
#define Node_System_Collections_Immutable_IBinaryTreeU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_Left_m23841(__this, method) (Object_t*)Node_System_Collections_Immutable_IBinaryTreeU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_Left_m23841_gshared((Node_t5708 *)__this, method)
// System.Collections.Immutable.IBinaryTree`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::System.Collections.Immutable.IBinaryTree<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_Right()
 Object_t* Node_System_Collections_Immutable_IBinaryTreeU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_Right_m23842_gshared (Node_t5708 * __this, MethodInfo* method);
#define Node_System_Collections_Immutable_IBinaryTreeU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_Right_m23842(__this, method) (Object_t*)Node_System_Collections_Immutable_IBinaryTreeU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_Right_m23842_gshared((Node_t5708 *)__this, method)
// System.Int32 System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::get_Height()
 int32_t Node_get_Height_m23843_gshared (Node_t5708 * __this, MethodInfo* method);
#define Node_get_Height_m23843(__this, method) (int32_t)Node_get_Height_m23843_gshared((Node_t5708 *)__this, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::get_Left()
 Node_t5708 * Node_get_Left_m23844_gshared (Node_t5708 * __this, MethodInfo* method);
#define Node_get_Left_m23844(__this, method) (Node_t5708 *)Node_get_Left_m23844_gshared((Node_t5708 *)__this, method)
// System.Collections.Immutable.IBinaryTree System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::System.Collections.Immutable.IBinaryTree.get_Left()
 Object_t * Node_System_Collections_Immutable_IBinaryTree_get_Left_m23845_gshared (Node_t5708 * __this, MethodInfo* method);
#define Node_System_Collections_Immutable_IBinaryTree_get_Left_m23845(__this, method) (Object_t *)Node_System_Collections_Immutable_IBinaryTree_get_Left_m23845_gshared((Node_t5708 *)__this, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::get_Right()
 Node_t5708 * Node_get_Right_m23846_gshared (Node_t5708 * __this, MethodInfo* method);
#define Node_get_Right_m23846(__this, method) (Node_t5708 *)Node_get_Right_m23846_gshared((Node_t5708 *)__this, method)
// System.Collections.Immutable.IBinaryTree System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::System.Collections.Immutable.IBinaryTree.get_Right()
 Object_t * Node_System_Collections_Immutable_IBinaryTree_get_Right_m23847_gshared (Node_t5708 * __this, MethodInfo* method);
#define Node_System_Collections_Immutable_IBinaryTree_get_Right_m23847(__this, method) (Object_t *)Node_System_Collections_Immutable_IBinaryTree_get_Right_m23847_gshared((Node_t5708 *)__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::get_Value()
 KeyValuePair_2_t4473  Node_get_Value_m23848 (Node_t5708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::System.Collections.Immutable.IBinaryTree.get_Count()
 int32_t Node_System_Collections_Immutable_IBinaryTree_get_Count_m23849_gshared (Node_t5708 * __this, MethodInfo* method);
#define Node_System_Collections_Immutable_IBinaryTree_get_Count_m23849(__this, method) (int32_t)Node_System_Collections_Immutable_IBinaryTree_get_Count_m23849_gshared((Node_t5708 *)__this, method)
// System.Collections.Generic.IEnumerable`1<TKey> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::get_Keys()
 Object_t* Node_get_Keys_m23850_gshared (Node_t5708 * __this, MethodInfo* method);
#define Node_get_Keys_m23850(__this, method) (Object_t*)Node_get_Keys_m23850_gshared((Node_t5708 *)__this, method)
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::get_Values()
 Object_t* Node_get_Values_m23851_gshared (Node_t5708 * __this, MethodInfo* method);
#define Node_get_Values_m23851(__this, method) (Object_t*)Node_get_Values_m23851_gshared((Node_t5708 *)__this, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2/Enumerator<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::GetEnumerator()
 Enumerator_t5710  Node_GetEnumerator_m23852 (Node_t5708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Node_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23853_gshared (Node_t5708 * __this, MethodInfo* method);
#define Node_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23853(__this, method) (Object_t*)Node_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23853_gshared((Node_t5708 *)__this, method)
// System.Collections.IEnumerator System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Node_System_Collections_IEnumerable_GetEnumerator_m23854_gshared (Node_t5708 * __this, MethodInfo* method);
#define Node_System_Collections_IEnumerable_GetEnumerator_m23854(__this, method) (Object_t *)Node_System_Collections_IEnumerable_GetEnumerator_m23854_gshared((Node_t5708 *)__this, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2/Enumerator<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::GetEnumerator(System.Collections.Immutable.ImmutableSortedDictionary`2/Builder<TKey,TValue>)
 Enumerator_t5710  Node_GetEnumerator_m23855 (Node_t5708 * __this, Builder_t5709 * ___builder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32,System.Int32)
 void Node_CopyTo_m23856_gshared (Node_t5708 * __this, KeyValuePair_2U5BU5D_t4466* ___array, int32_t ___arrayIndex, int32_t ___dictionarySize, MethodInfo* method);
#define Node_CopyTo_m23856(__this, ___array, ___arrayIndex, ___dictionarySize, method) (void)Node_CopyTo_m23856_gshared((Node_t5708 *)__this, (KeyValuePair_2U5BU5D_t4466*)___array, (int32_t)___arrayIndex, (int32_t)___dictionarySize, method)
// System.Void System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::CopyTo(System.Array,System.Int32,System.Int32)
 void Node_CopyTo_m23857_gshared (Node_t5708 * __this, Array_t * ___array, int32_t ___arrayIndex, int32_t ___dictionarySize, MethodInfo* method);
#define Node_CopyTo_m23857(__this, ___array, ___arrayIndex, ___dictionarySize, method) (void)Node_CopyTo_m23857_gshared((Node_t5708 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, (int32_t)___dictionarySize, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::NodeTreeFromSortedDictionary(System.Collections.Generic.SortedDictionary`2<TKey,TValue>)
 Node_t5708 * Node_NodeTreeFromSortedDictionary_m23858_gshared (Object_t * __this/* static, unused */, SortedDictionary_2_t5712 * ___dictionary, MethodInfo* method);
#define Node_NodeTreeFromSortedDictionary_m23858(__this/* static, unused */, ___dictionary, method) (Node_t5708 *)Node_NodeTreeFromSortedDictionary_m23858_gshared((Object_t *)__this/* static, unused */, (SortedDictionary_2_t5712 *)___dictionary, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::Add(TKey,TValue,System.Collections.Generic.IComparer`1<TKey>,System.Collections.Generic.IEqualityComparer`1<TValue>,System.Boolean&)
 Node_t5708 * Node_Add_m23859_gshared (Node_t5708 * __this, Object_t * ___key, Object_t * ___value, Object_t* ___keyComparer, Object_t* ___valueComparer, bool* ___mutated, MethodInfo* method);
#define Node_Add_m23859(__this, ___key, ___value, ___keyComparer, ___valueComparer, ___mutated, method) (Node_t5708 *)Node_Add_m23859_gshared((Node_t5708 *)__this, (Object_t *)___key, (Object_t *)___value, (Object_t*)___keyComparer, (Object_t*)___valueComparer, (bool*)___mutated, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::SetItem(TKey,TValue,System.Collections.Generic.IComparer`1<TKey>,System.Collections.Generic.IEqualityComparer`1<TValue>,System.Boolean&,System.Boolean&)
 Node_t5708 * Node_SetItem_m23860_gshared (Node_t5708 * __this, Object_t * ___key, Object_t * ___value, Object_t* ___keyComparer, Object_t* ___valueComparer, bool* ___replacedExistingValue, bool* ___mutated, MethodInfo* method);
#define Node_SetItem_m23860(__this, ___key, ___value, ___keyComparer, ___valueComparer, ___replacedExistingValue, ___mutated, method) (Node_t5708 *)Node_SetItem_m23860_gshared((Node_t5708 *)__this, (Object_t *)___key, (Object_t *)___value, (Object_t*)___keyComparer, (Object_t*)___valueComparer, (bool*)___replacedExistingValue, (bool*)___mutated, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::Remove(TKey,System.Collections.Generic.IComparer`1<TKey>,System.Boolean&)
 Node_t5708 * Node_Remove_m23861_gshared (Node_t5708 * __this, Object_t * ___key, Object_t* ___keyComparer, bool* ___mutated, MethodInfo* method);
#define Node_Remove_m23861(__this, ___key, ___keyComparer, ___mutated, method) (Node_t5708 *)Node_Remove_m23861_gshared((Node_t5708 *)__this, (Object_t *)___key, (Object_t*)___keyComparer, (bool*)___mutated, method)
// TValue System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::GetValueOrDefault(TKey,System.Collections.Generic.IComparer`1<TKey>)
 Object_t * Node_GetValueOrDefault_m23862_gshared (Node_t5708 * __this, Object_t * ___key, Object_t* ___keyComparer, MethodInfo* method);
#define Node_GetValueOrDefault_m23862(__this, ___key, ___keyComparer, method) (Object_t *)Node_GetValueOrDefault_m23862_gshared((Node_t5708 *)__this, (Object_t *)___key, (Object_t*)___keyComparer, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::TryGetValue(TKey,System.Collections.Generic.IComparer`1<TKey>,TValue&)
 bool Node_TryGetValue_m23863_gshared (Node_t5708 * __this, Object_t * ___key, Object_t* ___keyComparer, Object_t ** ___value, MethodInfo* method);
#define Node_TryGetValue_m23863(__this, ___key, ___keyComparer, ___value, method) (bool)Node_TryGetValue_m23863_gshared((Node_t5708 *)__this, (Object_t *)___key, (Object_t*)___keyComparer, (Object_t **)___value, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::TryGetKey(TKey,System.Collections.Generic.IComparer`1<TKey>,TKey&)
 bool Node_TryGetKey_m23864_gshared (Node_t5708 * __this, Object_t * ___equalKey, Object_t* ___keyComparer, Object_t ** ___actualKey, MethodInfo* method);
#define Node_TryGetKey_m23864(__this, ___equalKey, ___keyComparer, ___actualKey, method) (bool)Node_TryGetKey_m23864_gshared((Node_t5708 *)__this, (Object_t *)___equalKey, (Object_t*)___keyComparer, (Object_t **)___actualKey, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::ContainsKey(TKey,System.Collections.Generic.IComparer`1<TKey>)
 bool Node_ContainsKey_m23865_gshared (Node_t5708 * __this, Object_t * ___key, Object_t* ___keyComparer, MethodInfo* method);
#define Node_ContainsKey_m23865(__this, ___key, ___keyComparer, method) (bool)Node_ContainsKey_m23865_gshared((Node_t5708 *)__this, (Object_t *)___key, (Object_t*)___keyComparer, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::ContainsValue(TValue,System.Collections.Generic.IEqualityComparer`1<TValue>)
 bool Node_ContainsValue_m23866_gshared (Node_t5708 * __this, Object_t * ___value, Object_t* ___valueComparer, MethodInfo* method);
#define Node_ContainsValue_m23866(__this, ___value, ___valueComparer, method) (bool)Node_ContainsValue_m23866_gshared((Node_t5708 *)__this, (Object_t *)___value, (Object_t*)___valueComparer, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>,System.Collections.Generic.IComparer`1<TKey>,System.Collections.Generic.IEqualityComparer`1<TValue>)
 bool Node_Contains_m23867 (Node_t5708 * __this, KeyValuePair_2_t4473  ___pair, Object_t* ___keyComparer, Object_t* ___valueComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::Freeze(System.Action`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>>)
 void Node_Freeze_m23868_gshared (Node_t5708 * __this, Action_1_t5665 * ___freezeAction, MethodInfo* method);
#define Node_Freeze_m23868(__this, ___freezeAction, method) (void)Node_Freeze_m23868_gshared((Node_t5708 *)__this, (Action_1_t5665 *)___freezeAction, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::RotateLeft(System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue>)
 Node_t5708 * Node_RotateLeft_m23869_gshared (Object_t * __this/* static, unused */, Node_t5708 * ___tree, MethodInfo* method);
#define Node_RotateLeft_m23869(__this/* static, unused */, ___tree, method) (Node_t5708 *)Node_RotateLeft_m23869_gshared((Object_t *)__this/* static, unused */, (Node_t5708 *)___tree, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::RotateRight(System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue>)
 Node_t5708 * Node_RotateRight_m23870_gshared (Object_t * __this/* static, unused */, Node_t5708 * ___tree, MethodInfo* method);
#define Node_RotateRight_m23870(__this/* static, unused */, ___tree, method) (Node_t5708 *)Node_RotateRight_m23870_gshared((Object_t *)__this/* static, unused */, (Node_t5708 *)___tree, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::DoubleLeft(System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue>)
 Node_t5708 * Node_DoubleLeft_m23871_gshared (Object_t * __this/* static, unused */, Node_t5708 * ___tree, MethodInfo* method);
#define Node_DoubleLeft_m23871(__this/* static, unused */, ___tree, method) (Node_t5708 *)Node_DoubleLeft_m23871_gshared((Object_t *)__this/* static, unused */, (Node_t5708 *)___tree, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::DoubleRight(System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue>)
 Node_t5708 * Node_DoubleRight_m23872_gshared (Object_t * __this/* static, unused */, Node_t5708 * ___tree, MethodInfo* method);
#define Node_DoubleRight_m23872(__this/* static, unused */, ___tree, method) (Node_t5708 *)Node_DoubleRight_m23872_gshared((Object_t *)__this/* static, unused */, (Node_t5708 *)___tree, method)
// System.Int32 System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::Balance(System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue>)
 int32_t Node_Balance_m23873_gshared (Object_t * __this/* static, unused */, Node_t5708 * ___tree, MethodInfo* method);
#define Node_Balance_m23873(__this/* static, unused */, ___tree, method) (int32_t)Node_Balance_m23873_gshared((Object_t *)__this/* static, unused */, (Node_t5708 *)___tree, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::IsRightHeavy(System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue>)
 bool Node_IsRightHeavy_m23874_gshared (Object_t * __this/* static, unused */, Node_t5708 * ___tree, MethodInfo* method);
#define Node_IsRightHeavy_m23874(__this/* static, unused */, ___tree, method) (bool)Node_IsRightHeavy_m23874_gshared((Object_t *)__this/* static, unused */, (Node_t5708 *)___tree, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::IsLeftHeavy(System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue>)
 bool Node_IsLeftHeavy_m23875_gshared (Object_t * __this/* static, unused */, Node_t5708 * ___tree, MethodInfo* method);
#define Node_IsLeftHeavy_m23875(__this/* static, unused */, ___tree, method) (bool)Node_IsLeftHeavy_m23875_gshared((Object_t *)__this/* static, unused */, (Node_t5708 *)___tree, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::MakeBalanced(System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue>)
 Node_t5708 * Node_MakeBalanced_m23876_gshared (Object_t * __this/* static, unused */, Node_t5708 * ___tree, MethodInfo* method);
#define Node_MakeBalanced_m23876(__this/* static, unused */, ___tree, method) (Node_t5708 *)Node_MakeBalanced_m23876_gshared((Object_t *)__this/* static, unused */, (Node_t5708 *)___tree, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::NodeTreeFromList(System.Collections.Immutable.IOrderedCollection`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>>,System.Int32,System.Int32)
 Node_t5708 * Node_NodeTreeFromList_m23877_gshared (Object_t * __this/* static, unused */, Object_t* ___items, int32_t ___start, int32_t ___length, MethodInfo* method);
#define Node_NodeTreeFromList_m23877(__this/* static, unused */, ___items, ___start, ___length, method) (Node_t5708 *)Node_NodeTreeFromList_m23877_gshared((Object_t *)__this/* static, unused */, (Object_t*)___items, (int32_t)___start, (int32_t)___length, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::SetOrAdd(TKey,TValue,System.Collections.Generic.IComparer`1<TKey>,System.Collections.Generic.IEqualityComparer`1<TValue>,System.Boolean,System.Boolean&,System.Boolean&)
 Node_t5708 * Node_SetOrAdd_m23878_gshared (Node_t5708 * __this, Object_t * ___key, Object_t * ___value, Object_t* ___keyComparer, Object_t* ___valueComparer, bool ___overwriteExistingValue, bool* ___replacedExistingValue, bool* ___mutated, MethodInfo* method);
#define Node_SetOrAdd_m23878(__this, ___key, ___value, ___keyComparer, ___valueComparer, ___overwriteExistingValue, ___replacedExistingValue, ___mutated, method) (Node_t5708 *)Node_SetOrAdd_m23878_gshared((Node_t5708 *)__this, (Object_t *)___key, (Object_t *)___value, (Object_t*)___keyComparer, (Object_t*)___valueComparer, (bool)___overwriteExistingValue, (bool*)___replacedExistingValue, (bool*)___mutated, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::RemoveRecursive(TKey,System.Collections.Generic.IComparer`1<TKey>,System.Boolean&)
 Node_t5708 * Node_RemoveRecursive_m23879_gshared (Node_t5708 * __this, Object_t * ___key, Object_t* ___keyComparer, bool* ___mutated, MethodInfo* method);
#define Node_RemoveRecursive_m23879(__this, ___key, ___keyComparer, ___mutated, method) (Node_t5708 *)Node_RemoveRecursive_m23879_gshared((Node_t5708 *)__this, (Object_t *)___key, (Object_t*)___keyComparer, (bool*)___mutated, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::Mutate(System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue>,System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue>)
 Node_t5708 * Node_Mutate_m23880_gshared (Node_t5708 * __this, Node_t5708 * ___left, Node_t5708 * ___right, MethodInfo* method);
#define Node_Mutate_m23880(__this, ___left, ___right, method) (Node_t5708 *)Node_Mutate_m23880_gshared((Node_t5708 *)__this, (Node_t5708 *)___left, (Node_t5708 *)___right, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::Search(TKey,System.Collections.Generic.IComparer`1<TKey>)
 Node_t5708 * Node_Search_m23881_gshared (Node_t5708 * __this, Object_t * ___key, Object_t* ___keyComparer, MethodInfo* method);
#define Node_Search_m23881(__this, ___key, ___keyComparer, method) (Node_t5708 *)Node_Search_m23881_gshared((Node_t5708 *)__this, (Object_t *)___key, (Object_t*)___keyComparer, method)
// TKey System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::<get_Keys>b__0(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 Object_t * Node_U3Cget_KeysU3Eb__0_m23882 (Object_t * __this/* static, unused */, KeyValuePair_2_t4473  ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::<get_Values>b__2(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 Object_t * Node_U3Cget_ValuesU3Eb__2_m23883 (Object_t * __this/* static, unused */, KeyValuePair_2_t4473  ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::.cctor()
 void Node__cctor_m23884_gshared (Object_t * __this/* static, unused */, MethodInfo* method);
#define Node__cctor_m23884(__this/* static, unused */, method) (void)Node__cctor_m23884_gshared((Object_t *)__this/* static, unused */, method)
