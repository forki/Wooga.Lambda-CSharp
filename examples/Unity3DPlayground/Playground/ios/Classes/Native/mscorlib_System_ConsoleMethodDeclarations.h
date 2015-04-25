#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Console
struct Console_t3233;
// System.IO.TextWriter
struct TextWriter_t3234;
// System.Text.Encoding
struct Encoding_t3222;
// System.IO.Stream
struct Stream_t3308;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"

// System.Void System.Console::.cctor()
 void Console__cctor_m12803 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::SetEncodings(System.Text.Encoding,System.Text.Encoding)
 void Console_SetEncodings_m12804 (Object_t * __this/* static, unused */, Encoding_t3222 * ___inputEncoding, Encoding_t3222 * ___outputEncoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.Console::get_Error()
 TextWriter_t3234 * Console_get_Error_m7956 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::Open(System.IntPtr,System.IO.FileAccess,System.Int32)
 Stream_t3308 * Console_Open_m12805 (Object_t * __this/* static, unused */, IntPtr_t31 ___handle, int32_t ___access, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardError(System.Int32)
 Stream_t3308 * Console_OpenStandardError_m12806 (Object_t * __this/* static, unused */, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardInput(System.Int32)
 Stream_t3308 * Console_OpenStandardInput_m12807 (Object_t * __this/* static, unused */, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardOutput(System.Int32)
 Stream_t3308 * Console_OpenStandardOutput_m12808 (Object_t * __this/* static, unused */, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
