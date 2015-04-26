#pragma once

// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
struct CallbackHandler_t2422;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::.ctor(System.Object,System.IntPtr)
 void CallbackHandler__ctor_m10433 (CallbackHandler_t2422 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::Invoke(System.Runtime.Serialization.StreamingContext)
 void CallbackHandler_Invoke_m10434 (CallbackHandler_t2422 * __this, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::BeginInvoke(System.Runtime.Serialization.StreamingContext,System.AsyncCallback,System.Object)
 Object_t * CallbackHandler_BeginInvoke_m10435 (CallbackHandler_t2422 * __this, StreamingContext_t1256  ___context, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::EndInvoke(System.IAsyncResult)
 void CallbackHandler_EndInvoke_m10436 (CallbackHandler_t2422 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
