#pragma once

// System.IO.UnexceptionalStreamReader
struct UnexceptionalStreamReader_t2236;
// System.IO.Stream
struct Stream_t1049;
// System.Text.Encoding
struct Encoding_t1068;
// System.Char[]
struct CharU5BU5D_t316;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
 void UnexceptionalStreamReader__ctor_m9555 (UnexceptionalStreamReader_t2236 * __this, Stream_t1049 * ___stream, Encoding_t1068 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamReader::.cctor()
 void UnexceptionalStreamReader__cctor_m9556 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Peek()
 int32_t UnexceptionalStreamReader_Peek_m9557 (UnexceptionalStreamReader_t2236 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Read()
 int32_t UnexceptionalStreamReader_Read_m9558 (UnexceptionalStreamReader_t2236 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Read(System.Char[],System.Int32,System.Int32)
 int32_t UnexceptionalStreamReader_Read_m9559 (UnexceptionalStreamReader_t2236 * __this, CharU5BU5D_t316* ___dest_buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnexceptionalStreamReader::CheckEOL(System.Char)
 bool UnexceptionalStreamReader_CheckEOL_m9560 (UnexceptionalStreamReader_t2236 * __this, uint16_t ___current, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.UnexceptionalStreamReader::ReadLine()
 String_t* UnexceptionalStreamReader_ReadLine_m9561 (UnexceptionalStreamReader_t2236 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.UnexceptionalStreamReader::ReadToEnd()
 String_t* UnexceptionalStreamReader_ReadToEnd_m9562 (UnexceptionalStreamReader_t2236 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
