#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t5650;
// System.Object
struct Object_t;
// System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Node_t5641;
// System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Builder_t5644;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Immutable.ImmutableList`1/Node<T>,System.Collections.Immutable.ImmutableList`1/Builder<T>,System.Int32,System.Int32,System.Boolean)
 void Enumerator__ctor_m23221 (Enumerator_t5650 * __this, Node_t5641 * ___root, Builder_t5644 * ___builder, int32_t ___startIndex, int32_t ___count, bool ___reversed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Immutable.ISecurePooledObjectUser.get_PoolUserId()
 int32_t Enumerator_System_Collections_Immutable_ISecurePooledObjectUser_get_PoolUserId_m23222 (Enumerator_t5650 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
 KeyValuePair_2_t4473  Enumerator_get_Current_m23223 (Enumerator_t5650 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
 Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m23224 (Enumerator_t5650 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
 void Enumerator_Dispose_m23225 (Enumerator_t5650 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
 bool Enumerator_MoveNext_m23226 (Enumerator_t5650 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reset()
 void Enumerator_Reset_m23227 (Enumerator_t5650 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ResetStack()
 void Enumerator_ResetStack_m23228 (Enumerator_t5650 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::NextBranch(System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t5641 * Enumerator_NextBranch_m23229 (Enumerator_t5650 * __this, Node_t5641 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::PreviousBranch(System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t5641 * Enumerator_PreviousBranch_m23230 (Enumerator_t5650 * __this, Node_t5641 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ThrowIfDisposed()
 void Enumerator_ThrowIfDisposed_m23231 (Enumerator_t5650 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ThrowIfChanged()
 void Enumerator_ThrowIfChanged_m23232 (Enumerator_t5650 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::PushNext(System.Collections.Immutable.ImmutableList`1/Node<T>)
 void Enumerator_PushNext_m23233 (Enumerator_t5650 * __this, Node_t5641 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
 void Enumerator__cctor_m23234 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
