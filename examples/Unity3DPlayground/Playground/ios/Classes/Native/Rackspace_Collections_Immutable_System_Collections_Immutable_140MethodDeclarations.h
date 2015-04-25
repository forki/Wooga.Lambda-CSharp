#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Node_t5641;
// System.Collections.Immutable.IBinaryTree
struct IBinaryTree_t960;
// System.Collections.Immutable.IBinaryTree`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IBinaryTree_1_t5643;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t4474;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Builder_t5644;
// System.Collections.Immutable.IOrderedCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IOrderedCollection_1_t5645;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t5633;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t5646;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t5647;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IComparer_1_t5648;
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEqualityComparer_1_t5640;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t4466;
// System.Array
struct Array_t;
// System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ImmutableList_1_t5649;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_141.h"

// System.Void System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
 void Node__ctor_m23157 (Node_t5641 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(T,System.Collections.Immutable.ImmutableList`1/Node<T>,System.Collections.Immutable.ImmutableList`1/Node<T>,System.Boolean)
 void Node__ctor_m23158 (Node_t5641 * __this, KeyValuePair_2_t4473  ___key, Node_t5641 * ___left, Node_t5641 * ___right, bool ___frozen, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_IsEmpty()
 bool Node_get_IsEmpty_m23159 (Node_t5641 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Height()
 int32_t Node_get_Height_m23160 (Node_t5641 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Left()
 Node_t5641 * Node_get_Left_m23161 (Node_t5641 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IBinaryTree System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Immutable.IBinaryTree.get_Left()
 Object_t * Node_System_Collections_Immutable_IBinaryTree_get_Left_m23162 (Node_t5641 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Right()
 Node_t5641 * Node_get_Right_m23163 (Node_t5641 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IBinaryTree System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Immutable.IBinaryTree.get_Right()
 Object_t * Node_System_Collections_Immutable_IBinaryTree_get_Right_m23164 (Node_t5641 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IBinaryTree`1<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Immutable.IBinaryTree<T>.get_Left()
 Object_t* Node_System_Collections_Immutable_IBinaryTreeU3CTU3E_get_Left_m23165 (Node_t5641 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IBinaryTree`1<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Immutable.IBinaryTree<T>.get_Right()
 Object_t* Node_System_Collections_Immutable_IBinaryTreeU3CTU3E_get_Right_m23166 (Node_t5641 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
 KeyValuePair_2_t4473  Node_get_Value_m23167 (Node_t5641 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
 int32_t Node_get_Count_m23168 (Node_t5641 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
 KeyValuePair_2_t4473  Node_get_Key_m23169 (Node_t5641 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
 KeyValuePair_2_t4473  Node_get_Item_m23170 (Node_t5641 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Enumerator<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
 Enumerator_t5650  Node_GetEnumerator_m23171 (Node_t5641 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* Node_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23172 (Node_t5641 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Node_System_Collections_IEnumerable_GetEnumerator_m23173 (Node_t5641 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Enumerator<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator(System.Collections.Immutable.ImmutableList`1/Builder<T>)
 Enumerator_t5650  Node_GetEnumerator_m23174 (Node_t5641 * __this, Builder_t5644 * ___builder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::NodeTreeFromList(System.Collections.Immutable.IOrderedCollection`1<T>,System.Int32,System.Int32)
 Node_t5641 * Node_NodeTreeFromList_m23175 (Object_t * __this/* static, unused */, Object_t* ___items, int32_t ___start, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
 Node_t5641 * Node_Add_m23176 (Node_t5641 * __this, KeyValuePair_2_t4473  ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
 Node_t5641 * Node_Insert_m23177 (Node_t5641 * __this, int32_t ___index, KeyValuePair_2_t4473  ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 Node_t5641 * Node_AddRange_m23178 (Node_t5641 * __this, Object_t* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 Node_t5641 * Node_InsertRange_m23179 (Node_t5641 * __this, int32_t ___index, Object_t* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
 Node_t5641 * Node_RemoveAt_m23180 (Node_t5641 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
 Node_t5641 * Node_RemoveAll_m23181 (Node_t5641 * __this, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ReplaceAt(System.Int32,T)
 Node_t5641 * Node_ReplaceAt_m23182 (Node_t5641 * __this, int32_t ___index, KeyValuePair_2_t4473  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
 Node_t5641 * Node_Reverse_m23183 (Node_t5641 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse(System.Int32,System.Int32)
 Node_t5641 * Node_Reverse_m23184 (Node_t5641 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
 Node_t5641 * Node_Sort_m23185 (Node_t5641 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
 Node_t5641 * Node_Sort_m23186 (Node_t5641 * __this, Comparison_1_t5647 * ___comparison, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
 Node_t5641 * Node_Sort_m23187 (Node_t5641 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
 Node_t5641 * Node_Sort_m23188 (Node_t5641 * __this, int32_t ___index, int32_t ___count, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BinarySearch(System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
 int32_t Node_BinarySearch_m23189 (Node_t5641 * __this, int32_t ___index, int32_t ___count, KeyValuePair_2_t4473  ___item, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T,System.Collections.Generic.IEqualityComparer`1<T>)
 int32_t Node_IndexOf_m23190 (Node_t5641 * __this, KeyValuePair_2_t4473  ___item, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T,System.Int32,System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
 int32_t Node_IndexOf_m23191 (Node_t5641 * __this, KeyValuePair_2_t4473  ___item, int32_t ___index, int32_t ___count, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::LastIndexOf(T,System.Int32,System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
 int32_t Node_LastIndexOf_m23192 (Node_t5641 * __this, KeyValuePair_2_t4473  ___item, int32_t ___index, int32_t ___count, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[])
 void Node_CopyTo_m23193 (Node_t5641 * __this, KeyValuePair_2U5BU5D_t4466* ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
 void Node_CopyTo_m23194 (Node_t5641 * __this, KeyValuePair_2U5BU5D_t4466* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Int32,T[],System.Int32,System.Int32)
 void Node_CopyTo_m23195 (Node_t5641 * __this, int32_t ___index, KeyValuePair_2U5BU5D_t4466* ___array, int32_t ___arrayIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Array,System.Int32)
 void Node_CopyTo_m23196 (Node_t5641 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrueForAll(System.Predicate`1<T>)
 bool Node_TrueForAll_m23197 (Node_t5641 * __this, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Exists(System.Predicate`1<T>)
 bool Node_Exists_m23198 (Node_t5641 * __this, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
 KeyValuePair_2_t4473  Node_Find_m23199 (Node_t5641 * __this, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindAll(System.Predicate`1<T>)
 ImmutableList_1_t5649 * Node_FindAll_m23200 (Node_t5641 * __this, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindIndex(System.Predicate`1<T>)
 int32_t Node_FindIndex_m23201 (Node_t5641 * __this, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindIndex(System.Int32,System.Predicate`1<T>)
 int32_t Node_FindIndex_m23202 (Node_t5641 * __this, int32_t ___startIndex, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t Node_FindIndex_m23203 (Node_t5641 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindLast(System.Predicate`1<T>)
 KeyValuePair_2_t4473  Node_FindLast_m23204 (Node_t5641 * __this, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindLastIndex(System.Predicate`1<T>)
 int32_t Node_FindLastIndex_m23205 (Node_t5641 * __this, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindLastIndex(System.Int32,System.Predicate`1<T>)
 int32_t Node_FindLastIndex_m23206 (Node_t5641 * __this, int32_t ___startIndex, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindLastIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t Node_FindLastIndex_m23207 (Node_t5641 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Freeze()
 void Node_Freeze_m23208 (Node_t5641 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RotateLeft(System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t5641 * Node_RotateLeft_m23209 (Object_t * __this/* static, unused */, Node_t5641 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RotateRight(System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t5641 * Node_RotateRight_m23210 (Object_t * __this/* static, unused */, Node_t5641 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::DoubleLeft(System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t5641 * Node_DoubleLeft_m23211 (Object_t * __this/* static, unused */, Node_t5641 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::DoubleRight(System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t5641 * Node_DoubleRight_m23212 (Object_t * __this/* static, unused */, Node_t5641 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Balance(System.Collections.Immutable.ImmutableList`1/Node<T>)
 int32_t Node_Balance_m23213 (Object_t * __this/* static, unused */, Node_t5641 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IsRightHeavy(System.Collections.Immutable.ImmutableList`1/Node<T>)
 bool Node_IsRightHeavy_m23214 (Object_t * __this/* static, unused */, Node_t5641 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IsLeftHeavy(System.Collections.Immutable.ImmutableList`1/Node<T>)
 bool Node_IsLeftHeavy_m23215 (Object_t * __this/* static, unused */, Node_t5641 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MakeBalanced(System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t5641 * Node_MakeBalanced_m23216 (Object_t * __this/* static, unused */, Node_t5641 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BalanceNode(System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t5641 * Node_BalanceNode_m23217 (Object_t * __this/* static, unused */, Node_t5641 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Mutate(System.Collections.Immutable.ImmutableList`1/Node<T>,System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t5641 * Node_Mutate_m23218 (Node_t5641 * __this, Node_t5641 * ___left, Node_t5641 * ___right, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Mutate(T)
 Node_t5641 * Node_Mutate_m23219 (Node_t5641 * __this, KeyValuePair_2_t4473  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
 void Node__cctor_m23220 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
