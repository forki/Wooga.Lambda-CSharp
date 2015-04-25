#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StreamWriter
struct StreamWriter_t3592;
// System.IO.Stream
struct Stream_t3308;
// System.Text.Encoding
struct Encoding_t3222;
// System.Char[]
struct CharU5BU5D_t311;
// System.String
struct String_t;

// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
 void StreamWriter__ctor_m10985 (StreamWriter_t3592 * __this, Stream_t3308 * ___stream, Encoding_t3222 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding,System.Int32)
 void StreamWriter__ctor_m10986 (StreamWriter_t3592 * __this, Stream_t3308 * ___stream, Encoding_t3222 * ___encoding, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.cctor()
 void StreamWriter__cctor_m10987 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Initialize(System.Text.Encoding,System.Int32)
 void StreamWriter_Initialize_m10988 (StreamWriter_t3592 * __this, Encoding_t3222 * ___encoding, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::set_AutoFlush(System.Boolean)
 void StreamWriter_set_AutoFlush_m10989 (StreamWriter_t3592 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Dispose(System.Boolean)
 void StreamWriter_Dispose_m10990 (StreamWriter_t3592 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Flush()
 void StreamWriter_Flush_m10991 (StreamWriter_t3592 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::FlushBytes()
 void StreamWriter_FlushBytes_m10992 (StreamWriter_t3592 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Decode()
 void StreamWriter_Decode_m10993 (StreamWriter_t3592 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[],System.Int32,System.Int32)
 void StreamWriter_Write_m10994 (StreamWriter_t3592 * __this, CharU5BU5D_t311* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.Char[],System.Int32,System.Int32)
 void StreamWriter_LowLevelWrite_m10995 (StreamWriter_t3592 * __this, CharU5BU5D_t311* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.String)
 void StreamWriter_LowLevelWrite_m10996 (StreamWriter_t3592 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char)
 void StreamWriter_Write_m10997 (StreamWriter_t3592 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[])
 void StreamWriter_Write_m10998 (StreamWriter_t3592 * __this, CharU5BU5D_t311* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.String)
 void StreamWriter_Write_m10999 (StreamWriter_t3592 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Close()
 void StreamWriter_Close_m11000 (StreamWriter_t3592 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Finalize()
 void StreamWriter_Finalize_m11001 (StreamWriter_t3592 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
