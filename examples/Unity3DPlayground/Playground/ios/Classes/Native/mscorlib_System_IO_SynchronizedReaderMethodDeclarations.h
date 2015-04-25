#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.SynchronizedReader
struct SynchronizedReader_t3595;
// System.IO.TextReader
struct TextReader_t3499;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t311;

// System.Void System.IO.SynchronizedReader::.ctor(System.IO.TextReader)
 void SynchronizedReader__ctor_m11022 (SynchronizedReader_t3595 * __this, TextReader_t3499 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.SynchronizedReader::Peek()
 int32_t SynchronizedReader_Peek_m11023 (SynchronizedReader_t3595 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.SynchronizedReader::ReadLine()
 String_t* SynchronizedReader_ReadLine_m11024 (SynchronizedReader_t3595 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.SynchronizedReader::ReadToEnd()
 String_t* SynchronizedReader_ReadToEnd_m11025 (SynchronizedReader_t3595 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.SynchronizedReader::Read()
 int32_t SynchronizedReader_Read_m11026 (SynchronizedReader_t3595 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.SynchronizedReader::Read(System.Char[],System.Int32,System.Int32)
 int32_t SynchronizedReader_Read_m11027 (SynchronizedReader_t3595 * __this, CharU5BU5D_t311* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
