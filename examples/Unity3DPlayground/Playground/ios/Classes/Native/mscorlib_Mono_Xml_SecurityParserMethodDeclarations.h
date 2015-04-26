#pragma once

// Mono.Xml.SecurityParser
struct SecurityParser_t2134;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t2133;
// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t2135;
// Mono.Xml.SmallXmlParser/IAttrList
struct IAttrList_t2136;

// System.Void Mono.Xml.SecurityParser::.ctor()
 void SecurityParser__ctor_m8829 (SecurityParser_t2134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::LoadXml(System.String)
 void SecurityParser_LoadXml_m8830 (SecurityParser_t2134 * __this, String_t* ___xml, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement Mono.Xml.SecurityParser::ToXml()
 SecurityElement_t2133 * SecurityParser_ToXml_m8831 (SecurityParser_t2134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnStartParsing(Mono.Xml.SmallXmlParser)
 void SecurityParser_OnStartParsing_m8832 (SecurityParser_t2134 * __this, SmallXmlParser_t2135 * ___parser, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnProcessingInstruction(System.String,System.String)
 void SecurityParser_OnProcessingInstruction_m8833 (SecurityParser_t2134 * __this, String_t* ___name, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnIgnorableWhitespace(System.String)
 void SecurityParser_OnIgnorableWhitespace_m8834 (SecurityParser_t2134 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
 void SecurityParser_OnStartElement_m8835 (SecurityParser_t2134 * __this, String_t* ___name, Object_t * ___attrs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnEndElement(System.String)
 void SecurityParser_OnEndElement_m8836 (SecurityParser_t2134 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnChars(System.String)
 void SecurityParser_OnChars_m8837 (SecurityParser_t2134 * __this, String_t* ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnEndParsing(Mono.Xml.SmallXmlParser)
 void SecurityParser_OnEndParsing_m8838 (SecurityParser_t2134 * __this, SmallXmlParser_t2135 * ___parser, MethodInfo* method) IL2CPP_METHOD_ATTR;
