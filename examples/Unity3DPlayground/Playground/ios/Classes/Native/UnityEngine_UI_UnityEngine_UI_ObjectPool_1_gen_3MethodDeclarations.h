#pragma once

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t3593;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t3065;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
 void ObjectPool_1__ctor_m16214_gshared (ObjectPool_1_t3593 * __this, UnityAction_1_t3065 * ___actionOnGet, UnityAction_1_t3065 * ___actionOnRelease, MethodInfo* method);
#define ObjectPool_1__ctor_m16214(__this, ___actionOnGet, ___actionOnRelease, method) (void)ObjectPool_1__ctor_m16214_gshared((ObjectPool_1_t3593 *)__this, (UnityAction_1_t3065 *)___actionOnGet, (UnityAction_1_t3065 *)___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
 int32_t ObjectPool_1_get_countAll_m16216_gshared (ObjectPool_1_t3593 * __this, MethodInfo* method);
#define ObjectPool_1_get_countAll_m16216(__this, method) (int32_t)ObjectPool_1_get_countAll_m16216_gshared((ObjectPool_1_t3593 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
 void ObjectPool_1_set_countAll_m16218_gshared (ObjectPool_1_t3593 * __this, int32_t ___value, MethodInfo* method);
#define ObjectPool_1_set_countAll_m16218(__this, ___value, method) (void)ObjectPool_1_set_countAll_m16218_gshared((ObjectPool_1_t3593 *)__this, (int32_t)___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
 int32_t ObjectPool_1_get_countActive_m16220_gshared (ObjectPool_1_t3593 * __this, MethodInfo* method);
#define ObjectPool_1_get_countActive_m16220(__this, method) (int32_t)ObjectPool_1_get_countActive_m16220_gshared((ObjectPool_1_t3593 *)__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
 int32_t ObjectPool_1_get_countInactive_m16222_gshared (ObjectPool_1_t3593 * __this, MethodInfo* method);
#define ObjectPool_1_get_countInactive_m16222(__this, method) (int32_t)ObjectPool_1_get_countInactive_m16222_gshared((ObjectPool_1_t3593 *)__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
 Object_t * ObjectPool_1_Get_m16224_gshared (ObjectPool_1_t3593 * __this, MethodInfo* method);
#define ObjectPool_1_Get_m16224(__this, method) (Object_t *)ObjectPool_1_Get_m16224_gshared((ObjectPool_1_t3593 *)__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
 void ObjectPool_1_Release_m16226_gshared (ObjectPool_1_t3593 * __this, Object_t * ___element, MethodInfo* method);
#define ObjectPool_1_Release_m16226(__this, ___element, method) (void)ObjectPool_1_Release_m16226_gshared((ObjectPool_1_t3593 *)__this, (Object_t *)___element, method)
