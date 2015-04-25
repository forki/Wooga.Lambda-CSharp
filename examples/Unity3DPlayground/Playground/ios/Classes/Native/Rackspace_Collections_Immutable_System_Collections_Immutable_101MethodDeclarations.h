#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.AllocFreeConcurrentStack`1<System.Object>
struct AllocFreeConcurrentStack_1_t4733;
// System.Object
struct Object_t;

// System.Void System.Collections.Immutable.AllocFreeConcurrentStack`1<System.Object>::TryAdd(T)
 void AllocFreeConcurrentStack_1_TryAdd_m16497_gshared (Object_t * __this/* static, unused */, Object_t * ___item, MethodInfo* method);
#define AllocFreeConcurrentStack_1_TryAdd_m16497(__this/* static, unused */, ___item, method) (void)AllocFreeConcurrentStack_1_TryAdd_m16497_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Boolean System.Collections.Immutable.AllocFreeConcurrentStack`1<System.Object>::TryTake(T&)
 bool AllocFreeConcurrentStack_1_TryTake_m16499_gshared (Object_t * __this/* static, unused */, Object_t ** ___item, MethodInfo* method);
#define AllocFreeConcurrentStack_1_TryTake_m16499(__this/* static, unused */, ___item, method) (bool)AllocFreeConcurrentStack_1_TryTake_m16499_gshared((Object_t *)__this/* static, unused */, (Object_t **)___item, method)
