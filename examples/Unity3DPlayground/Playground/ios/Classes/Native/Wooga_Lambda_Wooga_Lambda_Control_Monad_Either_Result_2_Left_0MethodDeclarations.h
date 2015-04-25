#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Wooga.Lambda.Control.Monad.Either/Result`2/Left<System.Object,System.Object>
struct Left_t5457;
// System.Object
struct Object_t;

// System.Void Wooga.Lambda.Control.Monad.Either/Result`2/Left<System.Object,System.Object>::.ctor(TLeft)
 void Left__ctor_m21664_gshared (Left_t5457 * __this, Object_t * ___v, MethodInfo* method);
#define Left__ctor_m21664(__this, ___v, method) (void)Left__ctor_m21664_gshared((Left_t5457 *)__this, (Object_t *)___v, method)
// System.Boolean Wooga.Lambda.Control.Monad.Either/Result`2/Left<System.Object,System.Object>::IsLeft()
 bool Left_IsLeft_m21665_gshared (Left_t5457 * __this, MethodInfo* method);
#define Left_IsLeft_m21665(__this, method) (bool)Left_IsLeft_m21665_gshared((Left_t5457 *)__this, method)
// System.Boolean Wooga.Lambda.Control.Monad.Either/Result`2/Left<System.Object,System.Object>::IsRight()
 bool Left_IsRight_m21666_gshared (Left_t5457 * __this, MethodInfo* method);
#define Left_IsRight_m21666(__this, method) (bool)Left_IsRight_m21666_gshared((Left_t5457 *)__this, method)
// TLeft Wooga.Lambda.Control.Monad.Either/Result`2/Left<System.Object,System.Object>::LeftValue()
 Object_t * Left_LeftValue_m21667_gshared (Left_t5457 * __this, MethodInfo* method);
#define Left_LeftValue_m21667(__this, method) (Object_t *)Left_LeftValue_m21667_gshared((Left_t5457 *)__this, method)
// TRight Wooga.Lambda.Control.Monad.Either/Result`2/Left<System.Object,System.Object>::RightValue()
 Object_t * Left_RightValue_m21668_gshared (Left_t5457 * __this, MethodInfo* method);
#define Left_RightValue_m21668(__this, method) (Object_t *)Left_RightValue_m21668_gshared((Left_t5457 *)__this, method)
