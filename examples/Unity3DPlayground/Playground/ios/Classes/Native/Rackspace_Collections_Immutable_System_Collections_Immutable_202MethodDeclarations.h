#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableStack`1<System.Object>
struct ImmutableStack_1_t5802;
// System.Object
struct Object_t;
// System.Collections.Immutable.IImmutableStack`1<System.Object>
struct IImmutableStack_1_t5803;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t137;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Collections.Immutable.ImmutableStack`1/Enumerator<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_203.h"

// System.Void System.Collections.Immutable.ImmutableStack`1<System.Object>::.ctor()
 void ImmutableStack_1__ctor_m24671_gshared (ImmutableStack_1_t5802 * __this, MethodInfo* method);
#define ImmutableStack_1__ctor_m24671(__this, method) (void)ImmutableStack_1__ctor_m24671_gshared((ImmutableStack_1_t5802 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableStack`1<System.Object>::.ctor(T,System.Collections.Immutable.ImmutableStack`1<T>)
 void ImmutableStack_1__ctor_m24672_gshared (ImmutableStack_1_t5802 * __this, Object_t * ___head, ImmutableStack_1_t5802 * ___tail, MethodInfo* method);
#define ImmutableStack_1__ctor_m24672(__this, ___head, ___tail, method) (void)ImmutableStack_1__ctor_m24672_gshared((ImmutableStack_1_t5802 *)__this, (Object_t *)___head, (ImmutableStack_1_t5802 *)___tail, method)
// System.Collections.Immutable.ImmutableStack`1<T> System.Collections.Immutable.ImmutableStack`1<System.Object>::get_Empty()
 ImmutableStack_1_t5802 * ImmutableStack_1_get_Empty_m24673_gshared (Object_t * __this/* static, unused */, MethodInfo* method);
#define ImmutableStack_1_get_Empty_m24673(__this/* static, unused */, method) (ImmutableStack_1_t5802 *)ImmutableStack_1_get_Empty_m24673_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Immutable.ImmutableStack`1<T> System.Collections.Immutable.ImmutableStack`1<System.Object>::Clear()
 ImmutableStack_1_t5802 * ImmutableStack_1_Clear_m24674_gshared (ImmutableStack_1_t5802 * __this, MethodInfo* method);
#define ImmutableStack_1_Clear_m24674(__this, method) (ImmutableStack_1_t5802 *)ImmutableStack_1_Clear_m24674_gshared((ImmutableStack_1_t5802 *)__this, method)
// System.Collections.Immutable.IImmutableStack`1<T> System.Collections.Immutable.ImmutableStack`1<System.Object>::System.Collections.Immutable.IImmutableStack<T>.Clear()
 Object_t* ImmutableStack_1_System_Collections_Immutable_IImmutableStackU3CTU3E_Clear_m24675_gshared (ImmutableStack_1_t5802 * __this, MethodInfo* method);
#define ImmutableStack_1_System_Collections_Immutable_IImmutableStackU3CTU3E_Clear_m24675(__this, method) (Object_t*)ImmutableStack_1_System_Collections_Immutable_IImmutableStackU3CTU3E_Clear_m24675_gshared((ImmutableStack_1_t5802 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableStack`1<System.Object>::get_IsEmpty()
 bool ImmutableStack_1_get_IsEmpty_m24676_gshared (ImmutableStack_1_t5802 * __this, MethodInfo* method);
#define ImmutableStack_1_get_IsEmpty_m24676(__this, method) (bool)ImmutableStack_1_get_IsEmpty_m24676_gshared((ImmutableStack_1_t5802 *)__this, method)
// T System.Collections.Immutable.ImmutableStack`1<System.Object>::Peek()
 Object_t * ImmutableStack_1_Peek_m24677_gshared (ImmutableStack_1_t5802 * __this, MethodInfo* method);
#define ImmutableStack_1_Peek_m24677(__this, method) (Object_t *)ImmutableStack_1_Peek_m24677_gshared((ImmutableStack_1_t5802 *)__this, method)
// System.Collections.Immutable.ImmutableStack`1<T> System.Collections.Immutable.ImmutableStack`1<System.Object>::Push(T)
 ImmutableStack_1_t5802 * ImmutableStack_1_Push_m24678_gshared (ImmutableStack_1_t5802 * __this, Object_t * ___value, MethodInfo* method);
