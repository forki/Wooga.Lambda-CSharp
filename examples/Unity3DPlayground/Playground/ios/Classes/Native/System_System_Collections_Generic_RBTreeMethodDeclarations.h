#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.RBTree
struct RBTree_t2945;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.RBTree/Node>
struct IEnumerator_1_t2949;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>
struct List_1_t2948;
// System.Collections.Generic.RBTree/Node
struct Node_t2944;
// System.Collections.Generic.RBTree/NodeEnumerator
#include "System_System_Collections_Generic_RBTree_NodeEnumerator.h"

// System.Void System.Collections.Generic.RBTree::.ctor(System.Object)
 void RBTree__ctor_m6564 (RBTree_t2945 * __this, Object_t * ___hlp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.RBTree/Node> System.Collections.Generic.RBTree::System.Collections.Generic.IEnumerable<System.Collections.Generic.RBTree.Node>.GetEnumerator()
 Object_t* RBTree_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_RBTree_NodeU3E_GetEnumerator_m6565 (RBTree_t2945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.RBTree::System.Collections.IEnumerable.GetEnumerator()
 Object_t * RBTree_System_Collections_IEnumerable_GetEnumerator_m6566 (RBTree_t2945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node> System.Collections.Generic.RBTree::alloc_path()
 List_1_t2948 * RBTree_alloc_path_m6567 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::release_path(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
 void RBTree_release_path_m6568 (Object_t * __this/* static, unused */, List_1_t2948 * ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::Clear()
 void RBTree_Clear_m6569 (RBTree_t2945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.RBTree::get_Count()
 int32_t RBTree_get_Count_m6570 (RBTree_t2945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/NodeEnumerator System.Collections.Generic.RBTree::GetEnumerator()
 NodeEnumerator_t2947  RBTree_GetEnumerator_m6571 (RBTree_t2945 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::do_insert(System.Int32,System.Collections.Generic.RBTree/Node,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
 Node_t2944 * RBTree_do_insert_m6572 (RBTree_t2945 * __this, int32_t ___in_tree_cmp, Node_t2944 * ___current, List_1_t2948 * ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::do_remove(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
 Node_t2944 * RBTree_do_remove_m6573 (RBTree_t2945 * __this, List_1_t2948 * ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_insert(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
 void RBTree_rebalance_insert_m6574 (RBTree_t2945 * __this, List_1_t2948 * ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_delete(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
 void RBTree_rebalance_delete_m6575 (RBTree_t2945 * __this, List_1_t2948 * ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_insert__rotate_final(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
 void RBTree_rebalance_insert__rotate_final_m6576 (RBTree_t2945 * __this, int32_t ___curpos, List_1_t2948 * ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_delete__rotate_final(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
 void RBTree_rebalance_delete__rotate_final_m6577 (RBTree_t2945 * __this, int32_t ___curpos, List_1_t2948 * ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.RBTree::ensure_sibling_black(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
 int32_t RBTree_ensure_sibling_black_m6578 (RBTree_t2945 * __this, int32_t ___curpos, List_1_t2948 * ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::node_reparent(System.Collections.Generic.RBTree/Node,System.Collections.Generic.RBTree/Node,System.UInt32,System.Collections.Generic.RBTree/Node)
 void RBTree_node_reparent_m6579 (RBTree_t2945 * __this, Node_t2944 * ___orig_parent, Node_t2944 * ___orig, uint32_t ___orig_size, Node_t2944 * ___updated, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::right_most(System.Collections.Generic.RBTree/Node,System.Collections.Generic.RBTree/Node,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
 Node_t2944 * RBTree_right_most_m6580 (Object_t * __this/* static, unused */, Node_t2944 * ___current, Node_t2944 * ___sibling, List_1_t2948 * ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
