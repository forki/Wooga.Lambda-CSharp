#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StringReader
struct StringReader_t3593;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t311;

// System.Void System.IO.StringReader::.ctor(System.String)
 void StringReader__ctor_m11002 (StringReader_t3593 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringReader::Dispose(System.Boolean)
 void StringReader_Dispose_m11003 (StringReader_t3593 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StringReader::Peek()
 int32_t StringReader_Peek_m11004 (StringReader_t3593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StringReader::Read()
 int32_t StringReader_Read_m11005 (StringReader_t3593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StringReader::Read(System.Char[],System.Int32,System.Int32)
 int32_t StringReader_Read_m11006 (StringReader_t3593 * __this, CharU5BU5D_t311* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StringReader::ReadLine()
 String_t* StringReader_ReadLine_m11007 (StringReader_t3593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StringReader::ReadToEnd()
 String_t* StringReader_ReadToEnd_m11008 (StringReader_t3593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringReader::CheckObjectDisposedException()
 void StringReader_CheckObjectDisposedException_m11009 (StringReader_t3593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
