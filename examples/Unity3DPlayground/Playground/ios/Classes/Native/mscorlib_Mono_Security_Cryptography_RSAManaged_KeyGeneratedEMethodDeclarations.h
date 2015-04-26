#pragma once

// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t2114;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t1675;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::.ctor(System.Object,System.IntPtr)
 void KeyGeneratedEventHandler__ctor_m8676 (KeyGeneratedEventHandler_t2114 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::Invoke(System.Object,System.EventArgs)
 void KeyGeneratedEventHandler_Invoke_m8677 (KeyGeneratedEventHandler_t2114 * __this, Object_t * ___sender, EventArgs_t1675 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
 Object_t * KeyGeneratedEventHandler_BeginInvoke_m8678 (KeyGeneratedEventHandler_t2114 * __this, Object_t * ___sender, EventArgs_t1675 * ___e, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::EndInvoke(System.IAsyncResult)
 void KeyGeneratedEventHandler_EndInvoke_m8679 (KeyGeneratedEventHandler_t2114 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
