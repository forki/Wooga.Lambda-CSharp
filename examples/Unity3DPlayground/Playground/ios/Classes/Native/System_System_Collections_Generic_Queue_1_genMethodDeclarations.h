#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t5405;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t137;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Collections.Generic.Queue`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
 void Queue_1__ctor_m21487_gshared (Queue_1_t5405 * __this, MethodInfo* method);
#define Queue_1__ctor_m21487(__this, method) (void)Queue_1__ctor_m21487_gshared((Queue_1_t5405 *)__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Queue_1_System_Collections_ICollection_CopyTo_m21488_gshared (Queue_1_t5405 * __this, Array_t * ___array, int32_t ___idx, MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m21488(__this, ___array, ___idx, method) (void)Queue_1_System_Collections_ICollection_CopyTo_m21488_gshared((Queue_1_t5405 *)__this, (Array_t *)___array, (int32_t)___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
 bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m21489_gshared (Queue_1_t5405 * __this, MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m21489(__this, method) (bool)Queue_1_System_Collections_ICollection_get_IsSynchronized_m21489_gshared((Queue_1_t5405 *)__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m21490_gshared (Queue_1_t5405 * __this, MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m21490(__this, method) (Object_t *)Queue_1_System_Collections_ICollection_get_SyncRoot_m21490_gshared((Queue_1_t5405 *)__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21491_gshared (Queue_1_t5405 * __this, MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21491(__this, method) (Object_t*)Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21491_gshared((Queue_1_t5405 *)__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m21492_gshared (Queue_1_t5405 * __this, MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m21492(__this, method) (Object_t *)Queue_1_System_Collections_IEnumerable_GetEnumerator_m21492_gshared((Queue_1_t5405 *)__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::CopyTo(T[],System.Int32)
 void Queue_1_CopyTo_m21493_gshared (Queue_1_t5405 * __this, ObjectU5BU5D_t126* ___array, int32_t ___idx, MethodInfo* method);
#define Queue_1_CopyTo_m21493(__this, ___array, ___idx, method) (void)Queue_1_CopyTo_m21493_gshared((Queue_1_t5405 *)__this, (ObjectU5BU5D_t126*)___array, (int32_t)___idx, method)
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
 Object_t * Queue_1_Dequeue_m21494_gshared (Queue_1_t5405 * __this, MethodInfo* method);
#define Queue_1_Dequeue_m21494(__this, method) (Object_t *)Queue_1_Dequeue_m21494_gshared((Queue_1_t5405 *)__this, method)
// T System.Collections.Generic.Queue`1<System.Object>::Peek()
 Object_t * Queue_1_Peek_m21495_gshared (Queue_1_t5405 * __this, MethodInfo* method);
#define Queue_1_Peek_m21495(__this, method) (Object_t *)Queue_1_Peek_m21495_gshared((Queue_1_t5405 *)__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
 void Queue_1_Enqueue_m21496_gshared (Queue_1_t5405 * __this, Object_t * ___item, MethodInfo* method);
#define Queue_1_Enqueue_m21496(__this, ___item, method) (void)Queue_1_Enqueue_m21496_gshared((Queue_1_t5405 *)__this, (Object_t *)___item, method)
// T[] System.Collections.Generic.Queue`1<System.Object>::ToArray()
 ObjectU5BU5D_t126* Queue_1_ToArray_m21497_gshared (Queue_1_t5405 * __this, MethodInfo* method);
#define Queue_1_ToArray_m21497(__this, method) (ObjectU5BU5D_t126*)Queue_1_ToArray_m21497_gshared((Queue_1_t5405 *)__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::SetCapacity(System.Int32)
 void Queue_1_SetCapacity_m21498_gshared (Queue_1_t5405 * __this, int32_t ___new_size, MethodInfo* method);
#define Queue_1_SetCapacity_m21498(__this, ___new_size, method) (void)Queue_1_SetCapacity_m21498_gshared((Queue_1_t5405 *)__this, (int32_t)___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
 int32_t Queue_1_get_Count_m21499_gshared (Queue_1_t5405 * __this, MethodInfo* method);
#define Queue_1_get_Count_m21499(__this, method) (int32_t)Queue_1_get_Count_m21499_gshared((Queue_1_t5405 *)__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
 Enumerator_t5408  Queue_1_GetEnumerator_m21500 (Queue_1_t5405 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
