#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct Enumerator_t5143;
// System.Object
struct Object_t;
// UnityEngine.Canvas
struct Canvas_t269;
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t450;
// System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct Dictionary_2_t282;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1MethodDeclarations.h"
#define Enumerator__ctor_m19921(__this, ___dictionary, method) (void)Enumerator__ctor_m14631_gshared((Enumerator_t4475 *)__this, (Dictionary_2_t4465 *)___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m19922(__this, method) (Object_t *)Enumerator_System_Collections_IEnumerator_get_Current_m14632_gshared((Enumerator_t4475 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IEnumerator.Reset()
#define Enumerator_System_Collections_IEnumerator_Reset_m19923(__this, method) (void)Enumerator_System_Collections_IEnumerator_Reset_m14633_gshared((Enumerator_t4475 *)__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19924(__this, method) (DictionaryEntry_t1199 )Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14634_gshared((Enumerator_t4475 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19925(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14635_gshared((Enumerator_t4475 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19926(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14636_gshared((Enumerator_t4475 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::MoveNext()
#define Enumerator_MoveNext_m19927(__this, method) (bool)Enumerator_MoveNext_m14637_gshared((Enumerator_t4475 *)__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::get_Current()
 KeyValuePair_2_t5141  Enumerator_get_Current_m19928 (Enumerator_t5143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m19929(__this, method) (Canvas_t269 *)Enumerator_get_CurrentKey_m14639_gshared((Enumerator_t4475 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m19930(__this, method) (IndexedSet_1_t450 *)Enumerator_get_CurrentValue_m14640_gshared((Enumerator_t4475 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Reset()
#define Enumerator_Reset_m19931(__this, method) (void)Enumerator_Reset_m14641_gshared((Enumerator_t4475 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::VerifyState()
#define Enumerator_VerifyState_m19932(__this, method) (void)Enumerator_VerifyState_m14642_gshared((Enumerator_t4475 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m19933(__this, method) (void)Enumerator_VerifyCurrent_m14643_gshared((Enumerator_t4475 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Dispose()
#define Enumerator_Dispose_m19934(__this, method) (void)Enumerator_Dispose_m14644_gshared((Enumerator_t4475 *)__this, method)