#define ImmutableStack_1_Push_m24678(__this, ___value, method) (ImmutableStack_1_t5802 *)ImmutableStack_1_Push_m24678_gshared((ImmutableStack_1_t5802 *)__this, (Object_t *)___value, method)
// System.Collections.Immutable.IImmutableStack`1<T> System.Collections.Immutable.ImmutableStack`1<System.Object>::System.Collections.Immutable.IImmutableStack<T>.Push(T)
 Object_t* ImmutableStack_1_System_Collections_Immutable_IImmutableStackU3CTU3E_Push_m24679_gshared (ImmutableStack_1_t5802 * __this, Object_t * ___value, MethodInfo* method);
#define ImmutableStack_1_System_Collections_Immutable_IImmutableStackU3CTU3E_Push_m24679(__this, ___value, method) (Object_t*)ImmutableStack_1_System_Collections_Immutable_IImmutableStackU3CTU3E_Push_m24679_gshared((ImmutableStack_1_t5802 *)__this, (Object_t *)___value, method)
// System.Collections.Immutable.ImmutableStack`1<T> System.Collections.Immutable.ImmutableStack`1<System.Object>::Pop()
 ImmutableStack_1_t5802 * ImmutableStack_1_Pop_m24680_gshared (ImmutableStack_1_t5802 * __this, MethodInfo* method);
#define ImmutableStack_1_Pop_m24680(__this, method) (ImmutableStack_1_t5802 *)ImmutableStack_1_Pop_m24680_gshared((ImmutableStack_1_t5802 *)__this, method)
// System.Collections.Immutable.ImmutableStack`1<T> System.Collections.Immutable.ImmutableStack`1<System.Object>::Pop(T&)
 ImmutableStack_1_t5802 * ImmutableStack_1_Pop_m24681_gshared (ImmutableStack_1_t5802 * __this, Object_t ** ___value, MethodInfo* method);
#define ImmutableStack_1_Pop_m24681(__this, ___value, method) (ImmutableStack_1_t5802 *)ImmutableStack_1_Pop_m24681_gshared((ImmutableStack_1_t5802 *)__this, (Object_t **)___value, method)
// System.Collections.Immutable.IImmutableStack`1<T> System.Collections.Immutable.ImmutableStack`1<System.Object>::System.Collections.Immutable.IImmutableStack<T>.Pop()
 Object_t* ImmutableStack_1_System_Collections_Immutable_IImmutableStackU3CTU3E_Pop_m24682_gshared (ImmutableStack_1_t5802 * __this, MethodInfo* method);
#define ImmutableStack_1_System_Collections_Immutable_IImmutableStackU3CTU3E_Pop_m24682(__this, method) (Object_t*)ImmutableStack_1_System_Collections_Immutable_IImmutableStackU3CTU3E_Pop_m24682_gshared((ImmutableStack_1_t5802 *)__this, method)
// System.Collections.Immutable.ImmutableStack`1/Enumerator<T> System.Collections.Immutable.ImmutableStack`1<System.Object>::GetEnumerator()
 Enumerator_t5804  ImmutableStack_1_GetEnumerator_m24683 (ImmutableStack_1_t5802 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Immutable.ImmutableStack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* ImmutableStack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24684_gshared (ImmutableStack_1_t5802 * __this, MethodInfo* method);
#define ImmutableStack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24684(__this, method) (Object_t*)ImmutableStack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24684_gshared((ImmutableStack_1_t5802 *)__this, method)
// System.Collections.IEnumerator System.Collections.Immutable.ImmutableStack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ImmutableStack_1_System_Collections_IEnumerable_GetEnumerator_m24685_gshared (ImmutableStack_1_t5802 * __this, MethodInfo* method);
#define ImmutableStack_1_System_Collections_IEnumerable_GetEnumerator_m24685(__this, method) (Object_t *)ImmutableStack_1_System_Collections_IEnumerable_GetEnumerator_m24685_gshared((ImmutableStack_1_t5802 *)__this, method)
// System.Collections.Immutable.ImmutableStack`1<T> System.Collections.Immutable.ImmutableStack`1<System.Object>::Reverse()
 ImmutableStack_1_t5802 * ImmutableStack_1_Reverse_m24686_gshared (ImmutableStack_1_t5802 * __this, MethodInfo* method);
#define ImmutableStack_1_Reverse_m24686(__this, method) (ImmutableStack_1_t5802 *)ImmutableStack_1_Reverse_m24686_gshared((ImmutableStack_1_t5802 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableStack`1<System.Object>::.cctor()
 void ImmutableStack_1__cctor_m24687_gshared (Object_t * __this/* static, unused */, MethodInfo* method);
#define ImmutableStack_1__cctor_m24687(__this/* static, unused */, method) (void)ImmutableStack_1__cctor_m24687_gshared((Object_t *)__this/* static, unused */, method)
