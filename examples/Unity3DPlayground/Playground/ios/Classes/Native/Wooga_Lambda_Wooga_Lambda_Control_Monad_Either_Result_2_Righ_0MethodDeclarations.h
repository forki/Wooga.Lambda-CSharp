#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Wooga.Lambda.Control.Monad.Either/Result`2/Right<System.Object,System.Object>
struct Right_t5455;
// System.Object
struct Object_t;

// System.Void Wooga.Lambda.Control.Monad.Either/Result`2/Right<System.Object,System.Object>::.ctor(TRight)
 void Right__ctor_m21657_gshared (Right_t5455 * __this, Object_t * ___v, MethodInfo* method);
#define Right__ctor_m21657(__this, ___v, method) (void)Right__ctor_m21657_gshared((Right_t5455 *)__this, (Object_t *)___v, method)
// System.Boolean Wooga.Lambda.Control.Monad.Either/Result`2/Right<System.Object,System.Object>::IsLeft()
 bool Right_IsLeft_m21658_gshared (Right_t5455 * __this, MethodInfo* method);
#define Right_IsLeft_m21658(__this, method) (bool)Right_IsLeft_m21658_gshared((Right_t5455 *)__this, method)
// System.Boolean Wooga.Lambda.Control.Monad.Either/Result`2/Right<System.Object,System.Object>::IsRight()
 bool Right_IsRight_m21659_gshared (Right_t5455 * __this, MethodInfo* method);
#define Right_IsRight_m21659(__this, method) (bool)Right_IsRight_m21659_gshared((Right_t5455 *)__this, method)
// TLeft Wooga.Lambda.Control.Monad.Either/Result`2/Right<System.Object,System.Object>::LeftValue()
 Object_t * Right_LeftValue_m21660_gshared (Right_t5455 * __this, MethodInfo* method);
#define Right_LeftValue_m21660(__this, method) (Object_t *)Right_LeftValue_m21660_gshared((Right_t5455 *)__this, method)
// TRight Wooga.Lambda.Control.Monad.Either/Result`2/Right<System.Object,System.Object>::RightValue()
 Object_t * Right_RightValue_m21661_gshared (Right_t5455 * __this, MethodInfo* method);
#define Right_RightValue_m21661(__this, method) (Object_t *)Right_RightValue_m21661_gshared((Right_t5455 *)__this, method)
