#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableList`1/Enumerator<System.Object>
struct Enumerator_t5538;
// System.Object
struct Object_t;
// System.Collections.Immutable.ImmutableList`1/Node<System.Object>
struct Node_t5535;
// System.Collections.Immutable.ImmutableList`1/Builder<System.Object>
struct Builder_t5537;

// System.Void System.Collections.Immutable.ImmutableList`1/Enumerator<System.Object>::.ctor(System.Collections.Immutable.ImmutableList`1/Node<T>,System.Collections.Immutable.ImmutableList`1/Builder<T>,System.Int32,System.Int32,System.Boolean)
 void Enumerator__ctor_m22196_gshared (Enumerator_t5538 * __this, Node_t5535 * ___root, Builder_t5537 * ___builder, int32_t ___startIndex, int32_t ___count, bool ___reversed, MethodInfo* method);
#define Enumerator__ctor_m22196(__this, ___root, ___builder, ___startIndex, ___count, ___reversed, method) (void)Enumerator__ctor_m22196_gshared((Enumerator_t5538 *)__this, (Node_t5535 *)___root, (Builder_t5537 *)___builder, (int32_t)___startIndex, (int32_t)___count, (bool)___reversed, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Enumerator<System.Object>::System.Collections.Immutable.ISecurePooledObjectUser.get_PoolUserId()
 int32_t Enumerator_System_Collections_Immutable_ISecurePooledObjectUser_get_PoolUserId_m22197_gshared (Enumerator_t5538 * __this, MethodInfo* method);
#define Enumerator_System_Collections_Immutable_ISecurePooledObjectUser_get_PoolUserId_m22197(__this, method) (int32_t)Enumerator_System_Collections_Immutable_ISecurePooledObjectUser_get_PoolUserId_m22197_gshared((Enumerator_t5538 *)__this, method)
// T System.Collections.Immutable.ImmutableList`1/Enumerator<System.Object>::get_Current()
 Object_t * Enumerator_get_Current_m22198_gshared (Enumerator_t5538 * __this, MethodInfo* method);
#define Enumerator_get_Current_m22198(__this, method) (Object_t *)Enumerator_get_Current_m22198_gshared((Enumerator_t5538 *)__this, method)
// System.Object System.Collections.Immutable.ImmutableList`1/Enumerator<System.Object>::System.Collections.IEnumerator.get_Current()
 Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m22199_gshared (Enumerator_t5538 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m22199(__this, method) (Object_t *)Enumerator_System_Collections_IEnumerator_get_Current_m22199_gshared((Enumerator_t5538 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Enumerator<System.Object>::Dispose()
 void Enumerator_Dispose_m22200_gshared (Enumerator_t5538 * __this, MethodInfo* method);
#define Enumerator_Dispose_m22200(__this, method) (void)Enumerator_Dispose_m22200_gshared((Enumerator_t5538 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableList`1/Enumerator<System.Object>::MoveNext()
 bool Enumerator_MoveNext_m22201_gshared (Enumerator_t5538 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m22201(__this, method) (bool)Enumerator_MoveNext_m22201_gshared((Enumerator_t5538 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Enumerator<System.Object>::Reset()
 void Enumerator_Reset_m22202_gshared (Enumerator_t5538 * __this, MethodInfo* method);
#define Enumerator_Reset_m22202(__this, method) (void)Enumerator_Reset_m22202_gshared((Enumerator_t5538 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Enumerator<System.Object>::ResetStack()
 void Enumerator_ResetStack_m22203_gshared (Enumerator_t5538 * __this, MethodInfo* method);
#define Enumerator_ResetStack_m22203(__this, method) (void)Enumerator_ResetStack_m22203_gshared((Enumerator_t5538 *)__this, method)
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Enumerator<System.Object>::NextBranch(System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t5535 * Enumerator_NextBranch_m22204_gshared (Enumerator_t5538 * __this, Node_t5535 * ___node, MethodInfo* method);
#define Enumerator_NextBranch_m22204(__this, ___node, method) (Node_t5535 *)Enumerator_NextBranch_m22204_gshared((Enumerator_t5538 *)__this, (Node_t5535 *)___node, method)
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Enumerator<System.Object>::PreviousBranch(System.Collections.Immutable.ImmutableList`1/Node<T>)
 Node_t5535 * Enumerator_PreviousBranch_m22205_gshared (Enumerator_t5538 * __this, Node_t5535 * ___node, MethodInfo* method);
#define Enumerator_PreviousBranch_m22205(__this, ___node, method) (Node_t5535 *)Enumerator_PreviousBranch_m22205_gshared((Enumerator_t5538 *)__this, (Node_t5535 *)___node, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Enumerator<System.Object>::ThrowIfDisposed()
 void Enumerator_ThrowIfDisposed_m22206_gshared (Enumerator_t5538 * __this, MethodInfo* method);
#define Enumerator_ThrowIfDisposed_m22206(__this, method) (void)Enumerator_ThrowIfDisposed_m22206_gshared((Enumerator_t5538 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Enumerator<System.Object>::ThrowIfChanged()
 void Enumerator_ThrowIfChanged_m22207_gshared (Enumerator_t5538 * __this, MethodInfo* method);
#define Enumerator_ThrowIfChanged_m22207(__this, method) (void)Enumerator_ThrowIfChanged_m22207_gshared((Enumerator_t5538 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Enumerator<System.Object>::PushNext(System.Collections.Immutable.ImmutableList`1/Node<T>)
 void Enumerator_PushNext_m22208_gshared (Enumerator_t5538 * __this, Node_t5535 * ___node, MethodInfo* method);
#define Enumerator_PushNext_m22208(__this, ___node, method) (void)Enumerator_PushNext_m22208_gshared((Enumerator_t5538 *)__this, (Node_t5535 *)___node, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Enumerator<System.Object>::.cctor()
 void Enumerator__cctor_m22209_gshared (Object_t * __this/* static, unused */, MethodInfo* method);
#define Enumerator__cctor_m22209(__this/* static, unused */, method) (void)Enumerator__cctor_m22209_gshared((Object_t *)__this/* static, unused */, method)
