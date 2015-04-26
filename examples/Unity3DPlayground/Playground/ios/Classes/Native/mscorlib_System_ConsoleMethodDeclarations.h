#pragma once

// System.Console
struct Console_t1847;
// System.IO.TextWriter
struct TextWriter_t1866;
// System.Text.Encoding
struct Encoding_t1068;
// System.IO.Stream
struct Stream_t1049;
// System.String
struct String_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"

// System.Void System.Console::.cctor()
 void Console__cctor_m11253 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::SetEncodings(System.Text.Encoding,System.Text.Encoding)
 void Console_SetEncodings_m11254 (Object_t * __this/* static, unused */, Encoding_t1068 * ___inputEncoding, Encoding_t1068 * ___outputEncoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.Console::get_Error()
 TextWriter_t1866 * Console_get_Error_m6404 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::Open(System.IntPtr,System.IO.FileAccess,System.Int32)
 Stream_t1049 * Console_Open_m11255 (Object_t * __this/* static, unused */, IntPtr_t37 ___handle, int32_t ___access, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardError(System.Int32)
 Stream_t1049 * Console_OpenStandardError_m11256 (Object_t * __this/* static, unused */, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardInput(System.Int32)
 Stream_t1049 * Console_OpenStandardInput_m11257 (Object_t * __this/* static, unused */, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardOutput(System.Int32)
 Stream_t1049 * Console_OpenStandardOutput_m11258 (Object_t * __this/* static, unused */, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String)
 void Console_WriteLine_m6254 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
