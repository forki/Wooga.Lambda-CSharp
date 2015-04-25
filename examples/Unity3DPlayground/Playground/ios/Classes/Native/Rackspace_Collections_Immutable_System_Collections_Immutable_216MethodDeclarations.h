#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>
struct Node_t5818;
// System.Collections.Immutable.IBinaryTree
struct IBinaryTree_t960;
// System.Collections.Immutable.IBinaryTree`1<System.Object>
struct IBinaryTree_1_t5541;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t137;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>
struct Builder_t5819;
// System.Collections.Generic.SortedSet`1<System.Object>
struct SortedSet_1_t5495;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Array
struct Array_t;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t4559;
// System.Collections.Immutable.IOrderedCollection`1<System.Object>
struct IOrderedCollection_1_t5542;
// System.Collections.Immutable.ImmutableSortedSet`1/Enumerator<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_215.h"

// System.Void System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::.ctor()
 void Node__ctor_m24827_gshared (Node_t5818 * __this, MethodInfo* method);
#define Node__ctor_m24827(__this, method) (void)Node__ctor_m24827_gshared((Node_t5818 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::.ctor(T,System.Collections.Immutable.ImmutableSortedSet`1/Node<T>,System.Collections.Immutable.ImmutableSortedSet`1/Node<T>,System.Boolean)
 void Node__ctor_m24828_gshared (Node_t5818 * __this, Object_t * ___key, Node_t5818 * ___left, Node_t5818 * ___right, bool ___frozen, MethodInfo* method);
#define Node__ctor_m24828(__this, ___key, ___left, ___right, ___frozen, method) (void)Node__ctor_m24828_gshared((Node_t5818 *)__this, (Object_t *)___key, (Node_t5818 *)___left, (Node_t5818 *)___right, (bool)___frozen, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::get_IsEmpty()
 bool Node_get_IsEmpty_m24829_gshared (Node_t5818 * __this, MethodInfo* method);
#define Node_get_IsEmpty_m24829(__this, method) (bool)Node_get_IsEmpty_m24829_gshared((Node_t5818 *)__this, method)
// System.Int32 System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::get_Height()
 int32_t Node_get_Height_m24830_gshared (Node_t5818 * __this, MethodInfo* method);
#define Node_get_Height_m24830(__this, method) (int32_t)Node_get_Height_m24830_gshared((Node_t5818 *)__this, method)
// System.Collections.Immutable.ImmutableSortedSet`1/Node<T> System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::get_Left()
 Node_t5818 * Node_get_Left_m24831_gshared (Node_t5818 * __this, MethodInfo* method);
#define Node_get_Left_m24831(__this, method) (Node_t5818 *)Node_get_Left_m24831_gshared((Node_t5818 *)__this, method)
// System.Collections.Immutable.IBinaryTree System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::System.Collections.Immutable.IBinaryTree.get_Left()
 Object_t * Node_System_Collections_Immutable_IBinaryTree_get_Left_m24832_gshared (Node_t5818 * __this, MethodInfo* method);
#define Node_System_Collections_Immutable_IBinaryTree_get_Left_m24832(__this, method) (Object_t *)Node_System_Collections_Immutable_IBinaryTree_get_Left_m24832_gshared((Node_t5818 *)__this, method)
// System.Collections.Immutable.ImmutableSortedSet`1/Node<T> System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::get_Right()
 Node_t5818 * Node_get_Right_m24833_gshared (Node_t5818 * __this, MethodInfo* method);
#define Node_get_Right_m24833(__this, method) (Node_t5818 *)Node_get_Right_m24833_gshared((Node_t5818 *)__this, method)
// System.Collections.Immutable.IBinaryTree System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::System.Collections.Immutable.IBinaryTree.get_Right()
 Object_t * Node_System_Collections_Immutable_IBinaryTree_get_Right_m24834_gshared (Node_t5818 * __this, MethodInfo* method);
#define Node_System_Collections_Immutable_IBinaryTree_get_Right_m24834(__this, method) (Object_t *)Node_System_Collections_Immutable_IBinaryTree_get_Right_m24834_gshared((Node_t5818 *)__this, method)
// System.Collections.Immutable.IBinaryTree`1<T> System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::System.Collections.Immutable.IBinaryTree<T>.get_Left()
 Object_t* Node_System_Collections_Immutable_IBinaryTreeU3CTU3E_get_Left_m24835_gshared (Node_t5818 * __this, MethodInfo* method);
