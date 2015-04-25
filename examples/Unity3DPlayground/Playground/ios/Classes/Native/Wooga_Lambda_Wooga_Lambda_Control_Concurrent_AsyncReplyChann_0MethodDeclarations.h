#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Wooga.Lambda.Control.Concurrent.AsyncReplyChannel`1<System.Object>
struct AsyncReplyChannel_1_t5414;
// System.Func`2<System.Object,Wooga.Lambda.Data.Unit>
struct Func_2_t5415;
// System.Object
struct Object_t;

// System.Void Wooga.Lambda.Control.Concurrent.AsyncReplyChannel`1<System.Object>::.ctor(System.Func`2<TReply,Wooga.Lambda.Data.Unit>)
 void AsyncReplyChannel_1__ctor_m21525_gshared (AsyncReplyChannel_1_t5414 * __this, Func_2_t5415 * ___reply, MethodInfo* method);
#define AsyncReplyChannel_1__ctor_m21525(__this, ___reply, method) (void)AsyncReplyChannel_1__ctor_m21525_gshared((AsyncReplyChannel_1_t5414 *)__this, (Func_2_t5415 *)___reply, method)
// System.Void Wooga.Lambda.Control.Concurrent.AsyncReplyChannel`1<System.Object>::Reply(TReply)
 void AsyncReplyChannel_1_Reply_m21526_gshared (AsyncReplyChannel_1_t5414 * __this, Object_t * ___msg, MethodInfo* method);
#define AsyncReplyChannel_1_Reply_m21526(__this, ___msg, method) (void)AsyncReplyChannel_1_Reply_m21526_gshared((AsyncReplyChannel_1_t5414 *)__this, (Object_t *)___msg, method)
