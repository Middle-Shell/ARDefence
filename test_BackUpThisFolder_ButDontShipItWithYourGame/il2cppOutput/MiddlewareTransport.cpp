#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32>
struct Action_2_t2E07896229FB84F193E1EFE789DDB074E447FCD2;
// System.Action`2<Mirror.TransportError,System.String>
struct Action_2_t1DB0E50B6F58F0A9FBE73D2080C1F2ABEB453625;
// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32>
struct Action_3_tAEA3B0FC298F161EA8A0E82285BF499D36D8A584;
// System.Action`3<System.Int32,Mirror.TransportError,System.String>
struct Action_3_t48732FCF57FB02B790A1EC558785687383D9D199;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Mirror.MiddlewareTransport
struct MiddlewareTransport_t6881C2B3AE46995A88E10ADBFF717B1ED9A92A82;
// System.String
struct String_t;
// Mirror.Transport
struct Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t0C2F844CB85B97FA1B5B727F13FB83F9B7E8F3A1 
{
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_35;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};

// System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32>
struct Action_2_t2E07896229FB84F193E1EFE789DDB074E447FCD2  : public MulticastDelegate_t
{
};

// System.Action`2<Mirror.TransportError,System.String>
struct Action_2_t1DB0E50B6F58F0A9FBE73D2080C1F2ABEB453625  : public MulticastDelegate_t
{
};

// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32>
struct Action_3_tAEA3B0FC298F161EA8A0E82285BF499D36D8A584  : public MulticastDelegate_t
{
};

// System.Action`3<System.Int32,Mirror.TransportError,System.String>
struct Action_3_t48732FCF57FB02B790A1EC558785687383D9D199  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Mirror.Transport
struct Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action Mirror.Transport::OnClientConnected
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnClientConnected_6;
	// System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32> Mirror.Transport::OnClientDataReceived
	Action_2_t2E07896229FB84F193E1EFE789DDB074E447FCD2* ___OnClientDataReceived_7;
	// System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32> Mirror.Transport::OnClientDataSent
	Action_2_t2E07896229FB84F193E1EFE789DDB074E447FCD2* ___OnClientDataSent_8;
	// System.Action`2<Mirror.TransportError,System.String> Mirror.Transport::OnClientError
	Action_2_t1DB0E50B6F58F0A9FBE73D2080C1F2ABEB453625* ___OnClientError_9;
	// System.Action Mirror.Transport::OnClientDisconnected
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnClientDisconnected_10;
	// System.Action`1<System.Int32> Mirror.Transport::OnServerConnected
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___OnServerConnected_11;
	// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32> Mirror.Transport::OnServerDataReceived
	Action_3_tAEA3B0FC298F161EA8A0E82285BF499D36D8A584* ___OnServerDataReceived_12;
	// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32> Mirror.Transport::OnServerDataSent
	Action_3_tAEA3B0FC298F161EA8A0E82285BF499D36D8A584* ___OnServerDataSent_13;
	// System.Action`3<System.Int32,Mirror.TransportError,System.String> Mirror.Transport::OnServerError
	Action_3_t48732FCF57FB02B790A1EC558785687383D9D199* ___OnServerError_14;
	// System.Action`1<System.Int32> Mirror.Transport::OnServerDisconnected
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___OnServerDisconnected_15;
};

struct Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07_StaticFields
{
	// Mirror.Transport Mirror.Transport::activeTransport
	Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* ___activeTransport_4;
	// Mirror.Transport Mirror.Transport::active
	Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* ___active_5;
};