#define Node_System_Collections_Immutable_IBinaryTreeU3CTU3E_get_Left_m24835(__this, method) (Object_t*)Node_System_Collections_Immutable_IBinaryTreeU3CTU3E_get_Left_m24835_gshared((Node_t5818 *)__this, method)
// System.Collections.Immutable.IBinaryTree`1<T> System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::System.Collections.Immutable.IBinaryTree<T>.get_Right()
 Object_t* Node_System_Collections_Immutable_IBinaryTreeU3CTU3E_get_Right_m24836_gshared (Node_t5818 * __this, MethodInfo* method);
#define Node_System_Collections_Immutable_IBinaryTreeU3CTU3E_get_Right_m24836(__this, method) (Object_t*)Node_System_Collections_Immutable_IBinaryTreeU3CTU3E_get_Right_m24836_gshared((Node_t5818 *)__this, method)
// T System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::get_Value()
 Object_t * Node_get_Value_m24837_gshared (Node_t5818 * __this, MethodInfo* method);
#define Node_get_Value_m24837(__this, method) (Object_t *)Node_get_Value_m24837_gshared((Node_t5818 *)__this, method)
// System.Int32 System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::get_Count()
 int32_t Node_get_Count_m24838_gshared (Node_t5818 * __this, MethodInfo* method);
#define Node_get_Count_m24838(__this, method) (int32_t)Node_get_Count_m24838_gshared((Node_t5818 *)__this, method)
// T System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::get_Key()
 Object_t * Node_get_Key_m24839_gshared (Node_t5818 * __this, MethodInfo* method);
#define Node_get_Key_m24839(__this, method) (Object_t *)Node_get_Key_m24839_gshared((Node_t5818 *)__this, method)
// T System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::get_Max()
 Object_t * Node_get_Max_m24840_gshared (Node_t5818 * __this, MethodInfo* method);
#define Node_get_Max_m24840(__this, method) (Object_t *)Node_get_Max_m24840_gshared((Node_t5818 *)__this, method)
// T System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::get_Min()
 Object_t * Node_get_Min_m24841_gshared (Node_t5818 * __this, MethodInfo* method);
#define Node_get_Min_m24841(__this, method) (Object_t *)Node_get_Min_m24841_gshared((Node_t5818 *)__this, method)
// T System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::get_Item(System.Int32)
 Object_t * Node_get_Item_m24842_gshared (Node_t5818 * __this, int32_t ___index, MethodInfo* method);
