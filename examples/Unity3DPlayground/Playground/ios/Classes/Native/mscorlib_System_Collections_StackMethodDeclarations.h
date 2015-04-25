#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Stack
struct Stack_t2647;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t975;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t51;

// System.Void System.Collections.Stack::.ctor()
 void Stack__ctor_m6342 (Stack_t2647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::.ctor(System.Collections.ICollection)
 void Stack__ctor_m10565 (Stack_t2647 * __this, Object_t * ___col, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::.ctor(System.Int32)
 void Stack__ctor_m10566 (Stack_t2647 * __this, int32_t ___initialCapacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Resize(System.Int32)
 void Stack_Resize_m10567 (Stack_t2647 * __this, int32_t ___ncapacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Stack::get_Count()
 int32_t Stack_get_Count_m6345 (Stack_t2647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Stack::get_IsSynchronized()
 bool Stack_get_IsSynchronized_m6346 (Stack_t2647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::get_SyncRoot()
 Object_t * Stack_get_SyncRoot_m6347 (Stack_t2647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Clear()
 void Stack_Clear_m6168 (Stack_t2647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::Clone()
 Object_t * Stack_Clone_m6344 (Stack_t2647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::CopyTo(System.Array,System.Int32)
 void Stack_CopyTo_m6348 (Stack_t2647 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Stack::GetEnumerator()
 Object_t * Stack_GetEnumerator_m6343 (Stack_t2647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::Peek()
 Object_t * Stack_Peek_m6349 (Stack_t2647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::Pop()
 Object_t * Stack_Pop_m6350 (Stack_t2647 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Push(System.Object)
 void Stack_Push_m6164 (Stack_t2647 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