// Mirror.MiddlewareTransport
struct MiddlewareTransport_t6881C2B3AE46995A88E10ADBFF717B1ED9A92A82  : public Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07
{
	// Mirror.Transport Mirror.MiddlewareTransport::inner
	Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* ___inner_16;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void Mirror.Transport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transport__ctor_m951E466BF3C4D441259ACE340863D31DC828B3AF (Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Mirror.MiddlewareTransport::Available()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MiddlewareTransport_Available_mEA776F4BC22CFA00CD31211B0BB0A4FC6387DC31 (MiddlewareTransport_t6881C2B3AE46995A88E10ADBFF717B1ED9A92A82* __this, const RuntimeMethod* method) 
{
	{
		// public override bool Available() => inner.Available();
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___inner_16;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean Mirror.Transport::Available() */, L_0);
		return L_1;
	}
}
// System.Int32 Mirror.MiddlewareTransport::GetMaxPacketSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MiddlewareTransport_GetMaxPacketSize_mF0A3616D2F73689F9B520771E0675BBD64412224 (MiddlewareTransport_t6881C2B3AE46995A88E10ADBFF717B1ED9A92A82* __this, int32_t ___channelId0, const RuntimeMethod* method) 
{
	{
		// public override int GetMaxPacketSize(int channelId = 0) => inner.GetMaxPacketSize(channelId);
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___inner_16;
		int32_t L_1 = ___channelId0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(17 /* System.Int32 Mirror.Transport::GetMaxPacketSize(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Int32 Mirror.MiddlewareTransport::GetBatchThreshold(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MiddlewareTransport_GetBatchThreshold_m97714DA4D7B1D7AC286E57D1533D9860514C7EA1 (MiddlewareTransport_t6881C2B3AE46995A88E10ADBFF717B1ED9A92A82* __this, int32_t ___channelId0, const RuntimeMethod* method) 
{
	{
		// public override int GetBatchThreshold(int channelId = Channels.Reliable) => inner.GetBatchThreshold(channelId);
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___inner_16;
		int32_t L_1 = ___channelId0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(18 /* System.Int32 Mirror.Transport::GetBatchThreshold(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Mirror.MiddlewareTransport::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_Shutdown_m3ED1C318FD42744354B0F2CF8F69E7DD3330D2C6 (MiddlewareTransport_t6881C2B3AE46995A88E10ADBFF717B1ED9A92A82* __this, const RuntimeMethod* method) 
{
	{
		// public override void Shutdown() => inner.Shutdown();
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___inner_16;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(23 /* System.Void Mirror.Transport::Shutdown() */, L_0);
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::ClientConnect(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ClientConnect_m94E77995862B3420F58A58DC482A887F1BC9FA4B (MiddlewareTransport_t6881C2B3AE46995A88E10ADBFF717B1ED9A92A82* __this, String_t* ___address0, const RuntimeMethod* method) 
{
	{
		// inner.OnClientConnected = OnClientConnected;
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___inner_16;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnClientConnected_6;
		NullCheck(L_0);
		L_0->___OnClientConnected_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___OnClientConnected_6), (void*)L_1);
		// inner.OnClientDataReceived = OnClientDataReceived;
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_2 = __this->___inner_16;
		Action_2_t2E07896229FB84F193E1EFE789DDB074E447FCD2* L_3 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnClientDataReceived_7;
		NullCheck(L_2);
		L_2->___OnClientDataReceived_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___OnClientDataReceived_7), (void*)L_3);
		// inner.OnClientDisconnected = OnClientDisconnected;
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_4 = __this->___inner_16;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnClientDisconnected_10;
		NullCheck(L_4);
		L_4->___OnClientDisconnected_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___OnClientDisconnected_10), (void*)L_5);
		// inner.OnClientError = OnClientError;
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_6 = __this->___inner_16;
		Action_2_t1DB0E50B6F58F0A9FBE73D2080C1F2ABEB453625* L_7 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnClientError_9;
		NullCheck(L_6);
		L_6->___OnClientError_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___OnClientError_9), (void*)L_7);
		// inner.ClientConnect(address);
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_8 = __this->___inner_16;
		String_t* L_9 = ___address0;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(6 /* System.Void Mirror.Transport::ClientConnect(System.String) */, L_8, L_9);
		// }
		return;
	}
}
// System.Boolean Mirror.MiddlewareTransport::ClientConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MiddlewareTransport_ClientConnected_m6DA119DE9A874EBAA33534E4A8ECF84642627F8C (MiddlewareTransport_t6881C2B3AE46995A88E10ADBFF717B1ED9A92A82* __this, const RuntimeMethod* method) 
{
	{
		// public override bool ClientConnected() => inner.ClientConnected();
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___inner_16;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean Mirror.Transport::ClientConnected() */, L_0);
		return L_1;
	}
}
// System.Void Mirror.MiddlewareTransport::ClientDisconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ClientDisconnect_m596CBD8BB6074F4F701C1D63AABFAFB9E978239F (MiddlewareTransport_t6881C2B3AE46995A88E10ADBFF717B1ED9A92A82* __this, const RuntimeMethod* method) 
{
	{
		// public override void ClientDisconnect() => inner.ClientDisconnect();
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___inner_16;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(9 /* System.Void Mirror.Transport::ClientDisconnect() */, L_0);
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::ClientSend(System.ArraySegment`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ClientSend_m525F3F57505FB25F80E4C4537701692FEE6D2937 (MiddlewareTransport_t6881C2B3AE46995A88E10ADBFF717B1ED9A92A82* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment0, int32_t ___channelId1, const RuntimeMethod* method) 
{
	{
		// public override void ClientSend(ArraySegment<byte> segment, int channelId) => inner.ClientSend(segment, channelId);
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___inner_16;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = ___segment0;
		int32_t L_2 = ___channelId1;
		NullCheck(L_0);
		VirtualActionInvoker2< ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, int32_t >::Invoke(8 /* System.Void Mirror.Transport::ClientSend(System.ArraySegment`1<System.Byte>,System.Int32) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::ClientEarlyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ClientEarlyUpdate_m8647359BDB5634739D81E5847BAAD266D0341F7F (MiddlewareTransport_t6881C2B3AE46995A88E10ADBFF717B1ED9A92A82* __this, const RuntimeMethod* method) 
{
	{
		// public override void ClientEarlyUpdate() => inner.ClientEarlyUpdate();
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___inner_16;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(19 /* System.Void Mirror.Transport::ClientEarlyUpdate() */, L_0);
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::ClientLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ClientLateUpdate_mF714C24A88982C18329EB9CF289B62BD1608A55B (MiddlewareTransport_t6881C2B3AE46995A88E10ADBFF717B1ED9A92A82* __this, const RuntimeMethod* method) 
{
	{
		// public override void ClientLateUpdate() => inner.ClientLateUpdate();
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___inner_16;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(21 /* System.Void Mirror.Transport::ClientLateUpdate() */, L_0);
		return;
	}
}
// System.Boolean Mirror.MiddlewareTransport::ServerActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MiddlewareTransport_ServerActive_mA8E028F4E23205AD81FB7DA32D1668248BC5F0C3 (MiddlewareTransport_t6881C2B3AE46995A88E10ADBFF717B1ED9A92A82* __this, const RuntimeMethod* method) 
{
	{
		// public override bool ServerActive() => inner.ServerActive();
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___inner_16;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(11 /* System.Boolean Mirror.Transport::ServerActive() */, L_0);
		return L_1;
	}
}
// System.Void Mirror.MiddlewareTransport::ServerStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ServerStart_mC6CAE6391BF1548E7FCB6DF797222EE009EB6A32 (MiddlewareTransport_t6881C2B3AE46995A88E10ADBFF717B1ED9A92A82* __this, const RuntimeMethod* method) 
{
	{
		// inner.OnServerConnected = OnServerConnected;
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___inner_16;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnServerConnected_11;
		NullCheck(L_0);
		L_0->___OnServerConnected_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___OnServerConnected_11), (void*)L_1);
		// inner.OnServerDataReceived = OnServerDataReceived;
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_2 = __this->___inner_16;
		Action_3_tAEA3B0FC298F161EA8A0E82285BF499D36D8A584* L_3 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnServerDataReceived_12;
		NullCheck(L_2);
		L_2->___OnServerDataReceived_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___OnServerDataReceived_12), (void*)L_3);
		// inner.OnServerDisconnected = OnServerDisconnected;
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_4 = __this->___inner_16;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_5 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnServerDisconnected_15;
		NullCheck(L_4);
		L_4->___OnServerDisconnected_15 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___OnServerDisconnected_15), (void*)L_5);
		// inner.OnServerError = OnServerError;
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_6 = __this->___inner_16;
		Action_3_t48732FCF57FB02B790A1EC558785687383D9D199* L_7 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnServerError_14;
		NullCheck(L_6);
		L_6->___OnServerError_14 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___OnServerError_14), (void*)L_7);
		// inner.ServerStart();
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_8 = __this->___inner_16;
		NullCheck(L_8);
		VirtualActionInvoker0::Invoke(12 /* System.Void Mirror.Transport::ServerStart() */, L_8);
		// }
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::ServerStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ServerStop_mECDB30E91CEE0E99368BA9385CE6EBBAF42B2D7F (MiddlewareTransport_t6881C2B3AE46995A88E10ADBFF717B1ED9A92A82* __this, const RuntimeMethod* method) 
{
	{
		// public override void ServerStop() => inner.ServerStop();
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___inner_16;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(16 /* System.Void Mirror.Transport::ServerStop() */, L_0);
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::ServerSend(System.Int32,System.ArraySegment`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ServerSend_m6DC5A59C068DD158DDEEF229349D54E2A36137E6 (MiddlewareTransport_t6881C2B3AE46995A88E10ADBFF717B1ED9A92A82* __this, int32_t ___connectionId0, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment1, int32_t ___channelId2, const RuntimeMethod* method) 
{
	{
		// public override void ServerSend(int connectionId, ArraySegment<byte> segment, int channelId) => inner.ServerSend(connectionId, segment, channelId);
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___inner_16;
		int32_t L_1 = ___connectionId0;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_2 = ___segment1;
		int32_t L_3 = ___channelId2;
		NullCheck(L_0);
		VirtualActionInvoker3< int32_t, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, int32_t >::Invoke(13 /* System.Void Mirror.Transport::ServerSend(System.Int32,System.ArraySegment`1<System.Byte>,System.Int32) */, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::ServerDisconnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ServerDisconnect_m450BFA0B4142DE97DD2F2BF07622087B4AC2D52B (MiddlewareTransport_t6881C2B3AE46995A88E10ADBFF717B1ED9A92A82* __this, int32_t ___connectionId0, const RuntimeMethod* method) 
{
	{
		// public override void ServerDisconnect(int connectionId) => inner.ServerDisconnect(connectionId);
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___inner_16;
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		VirtualActionInvoker1< int32_t >::Invoke(14 /* System.Void Mirror.Transport::ServerDisconnect(System.Int32) */, L_0, L_1);
		return;
	}
}
// System.String Mirror.MiddlewareTransport::ServerGetClientAddress(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiddlewareTransport_ServerGetClientAddress_mE80720766791DE621BF004DF4D8F48792E9853A2 (MiddlewareTransport_t6881C2B3AE46995A88E10ADBFF717B1ED9A92A82* __this, int32_t ___connectionId0, const RuntimeMethod* method) 
{
	{
		// public override string ServerGetClientAddress(int connectionId) => inner.ServerGetClientAddress(connectionId);
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___inner_16;
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, int32_t >::Invoke(15 /* System.String Mirror.Transport::ServerGetClientAddress(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Uri Mirror.MiddlewareTransport::ServerUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* MiddlewareTransport_ServerUri_mE9B29B8AF686935F732F725DED5A8004817A4F36 (MiddlewareTransport_t6881C2B3AE46995A88E10ADBFF717B1ED9A92A82* __this, const RuntimeMethod* method) 
{
	{
		// public override Uri ServerUri() => inner.ServerUri();
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___inner_16;
		NullCheck(L_0);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1;
		L_1 = VirtualFuncInvoker0< Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* >::Invoke(10 /* System.Uri Mirror.Transport::ServerUri() */, L_0);
		return L_1;
	}
}
// System.Void Mirror.MiddlewareTransport::ServerEarlyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ServerEarlyUpdate_m3E7A71F03EECB0D2BBDF3846143F238C6EFA842C (MiddlewareTransport_t6881C2B3AE46995A88E10ADBFF717B1ED9A92A82* __this, const RuntimeMethod* method) 
{
	{
		// public override void ServerEarlyUpdate() => inner.ServerEarlyUpdate();
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___inner_16;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(20 /* System.Void Mirror.Transport::ServerEarlyUpdate() */, L_0);
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::ServerLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport_ServerLateUpdate_mEBF88616E4AFBA0010944E30F063B260216A82DD (MiddlewareTransport_t6881C2B3AE46995A88E10ADBFF717B1ED9A92A82* __this, const RuntimeMethod* method) 
{
	{
		// public override void ServerLateUpdate() => inner.ServerLateUpdate();
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___inner_16;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(22 /* System.Void Mirror.Transport::ServerLateUpdate() */, L_0);
		return;
	}
}
// System.Void Mirror.MiddlewareTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiddlewareTransport__ctor_m12EEFBB6F29D39FC35AC847234AE5D05364E1C68 (MiddlewareTransport_t6881C2B3AE46995A88E10ADBFF717B1ED9A92A82* __this, const RuntimeMethod* method) 
{
	{
		Transport__ctor_m951E466BF3C4D441259ACE340863D31DC828B3AF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
