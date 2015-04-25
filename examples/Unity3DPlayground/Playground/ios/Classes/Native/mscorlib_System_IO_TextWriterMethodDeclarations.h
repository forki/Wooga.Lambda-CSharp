#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.TextWriter
struct TextWriter_t3234;
// System.Char[]
struct CharU5BU5D_t311;
// System.String
struct String_t;

// System.Void System.IO.TextWriter::.ctor()
 void TextWriter__ctor_m11032 (TextWriter_t3234 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::.cctor()
 void TextWriter__cctor_m11033 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Close()
 void TextWriter_Close_m11034 (TextWriter_t3234 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose(System.Boolean)
 void TextWriter_Dispose_m11035 (TextWriter_t3234 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose()
 void TextWriter_Dispose_m11036 (TextWriter_t3234 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Flush()
 void TextWriter_Flush_m11037 (TextWriter_t3234 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.IO.TextWriter::Synchronized(System.IO.TextWriter,System.Boolean)
 TextWriter_t3234 * TextWriter_Synchronized_m11038 (Object_t * __this/* static, unused */, TextWriter_t3234 * ___writer, bool ___neverClose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char)
 void TextWriter_Write_m11039 (TextWriter_t3234 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[])
 void TextWriter_Write_m11040 (TextWriter_t3234 * __this, CharU5BU5D_t311* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String)
 void TextWriter_Write_m11041 (TextWriter_t3234 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32)
 void TextWriter_Write_m11042 (TextWriter_t3234 * __this, CharU5BU5D_t311* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine()
 void TextWriter_WriteLine_m11043 (TextWriter_t3234 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String)
 void TextWriter_WriteLine_m7957 (TextWriter_t3234 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
