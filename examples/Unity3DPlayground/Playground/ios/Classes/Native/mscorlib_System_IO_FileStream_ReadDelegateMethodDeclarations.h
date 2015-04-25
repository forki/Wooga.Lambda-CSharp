#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileStream/ReadDelegate
struct ReadDelegate_t3580;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.IO.FileStream/ReadDelegate::.ctor(System.Object,System.IntPtr)
 void ReadDelegate__ctor_m10826 (ReadDelegate_t3580 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream/ReadDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
 int32_t ReadDelegate_Invoke_m10827 (ReadDelegate_t3580 * __this, ByteU5BU5D_t961* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.FileStream/ReadDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * ReadDelegate_BeginInvoke_m10828 (ReadDelegate_t3580 * __this, ByteU5BU5D_t961* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream/ReadDelegate::EndInvoke(System.IAsyncResult)
 int32_t ReadDelegate_EndInvoke_m10829 (ReadDelegate_t3580 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
