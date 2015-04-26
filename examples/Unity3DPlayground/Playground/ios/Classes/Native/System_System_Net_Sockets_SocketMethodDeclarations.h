#pragma once

// System.Net.Sockets.Socket
struct Socket_t1576;
// System.Net.EndPoint
struct EndPoint_t1581;
// System.Net.SocketAddress
struct SocketAddress_t1589;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t121;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t1265;
// System.Net.Sockets.SocketType
#include "System_System_Net_Sockets_SocketType.h"
// System.Net.Sockets.AddressFamily
#include "System_System_Net_Sockets_AddressFamily.h"
// System.Net.Sockets.ProtocolType
#include "System_System_Net_Sockets_ProtocolType.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Net.Sockets.SocketFlags
#include "System_System_Net_Sockets_SocketFlags.h"
// System.Net.Sockets.SocketError
#include "System_System_Net_Sockets_SocketError.h"
// System.Net.Sockets.SelectMode
#include "System_System_Net_Sockets_SelectMode.h"
// System.Net.Sockets.SocketOptionLevel
#include "System_System_Net_Sockets_SocketOptionLevel.h"
// System.Net.Sockets.SocketOptionName
#include "System_System_Net_Sockets_SocketOptionName.h"
// System.Net.Sockets.SocketShutdown
#include "System_System_Net_Sockets_SocketShutdown.h"

// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.IntPtr)
 void Socket__ctor_m4615 (Socket_t1576 * __this, int32_t ___family, int32_t ___type, int32_t ___proto, IntPtr_t37 ___sock, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
 void Socket__ctor_m4616 (Socket_t1576 * __this, int32_t ___family, int32_t ___type, int32_t ___proto, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::.cctor()
 void Socket__cctor_m4617 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.Sockets.Socket::LocalEndPoint_internal(System.IntPtr,System.Int32&)
 SocketAddress_t1589 * Socket_LocalEndPoint_internal_m4618 (Object_t * __this/* static, unused */, IntPtr_t37 ___socket, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.Sockets.Socket::get_LocalEndPoint()
 EndPoint_t1581 * Socket_get_LocalEndPoint_m4619 (Socket_t1576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketType System.Net.Sockets.Socket::get_SocketType()
 int32_t Socket_get_SocketType_m4620 (Socket_t1576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::get_SendTimeout()
 int32_t Socket_get_SendTimeout_m4621 (Socket_t1576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::get_ReceiveTimeout()
 int32_t Socket_get_ReceiveTimeout_m4622 (Socket_t1576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Net.Sockets.Socket::Accept_internal(System.IntPtr,System.Int32&,System.Boolean)
 IntPtr_t37 Socket_Accept_internal_m4623 (Object_t * __this/* static, unused */, IntPtr_t37 ___sock, int32_t* ___error, bool ___blocking, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.Socket::Accept()
 Socket_t1576 * Socket_Accept_m4624 (Socket_t1576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
 Object_t * Socket_BeginReceive_m4625 (Socket_t1576 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___socket_flags, AsyncCallback_t189 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginSend(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
 Object_t * Socket_BeginSend_m4626 (Socket_t1576 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___socket_flags, AsyncCallback_t189 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Bind_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&)
 void Socket_Bind_internal_m4627 (Object_t * __this/* static, unused */, IntPtr_t37 ___sock, SocketAddress_t1589 * ___sa, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Bind(System.Net.EndPoint)
 void Socket_Bind_m4628 (Socket_t1576 * __this, EndPoint_t1581 * ___local_end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult)
 int32_t Socket_EndReceive_m4629 (Socket_t1576 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult,System.Net.Sockets.SocketError&)
 int32_t Socket_EndReceive_m4630 (Socket_t1576 * __this, Object_t * ___asyncResult, int32_t* ___errorCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult)
 int32_t Socket_EndSend_m4631 (Socket_t1576 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult,System.Net.Sockets.SocketError&)
 int32_t Socket_EndSend_m4632 (Socket_t1576 * __this, Object_t * ___asyncResult, int32_t* ___errorCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.Sockets.Socket::InvalidAsyncOp(System.String)
 Exception_t121 * Socket_InvalidAsyncOp_m4633 (Socket_t1576 * __this, String_t* ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Listen_internal(System.IntPtr,System.Int32,System.Int32&)
 void Socket_Listen_internal_m4634 (Object_t * __this/* static, unused */, IntPtr_t37 ___sock, int32_t ___backlog, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Listen(System.Int32)
 void Socket_Listen_m4635 (Socket_t1576 * __this, int32_t ___backlog, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::Poll(System.Int32,System.Net.Sockets.SelectMode)
 bool Socket_Poll_m4636 (Socket_t1576 * __this, int32_t ___time_us, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
 int32_t Socket_Receive_m4637 (Socket_t1576 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::RecvFrom_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress&,System.Int32&)
 int32_t Socket_RecvFrom_internal_m4638 (Object_t * __this/* static, unused */, IntPtr_t37 ___sock, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, SocketAddress_t1589 ** ___sockaddr, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&)
 int32_t Socket_ReceiveFrom_nochecks_m4639 (Socket_t1576 * __this, ByteU5BU5D_t1071* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t1581 ** ___remote_end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom_nochecks_exc(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&,System.Boolean,System.Int32&)
 int32_t Socket_ReceiveFrom_nochecks_exc_m4640 (Socket_t1576 * __this, ByteU5BU5D_t1071* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t1581 ** ___remote_end, bool ___throwOnError, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
 int32_t Socket_Send_m4641 (Socket_t1576 * __this, ByteU5BU5D_t1071* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_internal_real(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress,System.Int32&)
 int32_t Socket_SendTo_internal_real_m4642 (Object_t * __this/* static, unused */, IntPtr_t37 ___sock, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, SocketAddress_t1589 * ___sa, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress,System.Int32&)
 int32_t Socket_SendTo_internal_m4643 (Object_t * __this/* static, unused */, IntPtr_t37 ___sock, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, SocketAddress_t1589 * ___sa, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint)
 int32_t Socket_SendTo_nochecks_m4644 (Socket_t1576 * __this, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t1581 * ___remote_end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::CheckProtocolSupport()
 void Socket_CheckProtocolSupport_m4645 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_SupportsIPv4()
 bool Socket_get_SupportsIPv4_m4646 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_SupportsIPv6()
 bool Socket_get_SupportsIPv6_m4647 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Net.Sockets.Socket::Socket_internal(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.Int32&)
 IntPtr_t37 Socket_Socket_internal_m4648 (Socket_t1576 * __this, int32_t ___family, int32_t ___type, int32_t ___proto, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Finalize()
 void Socket_Finalize_m4649 (Socket_t1576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::get_AddressFamily()
 int32_t Socket_get_AddressFamily_m4650 (Socket_t1576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Blocking_internal(System.IntPtr,System.Boolean,System.Int32&)
 void Socket_Blocking_internal_m4651 (Object_t * __this/* static, unused */, IntPtr_t37 ___socket, bool ___block, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_Blocking()
 bool Socket_get_Blocking_m4652 (Socket_t1576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_Blocking(System.Boolean)
 void Socket_set_Blocking_m4653 (Socket_t1576 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_Connected()
 bool Socket_get_Connected_m4654 (Socket_t1576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::get_ProtocolType()
 int32_t Socket_get_ProtocolType_m4655 (Socket_t1576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_NoDelay(System.Boolean)
 void Socket_set_NoDelay_m4656 (Socket_t1576 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Linger(System.IntPtr)
 void Socket_Linger_m4657 (Socket_t1576 * __this, IntPtr_t37 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Dispose(System.Boolean)
 void Socket_Dispose_m4658 (Socket_t1576 * __this, bool ___explicitDisposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Dispose()
 void Socket_Dispose_m4659 (Socket_t1576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Close_internal(System.IntPtr,System.Int32&)
 void Socket_Close_internal_m4660 (Object_t * __this/* static, unused */, IntPtr_t37 ___socket, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Close()
 void Socket_Close_m4661 (Socket_t1576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect_internal_real(System.IntPtr,System.Net.SocketAddress,System.Int32&)
 void Socket_Connect_internal_real_m4662 (Object_t * __this/* static, unused */, IntPtr_t37 ___sock, SocketAddress_t1589 * ___sa, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&,System.Boolean)
 void Socket_Connect_internal_m4663 (Object_t * __this/* static, unused */, IntPtr_t37 ___sock, SocketAddress_t1589 * ___sa, int32_t* ___error, bool ___requireSocketPolicyFile, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::CheckEndPoint(System.Net.SocketAddress)
 bool Socket_CheckEndPoint_m4664 (Object_t * __this/* static, unused */, SocketAddress_t1589 * ___sa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Net.Sockets.Socket::GetUnityCrossDomainHelperMethod(System.String)
 MethodInfo_t1265 * Socket_GetUnityCrossDomainHelperMethod_m4665 (Object_t * __this/* static, unused */, String_t* ___methodname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint)
 void Socket_Connect_m4666 (Socket_t1576 * __this, EndPoint_t1581 * ___remoteEP, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint,System.Boolean)
 void Socket_Connect_m4667 (Socket_t1576 * __this, EndPoint_t1581 * ___remoteEP, bool ___requireSocketPolicy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::Poll_internal(System.IntPtr,System.Net.Sockets.SelectMode,System.Int32,System.Int32&)
 bool Socket_Poll_internal_m4668 (Object_t * __this/* static, unused */, IntPtr_t37 ___socket, int32_t ___mode, int32_t ___timeout, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&)
 int32_t Socket_Receive_internal_m4669 (Object_t * __this/* static, unused */, IntPtr_t37 ___sock, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
 int32_t Socket_Receive_nochecks_m4670 (Socket_t1576 * __this, ByteU5BU5D_t1071* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::GetSocketOption_obj_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object&,System.Int32&)
 void Socket_GetSocketOption_obj_internal_m4671 (Object_t * __this/* static, unused */, IntPtr_t37 ___socket, int32_t ___level, int32_t ___name, Object_t ** ___obj_val, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&)
 int32_t Socket_Send_internal_m4672 (Object_t * __this/* static, unused */, IntPtr_t37 ___sock, ByteU5BU5D_t1071* ___buf, int32_t ___offset, int32_t ___count, int32_t ___flags, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
 int32_t Socket_Send_nochecks_m4673 (Socket_t1576 * __this, ByteU5BU5D_t1071* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Sockets.Socket::GetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName)
 Object_t * Socket_GetSocketOption_m4674 (Socket_t1576 * __this, int32_t ___optionLevel, int32_t ___optionName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Shutdown_internal(System.IntPtr,System.Net.Sockets.SocketShutdown,System.Int32&)
 void Socket_Shutdown_internal_m4675 (Object_t * __this/* static, unused */, IntPtr_t37 ___socket, int32_t ___how, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SetSocketOption_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object,System.Byte[],System.Int32,System.Int32&)
 void Socket_SetSocketOption_internal_m4676 (Object_t * __this/* static, unused */, IntPtr_t37 ___socket, int32_t ___level, int32_t ___name, Object_t * ___obj_val, ByteU5BU5D_t1071* ___byte_val, int32_t ___int_val, int32_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Int32)
 void Socket_SetSocketOption_m4677 (Socket_t1576 * __this, int32_t ___optionLevel, int32_t ___optionName, int32_t ___optionValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::ThrowIfUpd()
 void Socket_ThrowIfUpd_m4678 (Socket_t1576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