#define Node_get_Item_m24842(__this, ___index, method) (Object_t *)Node_get_Item_m24842_gshared((Node_t5818 *)__this, (int32_t)___index, method)
// System.Collections.Immutable.ImmutableSortedSet`1/Enumerator<T> System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::GetEnumerator()
 Enumerator_t5820  Node_GetEnumerator_m24843 (Node_t5818 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* Node_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24844_gshared (Node_t5818 * __this, MethodInfo* method);
#define Node_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24844(__this, method) (Object_t*)Node_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24844_gshared((Node_t5818 *)__this, method)
// System.Collections.IEnumerator System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Node_System_Collections_IEnumerable_GetEnumerator_m24845_gshared (Node_t5818 * __this, MethodInfo* method);
#define Node_System_Collections_IEnumerable_GetEnumerator_m24845(__this, method) (Object_t *)Node_System_Collections_IEnumerable_GetEnumerator_m24845_gshared((Node_t5818 *)__this, method)
// System.Collections.Immutable.ImmutableSortedSet`1/Enumerator<T> System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::GetEnumerator(System.Collections.Immutable.ImmutableSortedSet`1/Builder<T>)
 Enumerator_t5820  Node_GetEnumerator_m24846 (Node_t5818 * __this, Builder_t5819 * ___builder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableSortedSet`1/Node<T> System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::NodeTreeFromSortedSet(System.Collections.Generic.SortedSet`1<T>)
 Node_t5818 * Node_NodeTreeFromSortedSet_m24847_gshared (Object_t * __this/* static, unused */, SortedSet_1_t5495 * ___collection, MethodInfo* method);
#define Node_NodeTreeFromSortedSet_m24847(__this/* static, unused */, ___collection, method) (Node_t5818 *)Node_NodeTreeFromSortedSet_m24847_gshared((Object_t *)__this/* static, unused */, (SortedSet_1_t5495 *)___collection, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::CopyTo(T[],System.Int32)
 void Node_CopyTo_m24848_gshared (Node_t5818 * __this, ObjectU5BU5D_t126* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define Node_CopyTo_m24848(__this, ___array, ___arrayIndex, method) (void)Node_CopyTo_m24848_gshared((Node_t5818 *)__this, (ObjectU5BU5D_t126*)___array, (int32_t)___arrayIndex, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::CopyTo(System.Array,System.Int32)
 void Node_CopyTo_m24849_gshared (Node_t5818 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define Node_CopyTo_m24849(__this, ___array, ___arrayIndex, method) (void)Node_CopyTo_m24849_gshared((Node_t5818 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.Immutable.ImmutableSortedSet`1/Node<T> System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::Add(T,System.Collections.Generic.IComparer`1<T>,System.Boolean&)
 Node_t5818 * Node_Add_m24850_gshared (Node_t5818 * __this, Object_t * ___key, Object_t* ___comparer, bool* ___mutated, MethodInfo* method);
#define Node_Add_m24850(__this, ___key, ___comparer, ___mutated, method) (Node_t5818 *)Node_Add_m24850_gshared((Node_t5818 *)__this, (Object_t *)___key, (Object_t*)___comparer, (bool*)___mutated, method)
// System.Collections.Immutable.ImmutableSortedSet`1/Node<T> System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::Remove(T,System.Collections.Generic.IComparer`1<T>,System.Boolean&)
 Node_t5818 * Node_Remove_m24851_gshared (Node_t5818 * __this, Object_t * ___key, Object_t* ___comparer, bool* ___mutated, MethodInfo* method);
#define Node_Remove_m24851(__this, ___key, ___comparer, ___mutated, method) (Node_t5818 *)Node_Remove_m24851_gshared((Node_t5818 *)__this, (Object_t *)___key, (Object_t*)___comparer, (bool*)___mutated, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::Contains(T,System.Collections.Generic.IComparer`1<T>)
 bool Node_Contains_m24852_gshared (Node_t5818 * __this, Object_t * ___key, Object_t* ___comparer, MethodInfo* method);
#define Node_Contains_m24852(__this, ___key, ___comparer, method) (bool)Node_Contains_m24852_gshared((Node_t5818 *)__this, (Object_t *)___key, (Object_t*)___comparer, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::Freeze()
 void Node_Freeze_m24853_gshared (Node_t5818 * __this, MethodInfo* method);
#define Node_Freeze_m24853(__this, method) (void)Node_Freeze_m24853_gshared((Node_t5818 *)__this, method)
// System.Collections.Immutable.ImmutableSortedSet`1/Node<T> System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::Search(T,System.Collections.Generic.IComparer`1<T>)
 Node_t5818 * Node_Search_m24854_gshared (Node_t5818 * __this, Object_t * ___key, Object_t* ___comparer, MethodInfo* method);
#define Node_Search_m24854(__this, ___key, ___comparer, method) (Node_t5818 *)Node_Search_m24854_gshared((Node_t5818 *)__this, (Object_t *)___key, (Object_t*)___comparer, method)
// System.Int32 System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::IndexOf(T,System.Collections.Generic.IComparer`1<T>)
 int32_t Node_IndexOf_m24855_gshared (Node_t5818 * __this, Object_t * ___key, Object_t* ___comparer, MethodInfo* method);
#define Node_IndexOf_m24855(__this, ___key, ___comparer, method) (int32_t)Node_IndexOf_m24855_gshared((Node_t5818 *)__this, (Object_t *)___key, (Object_t*)___comparer, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::Reverse()
 Object_t* Node_Reverse_m24856_gshared (Node_t5818 * __this, MethodInfo* method);
#define Node_Reverse_m24856(__this, method) (Object_t*)Node_Reverse_m24856_gshared((Node_t5818 *)__this, method)
// System.Collections.Immutable.ImmutableSortedSet`1/Node<T> System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::RotateLeft(System.Collections.Immutable.ImmutableSortedSet`1/Node<T>)
 Node_t5818 * Node_RotateLeft_m24857_gshared (Object_t * __this/* static, unused */, Node_t5818 * ___tree, MethodInfo* method);
#define Node_RotateLeft_m24857(__this/* static, unused */, ___tree, method) (Node_t5818 *)Node_RotateLeft_m24857_gshared((Object_t *)__this/* static, unused */, (Node_t5818 *)___tree, method)
// System.Collections.Immutable.ImmutableSortedSet`1/Node<T> System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::RotateRight(System.Collections.Immutable.ImmutableSortedSet`1/Node<T>)
 Node_t5818 * Node_RotateRight_m24858_gshared (Object_t * __this/* static, unused */, Node_t5818 * ___tree, MethodInfo* method);
#define Node_RotateRight_m24858(__this/* static, unused */, ___tree, method) (Node_t5818 *)Node_RotateRight_m24858_gshared((Object_t *)__this/* static, unused */, (Node_t5818 *)___tree, method)
// System.Collections.Immutable.ImmutableSortedSet`1/Node<T> System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::DoubleLeft(System.Collections.Immutable.ImmutableSortedSet`1/Node<T>)
 Node_t5818 * Node_DoubleLeft_m24859_gshared (Object_t * __this/* static, unused */, Node_t5818 * ___tree, MethodInfo* method);
#define Node_DoubleLeft_m24859(__this/* static, unused */, ___tree, method) (Node_t5818 *)Node_DoubleLeft_m24859_gshared((Object_t *)__this/* static, unused */, (Node_t5818 *)___tree, method)
// System.Collections.Immutable.ImmutableSortedSet`1/Node<T> System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::DoubleRight(System.Collections.Immutable.ImmutableSortedSet`1/Node<T>)
 Node_t5818 * Node_DoubleRight_m24860_gshared (Object_t * __this/* static, unused */, Node_t5818 * ___tree, MethodInfo* method);
#define Node_DoubleRight_m24860(__this/* static, unused */, ___tree, method) (Node_t5818 *)Node_DoubleRight_m24860_gshared((Object_t *)__this/* static, unused */, (Node_t5818 *)___tree, method)
// System.Int32 System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::Balance(System.Collections.Immutable.ImmutableSortedSet`1/Node<T>)
 int32_t Node_Balance_m24861_gshared (Object_t * __this/* static, unused */, Node_t5818 * ___tree, MethodInfo* method);
#define Node_Balance_m24861(__this/* static, unused */, ___tree, method) (int32_t)Node_Balance_m24861_gshared((Object_t *)__this/* static, unused */, (Node_t5818 *)___tree, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::IsRightHeavy(System.Collections.Immutable.ImmutableSortedSet`1/Node<T>)
 bool Node_IsRightHeavy_m24862_gshared (Object_t * __this/* static, unused */, Node_t5818 * ___tree, MethodInfo* method);
#define Node_IsRightHeavy_m24862(__this/* static, unused */, ___tree, method) (bool)Node_IsRightHeavy_m24862_gshared((Object_t *)__this/* static, unused */, (Node_t5818 *)___tree, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::IsLeftHeavy(System.Collections.Immutable.ImmutableSortedSet`1/Node<T>)
 bool Node_IsLeftHeavy_m24863_gshared (Object_t * __this/* static, unused */, Node_t5818 * ___tree, MethodInfo* method);
#define Node_IsLeftHeavy_m24863(__this/* static, unused */, ___tree, method) (bool)Node_IsLeftHeavy_m24863_gshared((Object_t *)__this/* static, unused */, (Node_t5818 *)___tree, method)
// System.Collections.Immutable.ImmutableSortedSet`1/Node<T> System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::MakeBalanced(System.Collections.Immutable.ImmutableSortedSet`1/Node<T>)
 Node_t5818 * Node_MakeBalanced_m24864_gshared (Object_t * __this/* static, unused */, Node_t5818 * ___tree, MethodInfo* method);
#define Node_MakeBalanced_m24864(__this/* static, unused */, ___tree, method) (Node_t5818 *)Node_MakeBalanced_m24864_gshared((Object_t *)__this/* static, unused */, (Node_t5818 *)___tree, method)
// System.Collections.Immutable.ImmutableSortedSet`1/Node<T> System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::NodeTreeFromList(System.Collections.Immutable.IOrderedCollection`1<T>,System.Int32,System.Int32)
 Node_t5818 * Node_NodeTreeFromList_m24865_gshared (Object_t * __this/* static, unused */, Object_t* ___items, int32_t ___start, int32_t ___length, MethodInfo* method);
#define Node_NodeTreeFromList_m24865(__this/* static, unused */, ___items, ___start, ___length, method) (Node_t5818 *)Node_NodeTreeFromList_m24865_gshared((Object_t *)__this/* static, unused */, (Object_t*)___items, (int32_t)___start, (int32_t)___length, method)
// System.Collections.Immutable.ImmutableSortedSet`1/Node<T> System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::Mutate(System.Collections.Immutable.ImmutableSortedSet`1/Node<T>,System.Collections.Immutable.ImmutableSortedSet`1/Node<T>)
 Node_t5818 * Node_Mutate_m24866_gshared (Node_t5818 * __this, Node_t5818 * ___left, Node_t5818 * ___right, MethodInfo* method);
#define Node_Mutate_m24866(__this, ___left, ___right, method) (Node_t5818 *)Node_Mutate_m24866_gshared((Node_t5818 *)__this, (Node_t5818 *)___left, (Node_t5818 *)___right, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>::.cctor()
 void Node__cctor_m24867_gshared (Object_t * __this/* static, unused */, MethodInfo* method);
#define Node__cctor_m24867(__this/* static, unused */, method) (void)Node__cctor_m24867_gshared((Object_t *)__this/* static, unused */, method)
