#pragma once

// System.IO.StreamWriter
struct StreamWriter_t2231;
// System.IO.Stream
struct Stream_t1049;
// System.Text.Encoding
struct Encoding_t1068;
// System.Char[]
struct CharU5BU5D_t316;
// System.String
struct String_t;

// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
 void StreamWriter__ctor_m9487 (StreamWriter_t2231 * __this, Stream_t1049 * ___stream, Encoding_t1068 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding,System.Int32)
 void StreamWriter__ctor_m9488 (StreamWriter_t2231 * __this, Stream_t1049 * ___stream, Encoding_t1068 * ___encoding, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.cctor()
 void StreamWriter__cctor_m9489 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Initialize(System.Text.Encoding,System.Int32)
 void StreamWriter_Initialize_m9490 (StreamWriter_t2231 * __this, Encoding_t1068 * ___encoding, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::set_AutoFlush(System.Boolean)
 void StreamWriter_set_AutoFlush_m9491 (StreamWriter_t2231 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Dispose(System.Boolean)
 void StreamWriter_Dispose_m9492 (StreamWriter_t2231 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Flush()
 void StreamWriter_Flush_m9493 (StreamWriter_t2231 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::FlushBytes()
 void StreamWriter_FlushBytes_m9494 (StreamWriter_t2231 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Decode()
 void StreamWriter_Decode_m9495 (StreamWriter_t2231 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[],System.Int32,System.Int32)
 void StreamWriter_Write_m9496 (StreamWriter_t2231 * __this, CharU5BU5D_t316* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.Char[],System.Int32,System.Int32)
 void StreamWriter_LowLevelWrite_m9497 (StreamWriter_t2231 * __this, CharU5BU5D_t316* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.String)
 void StreamWriter_LowLevelWrite_m9498 (StreamWriter_t2231 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char)
 void StreamWriter_Write_m9499 (StreamWriter_t2231 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[])
 void StreamWriter_Write_m9500 (StreamWriter_t2231 * __this, CharU5BU5D_t316* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.String)
 void StreamWriter_Write_m9501 (StreamWriter_t2231 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Close()
 void StreamWriter_Close_m9502 (StreamWriter_t2231 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Finalize()
 void StreamWriter_Finalize_m9503 (StreamWriter_t2231 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
