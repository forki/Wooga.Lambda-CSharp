#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableQueue`1<System.Object>
struct ImmutableQueue_1_t5806;
// System.Collections.Immutable.ImmutableStack`1<System.Object>
struct ImmutableStack_1_t5802;
// System.Collections.Immutable.IImmutableQueue`1<System.Object>
struct IImmutableQueue_1_t5807;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t137;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Collections.Immutable.ImmutableQueue`1/Enumerator<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_206.h"

// System.Void System.Collections.Immutable.ImmutableQueue`1<System.Object>::.ctor(System.Collections.Immutable.ImmutableStack`1<T>,System.Collections.Immutable.ImmutableStack`1<T>)
 void ImmutableQueue_1__ctor_m24698_gshared (ImmutableQueue_1_t5806 * __this, ImmutableStack_1_t5802 * ___forward, ImmutableStack_1_t5802 * ___backward, MethodInfo* method);
#define ImmutableQueue_1__ctor_m24698(__this, ___forward, ___backward, method) (void)ImmutableQueue_1__ctor_m24698_gshared((ImmutableQueue_1_t5806 *)__this, (ImmutableStack_1_t5802 *)___forward, (ImmutableStack_1_t5802 *)___backward, method)
// System.Collections.Immutable.ImmutableQueue`1<T> System.Collections.Immutable.ImmutableQueue`1<System.Object>::Clear()
 ImmutableQueue_1_t5806 * ImmutableQueue_1_Clear_m24699_gshared (ImmutableQueue_1_t5806 * __this, MethodInfo* method);
#define ImmutableQueue_1_Clear_m24699(__this, method) (ImmutableQueue_1_t5806 *)ImmutableQueue_1_Clear_m24699_gshared((ImmutableQueue_1_t5806 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableQueue`1<System.Object>::get_IsEmpty()
 bool ImmutableQueue_1_get_IsEmpty_m24700_gshared (ImmutableQueue_1_t5806 * __this, MethodInfo* method);
#define ImmutableQueue_1_get_IsEmpty_m24700(__this, method) (bool)ImmutableQueue_1_get_IsEmpty_m24700_gshared((ImmutableQueue_1_t5806 *)__this, method)
// System.Collections.Immutable.ImmutableQueue`1<T> System.Collections.Immutable.ImmutableQueue`1<System.Object>::get_Empty()
 ImmutableQueue_1_t5806 * ImmutableQueue_1_get_Empty_m24701_gshared (Object_t * __this/* static, unused */, MethodInfo* method);
#define ImmutableQueue_1_get_Empty_m24701(__this/* static, unused */, method) (ImmutableQueue_1_t5806 *)ImmutableQueue_1_get_Empty_m24701_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Immutable.IImmutableQueue`1<T> System.Collections.Immutable.ImmutableQueue`1<System.Object>::System.Collections.Immutable.IImmutableQueue<T>.Clear()
 Object_t* ImmutableQueue_1_System_Collections_Immutable_IImmutableQueueU3CTU3E_Clear_m24702_gshared (ImmutableQueue_1_t5806 * __this, MethodInfo* method);
#define ImmutableQueue_1_System_Collections_Immutable_IImmutableQueueU3CTU3E_Clear_m24702(__this, method) (Object_t*)ImmutableQueue_1_System_Collections_Immutable_IImmutableQueueU3CTU3E_Clear_m24702_gshared((ImmutableQueue_1_t5806 *)__this, method)
// System.Collections.Immutable.ImmutableStack`1<T> System.Collections.Immutable.ImmutableQueue`1<System.Object>::get_BackwardsReversed()
 ImmutableStack_1_t5802 * ImmutableQueue_1_get_BackwardsReversed_m24703_gshared (ImmutableQueue_1_t5806 * __this, MethodInfo* method);
#define ImmutableQueue_1_get_BackwardsReversed_m24703(__this, method) (ImmutableStack_1_t5802 *)ImmutableQueue_1_get_BackwardsReversed_m24703_gshared((ImmutableQueue_1_t5806 *)__this, method)
// T System.Collections.Immutable.ImmutableQueue`1<System.Object>::Peek()
 Object_t * ImmutableQueue_1_Peek_m24704_gshared (ImmutableQueue_1_t5806 * __this, MethodInfo* method);
#define ImmutableQueue_1_Peek_m24704(__this, method) (Object_t *)ImmutableQueue_1_Peek_m24704_gshared((ImmutableQueue_1_t5806 *)__this, method)
// System.Collections.Immutable.ImmutableQueue`1<T> System.Collections.Immutable.ImmutableQueue`1<System.Object>::Enqueue(T)
 ImmutableQueue_1_t5806 * ImmutableQueue_1_Enqueue_m24705_gshared (ImmutableQueue_1_t5806 * __this, Object_t * ___value, MethodInfo* method);
