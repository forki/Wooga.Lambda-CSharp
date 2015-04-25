#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t4813;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t4430;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
 void ObjectPool_1__ctor_m17059_gshared (ObjectPool_1_t4813 * __this, UnityAction_1_t4430 * ___actionOnGet, UnityAction_1_t4430 * ___actionOnRelease, MethodInfo* method);
#define ObjectPool_1__ctor_m17059(__this, ___actionOnGet, ___actionOnRelease, method) (void)ObjectPool_1__ctor_m17059_gshared((ObjectPool_1_t4813 *)__this, (UnityAction_1_t4430 *)___actionOnGet, (UnityAction_1_t4430 *)___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
 int32_t ObjectPool_1_get_countAll_m17061_gshared (ObjectPool_1_t4813 * __this, MethodInfo* method);
#define ObjectPool_1_get_countAll_m17061(__this, method) (int32_t)ObjectPool_1_get_countAll_m17061_gshared((ObjectPool_1_t4813 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
 void ObjectPool_1_set_countAll_m17063_gshared (ObjectPool_1_t4813 * __this, int32_t ___value, MethodInfo* method);
#define ObjectPool_1_set_countAll_m17063(__this, ___value, method) (void)ObjectPool_1_set_countAll_m17063_gshared((ObjectPool_1_t4813 *)__this, (int32_t)___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
 int32_t ObjectPool_1_get_countActive_m17065_gshared (ObjectPool_1_t4813 * __this, MethodInfo* method);
#define ObjectPool_1_get_countActive_m17065(__this, method) (int32_t)ObjectPool_1_get_countActive_m17065_gshared((ObjectPool_1_t4813 *)__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
 int32_t ObjectPool_1_get_countInactive_m17067_gshared (ObjectPool_1_t4813 * __this, MethodInfo* method);
#define ObjectPool_1_get_countInactive_m17067(__this, method) (int32_t)ObjectPool_1_get_countInactive_m17067_gshared((ObjectPool_1_t4813 *)__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
 Object_t * ObjectPool_1_Get_m17069_gshared (ObjectPool_1_t4813 * __this, MethodInfo* method);
#define ObjectPool_1_Get_m17069(__this, method) (Object_t *)ObjectPool_1_Get_m17069_gshared((ObjectPool_1_t4813 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
 void ObjectPool_1_Release_m17071_gshared (ObjectPool_1_t4813 * __this, Object_t * ___element, MethodInfo* method);
#define ObjectPool_1_Release_m17071(__this, ___element, method) (void)ObjectPool_1_Release_m17071_gshared((ObjectPool_1_t4813 *)__this, (Object_t *)___element, method)
