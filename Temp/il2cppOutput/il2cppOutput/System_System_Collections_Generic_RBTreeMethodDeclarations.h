#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.RBTree
struct RBTree_t2_12;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.RBTree/Node>
struct IEnumerator_1_t1_953;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>
struct List_1_t1_931;
// System.Collections.Generic.RBTree/Node
struct Node_t2_10;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_RBTree_NodeEnumerator.h"

// System.Void System.Collections.Generic.RBTree::.ctor(System.Object)
extern "C" void RBTree__ctor_m2_28 (RBTree_t2_12 * __this, Object_t * ___hlp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.RBTree/Node> System.Collections.Generic.RBTree::System.Collections.Generic.IEnumerable<System.Collections.Generic.RBTree.Node>.GetEnumerator()
extern "C" Object_t* RBTree_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_RBTree_NodeU3E_GetEnumerator_m2_29 (RBTree_t2_12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.RBTree::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * RBTree_System_Collections_IEnumerable_GetEnumerator_m2_30 (RBTree_t2_12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node> System.Collections.Generic.RBTree::alloc_path()
extern "C" List_1_t1_931 * RBTree_alloc_path_m2_31 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::release_path(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" void RBTree_release_path_m2_32 (Object_t * __this /* static, unused */, List_1_t1_931 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::Clear()
extern "C" void RBTree_Clear_m2_33 (RBTree_t2_12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.RBTree::get_Count()
extern "C" int32_t RBTree_get_Count_m2_34 (RBTree_t2_12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::get_Item(System.Int32)
extern "C" Node_t2_10 * RBTree_get_Item_m2_35 (RBTree_t2_12 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/NodeEnumerator System.Collections.Generic.RBTree::GetEnumerator()
extern "C" NodeEnumerator_t2_11  RBTree_GetEnumerator_m2_36 (RBTree_t2_12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::do_insert(System.Int32,System.Collections.Generic.RBTree/Node,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" Node_t2_10 * RBTree_do_insert_m2_37 (RBTree_t2_12 * __this, int32_t ___in_tree_cmp, Node_t2_10 * ___current, List_1_t1_931 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::do_remove(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" Node_t2_10 * RBTree_do_remove_m2_38 (RBTree_t2_12 * __this, List_1_t1_931 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_insert(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" void RBTree_rebalance_insert_m2_39 (RBTree_t2_12 * __this, List_1_t1_931 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_delete(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" void RBTree_rebalance_delete_m2_40 (RBTree_t2_12 * __this, List_1_t1_931 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_insert__rotate_final(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" void RBTree_rebalance_insert__rotate_final_m2_41 (RBTree_t2_12 * __this, int32_t ___curpos, List_1_t1_931 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_delete__rotate_final(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" void RBTree_rebalance_delete__rotate_final_m2_42 (RBTree_t2_12 * __this, int32_t ___curpos, List_1_t1_931 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.RBTree::ensure_sibling_black(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" int32_t RBTree_ensure_sibling_black_m2_43 (RBTree_t2_12 * __this, int32_t ___curpos, List_1_t1_931 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::node_reparent(System.Collections.Generic.RBTree/Node,System.Collections.Generic.RBTree/Node,System.UInt32,System.Collections.Generic.RBTree/Node)
extern "C" void RBTree_node_reparent_m2_44 (RBTree_t2_12 * __this, Node_t2_10 * ___orig_parent, Node_t2_10 * ___orig, uint32_t ___orig_size, Node_t2_10 * ___updated, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::right_most(System.Collections.Generic.RBTree/Node,System.Collections.Generic.RBTree/Node,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" Node_t2_10 * RBTree_right_most_m2_45 (Object_t * __this /* static, unused */, Node_t2_10 * ___current, Node_t2_10 * ___sibling, List_1_t1_931 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
