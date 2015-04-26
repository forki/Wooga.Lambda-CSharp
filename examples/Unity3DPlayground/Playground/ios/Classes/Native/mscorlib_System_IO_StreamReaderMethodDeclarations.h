#pragma once

// System.IO.StreamReader
struct StreamReader_t1069;
// System.IO.Stream
struct Stream_t1049;
// System.Text.Encoding
struct Encoding_t1068;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t316;

// System.Void System.IO.StreamReader::.ctor()
 void StreamReader__ctor_m9473 (StreamReader_t1069 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
 void StreamReader__ctor_m3003 (StreamReader_t1069 * __this, Stream_t1049 * ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
 void StreamReader__ctor_m6363 (StreamReader_t1069 * __this, Stream_t1049 * ___stream, Encoding_t1068 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
 void StreamReader__ctor_m9474 (StreamReader_t1069 * __this, Stream_t1049 * ___stream, Encoding_t1068 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String)
 void StreamReader__ctor_m9475 (StreamReader_t1069 * __this, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean,System.Int32)
 void StreamReader__ctor_m9476 (StreamReader_t1069 * __this, String_t* ___path, Encoding_t1068 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.cctor()
 void StreamReader__cctor_m9477 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Initialize(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
 void StreamReader_Initialize_m9478 (StreamReader_t1069 * __this, Stream_t1049 * ___stream, Encoding_t1068 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Dispose(System.Boolean)
 void StreamReader_Dispose_m9479 (StreamReader_t1069 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::DoChecks(System.Int32)
 int32_t StreamReader_DoChecks_m9480 (StreamReader_t1069 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::ReadBuffer()
 int32_t StreamReader_ReadBuffer_m9481 (StreamReader_t1069 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Peek()
 int32_t StreamReader_Peek_m9482 (StreamReader_t1069 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Read()
 int32_t StreamReader_Read_m9483 (StreamReader_t1069 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Read(System.Char[],System.Int32,System.Int32)
 int32_t StreamReader_Read_m9484 (StreamReader_t1069 * __this, CharU5BU5D_t316* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::FindNextEOL()
 int32_t StreamReader_FindNextEOL_m9485 (StreamReader_t1069 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader::ReadLine()
 String_t* StreamReader_ReadLine_m6368 (StreamReader_t1069 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader::ReadToEnd()
 String_t* StreamReader_ReadToEnd_m9486 (StreamReader_t1069 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
