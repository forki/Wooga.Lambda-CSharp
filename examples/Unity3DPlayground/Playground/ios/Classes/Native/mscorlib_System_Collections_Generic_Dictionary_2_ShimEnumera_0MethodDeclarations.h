#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t4491;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t4465;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
 void ShimEnumerator__ctor_m14683_gshared (ShimEnumerator_t4491 * __this, Dictionary_2_t4465 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m14683(__this, ___host, method) (void)ShimEnumerator__ctor_m14683_gshared((ShimEnumerator_t4491 *)__this, (Dictionary_2_t4465 *)___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
 bool ShimEnumerator_MoveNext_m14684_gshared (ShimEnumerator_t4491 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m14684(__this, method) (bool)ShimEnumerator_MoveNext_m14684_gshared((ShimEnumerator_t4491 *)__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
 DictionaryEntry_t1199  ShimEnumerator_get_Entry_m14685_gshared (ShimEnumerator_t4491 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m14685(__this, method) (DictionaryEntry_t1199 )ShimEnumerator_get_Entry_m14685_gshared((ShimEnumerator_t4491 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
 Object_t * ShimEnumerator_get_Key_m14686_gshared (ShimEnumerator_t4491 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m14686(__this, method) (Object_t *)ShimEnumerator_get_Key_m14686_gshared((ShimEnumerator_t4491 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
 Object_t * ShimEnumerator_get_Value_m14687_gshared (ShimEnumerator_t4491 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m14687(__this, method) (Object_t *)ShimEnumerator_get_Value_m14687_gshared((ShimEnumerator_t4491 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
 Object_t * ShimEnumerator_get_Current_m14688_gshared (ShimEnumerator_t4491 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m14688(__this, method) (Object_t *)ShimEnumerator_get_Current_m14688_gshared((ShimEnumerator_t4491 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
 void ShimEnumerator_Reset_m14689_gshared (ShimEnumerator_t4491 * __this, MethodInfo* method);
#define ShimEnumerator_Reset_m14689(__this, method) (void)ShimEnumerator_Reset_m14689_gshared((ShimEnumerator_t4491 *)__this, method)
