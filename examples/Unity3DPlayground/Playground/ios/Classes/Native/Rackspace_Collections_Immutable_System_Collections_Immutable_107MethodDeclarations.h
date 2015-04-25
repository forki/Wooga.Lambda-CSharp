#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableList`1/Node<System.Object>
struct Node_t5535;
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
// System.Collections.Immutable.ImmutableList`1/Builder<System.Object>
struct Builder_t5537;
// System.Collections.Immutable.IOrderedCollection`1<System.Object>
struct IOrderedCollection_1_t5542;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t4557;
// System.Predicate`1<System.Object>
struct Predicate_1_t4554;
// System.Comparison`1<System.Object>
struct Comparison_1_t4556;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t4559;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4468;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Array
struct Array_t;
// System.Collections.Immutable.ImmutableList`1<System.Object>
struct ImmutableList_1_t5534;
// System.Collections.Immutable.ImmutableList`1/Enumerator<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_106.h"

// System.Void System.Collections.Immutable.ImmutableList`1/Node<System.Object>::.ctor()
 void Node__ctor_m22210_gshared (Node_t5535 * __this, MethodInfo* method);
#define Node__ctor_m22210(__this, method) (void)Node__ctor_m22210_gshared((Node_t5535 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Node<System.Object>::.ctor(T,System.Collections.Immutable.ImmutableList`1/Node<T>,System.Collections.Immutable.ImmutableList`1/Node<T>,System.Boolean)
 void Node__ctor_m22211_gshared (Node_t5535 * __this, Object_t * ___key, Node_t5535 * ___left, Node_t5535 * ___right, bool ___frozen, MethodInfo* method);
#define Node__ctor_m22211(__this, ___key, ___left, ___right, ___frozen, method) (void)Node__ctor_m22211_gshared((Node_t5535 *)__this, (Object_t *)___key, (Node_t5535 *)___left, (Node_t5535 *)___right, (bool)___frozen, method)
// System.Boolean System.Collections.Immutable.ImmutableList`1/Node<System.Object>::get_IsEmpty()
 bool Node_get_IsEmpty_m22212_gshared (Node_t5535 * __this, MethodInfo* method);
#define Node_get_IsEmpty_m22212(__this, method) (bool)Node_get_IsEmpty_m22212_gshared((Node_t5535 *)__this, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Object>::get_Height()
 int32_t Node_get_Height_m22213_gshared (Node_t5535 * __this, MethodInfo* method);
#define Node_get_Height_m22213(__this, method) (int32_t)Node_get_Height_m22213_gshared((Node_t5535 *)__this, method)
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::get_Left()
 Node_t5535 * Node_get_Left_m22214_gshared (Node_t5535 * __this, MethodInfo* method);
#define Node_get_Left_m22214(__this, method) (Node_t5535 *)Node_get_Left_m22214_gshared((Node_t5535 *)__this, method)
// System.Collections.Immutable.IBinaryTree System.Collections.Immutable.ImmutableList`1/Node<System.Object>::System.Collections.Immutable.IBinaryTree.get_Left()
 Object_t * Node_System_Collections_Immutable_IBinaryTree_get_Left_m22215_gshared (Node_t5535 * __this, MethodInfo* method);
#define Node_System_Collections_Immutable_IBinaryTree_get_Left_m22215(__this, method) (Object_t *)Node_System_Collections_Immutable_IBinaryTree_get_Left_m22215_gshared((Node_t5535 *)__this, method)
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::get_Right()
 Node_t5535 * Node_get_Right_m22216_gshared (Node_t5535 * __this, MethodInfo* method);
#define Node_get_Right_m22216(__this, method) (Node_t5535 *)Node_get_Right_m22216_gshared((Node_t5535 *)__this, method)
// System.Collections.Immutable.IBinaryTree System.Collections.Immutable.ImmutableList`1/Node<System.Object>::System.Collections.Immutable.IBinaryTree.get_Right()
 Object_t * Node_System_Collections_Immutable_IBinaryTree_get_Right_m22217_gshared (Node_t5535 * __this, MethodInfo* method);
