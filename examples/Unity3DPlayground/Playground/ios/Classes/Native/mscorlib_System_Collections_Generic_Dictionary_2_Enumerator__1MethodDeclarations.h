#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t4475;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t4465;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
 void Enumerator__ctor_m14631_gshared (Enumerator_t4475 * __this, Dictionary_2_t4465 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m14631(__this, ___dictionary, method) (void)Enumerator__ctor_m14631_gshared((Enumerator_t4475 *)__this, (Dictionary_2_t4465 *)___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
 Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14632_gshared (Enumerator_t4475 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14632(__this, method) (Object_t *)Enumerator_System_Collections_IEnumerator_get_Current_m14632_gshared((Enumerator_t4475 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.Reset()
 void Enumerator_System_Collections_IEnumerator_Reset_m14633_gshared (Enumerator_t4475 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m14633(__this, method) (void)Enumerator_System_Collections_IEnumerator_Reset_m14633_gshared((Enumerator_t4475 *)__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
 DictionaryEntry_t1199  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14634_gshared (Enumerator_t4475 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14634(__this, method) (DictionaryEntry_t1199 )Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14634_gshared((Enumerator_t4475 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
 Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14635_gshared (Enumerator_t4475 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14635(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14635_gshared((Enumerator_t4475 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
 Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14636_gshared (Enumerator_t4475 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14636(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14636_gshared((Enumerator_t4475 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
 bool Enumerator_MoveNext_m14637_gshared (Enumerator_t4475 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m14637(__this, method) (bool)Enumerator_MoveNext_m14637_gshared((Enumerator_t4475 *)__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
 KeyValuePair_2_t4473  Enumerator_get_Current_m14638 (Enumerator_t4475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
 Object_t * Enumerator_get_CurrentKey_m14639_gshared (Enumerator_t4475 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m14639(__this, method) (Object_t *)Enumerator_get_CurrentKey_m14639_gshared((Enumerator_t4475 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
 Object_t * Enumerator_get_CurrentValue_m14640_gshared (Enumerator_t4475 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m14640(__this, method) (Object_t *)Enumerator_get_CurrentValue_m14640_gshared((Enumerator_t4475 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Reset()
 void Enumerator_Reset_m14641_gshared (Enumerator_t4475 * __this, MethodInfo* method);
#define Enumerator_Reset_m14641(__this, method) (void)Enumerator_Reset_m14641_gshared((Enumerator_t4475 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
 void Enumerator_VerifyState_m14642_gshared (Enumerator_t4475 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m14642(__this, method) (void)Enumerator_VerifyState_m14642_gshared((Enumerator_t4475 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
 void Enumerator_VerifyCurrent_m14643_gshared (Enumerator_t4475 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m14643(__this, method) (void)Enumerator_VerifyCurrent_m14643_gshared((Enumerator_t4475 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
 void Enumerator_Dispose_m14644_gshared (Enumerator_t4475 * __this, MethodInfo* method);
#define Enumerator_Dispose_m14644(__this, method) (void)Enumerator_Dispose_m14644_gshared((Enumerator_t4475 *)__this, method)
