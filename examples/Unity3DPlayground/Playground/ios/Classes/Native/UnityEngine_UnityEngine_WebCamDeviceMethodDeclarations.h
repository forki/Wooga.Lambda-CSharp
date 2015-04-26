#pragma once

// UnityEngine.WebCamDevice
struct WebCamDevice_t1203;
struct WebCamDevice_t1203_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.WebCamDevice::get_name()
 String_t* WebCamDevice_get_name_m3736 (WebCamDevice_t1203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
 bool WebCamDevice_get_isFrontFacing_m3737 (WebCamDevice_t1203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void WebCamDevice_t1203_marshal(const WebCamDevice_t1203& unmarshaled, WebCamDevice_t1203_marshaled& marshaled);
void WebCamDevice_t1203_marshal_back(const WebCamDevice_t1203_marshaled& marshaled, WebCamDevice_t1203& unmarshaled);
void WebCamDevice_t1203_marshal_cleanup(WebCamDevice_t1203_marshaled& marshaled);
