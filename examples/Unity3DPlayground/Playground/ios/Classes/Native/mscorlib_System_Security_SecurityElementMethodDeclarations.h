#pragma once

// System.Security.SecurityElement
struct SecurityElement_t2133;
// System.Collections.ArrayList
struct ArrayList_t1547;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t404;
// System.Security.SecurityElement/SecurityAttribute
struct SecurityAttribute_t2482;

// System.Void System.Security.SecurityElement::.ctor(System.String)
 void SecurityElement__ctor_m10835 (SecurityElement_t2133 * __this, String_t* ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::.ctor(System.String,System.String)
 void SecurityElement__ctor_m10836 (SecurityElement_t2133 * __this, String_t* ___tag, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::.cctor()
 void SecurityElement__cctor_m10837 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityElement::get_Children()
 ArrayList_t1547 * SecurityElement_get_Children_m10838 (SecurityElement_t2133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::get_Tag()
 String_t* SecurityElement_get_Tag_m10839 (SecurityElement_t2133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::set_Text(System.String)
 void SecurityElement_set_Text_m10840 (SecurityElement_t2133 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::AddAttribute(System.String,System.String)
 void SecurityElement_AddAttribute_m10841 (SecurityElement_t2133 * __this, String_t* ___name, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::AddChild(System.Security.SecurityElement)
 void SecurityElement_AddChild_m10842 (SecurityElement_t2133 * __this, SecurityElement_t2133 * ___child, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Escape(System.String)
 String_t* SecurityElement_Escape_m10843 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Unescape(System.String)
 String_t* SecurityElement_Unescape_m10844 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidAttributeName(System.String)
 bool SecurityElement_IsValidAttributeName_m10845 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidAttributeValue(System.String)
 bool SecurityElement_IsValidAttributeValue_m10846 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidTag(System.String)
 bool SecurityElement_IsValidTag_m10847 (Object_t * __this/* static, unused */, String_t* ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidText(System.String)
 bool SecurityElement_IsValidText_m10848 (Object_t * __this/* static, unused */, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.SecurityElement::SearchForChildByTag(System.String)
 SecurityElement_t2133 * SecurityElement_SearchForChildByTag_m10849 (SecurityElement_t2133 * __this, String_t* ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::ToString()
 String_t* SecurityElement_ToString_m10850 (SecurityElement_t2133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::ToXml(System.Text.StringBuilder&,System.Int32)
 void SecurityElement_ToXml_m10851 (SecurityElement_t2133 * __this, StringBuilder_t404 ** ___s, int32_t ___level, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement/SecurityAttribute System.Security.SecurityElement::GetAttribute(System.String)
 SecurityAttribute_t2482 * SecurityElement_GetAttribute_m10852 (SecurityElement_t2133 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
