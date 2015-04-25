#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t4814;
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
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
 void Stack_1__ctor_m17072_gshared (Stack_1_t4814 * __this, MethodInfo* method);
#define Stack_1__ctor_m17072(__this, method) (void)Stack_1__ctor_m17072_gshared((Stack_1_t4814 *)__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor(System.Int32)
 void Stack_1__ctor_m17073_gshared (Stack_1_t4814 * __this, int32_t ___count, MethodInfo* method);
#define Stack_1__ctor_m17073(__this, ___count, method) (void)Stack_1__ctor_m17073_gshared((Stack_1_t4814 *)__this, (int32_t)___count, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
 bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m17074_gshared (Stack_1_t4814 * __this, MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m17074(__this, method) (bool)Stack_1_System_Collections_ICollection_get_IsSynchronized_m17074_gshared((Stack_1_t4814 *)__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m17075_gshared (Stack_1_t4814 * __this, MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m17075(__this, method) (Object_t *)Stack_1_System_Collections_ICollection_get_SyncRoot_m17075_gshared((Stack_1_t4814 *)__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Stack_1_System_Collections_ICollection_CopyTo_m17076_gshared (Stack_1_t4814 * __this, Array_t * ___dest, int32_t ___idx, MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m17076(__this, ___dest, ___idx, method) (void)Stack_1_System_Collections_ICollection_CopyTo_m17076_gshared((Stack_1_t4814 *)__this, (Array_t *)___dest, (int32_t)___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17077_gshared (Stack_1_t4814 * __this, MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17077(__this, method) (Object_t*)Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17077_gshared((Stack_1_t4814 *)__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m17078_gshared (Stack_1_t4814 * __this, MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m17078(__this, method) (Object_t *)Stack_1_System_Collections_IEnumerable_GetEnumerator_m17078_gshared((Stack_1_t4814 *)__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Clear()
 void Stack_1_Clear_m17079_gshared (Stack_1_t4814 * __this, MethodInfo* method);
#define Stack_1_Clear_m17079(__this, method) (void)Stack_1_Clear_m17079_gshared((Stack_1_t4814 *)__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::CopyTo(T[],System.Int32)
 void Stack_1_CopyTo_m17080_gshared (Stack_1_t4814 * __this, ObjectU5BU5D_t126* ___dest, int32_t ___idx, MethodInfo* method);
#define Stack_1_CopyTo_m17080(__this, ___dest, ___idx, method) (void)Stack_1_CopyTo_m17080_gshared((Stack_1_t4814 *)__this, (ObjectU5BU5D_t126*)___dest, (int32_t)___idx, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
 Object_t * Stack_1_Peek_m17081_gshared (Stack_1_t4814 * __this, MethodInfo* method);
#define Stack_1_Peek_m17081(__this, method) (Object_t *)Stack_1_Peek_m17081_gshared((Stack_1_t4814 *)__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
 Object_t * Stack_1_Pop_m17082_gshared (Stack_1_t4814 * __this, MethodInfo* method);
#define Stack_1_Pop_m17082(__this, method) (Object_t *)Stack_1_Pop_m17082_gshared((Stack_1_t4814 *)__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
 void Stack_1_Push_m17083_gshared (Stack_1_t4814 * __this, Object_t * ___t, MethodInfo* method);
#define Stack_1_Push_m17083(__this, ___t, method) (void)Stack_1_Push_m17083_gshared((Stack_1_t4814 *)__this, (Object_t *)___t, method)
// T[] System.Collections.Generic.Stack`1<System.Object>::ToArray()
 ObjectU5BU5D_t126* Stack_1_ToArray_m17084_gshared (Stack_1_t4814 * __this, MethodInfo* method);
#define Stack_1_ToArray_m17084(__this, method) (ObjectU5BU5D_t126*)Stack_1_ToArray_m17084_gshared((Stack_1_t4814 *)__this, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
 int32_t Stack_1_get_Count_m17085_gshared (Stack_1_t4814 * __this, MethodInfo* method);
#define Stack_1_get_Count_m17085(__this, method) (int32_t)Stack_1_get_Count_m17085_gshared((Stack_1_t4814 *)__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
 Enumerator_t4815  Stack_1_GetEnumerator_m17086 (Stack_1_t4814 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
