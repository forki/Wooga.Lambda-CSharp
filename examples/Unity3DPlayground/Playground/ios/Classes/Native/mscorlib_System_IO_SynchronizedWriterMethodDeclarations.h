#pragma once

// System.IO.SynchronizedWriter
struct SynchronizedWriter_t2235;
// System.IO.TextWriter
struct TextWriter_t1866;
// System.Char[]
struct CharU5BU5D_t316;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void System.IO.SynchronizedWriter::.ctor(System.IO.TextWriter,System.Boolean)
 void SynchronizedWriter__ctor_m9544 (SynchronizedWriter_t2235 * __this, TextWriter_t1866 * ___writer, bool ___neverClose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Close()
 void SynchronizedWriter_Close_m9545 (SynchronizedWriter_t2235 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Flush()
 void SynchronizedWriter_Flush_m9546 (SynchronizedWriter_t2235 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char)
 void SynchronizedWriter_Write_m9547 (SynchronizedWriter_t2235 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[])
 void SynchronizedWriter_Write_m9548 (SynchronizedWriter_t2235 * __this, CharU5BU5D_t316* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String)
 void SynchronizedWriter_Write_m9549 (SynchronizedWriter_t2235 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String,System.Object)
 void SynchronizedWriter_Write_m9550 (SynchronizedWriter_t2235 * __this, String_t* ___format, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[],System.Int32,System.Int32)
 void SynchronizedWriter_Write_m9551 (SynchronizedWriter_t2235 * __this, CharU5BU5D_t316* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine()
 void SynchronizedWriter_WriteLine_m9552 (SynchronizedWriter_t2235 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String)
 void SynchronizedWriter_WriteLine_m9553 (SynchronizedWriter_t2235 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String,System.Object)
 void SynchronizedWriter_WriteLine_m9554 (SynchronizedWriter_t2235 * __this, String_t* ___format, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
