#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t3599;
// System.IO.Stream
struct Stream_t3308;
// System.Text.Encoding
struct Encoding_t3222;
// System.Char[]
struct CharU5BU5D_t311;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
 void UnexceptionalStreamWriter__ctor_m11061 (UnexceptionalStreamWriter_t3599 * __this, Stream_t3308 * ___stream, Encoding_t3222 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
 void UnexceptionalStreamWriter_Flush_m11062 (UnexceptionalStreamWriter_t3599 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
 void UnexceptionalStreamWriter_Write_m11063 (UnexceptionalStreamWriter_t3599 * __this, CharU5BU5D_t311* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
 void UnexceptionalStreamWriter_Write_m11064 (UnexceptionalStreamWriter_t3599 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
 void UnexceptionalStreamWriter_Write_m11065 (UnexceptionalStreamWriter_t3599 * __this, CharU5BU5D_t311* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
 void UnexceptionalStreamWriter_Write_m11066 (UnexceptionalStreamWriter_t3599 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
