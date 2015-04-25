#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>>
struct Action_1_t5628;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Action`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>>::.ctor(System.Object,System.IntPtr)
 void Action_1__ctor_m23688 (Action_1_t5628 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>>::Invoke(T)
 void Action_1_Invoke_m23689 (Action_1_t5628 * __this, KeyValuePair_2_t5639  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Action`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Action_1_BeginInvoke_m23690 (Action_1_t5628 * __this, KeyValuePair_2_t5639  ___obj, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>>::EndInvoke(System.IAsyncResult)
 void Action_1_EndInvoke_m23691 (Action_1_t5628 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
