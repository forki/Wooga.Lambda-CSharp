#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.SynchronizedWriter
struct SynchronizedWriter_t3597;
// System.IO.TextWriter
struct TextWriter_t3234;
// System.Char[]
struct CharU5BU5D_t311;
// System.String
struct String_t;

// System.Void System.IO.SynchronizedWriter::.ctor(System.IO.TextWriter,System.Boolean)
 void SynchronizedWriter__ctor_m11044 (SynchronizedWriter_t3597 * __this, TextWriter_t3234 * ___writer, bool ___neverClose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Close()
 void SynchronizedWriter_Close_m11045 (SynchronizedWriter_t3597 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Flush()
 void SynchronizedWriter_Flush_m11046 (SynchronizedWriter_t3597 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char)
 void SynchronizedWriter_Write_m11047 (SynchronizedWriter_t3597 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[])
 void SynchronizedWriter_Write_m11048 (SynchronizedWriter_t3597 * __this, CharU5BU5D_t311* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String)
 void SynchronizedWriter_Write_m11049 (SynchronizedWriter_t3597 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[],System.Int32,System.Int32)
 void SynchronizedWriter_Write_m11050 (SynchronizedWriter_t3597 * __this, CharU5BU5D_t311* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine()
 void SynchronizedWriter_WriteLine_m11051 (SynchronizedWriter_t3597 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String)
 void SynchronizedWriter_WriteLine_m11052 (SynchronizedWriter_t3597 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
