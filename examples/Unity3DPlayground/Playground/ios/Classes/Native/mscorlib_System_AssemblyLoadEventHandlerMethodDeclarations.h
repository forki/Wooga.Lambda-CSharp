#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t3903;
// System.Object
struct Object_t;
// System.AssemblyLoadEventArgs
struct AssemblyLoadEventArgs_t3910;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.AssemblyLoadEventHandler::.ctor(System.Object,System.IntPtr)
 void AssemblyLoadEventHandler__ctor_m13557 (AssemblyLoadEventHandler_t3903 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AssemblyLoadEventHandler::Invoke(System.Object,System.AssemblyLoadEventArgs)
 void AssemblyLoadEventHandler_Invoke_m13558 (AssemblyLoadEventHandler_t3903 * __this, Object_t * ___sender, AssemblyLoadEventArgs_t3910 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.AssemblyLoadEventHandler::BeginInvoke(System.Object,System.AssemblyLoadEventArgs,System.AsyncCallback,System.Object)
 Object_t * AssemblyLoadEventHandler_BeginInvoke_m13559 (AssemblyLoadEventHandler_t3903 * __this, Object_t * ___sender, AssemblyLoadEventArgs_t3910 * ___args, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AssemblyLoadEventHandler::EndInvoke(System.IAsyncResult)
 void AssemblyLoadEventHandler_EndInvoke_m13560 (AssemblyLoadEventHandler_t3903 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
