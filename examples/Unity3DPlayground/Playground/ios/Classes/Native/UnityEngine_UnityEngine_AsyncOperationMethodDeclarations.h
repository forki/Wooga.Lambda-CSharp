#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t2456;
struct AsyncOperation_t2456_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
 void AsyncOperation__ctor_m5686 (AsyncOperation_t2456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
 void AsyncOperation_InternalDestroy_m5687 (AsyncOperation_t2456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
 void AsyncOperation_Finalize_m5688 (AsyncOperation_t2456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t2456_marshal(const AsyncOperation_t2456& unmarshaled, AsyncOperation_t2456_marshaled& marshaled);
void AsyncOperation_t2456_marshal_back(const AsyncOperation_t2456_marshaled& marshaled, AsyncOperation_t2456& unmarshaled);
void AsyncOperation_t2456_marshal_cleanup(AsyncOperation_t2456_marshaled& marshaled);
