#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.InteropServices.Marshal
struct Marshal_t3688;
// System.Array
struct Array_t;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.Char[]
struct CharU5BU5D_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.InteropServices.Marshal::.cctor()
 void Marshal__cctor_m11622 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
 void Marshal_copy_from_unmanaged_m11623 (Object_t * __this/* static, unused */, IntPtr_t31 ___source, int32_t ___startIndex, Array_t * ___destination, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
 void Marshal_Copy_m11624 (Object_t * __this/* static, unused */, IntPtr_t31 ___source, ByteU5BU5D_t961* ___destination, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
 void Marshal_Copy_m11625 (Object_t * __this/* static, unused */, IntPtr_t31 ___source, CharU5BU5D_t311* ___destination, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Runtime.InteropServices.Marshal::ReadByte(System.IntPtr,System.Int32)
 uint8_t Marshal_ReadByte_m11626 (Object_t * __this/* static, unused */, IntPtr_t31 ___ptr, int32_t ___ofs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::WriteByte(System.IntPtr,System.Int32,System.Byte)
 void Marshal_WriteByte_m11627 (Object_t * __this/* static, unused */, IntPtr_t31 ___ptr, int32_t ___ofs, uint8_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
