#pragma once

// System.Runtime.InteropServices.Marshal
struct Marshal_t1830;
// System.Array
struct Array_t;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Char[]
struct CharU5BU5D_t316;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.InteropServices.Marshal::.cctor()
 void Marshal__cctor_m10054 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_to_unmanaged(System.Array,System.Int32,System.IntPtr,System.Int32)
 void Marshal_copy_to_unmanaged_m10055 (Object_t * __this/* static, unused */, Array_t * ___source, int32_t ___startIndex, IntPtr_t37 ___destination, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
 void Marshal_copy_from_unmanaged_m10056 (Object_t * __this/* static, unused */, IntPtr_t37 ___source, int32_t ___startIndex, Array_t * ___destination, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
 void Marshal_Copy_m6195 (Object_t * __this/* static, unused */, ByteU5BU5D_t1071* ___source, int32_t ___startIndex, IntPtr_t37 ___destination, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
 void Marshal_Copy_m6198 (Object_t * __this/* static, unused */, IntPtr_t37 ___source, ByteU5BU5D_t1071* ___destination, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
 void Marshal_Copy_m10057 (Object_t * __this/* static, unused */, IntPtr_t37 ___source, CharU5BU5D_t316* ___destination, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::GetLastWin32Error()
 int32_t Marshal_GetLastWin32Error_m6175 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