#define ImmutableQueue_1_Enqueue_m24705(__this, ___value, method) (ImmutableQueue_1_t5806 *)ImmutableQueue_1_Enqueue_m24705_gshared((ImmutableQueue_1_t5806 *)__this, (Object_t *)___value, method)
// System.Collections.Immutable.IImmutableQueue`1<T> System.Collections.Immutable.ImmutableQueue`1<System.Object>::System.Collections.Immutable.IImmutableQueue<T>.Enqueue(T)
 Object_t* ImmutableQueue_1_System_Collections_Immutable_IImmutableQueueU3CTU3E_Enqueue_m24706_gshared (ImmutableQueue_1_t5806 * __this, Object_t * ___value, MethodInfo* method);
#define ImmutableQueue_1_System_Collections_Immutable_IImmutableQueueU3CTU3E_Enqueue_m24706(__this, ___value, method) (Object_t*)ImmutableQueue_1_System_Collections_Immutable_IImmutableQueueU3CTU3E_Enqueue_m24706_gshared((ImmutableQueue_1_t5806 *)__this, (Object_t *)___value, method)
// System.Collections.Immutable.ImmutableQueue`1<T> System.Collections.Immutable.ImmutableQueue`1<System.Object>::Dequeue()
 ImmutableQueue_1_t5806 * ImmutableQueue_1_Dequeue_m24707_gshared (ImmutableQueue_1_t5806 * __this, MethodInfo* method);
#define ImmutableQueue_1_Dequeue_m24707(__this, method) (ImmutableQueue_1_t5806 *)ImmutableQueue_1_Dequeue_m24707_gshared((ImmutableQueue_1_t5806 *)__this, method)
// System.Collections.Immutable.ImmutableQueue`1<T> System.Collections.Immutable.ImmutableQueue`1<System.Object>::Dequeue(T&)
 ImmutableQueue_1_t5806 * ImmutableQueue_1_Dequeue_m24708_gshared (ImmutableQueue_1_t5806 * __this, Object_t ** ___value, MethodInfo* method);
#define ImmutableQueue_1_Dequeue_m24708(__this, ___value, method) (ImmutableQueue_1_t5806 *)ImmutableQueue_1_Dequeue_m24708_gshared((ImmutableQueue_1_t5806 *)__this, (Object_t **)___value, method)
// System.Collections.Immutable.IImmutableQueue`1<T> System.Collections.Immutable.ImmutableQueue`1<System.Object>::System.Collections.Immutable.IImmutableQueue<T>.Dequeue()
 Object_t* ImmutableQueue_1_System_Collections_Immutable_IImmutableQueueU3CTU3E_Dequeue_m24709_gshared (ImmutableQueue_1_t5806 * __this, MethodInfo* method);
#define ImmutableQueue_1_System_Collections_Immutable_IImmutableQueueU3CTU3E_Dequeue_m24709(__this, method) (Object_t*)ImmutableQueue_1_System_Collections_Immutable_IImmutableQueueU3CTU3E_Dequeue_m24709_gshared((ImmutableQueue_1_t5806 *)__this, method)
// System.Collections.Immutable.ImmutableQueue`1/Enumerator<T> System.Collections.Immutable.ImmutableQueue`1<System.Object>::GetEnumerator()
 Enumerator_t5808  ImmutableQueue_1_GetEnumerator_m24710 (ImmutableQueue_1_t5806 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Immutable.ImmutableQueue`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* ImmutableQueue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24711_gshared (ImmutableQueue_1_t5806 * __this, MethodInfo* method);
#define ImmutableQueue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24711(__this, method) (Object_t*)ImmutableQueue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24711_gshared((ImmutableQueue_1_t5806 *)__this, method)
// System.Collections.IEnumerator System.Collections.Immutable.ImmutableQueue`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ImmutableQueue_1_System_Collections_IEnumerable_GetEnumerator_m24712_gshared (ImmutableQueue_1_t5806 * __this, MethodInfo* method);
#define ImmutableQueue_1_System_Collections_IEnumerable_GetEnumerator_m24712(__this, method) (Object_t *)ImmutableQueue_1_System_Collections_IEnumerable_GetEnumerator_m24712_gshared((ImmutableQueue_1_t5806 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableQueue`1<System.Object>::.cctor()
 void ImmutableQueue_1__cctor_m24713_gshared (Object_t * __this/* static, unused */, MethodInfo* method);
#define ImmutableQueue_1__cctor_m24713(__this/* static, unused */, method) (void)ImmutableQueue_1__cctor_m24713_gshared((Object_t *)__this/* static, unused */, method)
