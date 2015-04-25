#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t389;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t390;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t378;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2431(__this, ___actionOnGet, ___actionOnRelease, method) (void)ObjectPool_1__ctor_m17059_gshared((ObjectPool_1_t4813 *)__this, (UnityAction_1_t4430 *)___actionOnGet, (UnityAction_1_t4430 *)___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m21371(__this, method) (int32_t)ObjectPool_1_get_countAll_m17061_gshared((ObjectPool_1_t4813 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m21372(__this, ___value, method) (void)ObjectPool_1_set_countAll_m17063_gshared((ObjectPool_1_t4813 *)__this, (int32_t)___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m21373(__this, method) (int32_t)ObjectPool_1_get_countActive_m17065_gshared((ObjectPool_1_t4813 *)__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m21374(__this, method) (int32_t)ObjectPool_1_get_countInactive_m17067_gshared((ObjectPool_1_t4813 *)__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m2432(__this, method) (List_1_t378 *)ObjectPool_1_Get_m17069_gshared((ObjectPool_1_t4813 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m2433(__this, ___element, method) (void)ObjectPool_1_Release_m17071_gshared((ObjectPool_1_t4813 *)__this, (Object_t *)___element, method)
