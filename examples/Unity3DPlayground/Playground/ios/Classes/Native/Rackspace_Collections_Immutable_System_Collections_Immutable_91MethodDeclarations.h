#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableList`1/Node<System.Int32>
struct Node_t4697;
// System.Collections.Immutable.IBinaryTree
struct IBinaryTree_t960;
// System.Collections.Immutable.IBinaryTree`1<System.Int32>
struct IBinaryTree_1_t4708;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t4704;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>
struct Builder_t4699;
// System.Collections.Immutable.IOrderedCollection`1<System.Int32>
struct IOrderedCollection_1_t4709;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t4700;
// System.Predicate`1<System.Int32>
struct Predicate_1_t1061;
// System.Comparison`1<System.Int32>
struct Comparison_1_t4702;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t4389;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t4701;
// System.Int32[]
struct Int32U5BU5D_t156;
// System.Array
struct Array_t;
// System.Collections.Immutable.ImmutableList`1<System.Int32>
struct ImmutableList_1_t158;
// System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_90.h"

// System.Void System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::.ctor()
 void Node__ctor_m16170 (Node_t4697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::.ctor(T,System.Collections.Immutable.ImmutableList`1/Node<T>,System.Collections.Immutable.ImmutableList`1/Node<T>,System.Boolean)
 void Node__ctor_m16171 (Node_t4697 * __this, int32_t ___key, Node_t4697 * ___left, Node_t4697 * ___right, bool ___frozen, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::get_IsEmpty()
 bool Node_get_IsEmpty_m16172 (Node_t4697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::get_Height()
 int32_t Node_get_Height_m16173 (Node_t4697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::get_Left()
 Node_t4697 * Node_get_Left_m16174 (Node_t4697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IBinaryTree System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::System.Collections.Immutable.IBinaryTree.get_Left()
 Object_t * Node_System_Collections_Immutable_IBinaryTree_get_Left_m16175 (Node_t4697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::get_Right()
 Node_t4697 * Node_get_Right_m16176 (Node_t4697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IBinaryTree System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::System.Collections.Immutable.IBinaryTree.get_Right()
 Object_t * Node_System_Collections_Immutable_IBinaryTree_get_Right_m16177 (Node_t4697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IBinaryTree`1<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::System.Collections.Immutable.IBinaryTree<T>.get_Left()
 Object_t* Node_System_Collections_Immutable_IBinaryTreeU3CTU3E_get_Left_m16178 (Node_t4697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IBinaryTree`1<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::System.Collections.Immutable.IBinaryTree<T>.get_Right()
 Object_t* Node_System_Collections_Immutable_IBinaryTreeU3CTU3E_get_Right_m16179 (Node_t4697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::get_Value()
 int32_t Node_get_Value_m16180 (Node_t4697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::get_Count()
 int32_t Node_get_Count_m16181 (Node_t4697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::get_Key()
 int32_t Node_get_Key_m16182 (Node_t4697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::get_Item(System.Int32)
 int32_t Node_get_Item_m16183 (Node_t4697 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Enumerator<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::GetEnumerator()
 Enumerator_t4705  Node_GetEnumerator_m16184 (Node_t4697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* Node_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16185 (Node_t4697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Node_System_Collections_IEnumerable_GetEnumerator_m16186 (Node_t4697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Enumerator<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::GetEnumerator(System.Collections.Immutable.ImmutableList`1/Builder<T>)
 Enumerator_t4705  Node_GetEnumerator_m16187 (Node_t4697 * __this, Builder_t4699 * ___builder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::NodeTreeFromList(System.Collections.Immutable.IOrderedCollection`1<T>,System.Int32,System.Int32)
 Node_t4697 * Node_NodeTreeFromList_m16188 (Object_t * __this/* static, unused */, Object_t* ___items, int32_t ___start, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::Add(T)
 Node_t4697 * Node_Add_m16189 (Node_t4697 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::Insert(System.Int32,T)
 Node_t4697 * Node_Insert_m16190 (Node_t4697 * __this, int32_t ___index, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 Node_t4697 * Node_AddRange_m16191 (Node_t4697 * __this, Object_t* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 Node_t4697 * Node_InsertRange_m16192 (Node_t4697 * __this, int32_t ___index, Object_t* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::RemoveAt(System.Int32)
 Node_t4697 * Node_RemoveAt_m16193 (Node_t4697 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::RemoveAll(System.Predicate`1<T>)
 Node_t4697 * Node_RemoveAll_m16194 (Node_t4697 * __this, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::ReplaceAt(System.Int32,T)
 Node_t4697 * Node_ReplaceAt_m16195 (Node_t4697 * __this, int32_t ___index, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::Reverse()
 Node_t4697 * Node_Reverse_m16196 (Node_t4697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::Reverse(System.Int32,System.Int32)
 Node_t4697 * Node_Reverse_m16197 (Node_t4697 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::Sort()
 Node_t4697 * Node_Sort_m16198 (Node_t4697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::Sort(System.Comparison`1<T>)
 Node_t4697 * Node_Sort_m16199 (Node_t4697 * __this, Comparison_1_t4702 * ___comparison, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::Sort(System.Collections.Generic.IComparer`1<T>)
 Node_t4697 * Node_Sort_m16200 (Node_t4697 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::Sort(System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
 Node_t4697 * Node_Sort_m16201 (Node_t4697 * __this, int32_t ___index, int32_t ___count, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::BinarySearch(System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
 int32_t Node_BinarySearch_m16202 (Node_t4697 * __this, int32_t ___index, int32_t ___count, int32_t ___item, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::IndexOf(T,System.Collections.Generic.IEqualityComparer`1<T>)
 int32_t Node_IndexOf_m16203 (Node_t4697 * __this, int32_t ___item, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::IndexOf(T,System.Int32,System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
 int32_t Node_IndexOf_m16204 (Node_t4697 * __this, int32_t ___item, int32_t ___index, int32_t ___count, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::LastIndexOf(T,System.Int32,System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
 int32_t Node_LastIndexOf_m16205 (Node_t4697 * __this, int32_t ___item, int32_t ___index, int32_t ___count, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::CopyTo(T[])
 void Node_CopyTo_m16206 (Node_t4697 * __this, Int32U5BU5D_t156* ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::CopyTo(T[],System.Int32)
 void Node_CopyTo_m16207 (Node_t4697 * __this, Int32U5BU5D_t156* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::CopyTo(System.Int32,T[],System.Int32,System.Int32)
 void Node_CopyTo_m16208 (Node_t4697 * __this, int32_t ___index, Int32U5BU5D_t156* ___array, int32_t ___arrayIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::CopyTo(System.Array,System.Int32)
 void Node_CopyTo_m16209 (Node_t4697 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::TrueForAll(System.Predicate`1<T>)
 bool Node_TrueForAll_m16210 (Node_t4697 * __this, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::Exists(System.Predicate`1<T>)
 bool Node_Exists_m16211 (Node_t4697 * __this, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::Find(System.Predicate`1<T>)
 int32_t Node_Find_m16212 (Node_t4697 * __this, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::FindAll(System.Predicate`1<T>)
 ImmutableList_1_t158 * Node_FindAll_m16213 (Node_t4697 * __this, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::FindIndex(System.Predicate`1<T>)
 int32_t Node_FindIndex_m16214 (Node_t4697 * __this, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::FindIndex(System.Int32,System.Predicate`1<T>)
 int32_t Node_FindIndex_m16215 (Node_t4697 * __this, int32_t ___startIndex, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::FindIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t Node_FindIndex_m16216 (Node_t4697 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::FindLast(System.Predicate`1<T>)
 int32_t Node_FindLast_m16217 (Node_t4697 * __this, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::FindLastIndex(System.Predicate`1<T>)
 int32_t Node_FindLastIndex_m16218 (Node_t4697 * __this, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::FindLastIndex(System.Int32,System.Predicate`1<T>)
 int32_t Node_FindLastIndex_m16219 (Node_t4697 * __this, int32_t ___startIndex, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::FindLastIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t Node_FindLastIndex_m16220 (Node_t4697 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::Freeze()
 void Node_Freeze_m16221 (Node_t4697 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::RotateLeft(System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t4697 * Node_RotateLeft_m16222 (Object_t * __this/* static, unused */, Node_t4697 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::RotateRight(System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t4697 * Node_RotateRight_m16223 (Object_t * __this/* static, unused */, Node_t4697 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::DoubleLeft(System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t4697 * Node_DoubleLeft_m16224 (Object_t * __this/* static, unused */, Node_t4697 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::DoubleRight(System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t4697 * Node_DoubleRight_m16225 (Object_t * __this/* static, unused */, Node_t4697 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::Balance(System.Collections.Immutable.ImmutableList`1/Node<T>)
 int32_t Node_Balance_m16226 (Object_t * __this/* static, unused */, Node_t4697 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::IsRightHeavy(System.Collections.Immutable.ImmutableList`1/Node<T>)
 bool Node_IsRightHeavy_m16227 (Object_t * __this/* static, unused */, Node_t4697 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::IsLeftHeavy(System.Collections.Immutable.ImmutableList`1/Node<T>)
 bool Node_IsLeftHeavy_m16228 (Object_t * __this/* static, unused */, Node_t4697 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::MakeBalanced(System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t4697 * Node_MakeBalanced_m16229 (Object_t * __this/* static, unused */, Node_t4697 * ___tree, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::BalanceNode(System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t4697 * Node_BalanceNode_m16230 (Object_t * __this/* static, unused */, Node_t4697 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::Mutate(System.Collections.Immutable.ImmutableList`1/Node<T>,System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t4697 * Node_Mutate_m16231 (Node_t4697 * __this, Node_t4697 * ___left, Node_t4697 * ___right, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::Mutate(T)
 Node_t4697 * Node_Mutate_m16232 (Node_t4697 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Node<System.Int32>::.cctor()
 void Node__cctor_m16233 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
