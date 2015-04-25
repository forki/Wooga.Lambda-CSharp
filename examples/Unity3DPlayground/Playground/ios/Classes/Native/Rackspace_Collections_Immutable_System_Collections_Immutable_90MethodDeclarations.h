#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>
struct Enumerator_t4705;
// System.Object
struct Object_t;
// System.Collections.Immutable.ImmutableList`1/Node<System.Int32>
struct Node_t4697;
// System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>
struct Builder_t4699;

// System.Void System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>::.ctor(System.Collections.Immutable.ImmutableList`1/Node<T>,System.Collections.Immutable.ImmutableList`1/Builder<T>,System.Int32,System.Int32,System.Boolean)
 void Enumerator__ctor_m16156 (Enumerator_t4705 * __this, Node_t4697 * ___root, Builder_t4699 * ___builder, int32_t ___startIndex, int32_t ___count, bool ___reversed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>::System.Collections.Immutable.ISecurePooledObjectUser.get_PoolUserId()
 int32_t Enumerator_System_Collections_Immutable_ISecurePooledObjectUser_get_PoolUserId_m16157 (Enumerator_t4705 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>::get_Current()
 int32_t Enumerator_get_Current_m16158 (Enumerator_t4705 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>::System.Collections.IEnumerator.get_Current()
 Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m16159 (Enumerator_t4705 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>::Dispose()
 void Enumerator_Dispose_m16160 (Enumerator_t4705 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>::MoveNext()
 bool Enumerator_MoveNext_m16161 (Enumerator_t4705 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>::Reset()
 void Enumerator_Reset_m16162 (Enumerator_t4705 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>::ResetStack()
 void Enumerator_ResetStack_m16163 (Enumerator_t4705 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>::NextBranch(System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t4697 * Enumerator_NextBranch_m16164 (Enumerator_t4705 * __this, Node_t4697 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>::PreviousBranch(System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t4697 * Enumerator_PreviousBranch_m16165 (Enumerator_t4705 * __this, Node_t4697 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>::ThrowIfDisposed()
 void Enumerator_ThrowIfDisposed_m16166 (Enumerator_t4705 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>::ThrowIfChanged()
 void Enumerator_ThrowIfChanged_m16167 (Enumerator_t4705 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>::PushNext(System.Collections.Immutable.ImmutableList`1/Node<T>)
 void Enumerator_PushNext_m16168 (Enumerator_t4705 * __this, Node_t4697 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>::.cctor()
 void Enumerator__cctor_m16169 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