#define Node_System_Collections_Immutable_IBinaryTree_get_Right_m22217(__this, method) (Object_t *)Node_System_Collections_Immutable_IBinaryTree_get_Right_m22217_gshared((Node_t5535 *)__this, method)
// System.Collections.Immutable.IBinaryTree`1<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::System.Collections.Immutable.IBinaryTree<T>.get_Left()
 Object_t* Node_System_Collections_Immutable_IBinaryTreeU3CTU3E_get_Left_m22218_gshared (Node_t5535 * __this, MethodInfo* method);
#define Node_System_Collections_Immutable_IBinaryTreeU3CTU3E_get_Left_m22218(__this, method) (Object_t*)Node_System_Collections_Immutable_IBinaryTreeU3CTU3E_get_Left_m22218_gshared((Node_t5535 *)__this, method)
// System.Collections.Immutable.IBinaryTree`1<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::System.Collections.Immutable.IBinaryTree<T>.get_Right()
 Object_t* Node_System_Collections_Immutable_IBinaryTreeU3CTU3E_get_Right_m22219_gshared (Node_t5535 * __this, MethodInfo* method);
#define Node_System_Collections_Immutable_IBinaryTreeU3CTU3E_get_Right_m22219(__this, method) (Object_t*)Node_System_Collections_Immutable_IBinaryTreeU3CTU3E_get_Right_m22219_gshared((Node_t5535 *)__this, method)
// T System.Collections.Immutable.ImmutableList`1/Node<System.Object>::get_Value()
 Object_t * Node_get_Value_m22220_gshared (Node_t5535 * __this, MethodInfo* method);
#define Node_get_Value_m22220(__this, method) (Object_t *)Node_get_Value_m22220_gshared((Node_t5535 *)__this, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Object>::get_Count()
 int32_t Node_get_Count_m22221_gshared (Node_t5535 * __this, MethodInfo* method);
#define Node_get_Count_m22221(__this, method) (int32_t)Node_get_Count_m22221_gshared((Node_t5535 *)__this, method)
// T System.Collections.Immutable.ImmutableList`1/Node<System.Object>::get_Key()
 Object_t * Node_get_Key_m22222_gshared (Node_t5535 * __this, MethodInfo* method);
#define Node_get_Key_m22222(__this, method) (Object_t *)Node_get_Key_m22222_gshared((Node_t5535 *)__this, method)
// T System.Collections.Immutable.ImmutableList`1/Node<System.Object>::get_Item(System.Int32)
 Object_t * Node_get_Item_m22223_gshared (Node_t5535 * __this, int32_t ___index, MethodInfo* method);
