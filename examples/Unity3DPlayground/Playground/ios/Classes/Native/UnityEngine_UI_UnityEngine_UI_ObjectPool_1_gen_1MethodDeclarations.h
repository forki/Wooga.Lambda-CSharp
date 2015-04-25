#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t385;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t386;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t388;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2426(__this, ___actionOnGet, ___actionOnRelease, method) (void)ObjectPool_1__ctor_m17059_gshared((ObjectPool_1_t4813 *)__this, (UnityAction_1_t4430 *)___actionOnGet, (UnityAction_1_t4430 *)___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m21337(__this, method) (int32_t)ObjectPool_1_get_countAll_m17061_gshared((ObjectPool_1_t4813 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m21338(__this, ___value, method) (void)ObjectPool_1_set_countAll_m17063_gshared((ObjectPool_1_t4813 *)__this, (int32_t)___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m21339(__this, method) (int32_t)ObjectPool_1_get_countActive_m17065_gshared((ObjectPool_1_t4813 *)__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m21340(__this, method) (int32_t)ObjectPool_1_get_countInactive_m17067_gshared((ObjectPool_1_t4813 *)__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m2427(__this, method) (List_1_t388 *)ObjectPool_1_Get_m17069_gshared((ObjectPool_1_t4813 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m2428(__this, ___element, method) (void)ObjectPool_1_Release_m17071_gshared((ObjectPool_1_t4813 *)__this, (Object_t *)___element, method)
