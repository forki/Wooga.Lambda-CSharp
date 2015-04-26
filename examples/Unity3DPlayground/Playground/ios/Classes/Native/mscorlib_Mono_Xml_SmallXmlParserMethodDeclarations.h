#pragma once

// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t2135;
// System.Exception
struct Exception_t121;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t1070;
// Mono.Xml.SmallXmlParser/IContentHandler
struct IContentHandler_t2138;
// Mono.Xml.SmallXmlParser/AttrListImpl
struct AttrListImpl_t2137;

// System.Void Mono.Xml.SmallXmlParser::.ctor()
 void SmallXmlParser__ctor_m8845 (SmallXmlParser_t2135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Xml.SmallXmlParser::Error(System.String)
 Exception_t121 * SmallXmlParser_Error_m8846 (SmallXmlParser_t2135 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Xml.SmallXmlParser::UnexpectedEndError()
 Exception_t121 * SmallXmlParser_UnexpectedEndError_m8847 (SmallXmlParser_t2135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.SmallXmlParser::IsNameChar(System.Char,System.Boolean)
 bool SmallXmlParser_IsNameChar_m8848 (SmallXmlParser_t2135 * __this, uint16_t ___c, bool ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.SmallXmlParser::IsWhitespace(System.Int32)
 bool SmallXmlParser_IsWhitespace_m8849 (SmallXmlParser_t2135 * __this, int32_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces()
 void SmallXmlParser_SkipWhitespaces_m8850 (SmallXmlParser_t2135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::HandleWhitespaces()
 void SmallXmlParser_HandleWhitespaces_m8851 (SmallXmlParser_t2135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces(System.Boolean)
 void SmallXmlParser_SkipWhitespaces_m8852 (SmallXmlParser_t2135 * __this, bool ___expected, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::Peek()
 int32_t SmallXmlParser_Peek_m8853 (SmallXmlParser_t2135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::Read()
 int32_t SmallXmlParser_Read_m8854 (SmallXmlParser_t2135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Expect(System.Int32)
 void SmallXmlParser_Expect_m8855 (SmallXmlParser_t2135 * __this, int32_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser::ReadUntil(System.Char,System.Boolean)
 String_t* SmallXmlParser_ReadUntil_m8856 (SmallXmlParser_t2135 * __this, uint16_t ___until, bool ___handleReferences, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser::ReadName()
 String_t* SmallXmlParser_ReadName_m8857 (SmallXmlParser_t2135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Parse(System.IO.TextReader,Mono.Xml.SmallXmlParser/IContentHandler)
 void SmallXmlParser_Parse_m8858 (SmallXmlParser_t2135 * __this, TextReader_t1070 * ___input, Object_t * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Cleanup()
 void SmallXmlParser_Cleanup_m8859 (SmallXmlParser_t2135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadContent()
 void SmallXmlParser_ReadContent_m8860 (SmallXmlParser_t2135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::HandleBufferedContent()
 void SmallXmlParser_HandleBufferedContent_m8861 (SmallXmlParser_t2135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadCharacters()
 void SmallXmlParser_ReadCharacters_m8862 (SmallXmlParser_t2135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadReference()
 void SmallXmlParser_ReadReference_m8863 (SmallXmlParser_t2135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::ReadCharacterReference()
 int32_t SmallXmlParser_ReadCharacterReference_m8864 (SmallXmlParser_t2135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadAttribute(Mono.Xml.SmallXmlParser/AttrListImpl)
 void SmallXmlParser_ReadAttribute_m8865 (SmallXmlParser_t2135 * __this, AttrListImpl_t2137 * ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadCDATASection()
 void SmallXmlParser_ReadCDATASection_m8866 (SmallXmlParser_t2135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadComment()
 void SmallXmlParser_ReadComment_m8867 (SmallXmlParser_t2135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