#define Node_get_Item_m22223(__this, ___index, method) (Object_t *)Node_get_Item_m22223_gshared((Node_t5535 *)__this, (int32_t)___index, method)
// System.Collections.Immutable.ImmutableList`1/Enumerator<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::GetEnumerator()
 Enumerator_t5538  Node_GetEnumerator_m22224 (Node_t5535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* Node_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22225_gshared (Node_t5535 * __this, MethodInfo* method);
#define Node_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22225(__this, method) (Object_t*)Node_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22225_gshared((Node_t5535 *)__this, method)
// System.Collections.IEnumerator System.Collections.Immutable.ImmutableList`1/Node<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Node_System_Collections_IEnumerable_GetEnumerator_m22226_gshared (Node_t5535 * __this, MethodInfo* method);
#define Node_System_Collections_IEnumerable_GetEnumerator_m22226(__this, method) (Object_t *)Node_System_Collections_IEnumerable_GetEnumerator_m22226_gshared((Node_t5535 *)__this, method)
// System.Collections.Immutable.ImmutableList`1/Enumerator<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::GetEnumerator(System.Collections.Immutable.ImmutableList`1/Builder<T>)
 Enumerator_t5538  Node_GetEnumerator_m22227 (Node_t5535 * __this, Builder_t5537 * ___builder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::NodeTreeFromList(System.Collections.Immutable.IOrderedCollection`1<T>,System.Int32,System.Int32)
 Node_t5535 * Node_NodeTreeFromList_m22228_gshared (Object_t * __this/* static, unused */, Object_t* ___items, int32_t ___start, int32_t ___length, MethodInfo* method);
#define Node_NodeTreeFromList_m22228(__this/* static, unused */, ___items, ___start, ___length, method) (Node_t5535 *)Node_NodeTreeFromList_m22228_gshared((Object_t *)__this/* static, unused */, (Object_t*)___items, (int32_t)___start, (int32_t)___length, method)
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::Add(T)
 Node_t5535 * Node_Add_m22229_gshared (Node_t5535 * __this, Object_t * ___key, MethodInfo* method);
#define Node_Add_m22229(__this, ___key, method) (Node_t5535 *)Node_Add_m22229_gshared((Node_t5535 *)__this, (Object_t *)___key, method)
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::Insert(System.Int32,T)
 Node_t5535 * Node_Insert_m22230_gshared (Node_t5535 * __this, int32_t ___index, Object_t * ___key, MethodInfo* method);
#define Node_Insert_m22230(__this, ___index, ___key, method) (Node_t5535 *)Node_Insert_m22230_gshared((Node_t5535 *)__this, (int32_t)___index, (Object_t *)___key, method)
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 Node_t5535 * Node_AddRange_m22231_gshared (Node_t5535 * __this, Object_t* ___keys, MethodInfo* method);
#define Node_AddRange_m22231(__this, ___keys, method) (Node_t5535 *)Node_AddRange_m22231_gshared((Node_t5535 *)__this, (Object_t*)___keys, method)
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 Node_t5535 * Node_InsertRange_m22232_gshared (Node_t5535 * __this, int32_t ___index, Object_t* ___keys, MethodInfo* method);
#define Node_InsertRange_m22232(__this, ___index, ___keys, method) (Node_t5535 *)Node_InsertRange_m22232_gshared((Node_t5535 *)__this, (int32_t)___index, (Object_t*)___keys, method)
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::RemoveAt(System.Int32)
 Node_t5535 * Node_RemoveAt_m22233_gshared (Node_t5535 * __this, int32_t ___index, MethodInfo* method);
#define Node_RemoveAt_m22233(__this, ___index, method) (Node_t5535 *)Node_RemoveAt_m22233_gshared((Node_t5535 *)__this, (int32_t)___index, method)
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::RemoveAll(System.Predicate`1<T>)
 Node_t5535 * Node_RemoveAll_m22234_gshared (Node_t5535 * __this, Predicate_1_t4554 * ___match, MethodInfo* method);
#define Node_RemoveAll_m22234(__this, ___match, method) (Node_t5535 *)Node_RemoveAll_m22234_gshared((Node_t5535 *)__this, (Predicate_1_t4554 *)___match, method)
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::ReplaceAt(System.Int32,T)
 Node_t5535 * Node_ReplaceAt_m22235_gshared (Node_t5535 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define Node_ReplaceAt_m22235(__this, ___index, ___value, method) (Node_t5535 *)Node_ReplaceAt_m22235_gshared((Node_t5535 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::Reverse()
 Node_t5535 * Node_Reverse_m22236_gshared (Node_t5535 * __this, MethodInfo* method);
#define Node_Reverse_m22236(__this, method) (Node_t5535 *)Node_Reverse_m22236_gshared((Node_t5535 *)__this, method)
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::Reverse(System.Int32,System.Int32)
 Node_t5535 * Node_Reverse_m22237_gshared (Node_t5535 * __this, int32_t ___index, int32_t ___count, MethodInfo* method);
#define Node_Reverse_m22237(__this, ___index, ___count, method) (Node_t5535 *)Node_Reverse_m22237_gshared((Node_t5535 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::Sort()
 Node_t5535 * Node_Sort_m22238_gshared (Node_t5535 * __this, MethodInfo* method);
#define Node_Sort_m22238(__this, method) (Node_t5535 *)Node_Sort_m22238_gshared((Node_t5535 *)__this, method)
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::Sort(System.Comparison`1<T>)
 Node_t5535 * Node_Sort_m22239_gshared (Node_t5535 * __this, Comparison_1_t4556 * ___comparison, MethodInfo* method);
#define Node_Sort_m22239(__this, ___comparison, method) (Node_t5535 *)Node_Sort_m22239_gshared((Node_t5535 *)__this, (Comparison_1_t4556 *)___comparison, method)
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
 Node_t5535 * Node_Sort_m22240_gshared (Node_t5535 * __this, Object_t* ___comparer, MethodInfo* method);
#define Node_Sort_m22240(__this, ___comparer, method) (Node_t5535 *)Node_Sort_m22240_gshared((Node_t5535 *)__this, (Object_t*)___comparer, method)
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::Sort(System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
 Node_t5535 * Node_Sort_m22241_gshared (Node_t5535 * __this, int32_t ___index, int32_t ___count, Object_t* ___comparer, MethodInfo* method);
#define Node_Sort_m22241(__this, ___index, ___count, ___comparer, method) (Node_t5535 *)Node_Sort_m22241_gshared((Node_t5535 *)__this, (int32_t)___index, (int32_t)___count, (Object_t*)___comparer, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Object>::BinarySearch(System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
 int32_t Node_BinarySearch_m22242_gshared (Node_t5535 * __this, int32_t ___index, int32_t ___count, Object_t * ___item, Object_t* ___comparer, MethodInfo* method);
#define Node_BinarySearch_m22242(__this, ___index, ___count, ___item, ___comparer, method) (int32_t)Node_BinarySearch_m22242_gshared((Node_t5535 *)__this, (int32_t)___index, (int32_t)___count, (Object_t *)___item, (Object_t*)___comparer, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Object>::IndexOf(T,System.Collections.Generic.IEqualityComparer`1<T>)
 int32_t Node_IndexOf_m22243_gshared (Node_t5535 * __this, Object_t * ___item, Object_t* ___equalityComparer, MethodInfo* method);
#define Node_IndexOf_m22243(__this, ___item, ___equalityComparer, method) (int32_t)Node_IndexOf_m22243_gshared((Node_t5535 *)__this, (Object_t *)___item, (Object_t*)___equalityComparer, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Object>::IndexOf(T,System.Int32,System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
 int32_t Node_IndexOf_m22244_gshared (Node_t5535 * __this, Object_t * ___item, int32_t ___index, int32_t ___count, Object_t* ___equalityComparer, MethodInfo* method);
#define Node_IndexOf_m22244(__this, ___item, ___index, ___count, ___equalityComparer, method) (int32_t)Node_IndexOf_m22244_gshared((Node_t5535 *)__this, (Object_t *)___item, (int32_t)___index, (int32_t)___count, (Object_t*)___equalityComparer, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Object>::LastIndexOf(T,System.Int32,System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
 int32_t Node_LastIndexOf_m22245_gshared (Node_t5535 * __this, Object_t * ___item, int32_t ___index, int32_t ___count, Object_t* ___equalityComparer, MethodInfo* method);
#define Node_LastIndexOf_m22245(__this, ___item, ___index, ___count, ___equalityComparer, method) (int32_t)Node_LastIndexOf_m22245_gshared((Node_t5535 *)__this, (Object_t *)___item, (int32_t)___index, (int32_t)___count, (Object_t*)___equalityComparer, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Node<System.Object>::CopyTo(T[])
 void Node_CopyTo_m22246_gshared (Node_t5535 * __this, ObjectU5BU5D_t126* ___array, MethodInfo* method);
#define Node_CopyTo_m22246(__this, ___array, method) (void)Node_CopyTo_m22246_gshared((Node_t5535 *)__this, (ObjectU5BU5D_t126*)___array, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Node<System.Object>::CopyTo(T[],System.Int32)
 void Node_CopyTo_m22247_gshared (Node_t5535 * __this, ObjectU5BU5D_t126* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define Node_CopyTo_m22247(__this, ___array, ___arrayIndex, method) (void)Node_CopyTo_m22247_gshared((Node_t5535 *)__this, (ObjectU5BU5D_t126*)___array, (int32_t)___arrayIndex, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Node<System.Object>::CopyTo(System.Int32,T[],System.Int32,System.Int32)
 void Node_CopyTo_m22248_gshared (Node_t5535 * __this, int32_t ___index, ObjectU5BU5D_t126* ___array, int32_t ___arrayIndex, int32_t ___count, MethodInfo* method);
#define Node_CopyTo_m22248(__this, ___index, ___array, ___arrayIndex, ___count, method) (void)Node_CopyTo_m22248_gshared((Node_t5535 *)__this, (int32_t)___index, (ObjectU5BU5D_t126*)___array, (int32_t)___arrayIndex, (int32_t)___count, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Node<System.Object>::CopyTo(System.Array,System.Int32)
 void Node_CopyTo_m22249_gshared (Node_t5535 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define Node_CopyTo_m22249(__this, ___array, ___arrayIndex, method) (void)Node_CopyTo_m22249_gshared((Node_t5535 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Boolean System.Collections.Immutable.ImmutableList`1/Node<System.Object>::TrueForAll(System.Predicate`1<T>)
 bool Node_TrueForAll_m22250_gshared (Node_t5535 * __this, Predicate_1_t4554 * ___match, MethodInfo* method);
#define Node_TrueForAll_m22250(__this, ___match, method) (bool)Node_TrueForAll_m22250_gshared((Node_t5535 *)__this, (Predicate_1_t4554 *)___match, method)
// System.Boolean System.Collections.Immutable.ImmutableList`1/Node<System.Object>::Exists(System.Predicate`1<T>)
 bool Node_Exists_m22251_gshared (Node_t5535 * __this, Predicate_1_t4554 * ___match, MethodInfo* method);
#define Node_Exists_m22251(__this, ___match, method) (bool)Node_Exists_m22251_gshared((Node_t5535 *)__this, (Predicate_1_t4554 *)___match, method)
// T System.Collections.Immutable.ImmutableList`1/Node<System.Object>::Find(System.Predicate`1<T>)
 Object_t * Node_Find_m22252_gshared (Node_t5535 * __this, Predicate_1_t4554 * ___match, MethodInfo* method);
#define Node_Find_m22252(__this, ___match, method) (Object_t *)Node_Find_m22252_gshared((Node_t5535 *)__this, (Predicate_1_t4554 *)___match, method)
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::FindAll(System.Predicate`1<T>)
 ImmutableList_1_t5534 * Node_FindAll_m22253_gshared (Node_t5535 * __this, Predicate_1_t4554 * ___match, MethodInfo* method);
#define Node_FindAll_m22253(__this, ___match, method) (ImmutableList_1_t5534 *)Node_FindAll_m22253_gshared((Node_t5535 *)__this, (Predicate_1_t4554 *)___match, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Object>::FindIndex(System.Predicate`1<T>)
 int32_t Node_FindIndex_m22254_gshared (Node_t5535 * __this, Predicate_1_t4554 * ___match, MethodInfo* method);
#define Node_FindIndex_m22254(__this, ___match, method) (int32_t)Node_FindIndex_m22254_gshared((Node_t5535 *)__this, (Predicate_1_t4554 *)___match, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Object>::FindIndex(System.Int32,System.Predicate`1<T>)
 int32_t Node_FindIndex_m22255_gshared (Node_t5535 * __this, int32_t ___startIndex, Predicate_1_t4554 * ___match, MethodInfo* method);
#define Node_FindIndex_m22255(__this, ___startIndex, ___match, method) (int32_t)Node_FindIndex_m22255_gshared((Node_t5535 *)__this, (int32_t)___startIndex, (Predicate_1_t4554 *)___match, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Object>::FindIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t Node_FindIndex_m22256_gshared (Node_t5535 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t4554 * ___match, MethodInfo* method);
#define Node_FindIndex_m22256(__this, ___startIndex, ___count, ___match, method) (int32_t)Node_FindIndex_m22256_gshared((Node_t5535 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t4554 *)___match, method)
// T System.Collections.Immutable.ImmutableList`1/Node<System.Object>::FindLast(System.Predicate`1<T>)
 Object_t * Node_FindLast_m22257_gshared (Node_t5535 * __this, Predicate_1_t4554 * ___match, MethodInfo* method);
#define Node_FindLast_m22257(__this, ___match, method) (Object_t *)Node_FindLast_m22257_gshared((Node_t5535 *)__this, (Predicate_1_t4554 *)___match, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Object>::FindLastIndex(System.Predicate`1<T>)
 int32_t Node_FindLastIndex_m22258_gshared (Node_t5535 * __this, Predicate_1_t4554 * ___match, MethodInfo* method);
#define Node_FindLastIndex_m22258(__this, ___match, method) (int32_t)Node_FindLastIndex_m22258_gshared((Node_t5535 *)__this, (Predicate_1_t4554 *)___match, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Object>::FindLastIndex(System.Int32,System.Predicate`1<T>)
 int32_t Node_FindLastIndex_m22259_gshared (Node_t5535 * __this, int32_t ___startIndex, Predicate_1_t4554 * ___match, MethodInfo* method);
#define Node_FindLastIndex_m22259(__this, ___startIndex, ___match, method) (int32_t)Node_FindLastIndex_m22259_gshared((Node_t5535 *)__this, (int32_t)___startIndex, (Predicate_1_t4554 *)___match, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Object>::FindLastIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t Node_FindLastIndex_m22260_gshared (Node_t5535 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t4554 * ___match, MethodInfo* method);
#define Node_FindLastIndex_m22260(__this, ___startIndex, ___count, ___match, method) (int32_t)Node_FindLastIndex_m22260_gshared((Node_t5535 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t4554 *)___match, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Node<System.Object>::Freeze()
 void Node_Freeze_m22261_gshared (Node_t5535 * __this, MethodInfo* method);
#define Node_Freeze_m22261(__this, method) (void)Node_Freeze_m22261_gshared((Node_t5535 *)__this, method)
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::RotateLeft(System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t5535 * Node_RotateLeft_m22262_gshared (Object_t * __this/* static, unused */, Node_t5535 * ___tree, MethodInfo* method);
#define Node_RotateLeft_m22262(__this/* static, unused */, ___tree, method) (Node_t5535 *)Node_RotateLeft_m22262_gshared((Object_t *)__this/* static, unused */, (Node_t5535 *)___tree, method)
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::RotateRight(System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t5535 * Node_RotateRight_m22263_gshared (Object_t * __this/* static, unused */, Node_t5535 * ___tree, MethodInfo* method);
#define Node_RotateRight_m22263(__this/* static, unused */, ___tree, method) (Node_t5535 *)Node_RotateRight_m22263_gshared((Object_t *)__this/* static, unused */, (Node_t5535 *)___tree, method)
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::DoubleLeft(System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t5535 * Node_DoubleLeft_m22264_gshared (Object_t * __this/* static, unused */, Node_t5535 * ___tree, MethodInfo* method);
#define Node_DoubleLeft_m22264(__this/* static, unused */, ___tree, method) (Node_t5535 *)Node_DoubleLeft_m22264_gshared((Object_t *)__this/* static, unused */, (Node_t5535 *)___tree, method)
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::DoubleRight(System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t5535 * Node_DoubleRight_m22265_gshared (Object_t * __this/* static, unused */, Node_t5535 * ___tree, MethodInfo* method);
#define Node_DoubleRight_m22265(__this/* static, unused */, ___tree, method) (Node_t5535 *)Node_DoubleRight_m22265_gshared((Object_t *)__this/* static, unused */, (Node_t5535 *)___tree, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Object>::Balance(System.Collections.Immutable.ImmutableList`1/Node<T>)
 int32_t Node_Balance_m22266_gshared (Object_t * __this/* static, unused */, Node_t5535 * ___tree, MethodInfo* method);
#define Node_Balance_m22266(__this/* static, unused */, ___tree, method) (int32_t)Node_Balance_m22266_gshared((Object_t *)__this/* static, unused */, (Node_t5535 *)___tree, method)
// System.Boolean System.Collections.Immutable.ImmutableList`1/Node<System.Object>::IsRightHeavy(System.Collections.Immutable.ImmutableList`1/Node<T>)
 bool Node_IsRightHeavy_m22267_gshared (Object_t * __this/* static, unused */, Node_t5535 * ___tree, MethodInfo* method);
#define Node_IsRightHeavy_m22267(__this/* static, unused */, ___tree, method) (bool)Node_IsRightHeavy_m22267_gshared((Object_t *)__this/* static, unused */, (Node_t5535 *)___tree, method)
// System.Boolean System.Collections.Immutable.ImmutableList`1/Node<System.Object>::IsLeftHeavy(System.Collections.Immutable.ImmutableList`1/Node<T>)
 bool Node_IsLeftHeavy_m22268_gshared (Object_t * __this/* static, unused */, Node_t5535 * ___tree, MethodInfo* method);
#define Node_IsLeftHeavy_m22268(__this/* static, unused */, ___tree, method) (bool)Node_IsLeftHeavy_m22268_gshared((Object_t *)__this/* static, unused */, (Node_t5535 *)___tree, method)
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::MakeBalanced(System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t5535 * Node_MakeBalanced_m22269_gshared (Object_t * __this/* static, unused */, Node_t5535 * ___tree, MethodInfo* method);
#define Node_MakeBalanced_m22269(__this/* static, unused */, ___tree, method) (Node_t5535 *)Node_MakeBalanced_m22269_gshared((Object_t *)__this/* static, unused */, (Node_t5535 *)___tree, method)
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::BalanceNode(System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t5535 * Node_BalanceNode_m22270_gshared (Object_t * __this/* static, unused */, Node_t5535 * ___node, MethodInfo* method);
#define Node_BalanceNode_m22270(__this/* static, unused */, ___node, method) (Node_t5535 *)Node_BalanceNode_m22270_gshared((Object_t *)__this/* static, unused */, (Node_t5535 *)___node, method)
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::Mutate(System.Collections.Immutable.ImmutableList`1/Node<T>,System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t5535 * Node_Mutate_m22271_gshared (Node_t5535 * __this, Node_t5535 * ___left, Node_t5535 * ___right, MethodInfo* method);
#define Node_Mutate_m22271(__this, ___left, ___right, method) (Node_t5535 *)Node_Mutate_m22271_gshared((Node_t5535 *)__this, (Node_t5535 *)___left, (Node_t5535 *)___right, method)
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::Mutate(T)
 Node_t5535 * Node_Mutate_m22272_gshared (Node_t5535 * __this, Object_t * ___value, MethodInfo* method);
#define Node_Mutate_m22272(__this, ___value, method) (Node_t5535 *)Node_Mutate_m22272_gshared((Node_t5535 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Node<System.Object>::.cctor()
 void Node__cctor_m22273_gshared (Object_t * __this/* static, unused */, MethodInfo* method);
#define Node__cctor_m22273(__this/* static, unused */, method) (void)Node__cctor_m22273_gshared((Object_t *)__this/* static, unused */, method)
