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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.ArraySegment`1<System.Byte>>
struct Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`2<System.ArraySegment`1<System.Byte>,System.ByteEnum>
struct Action_2_t2D9D96501E05939055535FB94722ADB1C4E570B4;
// System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32>
struct Action_2_t2E07896229FB84F193E1EFE789DDB074E447FCD2;
// System.Action`2<System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>
struct Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED;
// System.Action`2<System.ByteEnum,System.Object>
struct Action_2_tBCC61F27E6A6723F5DEAC0BC701267FC80237CFE;
// System.Action`2<kcp2k.ErrorCode,System.String>
struct Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487;
// System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>
struct Action_2_t959877CB7CAF347CECE7BC7588CE3B3D88817A2E;
// System.Action`2<Mirror.TransportError,System.String>
struct Action_2_t1DB0E50B6F58F0A9FBE73D2080C1F2ABEB453625;
// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.ByteEnum>
struct Action_3_t39E4F18E869147FBFE73AFCB489745713D136C99;
// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32>
struct Action_3_tAEA3B0FC298F161EA8A0E82285BF499D36D8A584;
// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>
struct Action_3_tE12BE99979C339D5F96975616AC3B9856017C9E4;
// System.Action`3<System.Int32,System.ByteEnum,System.Object>
struct Action_3_t948B3D0BD3945F4E479750B05235856B0ED54A52;
// System.Action`3<System.Int32,kcp2k.ErrorCode,System.String>
struct Action_3_tB927C850E441C1E678D28E51343AA3B753873A2D;
// System.Action`3<System.Int32,Mirror.TransportError,System.String>
struct Action_3_t48732FCF57FB02B790A1EC558785687383D9D199;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.ConnectionState>
struct ConcurrentDictionary_2_t472FAC4B7D3D409C1E5E69E3B64608184FFF4272;
// System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection>
struct Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`2<kcp2k.KcpServerConnection,System.Int32>
struct Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83;
// System.Func`2<kcp2k.KcpServerConnection,System.Int64>
struct Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
// System.Collections.Generic.IEnumerable`1<kcp2k.KcpServerConnection>
struct IEnumerable_1_tBA1CE103DEF7C04C0AE1D2FCB4FDA7CC6BE807FF;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,kcp2k.KcpServerConnection>
struct KeyCollection_t3620BFFA47F1F3EFC78683AD9D898189CA5563AE;
// System.Collections.Generic.List`1<Mirror.QueuedMessage>
struct List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,kcp2k.KcpServerConnection>
struct ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,kcp2k.KcpServerConnection>[]
struct EntryU5BU5D_tE89445298009B2EFBEA7853B955196BA9F62F7E3;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Mirror.QueuedMessage[]
struct QueuedMessageU5BU5D_t0B97FD904D679975CF316949854F85D33DED345B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// Telepathy.Client
struct Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042;
// Telepathy.ClientConnectionState
struct ClientConnectionState_tFB36316510B4D4F3E16338A71E4B0070FA1109B2;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.ILogger
struct ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// kcp2k.Kcp
struct Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3;
// kcp2k.KcpClient
struct KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5;
// kcp2k.KcpConfig
struct KcpConfig_t0C03722728EF98EB68D698A5DE03B2EEA9921FD3;
// kcp2k.KcpPeer
struct KcpPeer_t9877F9EA5CC2640D1A178EF2CE3097EB7E4309A2;
// kcp2k.KcpServer
struct KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6;
// kcp2k.KcpTransport
struct KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074;
// Mirror.LatencySimulation
struct LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C;
// Telepathy.MagnificentReceivePipe
struct MagnificentReceivePipe_tA6398C65695A7375ACB88FC46F7B5A9A6741685A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Telepathy.Server
struct Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.String
struct String_t;
// System.Net.Sockets.TcpListener
struct TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82;
// Mirror.TelepathyTransport
struct TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// Mirror.Transport
struct Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriBuilder
struct UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// kcp2k.KcpTransport/<>c
struct U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t959877CB7CAF347CECE7BC7588CE3B3D88817A2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_tB927C850E441C1E678D28E51343AA3B753873A2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_tE12BE99979C339D5F96975616AC3B9856017C9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorCode_tE65BC4A5E8394ECBF5FEEE7E6F65AFC33125DEA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KcpConfig_t0C03722728EF98EB68D698A5DE03B2EEA9921FD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Log_t9781903FA414ED78D7CFD5F3FB3EDC9EF32A3763_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkTime_tCD4F30747CA03A3546CF22603ADA94666CBBF375_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral052F608B101811F11367BF8AC7C12EF779D80EE8;
IL2CPP_EXTERN_C String_t* _stringLiteral10C63C8C602DD5E38BE4A758C90EBAC324CD3E69;
IL2CPP_EXTERN_C String_t* _stringLiteral1A6F74723145E7D67CC81ECE6223A9E74B7D9AA6;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA4D68E74CFF9B633248AD97AF1E76219DFFEB2;
IL2CPP_EXTERN_C String_t* _stringLiteral211B7E218A00AD1BD2CBCB2D5B179B3054BC5614;
IL2CPP_EXTERN_C String_t* _stringLiteral2BB4EA9C3831AFF284706373CC4FCDF2A7F29423;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968;
IL2CPP_EXTERN_C String_t* _stringLiteral3972FB35247EE348E7728EFA511D8799E48D45B6;
IL2CPP_EXTERN_C String_t* _stringLiteral40C08A491396526C235F8AA06FB5795ABCB40578;
IL2CPP_EXTERN_C String_t* _stringLiteral419B12628B3E524D69E9ECB19EDDD406CD742316;
IL2CPP_EXTERN_C String_t* _stringLiteral44AA9B32C683732404B7A54A90552A1AF0FA2951;
IL2CPP_EXTERN_C String_t* _stringLiteral47EC2319FA623A7296AA5C92ACE019E963C06300;
IL2CPP_EXTERN_C String_t* _stringLiteral4E8CFA17B532A84971C4610DC101CE1124814CCF;
IL2CPP_EXTERN_C String_t* _stringLiteral4F4683DDD2BE1706F0DC1753BF8876AC46CF6C59;
IL2CPP_EXTERN_C String_t* _stringLiteral5485DF65A5AD70B0B4426EAB6D393C6BD12E0B0F;
IL2CPP_EXTERN_C String_t* _stringLiteral6A73575D3AAEEDA0C0FBBB89B21429BF251D1AA8;
IL2CPP_EXTERN_C String_t* _stringLiteral710C87067D91A1562C09A9D3D67C64CAF7331613;
IL2CPP_EXTERN_C String_t* _stringLiteral780B762059704518D09A16D9F8C8BB89E4AED59B;
IL2CPP_EXTERN_C String_t* _stringLiteral83A97BB66E419B3BF3C187FE22E82A40D3637270;
IL2CPP_EXTERN_C String_t* _stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E;
IL2CPP_EXTERN_C String_t* _stringLiteral973A66DB55AF166CD9F932F251FE02DA521831C5;
IL2CPP_EXTERN_C String_t* _stringLiteral984177DAAF44D2BB62649414C4001D67DB5AA510;
IL2CPP_EXTERN_C String_t* _stringLiteralA1C922D278BFE4E8D6ECDD478AB8647DE753EB7D;
IL2CPP_EXTERN_C String_t* _stringLiteralAA08CDFC5085CF7E4192D56750787D111E301864;
IL2CPP_EXTERN_C String_t* _stringLiteralAA16D37945B909A6128D0DEE597FF63BA9E83C8C;
IL2CPP_EXTERN_C String_t* _stringLiteralB2E7C16867BFF673EBDDC2E5D919300C18C3FE05;
IL2CPP_EXTERN_C String_t* _stringLiteralB3FB58DAF2CFBF3D2821FA68068D1520C3A7E465;
IL2CPP_EXTERN_C String_t* _stringLiteralD73CF4BB8A380CC220E26F7A8E043F82AE17D5ED;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC7ABCA5219F17C4E2B43D828798162C5FE762FC;
IL2CPP_EXTERN_C String_t* _stringLiteralE5C31F428762090166BA3FEB4CBED42AEE59882B;
IL2CPP_EXTERN_C String_t* _stringLiteralE971D200E92B902817CBA6564BCC938A17CA6558;
IL2CPP_EXTERN_C String_t* _stringLiteralF15FEDCB3824C03B5F21AA79536BCFDF0CD6FF44;
IL2CPP_EXTERN_C String_t* _stringLiteralF463EA49BDCEC43EC4BAD1CF8AD65A431B473A9D;
IL2CPP_EXTERN_C String_t* _stringLiteralF5B7D55577ECC2D6DEFA55674921782E5003E75A;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mC967B0386C18A597A74E8E96FDFB2CB76A65C0DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Sum_TisKcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_m1B5C12A56406C80375D6DAC7EA90BB0C3AF31DEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Sum_TisKcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_m5B0FAC7DED1A89C9A266D63C7BDA1D1D0147B1F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpTransport_ClientConnect_m4A0E4054D55532BEC51A5FB6D2303F8F85BA47FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpTransport_ToTransportError_m5683BF645DB585008A659602F46A1B2D412B164B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpTransport_U3CAwakeU3Eb__23_1_m7E2D8162F7DA519AB1E6D66689948EE3D0564057_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpTransport_U3CAwakeU3Eb__23_2_mABB6265F7E7764A4527F3BB3C9AFB073C199A27B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpTransport_U3CAwakeU3Eb__23_3_m793D72C5F205FFAAB7279BFF17FFF8E90060B980_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpTransport_U3CAwakeU3Eb__23_4_m01A20A29245CD2E0F1CED676C2AE29E2A7449A25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpTransport_U3CAwakeU3Eb__23_5_m34364203AE4F37DC01E77A15ED7E3D68106707C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpTransport_U3CAwakeU3Eb__23_6_m1908BC5F872B473BF7F3A9B14F794AB6EF1C6743_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpTransport_U3CAwakeU3Eb__23_7_m920319D5344E4C8E6B540F2D0CD11B5728EFD7DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KcpTransport_U3CAwakeU3Eb__23_8_m1E3B9720779B007D816A2D945DE541BE6B5216FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LatencySimulation_Awake_mBE6F13B025E044568385B130164CFB715C504022_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9B10F34069191B7158D083249E97F542E88F5A62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mB85947D8DDC5924E037A24A5CB807CA1D2C7BCDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_mF8FDB5F3D85462C8B3A39366E9A58674A1B3E8F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m521C2E3BAF895F66C7C8E23860E51A356A81B708_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m049EBA47B702F54F0CECD280CC6E3E6F8EDAC66B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m97F8693A77EFF15FB5ABFC98D3851B2E38EFA81C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3C12A75A82A3129476838DCD9B4BD5D25C19BC0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelepathyTransport_ClientConnect_mE0361AC5DFA56E45C86E9713417064FF21A17F9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelepathyTransport_U3CAwakeU3Eb__16_0_m6EF5E01551C912BFFB7E91ABFC9ABCAE7B63884C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelepathyTransport_U3CCreateClientU3Eb__18_0_m387B59EDBDDCC321D26B2C00EA37C1735989387B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelepathyTransport_U3CCreateClientU3Eb__18_1_m77DC130C9B5E564C7D1A36EFBC29C6F07CE08F3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelepathyTransport_U3CCreateClientU3Eb__18_2_m68CF6DE0A3C3A938FFCB9486F6C433ED14CC257D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelepathyTransport_U3CServerStartU3Eb__27_0_m17A220EE3D4B74B06CB95B5EDA7A57EC6F3D169E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelepathyTransport_U3CServerStartU3Eb__27_1_mE76F0A6DBD39412F4049EAD373DF9CB2BA611762_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelepathyTransport_U3CServerStartU3Eb__27_2_mE14EDFE9FD30FD46BC79A776C83189D59CEB74FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__23_0_mF5014DA8A385E8A053CA9450002460EC83E6AE99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetAverageMaxReceiveRateU3Eb__46_0_m6E916BFAAA82B5B9DBBC3CA2DC683A06FD5BA09A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetAverageMaxSendRateU3Eb__45_0_m2FCFF577DEB032275B2C15022CB20380591E7D53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetTotalReceiveBufferU3Eb__50_0_m755F4E1E118DC154444D602B474415D562307F26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetTotalReceiveQueueU3Eb__48_0_m5C5BBC8E0CA73795CA586967A9B65D36BFECC218_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetTotalSendBufferU3Eb__49_0_m7801927C2D741F2C0DA99F9DB77A9C27820A7B5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetTotalSendQueueU3Eb__47_0_mB3E0E2654D646FC03E433E9ACB62F8B812F46135_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct QueuedMessageU5BU5D_t0B97FD904D679975CF316949854F85D33DED345B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t3E964E5DAE8A6A24336F2E886D83D2BA1E68A3CC 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection>
struct Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE89445298009B2EFBEA7853B955196BA9F62F7E3* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t3620BFFA47F1F3EFC78683AD9D898189CA5563AE* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Mirror.QueuedMessage>
struct List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	QueuedMessageU5BU5D_t0B97FD904D679975CF316949854F85D33DED345B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	QueuedMessageU5BU5D_t0B97FD904D679975CF316949854F85D33DED345B* ___s_emptyArray_5;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,kcp2k.KcpServerConnection>
struct ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* ____dictionary_0;
};
struct Il2CppArrayBounds;

// Telepathy.Common
struct Common_tA69BE931B7F9B7EA080C1C8902BD3116732B4EA8  : public RuntimeObject
{
	// System.Boolean Telepathy.Common::NoDelay
	bool ___NoDelay_0;
	// System.Int32 Telepathy.Common::MaxMessageSize
	int32_t ___MaxMessageSize_1;
	// System.Int32 Telepathy.Common::SendTimeout
	int32_t ___SendTimeout_2;
	// System.Int32 Telepathy.Common::ReceiveTimeout
	int32_t ___ReceiveTimeout_3;
};

// UnityEngine.Debug
struct Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F  : public RuntimeObject
{
};

struct Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticFields
{
	// UnityEngine.ILogger UnityEngine.Debug::s_DefaultLogger
	RuntimeObject* ___s_DefaultLogger_0;
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_1;
};

// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564  : public RuntimeObject
{
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

// kcp2k.KcpClient
struct KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5  : public RuntimeObject
{
	// kcp2k.KcpPeer kcp2k.KcpClient::peer
	KcpPeer_t9877F9EA5CC2640D1A178EF2CE3097EB7E4309A2* ___peer_0;
	// System.Net.Sockets.Socket kcp2k.KcpClient::socket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket_1;
	// System.Net.EndPoint kcp2k.KcpClient::remoteEndPoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remoteEndPoint_2;
	// System.Byte[] kcp2k.KcpClient::rawReceiveBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawReceiveBuffer_3;
	// System.Action kcp2k.KcpClient::OnConnected
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnConnected_4;
	// System.Action`2<System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel> kcp2k.KcpClient::OnData
	Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* ___OnData_5;
	// System.Action kcp2k.KcpClient::OnDisconnected
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnDisconnected_6;
	// System.Action`2<kcp2k.ErrorCode,System.String> kcp2k.KcpClient::OnError
	Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* ___OnError_7;
	// System.Boolean kcp2k.KcpClient::connected
	bool ___connected_8;
};

// kcp2k.KcpConfig
struct KcpConfig_t0C03722728EF98EB68D698A5DE03B2EEA9921FD3  : public RuntimeObject
{
	// System.Boolean kcp2k.KcpConfig::DualMode
	bool ___DualMode_0;
	// System.Boolean kcp2k.KcpConfig::MaximizeSocketBuffers
	bool ___MaximizeSocketBuffers_1;
	// System.Boolean kcp2k.KcpConfig::NoDelay
	bool ___NoDelay_2;
	// System.UInt32 kcp2k.KcpConfig::Interval
	uint32_t ___Interval_3;
	// System.Int32 kcp2k.KcpConfig::FastResend
	int32_t ___FastResend_4;
	// System.Boolean kcp2k.KcpConfig::CongestionWindow
	bool ___CongestionWindow_5;
	// System.UInt32 kcp2k.KcpConfig::SendWindowSize
	uint32_t ___SendWindowSize_6;
	// System.UInt32 kcp2k.KcpConfig::ReceiveWindowSize
	uint32_t ___ReceiveWindowSize_7;
	// System.Int32 kcp2k.KcpConfig::Timeout
	int32_t ___Timeout_8;
	// System.UInt32 kcp2k.KcpConfig::MaxRetransmits
	uint32_t ___MaxRetransmits_9;
};

// kcp2k.KcpPeer
struct KcpPeer_t9877F9EA5CC2640D1A178EF2CE3097EB7E4309A2  : public RuntimeObject
{
	// kcp2k.Kcp kcp2k.KcpPeer::kcp
	Kcp_t7FEB7DEEF1C5282CCA0714358DF71E192BAB76C3* ___kcp_0;
	// System.Action`1<System.ArraySegment`1<System.Byte>> kcp2k.KcpPeer::RawSend
	Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341* ___RawSend_1;
	// kcp2k.KcpState kcp2k.KcpPeer::state
	int32_t ___state_2;
	// System.Action kcp2k.KcpPeer::OnAuthenticated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAuthenticated_3;
	// System.Action`2<System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel> kcp2k.KcpPeer::OnData
	Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* ___OnData_4;
	// System.Action kcp2k.KcpPeer::OnDisconnected
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnDisconnected_5;
	// System.Action`2<kcp2k.ErrorCode,System.String> kcp2k.KcpPeer::OnError
	Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* ___OnError_6;
	// System.Int32 kcp2k.KcpPeer::timeout
	int32_t ___timeout_8;
	// System.UInt32 kcp2k.KcpPeer::lastReceiveTime
	uint32_t ___lastReceiveTime_9;
	// System.Diagnostics.Stopwatch kcp2k.KcpPeer::watch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___watch_10;
	// System.Byte[] kcp2k.KcpPeer::kcpMessageBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___kcpMessageBuffer_13;
	// System.Byte[] kcp2k.KcpPeer::kcpSendBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___kcpSendBuffer_14;
	// System.Byte[] kcp2k.KcpPeer::rawSendBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawSendBuffer_15;
	// System.UInt32 kcp2k.KcpPeer::lastPingTime
	uint32_t ___lastPingTime_17;
};

// kcp2k.KcpServer
struct KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6  : public RuntimeObject
{
	// System.Action`1<System.Int32> kcp2k.KcpServer::OnConnected
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___OnConnected_0;
	// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel> kcp2k.KcpServer::OnData
	Action_3_tE12BE99979C339D5F96975616AC3B9856017C9E4* ___OnData_1;
	// System.Action`1<System.Int32> kcp2k.KcpServer::OnDisconnected
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___OnDisconnected_2;
	// System.Action`3<System.Int32,kcp2k.ErrorCode,System.String> kcp2k.KcpServer::OnError
	Action_3_tB927C850E441C1E678D28E51343AA3B753873A2D* ___OnError_3;
	// kcp2k.KcpConfig kcp2k.KcpServer::config
	KcpConfig_t0C03722728EF98EB68D698A5DE03B2EEA9921FD3* ___config_4;
	// System.Net.Sockets.Socket kcp2k.KcpServer::socket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket_5;
	// System.Net.EndPoint kcp2k.KcpServer::newClientEP
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___newClientEP_6;
	// System.Byte[] kcp2k.KcpServer::rawReceiveBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawReceiveBuffer_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection> kcp2k.KcpServer::connections
	Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* ___connections_8;
	// System.Collections.Generic.HashSet`1<System.Int32> kcp2k.KcpServer::connectionsToRemove
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___connectionsToRemove_9;
};

// Telepathy.Log
struct Log_t9781903FA414ED78D7CFD5F3FB3EDC9EF32A3763  : public RuntimeObject
{
};

struct Log_t9781903FA414ED78D7CFD5F3FB3EDC9EF32A3763_StaticFields
{
	// System.Action`1<System.String> Telepathy.Log::Info
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___Info_0;
	// System.Action`1<System.String> Telepathy.Log::Warning
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___Warning_1;
	// System.Action`1<System.String> Telepathy.Log::Error
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___Error_2;
};

// kcp2k.Log
struct Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961  : public RuntimeObject
{
};

struct Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields
{
	// System.Action`1<System.String> kcp2k.Log::Info
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___Info_0;
	// System.Action`1<System.String> kcp2k.Log::Warning
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___Warning_1;
	// System.Action`1<System.String> kcp2k.Log::Error
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___Error_2;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_3;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_4;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_5;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_7;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_6;
};

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

// System.Net.Sockets.TcpListener
struct TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82  : public RuntimeObject
{
	// System.Net.IPEndPoint System.Net.Sockets.TcpListener::m_ServerSocketEP
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___m_ServerSocketEP_0;
	// System.Net.Sockets.Socket System.Net.Sockets.TcpListener::m_ServerSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___m_ServerSocket_1;
	// System.Boolean System.Net.Sockets.TcpListener::m_Active
	bool ___m_Active_2;
	// System.Boolean System.Net.Sockets.TcpListener::m_ExclusiveAddressUse
	bool ___m_ExclusiveAddressUse_3;
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

// System.UriBuilder
struct UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72  : public RuntimeObject
{
	// System.Boolean System.UriBuilder::_changed
	bool ____changed_0;
	// System.String System.UriBuilder::_fragment
	String_t* ____fragment_1;
	// System.String System.UriBuilder::_host
	String_t* ____host_2;
	// System.String System.UriBuilder::_password
	String_t* ____password_3;
	// System.String System.UriBuilder::_path
	String_t* ____path_4;
	// System.Int32 System.UriBuilder::_port
	int32_t ____port_5;
	// System.String System.UriBuilder::_query
	String_t* ____query_6;
	// System.String System.UriBuilder::_scheme
	String_t* ____scheme_7;
	// System.String System.UriBuilder::_schemeDelimiter
	String_t* ____schemeDelimiter_8;
	// System.Uri System.UriBuilder::_uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____uri_9;
	// System.String System.UriBuilder::_username
	String_t* ____username_10;
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

// kcp2k.KcpTransport/<>c
struct U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967  : public RuntimeObject
{
};

struct U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields
{
	// kcp2k.KcpTransport/<>c kcp2k.KcpTransport/<>c::<>9
	U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967* ___U3CU3E9_0;
	// System.Action`1<System.String> kcp2k.KcpTransport/<>c::<>9__23_0
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___U3CU3E9__23_0_1;
	// System.Func`2<kcp2k.KcpServerConnection,System.Int64> kcp2k.KcpTransport/<>c::<>9__45_0
	Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA* ___U3CU3E9__45_0_2;
	// System.Func`2<kcp2k.KcpServerConnection,System.Int64> kcp2k.KcpTransport/<>c::<>9__46_0
	Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA* ___U3CU3E9__46_0_3;
	// System.Func`2<kcp2k.KcpServerConnection,System.Int32> kcp2k.KcpTransport/<>c::<>9__47_0
	Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* ___U3CU3E9__47_0_4;
	// System.Func`2<kcp2k.KcpServerConnection,System.Int32> kcp2k.KcpTransport/<>c::<>9__48_0
	Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* ___U3CU3E9__48_0_5;
	// System.Func`2<kcp2k.KcpServerConnection,System.Int32> kcp2k.KcpTransport/<>c::<>9__49_0
	Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* ___U3CU3E9__49_0_6;
	// System.Func`2<kcp2k.KcpServerConnection,System.Int32> kcp2k.KcpTransport/<>c::<>9__50_0
	Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* ___U3CU3E9__50_0_7;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// Telepathy.Client
struct Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042  : public Common_tA69BE931B7F9B7EA080C1C8902BD3116732B4EA8
{
	// System.Action Telepathy.Client::OnConnected
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnConnected_4;
	// System.Action`1<System.ArraySegment`1<System.Byte>> Telepathy.Client::OnData
	Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341* ___OnData_5;
	// System.Action Telepathy.Client::OnDisconnected
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnDisconnected_6;
	// System.Int32 Telepathy.Client::SendQueueLimit
	int32_t ___SendQueueLimit_7;
	// System.Int32 Telepathy.Client::ReceiveQueueLimit
	int32_t ___ReceiveQueueLimit_8;
	// Telepathy.ClientConnectionState Telepathy.Client::state
	ClientConnectionState_tFB36316510B4D4F3E16338A71E4B0070FA1109B2* ___state_9;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB  : public EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564
{
	// System.Net.IPAddress System.Net.IPEndPoint::_address
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ____address_2;
	// System.Int32 System.Net.IPEndPoint::_port
	int32_t ____port_3;
};

struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_StaticFields
{
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___Any_5;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___IPv6Any_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// kcp2k.KcpServerConnection
struct KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D 
{
	// kcp2k.KcpPeer kcp2k.KcpServerConnection::peer
	KcpPeer_t9877F9EA5CC2640D1A178EF2CE3097EB7E4309A2* ___peer_0;
	// System.Net.EndPoint kcp2k.KcpServerConnection::remoteEndPoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remoteEndPoint_1;
};
// Native definition for P/Invoke marshalling of kcp2k.KcpServerConnection
struct KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_marshaled_pinvoke
{
	KcpPeer_t9877F9EA5CC2640D1A178EF2CE3097EB7E4309A2* ___peer_0;
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remoteEndPoint_1;
};
// Native definition for COM marshalling of kcp2k.KcpServerConnection
struct KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_marshaled_com
{
	KcpPeer_t9877F9EA5CC2640D1A178EF2CE3097EB7E4309A2* ___peer_0;
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remoteEndPoint_1;
};

// Mirror.QueuedMessage
struct QueuedMessage_t0465622402518531C942E619F10090228F292C33 
{
	// System.Int32 Mirror.QueuedMessage::connectionId
	int32_t ___connectionId_0;
	// System.Byte[] Mirror.QueuedMessage::bytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes_1;
	// System.Double Mirror.QueuedMessage::time
	double ___time_2;
};
// Native definition for P/Invoke marshalling of Mirror.QueuedMessage
struct QueuedMessage_t0465622402518531C942E619F10090228F292C33_marshaled_pinvoke
{
	int32_t ___connectionId_0;
	Il2CppSafeArray/*NONE*/* ___bytes_1;
	double ___time_2;
};
// Native definition for COM marshalling of Mirror.QueuedMessage
struct QueuedMessage_t0465622402518531C942E619F10090228F292C33_marshaled_com
{
	int32_t ___connectionId_0;
	Il2CppSafeArray/*NONE*/* ___bytes_1;
	double ___time_2;
};

// Telepathy.Server
struct Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3  : public Common_tA69BE931B7F9B7EA080C1C8902BD3116732B4EA8
{
	// System.Action`1<System.Int32> Telepathy.Server::OnConnected
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___OnConnected_4;
	// System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>> Telepathy.Server::OnData
	Action_2_t959877CB7CAF347CECE7BC7588CE3B3D88817A2E* ___OnData_5;
	// System.Action`1<System.Int32> Telepathy.Server::OnDisconnected
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___OnDisconnected_6;
	// System.Net.Sockets.TcpListener Telepathy.Server::listener
	TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82* ___listener_7;
	// System.Threading.Thread Telepathy.Server::listenerThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___listenerThread_8;
	// System.Int32 Telepathy.Server::SendQueueLimit
	int32_t ___SendQueueLimit_9;
	// System.Int32 Telepathy.Server::ReceiveQueueLimit
	int32_t ___ReceiveQueueLimit_10;
	// Telepathy.MagnificentReceivePipe Telepathy.Server::receivePipe
	MagnificentReceivePipe_tA6398C65695A7375ACB88FC46F7B5A9A6741685A* ___receivePipe_11;
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.ConnectionState> Telepathy.Server::clients
	ConcurrentDictionary_2_t472FAC4B7D3D409C1E5E69E3B64608184FFF4272* ___clients_12;
	// System.Int32 Telepathy.Server::counter
	int32_t ___counter_13;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action`1<System.ArraySegment`1<System.Byte>>
struct Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341  : public MulticastDelegate_t
{
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32>
struct Action_2_t2E07896229FB84F193E1EFE789DDB074E447FCD2  : public MulticastDelegate_t
{
};

// System.Action`2<System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>
struct Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED  : public MulticastDelegate_t
{
};

// System.Action`2<System.ByteEnum,System.Object>
struct Action_2_tBCC61F27E6A6723F5DEAC0BC701267FC80237CFE  : public MulticastDelegate_t
{
};

// System.Action`2<kcp2k.ErrorCode,System.String>
struct Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487  : public MulticastDelegate_t
{
};

// System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>
struct Action_2_t959877CB7CAF347CECE7BC7588CE3B3D88817A2E  : public MulticastDelegate_t
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

// System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>
struct Action_3_tE12BE99979C339D5F96975616AC3B9856017C9E4  : public MulticastDelegate_t
{
};

// System.Action`3<System.Int32,System.ByteEnum,System.Object>
struct Action_3_t948B3D0BD3945F4E479750B05235856B0ED54A52  : public MulticastDelegate_t
{
};

// System.Action`3<System.Int32,kcp2k.ErrorCode,System.String>
struct Action_3_tB927C850E441C1E678D28E51343AA3B753873A2D  : public MulticastDelegate_t
{
};

// System.Action`3<System.Int32,Mirror.TransportError,System.String>
struct Action_3_t48732FCF57FB02B790A1EC558785687383D9D199  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Func`2<kcp2k.KcpServerConnection,System.Int32>
struct Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83  : public MulticastDelegate_t
{
};

// System.Func`2<kcp2k.KcpServerConnection,System.Int64>
struct Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.Runtime.InteropServices.ExternalException
struct ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// System.ComponentModel.Win32Exception
struct Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9  : public ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C
{
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_18;
};

// System.Net.Sockets.SocketException
struct SocketException_t6D10102A62EA871BD31748E026A372DB6804083B  : public Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9
{
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___m_EndPoint_19;
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

// kcp2k.KcpTransport
struct KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074  : public Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07
{
	// System.UInt16 kcp2k.KcpTransport::Port
	uint16_t ___Port_17;
	// System.Boolean kcp2k.KcpTransport::DualMode
	bool ___DualMode_18;
	// System.Boolean kcp2k.KcpTransport::NoDelay
	bool ___NoDelay_19;
	// System.UInt32 kcp2k.KcpTransport::Interval
	uint32_t ___Interval_20;
	// System.Int32 kcp2k.KcpTransport::Timeout
	int32_t ___Timeout_21;
	// System.Int32 kcp2k.KcpTransport::FastResend
	int32_t ___FastResend_22;
	// System.Boolean kcp2k.KcpTransport::CongestionWindow
	bool ___CongestionWindow_23;
	// System.UInt32 kcp2k.KcpTransport::SendWindowSize
	uint32_t ___SendWindowSize_24;
	// System.UInt32 kcp2k.KcpTransport::ReceiveWindowSize
	uint32_t ___ReceiveWindowSize_25;
	// System.UInt32 kcp2k.KcpTransport::MaxRetransmit
	uint32_t ___MaxRetransmit_26;
	// System.Boolean kcp2k.KcpTransport::MaximizeSocketBuffers
	bool ___MaximizeSocketBuffers_27;
	// System.Int32 kcp2k.KcpTransport::ReliableMaxMessageSize
	int32_t ___ReliableMaxMessageSize_28;
	// System.Int32 kcp2k.KcpTransport::UnreliableMaxMessageSize
	int32_t ___UnreliableMaxMessageSize_29;
	// kcp2k.KcpConfig kcp2k.KcpTransport::config
	KcpConfig_t0C03722728EF98EB68D698A5DE03B2EEA9921FD3* ___config_30;
	// kcp2k.KcpServer kcp2k.KcpTransport::server
	KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* ___server_31;
	// kcp2k.KcpClient kcp2k.KcpTransport::client
	KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* ___client_32;
	// System.Boolean kcp2k.KcpTransport::debugLog
	bool ___debugLog_33;
	// System.Boolean kcp2k.KcpTransport::statisticsGUI
	bool ___statisticsGUI_34;
	// System.Boolean kcp2k.KcpTransport::statisticsLog
	bool ___statisticsLog_35;
};

// Mirror.LatencySimulation
struct LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C  : public Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07
{
	// Mirror.Transport Mirror.LatencySimulation::wrap
	Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* ___wrap_16;
	// System.Single Mirror.LatencySimulation::jitter
	float ___jitter_17;
	// System.Single Mirror.LatencySimulation::jitterSpeed
	float ___jitterSpeed_18;
	// System.Single Mirror.LatencySimulation::reliableLatency
	float ___reliableLatency_19;
	// System.Single Mirror.LatencySimulation::unreliableLoss
	float ___unreliableLoss_20;
	// System.Single Mirror.LatencySimulation::unreliableLatency
	float ___unreliableLatency_21;
	// System.Single Mirror.LatencySimulation::unreliableScramble
	float ___unreliableScramble_22;
	// System.Collections.Generic.List`1<Mirror.QueuedMessage> Mirror.LatencySimulation::reliableClientToServer
	List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* ___reliableClientToServer_23;
	// System.Collections.Generic.List`1<Mirror.QueuedMessage> Mirror.LatencySimulation::reliableServerToClient
	List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* ___reliableServerToClient_24;
	// System.Collections.Generic.List`1<Mirror.QueuedMessage> Mirror.LatencySimulation::unreliableClientToServer
	List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* ___unreliableClientToServer_25;
	// System.Collections.Generic.List`1<Mirror.QueuedMessage> Mirror.LatencySimulation::unreliableServerToClient
	List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* ___unreliableServerToClient_26;
	// System.Random Mirror.LatencySimulation::random
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___random_27;
};

// Mirror.TelepathyTransport
struct TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258  : public Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07
{
	// System.UInt16 Mirror.TelepathyTransport::port
	uint16_t ___port_17;
	// System.Boolean Mirror.TelepathyTransport::NoDelay
	bool ___NoDelay_18;
	// System.Int32 Mirror.TelepathyTransport::SendTimeout
	int32_t ___SendTimeout_19;
	// System.Int32 Mirror.TelepathyTransport::ReceiveTimeout
	int32_t ___ReceiveTimeout_20;
	// System.Int32 Mirror.TelepathyTransport::serverMaxMessageSize
	int32_t ___serverMaxMessageSize_21;
	// System.Int32 Mirror.TelepathyTransport::serverMaxReceivesPerTick
	int32_t ___serverMaxReceivesPerTick_22;
	// System.Int32 Mirror.TelepathyTransport::serverSendQueueLimitPerConnection
	int32_t ___serverSendQueueLimitPerConnection_23;
	// System.Int32 Mirror.TelepathyTransport::serverReceiveQueueLimitPerConnection
	int32_t ___serverReceiveQueueLimitPerConnection_24;
	// System.Int32 Mirror.TelepathyTransport::clientMaxMessageSize
	int32_t ___clientMaxMessageSize_25;
	// System.Int32 Mirror.TelepathyTransport::clientMaxReceivesPerTick
	int32_t ___clientMaxReceivesPerTick_26;
	// System.Int32 Mirror.TelepathyTransport::clientSendQueueLimit
	int32_t ___clientSendQueueLimit_27;
	// System.Int32 Mirror.TelepathyTransport::clientReceiveQueueLimit
	int32_t ___clientReceiveQueueLimit_28;
	// Telepathy.Client Mirror.TelepathyTransport::client
	Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* ___client_29;
	// Telepathy.Server Mirror.TelepathyTransport::server
	Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* ___server_30;
	// System.Func`1<System.Boolean> Mirror.TelepathyTransport::enabledCheck
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___enabledCheck_31;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Mirror.QueuedMessage[]
struct QueuedMessageU5BU5D_t0B97FD904D679975CF316949854F85D33DED345B  : public RuntimeArray
{
	ALIGN_FIELD (8) QueuedMessage_t0465622402518531C942E619F10090228F292C33 m_Items[1];

	inline QueuedMessage_t0465622402518531C942E619F10090228F292C33 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline QueuedMessage_t0465622402518531C942E619F10090228F292C33* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, QueuedMessage_t0465622402518531C942E619F10090228F292C33 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___bytes_1), (void*)NULL);
	}
	inline QueuedMessage_t0465622402518531C942E619F10090228F292C33 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline QueuedMessage_t0465622402518531C942E619F10090228F292C33* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, QueuedMessage_t0465622402518531C942E619F10090228F292C33 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___bytes_1), (void*)NULL);
	}
};


// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// T[] System.ArraySegment`1<System.Byte>::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mirror.QueuedMessage>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m9B10F34069191B7158D083249E97F542E88F5A62_gshared_inline (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* __this, QueuedMessage_t0465622402518531C942E619F10090228F292C33 ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Mirror.QueuedMessage>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m97F8693A77EFF15FB5ABFC98D3851B2E38EFA81C_gshared_inline (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mirror.QueuedMessage>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mF8FDB5F3D85462C8B3A39366E9A58674A1B3E8F8_gshared (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* __this, int32_t ___index0, QueuedMessage_t0465622402518531C942E619F10090228F292C33 ___item1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mirror.QueuedMessage>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mB85947D8DDC5924E037A24A5CB807CA1D2C7BCDA_gshared_inline (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Mirror.QueuedMessage>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QueuedMessage_t0465622402518531C942E619F10090228F292C33 List_1_get_Item_m3C12A75A82A3129476838DCD9B4BD5D25C19BC0E_gshared (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_gshared (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mirror.QueuedMessage>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m521C2E3BAF895F66C7C8E23860E51A356A81B708_gshared (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mirror.QueuedMessage>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m049EBA47B702F54F0CECD280CC6E3E6F8EDAC66B_gshared (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2F501C85F4BAD84573D1479FD2D3D94F6CB8687A_gshared (Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mD9B56B532E7EB3082C89484B6BEA93F5E281B185_gshared_inline (Action_2_t2E07896229FB84F193E1EFE789DDB074E447FCD2* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___arg10, int32_t ___arg21, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87_gshared (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m9DD325FFD17E78823DB4542941E757F225BB7FD8_gshared (Action_2_t959877CB7CAF347CECE7BC7588CE3B3D88817A2E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32>::Invoke(T1,T2,T3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_mE96CDA1049F0D885C6E04E35F00C99EFB3418262_gshared_inline (Action_3_tAEA3B0FC298F161EA8A0E82285BF499D36D8A584* __this, int32_t ___arg10, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___arg21, int32_t ___arg32, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.ArraySegment`1<System.Byte>,System.ByteEnum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mAFD0A239D229927CC1C4AADEC3605985BC074C4E_gshared (Action_2_t2D9D96501E05939055535FB94722ADB1C4E570B4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.ByteEnum,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mC40C1DDBF3B0A94B53CC0D45739F068D1218E799_gshared (Action_2_tBCC61F27E6A6723F5DEAC0BC701267FC80237CFE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.ByteEnum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_mEB587BDB5E6F594DA6A8B6D566C44933195AE738_gshared (Action_3_t39E4F18E869147FBFE73AFCB489745713D136C99* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Int32,System.ByteEnum,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_mB469C22D012BCF3BF2AE6A3D8EC1740DF2BD4DD7_gshared (Action_3_t948B3D0BD3945F4E479750B05235856B0ED54A52* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC967B0386C18A597A74E8E96FDFB2CB76A65C0DB_gshared (Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C_gshared (Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<kcp2k.KcpServerConnection,System.Int64>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m0BFF066ABDCD0D6403AA7885C9B2EFDB8E16AC9E_gshared (Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int64 System.Linq.Enumerable::Sum<kcp2k.KcpServerConnection>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Enumerable_Sum_TisKcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_m1B5C12A56406C80375D6DAC7EA90BB0C3AF31DEA_gshared (RuntimeObject* ___source0, Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA* ___selector1, const RuntimeMethod* method) ;
// System.Void System.Func`2<kcp2k.KcpServerConnection,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA9F758309CD0504586E6582C75DD05C5075C2E34_gshared (Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Sum<kcp2k.KcpServerConnection>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Sum_TisKcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_m5B0FAC7DED1A89C9A266D63C7BDA1D1D0147B1F7_gshared (RuntimeObject* ___source0, Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* ___selector1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.ByteEnum,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mADA9AC43FB6FD8EC3EEDF8200782C490A1F7C834_gshared_inline (Action_2_tBCC61F27E6A6723F5DEAC0BC701267FC80237CFE* __this, uint8_t ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Int32,System.ByteEnum,System.Object>::Invoke(T1,T2,T3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m4AD71431485D0650D2983AA721404AD8005D9257_gshared_inline (Action_3_t948B3D0BD3945F4E479750B05235856B0ED54A52* __this, int32_t ___arg10, uint8_t ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PerlinNoise_mAB0E53C29FE95469CF303364910AD0D8662A9A6A (float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Double UnityEngine.Time::get_unscaledTimeAsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Time_get_unscaledTimeAsDouble_mCF32298EFF264160A84352BB1788EE861A00CBB9 (const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
inline int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline)(__this, method);
}
// T[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline)(__this, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline)(__this, method);
}
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mirror.QueuedMessage>::Add(T)
inline void List_1_Add_m9B10F34069191B7158D083249E97F542E88F5A62_inline (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* __this, QueuedMessage_t0465622402518531C942E619F10090228F292C33 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7*, QueuedMessage_t0465622402518531C942E619F10090228F292C33, const RuntimeMethod*))List_1_Add_m9B10F34069191B7158D083249E97F542E88F5A62_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<Mirror.QueuedMessage>::get_Count()
inline int32_t List_1_get_Count_m97F8693A77EFF15FB5ABFC98D3851B2E38EFA81C_inline (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7*, const RuntimeMethod*))List_1_get_Count_m97F8693A77EFF15FB5ABFC98D3851B2E38EFA81C_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mirror.QueuedMessage>::Insert(System.Int32,T)
inline void List_1_Insert_mF8FDB5F3D85462C8B3A39366E9A58674A1B3E8F8 (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* __this, int32_t ___index0, QueuedMessage_t0465622402518531C942E619F10090228F292C33 ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7*, int32_t, QueuedMessage_t0465622402518531C942E619F10090228F292C33, const RuntimeMethod*))List_1_Insert_mF8FDB5F3D85462C8B3A39366E9A58674A1B3E8F8_gshared)(__this, ___index0, ___item1, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mirror.QueuedMessage>::Clear()
inline void List_1_Clear_mB85947D8DDC5924E037A24A5CB807CA1D2C7BCDA_inline (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7*, const RuntimeMethod*))List_1_Clear_mB85947D8DDC5924E037A24A5CB807CA1D2C7BCDA_gshared_inline)(__this, method);
}
// System.Single Mirror.LatencySimulation::SimulateLatency(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LatencySimulation_SimulateLatency_m5782533525AFE0D48AE519FC84A9CD19193F2551 (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, int32_t ___channeldId0, const RuntimeMethod* method) ;
// System.Void Mirror.LatencySimulation::SimulateSend(System.Int32,System.ArraySegment`1<System.Byte>,System.Int32,System.Single,System.Collections.Generic.List`1<Mirror.QueuedMessage>,System.Collections.Generic.List`1<Mirror.QueuedMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_SimulateSend_m45CF882398BEEA5156A279558525F1E145E9D50E (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, int32_t ___connectionId0, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment1, int32_t ___channelId2, float ___latency3, List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* ___reliableQueue4, List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* ___unreliableQueue5, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Mirror.QueuedMessage>::get_Item(System.Int32)
inline QueuedMessage_t0465622402518531C942E619F10090228F292C33 List_1_get_Item_m3C12A75A82A3129476838DCD9B4BD5D25C19BC0E (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  QueuedMessage_t0465622402518531C942E619F10090228F292C33 (*) (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7*, int32_t, const RuntimeMethod*))List_1_get_Item_m3C12A75A82A3129476838DCD9B4BD5D25C19BC0E_gshared)(__this, ___index0, method);
}
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[])
inline void ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86 (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_gshared)(__this, ___array0, method);
}
// System.Void System.Collections.Generic.List`1<Mirror.QueuedMessage>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m521C2E3BAF895F66C7C8E23860E51A356A81B708 (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m521C2E3BAF895F66C7C8E23860E51A356A81B708_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<Mirror.QueuedMessage>::.ctor()
inline void List_1__ctor_m049EBA47B702F54F0CECD280CC6E3E6F8EDAC66B (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7*, const RuntimeMethod*))List_1__ctor_m049EBA47B702F54F0CECD280CC6E3E6F8EDAC66B_gshared)(__this, method);
}
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Void Mirror.Transport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transport__ctor_m951E466BF3C4D441259ACE340863D31DC828B3AF (Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.Void Telepathy.Client::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_mC85E19B3E81C5FE1F5231C023FE85A066C2C3C8B (Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* __this, int32_t ___MaxMessageSize0, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2F501C85F4BAD84573D1479FD2D3D94F6CB8687A (Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2F501C85F4BAD84573D1479FD2D3D94F6CB8687A_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean Telepathy.Client::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_get_Connected_mA96433225ED5D558C6826ABB66B486F3F703AFA8 (Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* __this, const RuntimeMethod* method) ;
// System.Void Mirror.TelepathyTransport::CreateClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_CreateClient_mD717F98529973D8BDDE977D9D34332CE55A5415E (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, const RuntimeMethod* method) ;
// System.Void Telepathy.Client::Connect(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Connect_m51C154E96199A8FCF494260ECA6D23E64ECCD5F4 (Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* __this, String_t* ___ip0, int32_t ___port1, const RuntimeMethod* method) ;
// System.String System.Uri::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_m29106D5109538220B22FC49DE7B44040E51B0F6F (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Boolean System.Uri::get_IsDefaultPort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsDefaultPort_m1BFC89B27306852E9AFDEF92897FD52B0B3ECD06 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.Int32 System.Uri::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Uri_get_Port_m7A1413AC9D9A2FC5DC8A7F89DF4A01ACA0241A02 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.String System.Uri::get_Host()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Host_m2C0E258C7DFF7A340049BE9BC08FF45E90988D8C (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.Boolean Telepathy.Client::Send(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_Send_m4715D8257B506C69AB6BFC72CD403B00FA91F3FD (Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___message0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.ArraySegment`1<System.Byte>,System.Int32>::Invoke(T1,T2)
inline void Action_2_Invoke_mD9B56B532E7EB3082C89484B6BEA93F5E281B185_inline (Action_2_t2E07896229FB84F193E1EFE789DDB074E447FCD2* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___arg10, int32_t ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t2E07896229FB84F193E1EFE789DDB074E447FCD2*, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, int32_t, const RuntimeMethod*))Action_2_Invoke_mD9B56B532E7EB3082C89484B6BEA93F5E281B185_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Void Telepathy.Client::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Disconnect_mF6F69106E26B5EB0F977306AEFD53E705053B068 (Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Int32 Telepathy.Client::Tick(System.Int32,System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Client_Tick_m2067F4D00B5786D025BEC0C39E9F75B17AFCA070 (Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* __this, int32_t ___processLimit0, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___checkEnabled1, const RuntimeMethod* method) ;
// System.Void System.UriBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriBuilder__ctor_m1CBBB001D2542111D5B3334356E2AC65AFB80D27 (UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* __this, const RuntimeMethod* method) ;
// System.Void System.UriBuilder::set_Scheme(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriBuilder_set_Scheme_m02C71DED53B5BDB8CA03E7484B8B554D0EF4B3BA (UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Net.Dns::GetHostName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Dns_GetHostName_m9290C5F9D0B6B8F259D53F30B7A80C4D4FB77083 (const RuntimeMethod* method) ;
// System.Void System.UriBuilder::set_Host(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriBuilder_set_Host_m7CD9C7B0B9CACAF15A57ACFC363C766F19178930 (UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.UriBuilder::set_Port(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriBuilder_set_Port_mC6C31D266AA5790B8ED038C31489BCC2DE55DE3D (UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Uri System.UriBuilder::get_Uri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* UriBuilder_get_Uri_mD0DF3F7DDF7C56CC99E2D29E06C959F80A4171A1 (UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* __this, const RuntimeMethod* method) ;
// System.Boolean Telepathy.Server::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_get_Active_mAE0B87F64A2A8D3CB6ED892328BAA58BC0C7B714 (Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* __this, const RuntimeMethod* method) ;
// System.Void Telepathy.Server::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server__ctor_mA74E44DD462C6AA53A2BE05C21C016829D34BB6E (Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* __this, int32_t ___MaxMessageSize0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87 (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<System.Int32,System.ArraySegment`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m9DD325FFD17E78823DB4542941E757F225BB7FD8 (Action_2_t959877CB7CAF347CECE7BC7588CE3B3D88817A2E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t959877CB7CAF347CECE7BC7588CE3B3D88817A2E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m9DD325FFD17E78823DB4542941E757F225BB7FD8_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean Telepathy.Server::Start(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_Start_m7DEC36AA42467CBFA9255B7983231C2DFC26310B (Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* __this, int32_t ___port0, const RuntimeMethod* method) ;
// System.Boolean Telepathy.Server::Send(System.Int32,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_Send_m1989FC767C6D611FC0228F1F7C2870838E0B01F7 (Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* __this, int32_t ___connectionId0, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___message1, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,System.Int32>::Invoke(T1,T2,T3)
inline void Action_3_Invoke_mE96CDA1049F0D885C6E04E35F00C99EFB3418262_inline (Action_3_tAEA3B0FC298F161EA8A0E82285BF499D36D8A584* __this, int32_t ___arg10, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___arg21, int32_t ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tAEA3B0FC298F161EA8A0E82285BF499D36D8A584*, int32_t, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, int32_t, const RuntimeMethod*))Action_3_Invoke_mE96CDA1049F0D885C6E04E35F00C99EFB3418262_gshared_inline)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Boolean Telepathy.Server::Disconnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_Disconnect_mA53727C5278E8357097287AD14EF7505830E29B6 (Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* __this, int32_t ___connectionId0, const RuntimeMethod* method) ;
// System.String Telepathy.Server::GetClientAddress(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Server_GetClientAddress_mDC9EDE29579BD8906CE231AF834F957755A53223 (Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* __this, int32_t ___connectionId0, const RuntimeMethod* method) ;
// System.Void Telepathy.Server::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_Stop_m3AC1A3F1522C9CD2EB6C3C94ECFBDB2EC1DA82F0 (Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* __this, const RuntimeMethod* method) ;
// System.Int32 Telepathy.Server::Tick(System.Int32,System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Server_Tick_m1C29EA8061DE6EFF0AEEB55045786D5852C42A7A (Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* __this, int32_t ___processLimit0, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___checkEnabled1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Boolean Telepathy.Client::get_Connecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_get_Connecting_m63805D70B60308699B5FD9BA12C12032063F839E (Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::Invoke(T)
inline void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, int32_t, const RuntimeMethod*))Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpConfig::.ctor(System.Boolean,System.Boolean,System.Boolean,System.UInt32,System.Int32,System.Boolean,System.UInt32,System.UInt32,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpConfig__ctor_m7AC4428C8749F5B6812331C59C4C4C381B33E00F (KcpConfig_t0C03722728EF98EB68D698A5DE03B2EEA9921FD3* __this, bool ___DualMode0, bool ___MaximizeSocketBuffers1, bool ___NoDelay2, uint32_t ___Interval3, int32_t ___FastResend4, bool ___CongestionWindow5, uint32_t ___SendWindowSize6, uint32_t ___ReceiveWindowSize7, int32_t ___Timeout8, uint32_t ___MaxRetransmits9, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m5314E7E349F5C9931DB128DEC31B647B828E260C (Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_mAFD0A239D229927CC1C4AADEC3605985BC074C4E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<kcp2k.ErrorCode,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m5D467A089982DE16D19EDAE7C21DABDAB2760863 (Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_mC40C1DDBF3B0A94B53CC0D45739F068D1218E799_gshared)(__this, ___object0, ___method1, method);
}
// System.Void kcp2k.KcpClient::.ctor(System.Action,System.Action`2<System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>,System.Action,System.Action`2<kcp2k.ErrorCode,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient__ctor_mA42DF334D8EABD9AED2CD2F85BFDDB3F5006B4C1 (KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnConnected0, Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* ___OnData1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnDisconnected2, Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* ___OnError3, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_m38672CEC381B43263147F9B5AC62ADC0AD39532D (Action_3_tE12BE99979C339D5F96975616AC3B9856017C9E4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tE12BE99979C339D5F96975616AC3B9856017C9E4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_3__ctor_mEB587BDB5E6F594DA6A8B6D566C44933195AE738_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`3<System.Int32,kcp2k.ErrorCode,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_mBE8EFB98233883462B5A9EEE6018503AFCEAE978 (Action_3_tB927C850E441C1E678D28E51343AA3B753873A2D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tB927C850E441C1E678D28E51343AA3B753873A2D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_3__ctor_mB469C22D012BCF3BF2AE6A3D8EC1740DF2BD4DD7_gshared)(__this, ___object0, ___method1, method);
}
// System.Void kcp2k.KcpServer::.ctor(System.Action`1<System.Int32>,System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>,System.Action`1<System.Int32>,System.Action`3<System.Int32,kcp2k.ErrorCode,System.String>,kcp2k.KcpConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer__ctor_mD263EA072AD5B3AC5D617DA90BAAAC70AF633E28 (KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* __this, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___OnConnected0, Action_3_tE12BE99979C339D5F96975616AC3B9856017C9E4* ___OnData1, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___OnDisconnected2, Action_3_tB927C850E441C1E678D28E51343AA3B753873A2D* ___OnError3, KcpConfig_t0C03722728EF98EB68D698A5DE03B2EEA9921FD3* ___config4, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method) ;
// System.Int32 kcp2k.KcpPeer::ReliableMaxMessageSize(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpPeer_ReliableMaxMessageSize_mEABA6BD88087F98D927F2D46951E84D6B743EA97 (uint32_t ___rcv_wnd0, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpClient::Connect(System.String,System.UInt16,kcp2k.KcpConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_Connect_mC0AF2BAF0BE75C0B1BE26FCF1EC058510BBCC2C1 (KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* __this, String_t* ___address0, uint16_t ___port1, KcpConfig_t0C03722728EF98EB68D698A5DE03B2EEA9921FD3* ___config2, const RuntimeMethod* method) ;
// kcp2k.KcpChannel kcp2k.KcpTransport::ToKcpChannel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t KcpTransport_ToKcpChannel_m8B43290E6C533642FE9C52B978DC703D36616EAC (int32_t ___channel0, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpClient::Send(System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_Send_m53625D46141304166BC26093AB18F0B13D29DD59 (KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment0, uint8_t ___channel1, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpClient::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_Disconnect_m49F7D3DD77CF170A8F4591497EA49BC220D7B1C2 (KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* __this, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpClient::TickIncoming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_TickIncoming_m9DD9D3D53BCC9EE20713EF10980185EFEE0E5F00 (KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* __this, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpClient::TickOutgoing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpClient_TickOutgoing_mA528E9BEAF933EC18D66ACF5D6272AF0DEA12B72 (KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* __this, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpServer::Send(System.Int32,System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_Send_m08686F847CAE31C842035EE8028684E4FA2CD5F6 (KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* __this, int32_t ___connectionId0, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment1, uint8_t ___channel2, const RuntimeMethod* method) ;
// System.Void kcp2k.KcpServer::Disconnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpServer_Disconnect_mB885B1BF26149DF64FC0719A462AA9F96B2B3CF5 (KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* __this, int32_t ___connectionId0, const RuntimeMethod* method) ;
// System.Net.IPEndPoint kcp2k.KcpServer::GetClientEndPoint(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* KcpServer_GetClientEndPoint_m088997828E97B771B361923BA1544B4B22A29421 (KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* __this, int32_t ___connectionId0, const RuntimeMethod* method) ;
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection>::get_Count()
inline int32_t Dictionary_2_get_Count_mC967B0386C18A597A74E8E96FDFB2CB76A65C0DB (Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F*, const RuntimeMethod*))Dictionary_2_get_Count_mC967B0386C18A597A74E8E96FDFB2CB76A65C0DB_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,kcp2k.KcpServerConnection>::get_Values()
inline ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C (Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* (*) (Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F*, const RuntimeMethod*))Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C_gshared)(__this, method);
}
// System.Void System.Func`2<kcp2k.KcpServerConnection,System.Int64>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m0BFF066ABDCD0D6403AA7885C9B2EFDB8E16AC9E (Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m0BFF066ABDCD0D6403AA7885C9B2EFDB8E16AC9E_gshared)(__this, ___object0, ___method1, method);
}
// System.Int64 System.Linq.Enumerable::Sum<kcp2k.KcpServerConnection>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int64>)
inline int64_t Enumerable_Sum_TisKcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_m1B5C12A56406C80375D6DAC7EA90BB0C3AF31DEA (RuntimeObject* ___source0, Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA* ___selector1, const RuntimeMethod* method)
{
	return ((  int64_t (*) (RuntimeObject*, Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA*, const RuntimeMethod*))Enumerable_Sum_TisKcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_m1B5C12A56406C80375D6DAC7EA90BB0C3AF31DEA_gshared)(___source0, ___selector1, method);
}
// System.Void System.Func`2<kcp2k.KcpServerConnection,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA9F758309CD0504586E6582C75DD05C5075C2E34 (Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mA9F758309CD0504586E6582C75DD05C5075C2E34_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Linq.Enumerable::Sum<kcp2k.KcpServerConnection>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
inline int32_t Enumerable_Sum_TisKcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_m5B0FAC7DED1A89C9A266D63C7BDA1D1D0147B1F7 (RuntimeObject* ___source0, Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* ___selector1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83*, const RuntimeMethod*))Enumerable_Sum_TisKcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_m5B0FAC7DED1A89C9A266D63C7BDA1D1D0147B1F7_gshared)(___source0, ___selector1, method);
}
// System.Double Mirror.NetworkTime::get_localTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NetworkTime_get_localTime_mBFC19FC1D8BB89B82A91985B92F97671ABAF2502_inline (const RuntimeMethod* method) ;
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339 (double* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Int64 kcp2k.KcpTransport::GetAverageMaxSendRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t KcpTransport_GetAverageMaxSendRate_m7C8239606F8479704D12089CC08F0BCBE848A570 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) ;
// System.String kcp2k.KcpTransport::PrettyBytes(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KcpTransport_PrettyBytes_m241BF81554E230E88FA9CBEC86D87DBE4DE2FC06 (int64_t ___bytes0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Int64 kcp2k.KcpTransport::GetAverageMaxReceiveRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t KcpTransport_GetAverageMaxReceiveRate_m5B179AE3BB2F98F4AE81D63CF70F025BC0B1A54F (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) ;
// System.Int64 kcp2k.KcpTransport::GetTotalSendQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t KcpTransport_GetTotalSendQueue_m7973510A195622933D4521C54BA5857FE8F11329 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) ;
// System.Int64 kcp2k.KcpTransport::GetTotalReceiveQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t KcpTransport_GetTotalReceiveQueue_m813DF3A127D346B6EDD611E360EDA7FE3FC166C7 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) ;
// System.Int64 kcp2k.KcpTransport::GetTotalSendBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t KcpTransport_GetTotalSendBuffer_mE6344FC7870D41F9D7F3D96B732A4A31A24B4511 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) ;
// System.Int64 kcp2k.KcpTransport::GetTotalReceiveBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t KcpTransport_GetTotalReceiveBuffer_mB2D0A9C0E02E624AB7A26CDC7062809D1294422E (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) ;
// System.UInt32 kcp2k.KcpPeer::get_MaxSendRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t KcpPeer_get_MaxSendRate_mAEFDC4AB7FE17F07CAC4456580EEC1A7840DE82C (KcpPeer_t9877F9EA5CC2640D1A178EF2CE3097EB7E4309A2* __this, const RuntimeMethod* method) ;
// System.UInt32 kcp2k.KcpPeer::get_MaxReceiveRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t KcpPeer_get_MaxReceiveRate_m2D53899CB8C77D6349DCC7467C541F5BC31D6CD1 (KcpPeer_t9877F9EA5CC2640D1A178EF2CE3097EB7E4309A2* __this, const RuntimeMethod* method) ;
// System.Int32 kcp2k.KcpPeer::get_SendQueueCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpPeer_get_SendQueueCount_m7C518B0956A45185C3583812CF72883345EA1EE2 (KcpPeer_t9877F9EA5CC2640D1A178EF2CE3097EB7E4309A2* __this, const RuntimeMethod* method) ;
// System.Int32 kcp2k.KcpPeer::get_ReceiveQueueCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpPeer_get_ReceiveQueueCount_m995862277820955D557F6BAABCF1D788AC1E11DD (KcpPeer_t9877F9EA5CC2640D1A178EF2CE3097EB7E4309A2* __this, const RuntimeMethod* method) ;
// System.Int32 kcp2k.KcpPeer::get_SendBufferCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpPeer_get_SendBufferCount_mA0D7FDF8FB687FE8C4FC7B40D9DFA134B35E60CB (KcpPeer_t9877F9EA5CC2640D1A178EF2CE3097EB7E4309A2* __this, const RuntimeMethod* method) ;
// System.Int32 kcp2k.KcpPeer::get_ReceiveBufferCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpPeer_get_ReceiveBufferCount_m33B1FC53206C9E2472D15644275927F5E366424B (KcpPeer_t9877F9EA5CC2640D1A178EF2CE3097EB7E4309A2* __this, const RuntimeMethod* method) ;
// System.Int32 kcp2k.KcpTransport::FromKcpChannel(kcp2k.KcpChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpTransport_FromKcpChannel_m8408EE5FD730D2F7336895000E93F3A13DE44598 (uint8_t ___channel0, const RuntimeMethod* method) ;
// Mirror.TransportError kcp2k.KcpTransport::ToTransportError(kcp2k.ErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t KcpTransport_ToTransportError_m5683BF645DB585008A659602F46A1B2D412B164B (uint8_t ___error0, const RuntimeMethod* method) ;
// System.Void System.Action`2<Mirror.TransportError,System.String>::Invoke(T1,T2)
inline void Action_2_Invoke_m21EF67DE6B2369593898C71751BFE6DBD6212AE4_inline (Action_2_t1DB0E50B6F58F0A9FBE73D2080C1F2ABEB453625* __this, uint8_t ___arg10, String_t* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t1DB0E50B6F58F0A9FBE73D2080C1F2ABEB453625*, uint8_t, String_t*, const RuntimeMethod*))Action_2_Invoke_mADA9AC43FB6FD8EC3EEDF8200782C490A1F7C834_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Void System.Action`3<System.Int32,Mirror.TransportError,System.String>::Invoke(T1,T2,T3)
inline void Action_3_Invoke_mC49776F686EA605ABDD64E05BA13CFA7DB078F51_inline (Action_3_t48732FCF57FB02B790A1EC558785687383D9D199* __this, int32_t ___arg10, uint8_t ___arg21, String_t* ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t48732FCF57FB02B790A1EC558785687383D9D199*, int32_t, uint8_t, String_t*, const RuntimeMethod*))Action_3_Invoke_m4AD71431485D0650D2983AA721404AD8005D9257_gshared_inline)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Void kcp2k.KcpTransport/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3E33B84FDCB076A2C03E3FA76121641954AC2CE6 (U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Double UnityEngine.Time::get_timeAsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Time_get_timeAsDouble_mCF1AEB0A4C786299443150DBEBDD75F7724D6800 (const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// Conversion methods for marshalling of: Mirror.QueuedMessage
IL2CPP_EXTERN_C void QueuedMessage_t0465622402518531C942E619F10090228F292C33_marshal_pinvoke(const QueuedMessage_t0465622402518531C942E619F10090228F292C33& unmarshaled, QueuedMessage_t0465622402518531C942E619F10090228F292C33_marshaled_pinvoke& marshaled)
{
	marshaled.___connectionId_0 = unmarshaled.___connectionId_0;
	marshaled.___bytes_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___bytes_1);
	marshaled.___time_2 = unmarshaled.___time_2;
}
IL2CPP_EXTERN_C void QueuedMessage_t0465622402518531C942E619F10090228F292C33_marshal_pinvoke_back(const QueuedMessage_t0465622402518531C942E619F10090228F292C33_marshaled_pinvoke& marshaled, QueuedMessage_t0465622402518531C942E619F10090228F292C33& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledconnectionId_temp_0 = 0;
	unmarshaledconnectionId_temp_0 = marshaled.___connectionId_0;
	unmarshaled.___connectionId_0 = unmarshaledconnectionId_temp_0;
	unmarshaled.___bytes_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___bytes_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___bytes_1), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___bytes_1));
	double unmarshaledtime_temp_2 = 0.0;
	unmarshaledtime_temp_2 = marshaled.___time_2;
	unmarshaled.___time_2 = unmarshaledtime_temp_2;
}
// Conversion method for clean up from marshalling of: Mirror.QueuedMessage
IL2CPP_EXTERN_C void QueuedMessage_t0465622402518531C942E619F10090228F292C33_marshal_pinvoke_cleanup(QueuedMessage_t0465622402518531C942E619F10090228F292C33_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___bytes_1);
	marshaled.___bytes_1 = NULL;
}
// Conversion methods for marshalling of: Mirror.QueuedMessage
IL2CPP_EXTERN_C void QueuedMessage_t0465622402518531C942E619F10090228F292C33_marshal_com(const QueuedMessage_t0465622402518531C942E619F10090228F292C33& unmarshaled, QueuedMessage_t0465622402518531C942E619F10090228F292C33_marshaled_com& marshaled)
{
	marshaled.___connectionId_0 = unmarshaled.___connectionId_0;
	marshaled.___bytes_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___bytes_1);
	marshaled.___time_2 = unmarshaled.___time_2;
}
IL2CPP_EXTERN_C void QueuedMessage_t0465622402518531C942E619F10090228F292C33_marshal_com_back(const QueuedMessage_t0465622402518531C942E619F10090228F292C33_marshaled_com& marshaled, QueuedMessage_t0465622402518531C942E619F10090228F292C33& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledconnectionId_temp_0 = 0;
	unmarshaledconnectionId_temp_0 = marshaled.___connectionId_0;
	unmarshaled.___connectionId_0 = unmarshaledconnectionId_temp_0;
	unmarshaled.___bytes_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___bytes_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___bytes_1), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___bytes_1));
	double unmarshaledtime_temp_2 = 0.0;
	unmarshaledtime_temp_2 = marshaled.___time_2;
	unmarshaled.___time_2 = unmarshaledtime_temp_2;
}
// Conversion method for clean up from marshalling of: Mirror.QueuedMessage
IL2CPP_EXTERN_C void QueuedMessage_t0465622402518531C942E619F10090228F292C33_marshal_com_cleanup(QueuedMessage_t0465622402518531C942E619F10090228F292C33_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___bytes_1);
	marshaled.___bytes_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.LatencySimulation::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_Awake_mBE6F13B025E044568385B130164CFB715C504022 (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (wrap == null)
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___wrap_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new Exception("LatencySimulationTransport requires an underlying transport to wrap around.");
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6A73575D3AAEEDA0C0FBBB89B21429BF251D1AA8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LatencySimulation_Awake_mBE6F13B025E044568385B130164CFB715C504022_RuntimeMethod_var)));
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Mirror.LatencySimulation::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_OnEnable_m07A3B8FDCD9B41E3590C60B8F758B3D6525C0936 (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, const RuntimeMethod* method) 
{
	{
		// void OnEnable() { wrap.enabled = true; }
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___wrap_16;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		// void OnEnable() { wrap.enabled = true; }
		return;
	}
}
// System.Void Mirror.LatencySimulation::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_OnDisable_m3F4337D3C19C2FAB39F145DBE189E0E8E223C03F (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, const RuntimeMethod* method) 
{
	{
		// void OnDisable() { wrap.enabled = false; }
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___wrap_16;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// void OnDisable() { wrap.enabled = false; }
		return;
	}
}
// System.Single Mirror.LatencySimulation::Noise(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LatencySimulation_Noise_m06D67CD50C5E49CD04A49D94261C99369AD0AA2F (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, float ___time0, const RuntimeMethod* method) 
{
	{
		// protected virtual float Noise(float time) => Mathf.PerlinNoise(time, time);
		float L_0 = ___time0;
		float L_1 = ___time0;
		float L_2;
		L_2 = Mathf_PerlinNoise_mAB0E53C29FE95469CF303364910AD0D8662A9A6A(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Single Mirror.LatencySimulation::SimulateLatency(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LatencySimulation_SimulateLatency_m5782533525AFE0D48AE519FC84A9CD19193F2551 (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, int32_t ___channeldId0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float spike = Noise((float)Time.unscaledTimeAsDouble * jitterSpeed) * jitter;
		double L_0;
		L_0 = Time_get_unscaledTimeAsDouble_mCF32298EFF264160A84352BB1788EE861A00CBB9(NULL);
		float L_1 = __this->___jitterSpeed_18;
		float L_2;
		L_2 = VirtualFuncInvoker1< float, float >::Invoke(25 /* System.Single Mirror.LatencySimulation::Noise(System.Single) */, __this, ((float)il2cpp_codegen_multiply(((float)L_0), L_1)));
		float L_3 = __this->___jitter_17;
		V_0 = ((float)il2cpp_codegen_multiply(L_2, L_3));
		int32_t L_4 = ___channeldId0;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = ___channeldId0;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_002d;
		}
	}
	{
		goto IL_0036;
	}

IL_0024:
	{
		// return reliableLatency + spike;
		float L_6 = __this->___reliableLatency_19;
		float L_7 = V_0;
		return ((float)il2cpp_codegen_add(L_6, L_7));
	}

IL_002d:
	{
		// return unreliableLatency + spike;
		float L_8 = __this->___unreliableLatency_21;
		float L_9 = V_0;
		return ((float)il2cpp_codegen_add(L_8, L_9));
	}

IL_0036:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Void Mirror.LatencySimulation::SimulateSend(System.Int32,System.ArraySegment`1<System.Byte>,System.Int32,System.Single,System.Collections.Generic.List`1<Mirror.QueuedMessage>,System.Collections.Generic.List`1<Mirror.QueuedMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_SimulateSend_m45CF882398BEEA5156A279558525F1E145E9D50E (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, int32_t ___connectionId0, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment1, int32_t ___channelId2, float ___latency3, List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* ___reliableQueue4, List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* ___unreliableQueue5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9B10F34069191B7158D083249E97F542E88F5A62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_mF8FDB5F3D85462C8B3A39366E9A58674A1B3E8F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m97F8693A77EFF15FB5ABFC98D3851B2E38EFA81C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA4D68E74CFF9B633248AD97AF1E76219DFFEB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1C922D278BFE4E8D6ECDD478AB8647DE753EB7D);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	QueuedMessage_t0465622402518531C942E619F10090228F292C33 V_1;
	memset((&V_1), 0, sizeof(V_1));
	QueuedMessage_t0465622402518531C942E619F10090228F292C33 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t G_B8_0 = 0;
	{
		// byte[] bytes = new byte[segment.Count];
		int32_t L_0;
		L_0 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___segment1), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// Buffer.BlockCopy(segment.Array, segment.Offset, bytes, 0, segment.Count);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___segment1), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		int32_t L_3;
		L_3 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___segment1), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		int32_t L_5;
		L_5 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___segment1), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_2, L_3, (RuntimeArray*)L_4, 0, L_5, NULL);
		//             QueuedMessage message = new QueuedMessage
		//             {
		//                 connectionId = connectionId,
		//                 bytes = bytes,
		// #if !UNITY_2020_3_OR_NEWER
		//                 time = NetworkTime.localTime + latency
		// #else
		//                 time = Time.unscaledTimeAsDouble + latency
		// #endif
		//             };
		il2cpp_codegen_initobj((&V_2), sizeof(QueuedMessage_t0465622402518531C942E619F10090228F292C33));
		int32_t L_6 = ___connectionId0;
		(&V_2)->___connectionId_0 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		(&V_2)->___bytes_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___bytes_1), (void*)L_7);
		double L_8;
		L_8 = Time_get_unscaledTimeAsDouble_mCF32298EFF264160A84352BB1788EE861A00CBB9(NULL);
		float L_9 = ___latency3;
		(&V_2)->___time_2 = ((double)il2cpp_codegen_add(L_8, ((double)L_9)));
		QueuedMessage_t0465622402518531C942E619F10090228F292C33 L_10 = V_2;
		V_1 = L_10;
		int32_t L_11 = ___channelId2;
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_12 = ___channelId2;
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		goto IL_00b8;
	}

IL_005c:
	{
		// reliableQueue.Add(message);
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_13 = ___reliableQueue4;
		QueuedMessage_t0465622402518531C942E619F10090228F292C33 L_14 = V_1;
		NullCheck(L_13);
		List_1_Add_m9B10F34069191B7158D083249E97F542E88F5A62_inline(L_13, L_14, List_1_Add_m9B10F34069191B7158D083249E97F542E88F5A62_RuntimeMethod_var);
		// break;
		return;
	}

IL_0065:
	{
		// bool drop = random.NextDouble() < unreliableLoss;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_15 = __this->___random_27;
		NullCheck(L_15);
		double L_16;
		L_16 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_15);
		float L_17 = __this->___unreliableLoss_20;
		// if (!drop)
		if (((((double)L_16) < ((double)((double)L_17)))? 1 : 0))
		{
			goto IL_00d2;
		}
	}
	{
		// bool scramble = random.NextDouble() < unreliableScramble;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_18 = __this->___random_27;
		NullCheck(L_18);
		double L_19;
		L_19 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_18);
		float L_20 = __this->___unreliableScramble_22;
		// int last = unreliableQueue.Count;
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_21 = ___unreliableQueue5;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_m97F8693A77EFF15FB5ABFC98D3851B2E38EFA81C_inline(L_21, List_1_get_Count_m97F8693A77EFF15FB5ABFC98D3851B2E38EFA81C_RuntimeMethod_var);
		V_3 = L_22;
		// int index = scramble ? random.Next(0, last + 1) : last;
		if (((((double)L_19) < ((double)((double)L_20)))? 1 : 0))
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_23 = V_3;
		G_B8_0 = L_23;
		goto IL_00ab;
	}

IL_009c:
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_24 = __this->___random_27;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		int32_t L_26;
		L_26 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_24, 0, ((int32_t)il2cpp_codegen_add(L_25, 1)));
		G_B8_0 = L_26;
	}

IL_00ab:
	{
		V_4 = G_B8_0;
		// unreliableQueue.Insert(index, message);
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_27 = ___unreliableQueue5;
		int32_t L_28 = V_4;
		QueuedMessage_t0465622402518531C942E619F10090228F292C33 L_29 = V_1;
		NullCheck(L_27);
		List_1_Insert_mF8FDB5F3D85462C8B3A39366E9A58674A1B3E8F8(L_27, L_28, L_29, List_1_Insert_mF8FDB5F3D85462C8B3A39366E9A58674A1B3E8F8_RuntimeMethod_var);
		// break;
		return;
	}

IL_00b8:
	{
		// Debug.LogError($"{nameof(LatencySimulation)} unexpected channelId: {channelId}");
		int32_t L_30 = ___channelId2;
		int32_t L_31 = L_30;
		RuntimeObject* L_32 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_31);
		String_t* L_33;
		L_33 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral1FA4D68E74CFF9B633248AD97AF1E76219DFFEB2, _stringLiteralA1C922D278BFE4E8D6ECDD478AB8647DE753EB7D, L_32, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_33, NULL);
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.Boolean Mirror.LatencySimulation::Available()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LatencySimulation_Available_mD671458E8A6F1522BA2CD215EFE7A7E8A5E6A9F5 (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, const RuntimeMethod* method) 
{
	{
		// public override bool Available() => wrap.Available();
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___wrap_16;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean Mirror.Transport::Available() */, L_0);
		return L_1;
	}
}
// System.Void Mirror.LatencySimulation::ClientConnect(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_ClientConnect_m1F3692096232FC24F100A17F0D5B78D2E6BDC473 (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, String_t* ___address0, const RuntimeMethod* method) 
{
	{
		// wrap.OnClientConnected    = OnClientConnected;
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___wrap_16;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnClientConnected_6;
		NullCheck(L_0);
		L_0->___OnClientConnected_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___OnClientConnected_6), (void*)L_1);
		// wrap.OnClientDataReceived = OnClientDataReceived;
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_2 = __this->___wrap_16;
		Action_2_t2E07896229FB84F193E1EFE789DDB074E447FCD2* L_3 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnClientDataReceived_7;
		NullCheck(L_2);
		L_2->___OnClientDataReceived_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___OnClientDataReceived_7), (void*)L_3);
		// wrap.OnClientError        = OnClientError;
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_4 = __this->___wrap_16;
		Action_2_t1DB0E50B6F58F0A9FBE73D2080C1F2ABEB453625* L_5 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnClientError_9;
		NullCheck(L_4);
		L_4->___OnClientError_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___OnClientError_9), (void*)L_5);
		// wrap.OnClientDisconnected = OnClientDisconnected;
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_6 = __this->___wrap_16;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnClientDisconnected_10;
		NullCheck(L_6);
		L_6->___OnClientDisconnected_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___OnClientDisconnected_10), (void*)L_7);
		// wrap.ClientConnect(address);
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_8 = __this->___wrap_16;
		String_t* L_9 = ___address0;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(6 /* System.Void Mirror.Transport::ClientConnect(System.String) */, L_8, L_9);
		// }
		return;
	}
}
// System.Void Mirror.LatencySimulation::ClientConnect(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_ClientConnect_mDDBCA431DEA30601CB8B2ECBB24DDCAD06B1DBFA (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri0, const RuntimeMethod* method) 
{
	{
		// wrap.OnClientConnected    = OnClientConnected;
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___wrap_16;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnClientConnected_6;
		NullCheck(L_0);
		L_0->___OnClientConnected_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___OnClientConnected_6), (void*)L_1);
		// wrap.OnClientDataReceived = OnClientDataReceived;
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_2 = __this->___wrap_16;
		Action_2_t2E07896229FB84F193E1EFE789DDB074E447FCD2* L_3 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnClientDataReceived_7;
		NullCheck(L_2);
		L_2->___OnClientDataReceived_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___OnClientDataReceived_7), (void*)L_3);
		// wrap.OnClientError        = OnClientError;
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_4 = __this->___wrap_16;
		Action_2_t1DB0E50B6F58F0A9FBE73D2080C1F2ABEB453625* L_5 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnClientError_9;
		NullCheck(L_4);
		L_4->___OnClientError_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___OnClientError_9), (void*)L_5);
		// wrap.OnClientDisconnected = OnClientDisconnected;
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_6 = __this->___wrap_16;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnClientDisconnected_10;
		NullCheck(L_6);
		L_6->___OnClientDisconnected_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___OnClientDisconnected_10), (void*)L_7);
		// wrap.ClientConnect(uri);
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_8 = __this->___wrap_16;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_9 = ___uri0;
		NullCheck(L_8);
		VirtualActionInvoker1< Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* >::Invoke(7 /* System.Void Mirror.Transport::ClientConnect(System.Uri) */, L_8, L_9);
		// }
		return;
	}
}
// System.Boolean Mirror.LatencySimulation::ClientConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LatencySimulation_ClientConnected_mC501104DBBCEDF94E9FDE2A9C7524D4504ACA3F7 (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, const RuntimeMethod* method) 
{
	{
		// public override bool ClientConnected() => wrap.ClientConnected();
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___wrap_16;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean Mirror.Transport::ClientConnected() */, L_0);
		return L_1;
	}
}
// System.Void Mirror.LatencySimulation::ClientDisconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_ClientDisconnect_m92DB49317E4143D6C41264507AF49B20C92FA007 (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mB85947D8DDC5924E037A24A5CB807CA1D2C7BCDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// wrap.ClientDisconnect();
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___wrap_16;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(9 /* System.Void Mirror.Transport::ClientDisconnect() */, L_0);
		// reliableClientToServer.Clear();
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_1 = __this->___reliableClientToServer_23;
		NullCheck(L_1);
		List_1_Clear_mB85947D8DDC5924E037A24A5CB807CA1D2C7BCDA_inline(L_1, List_1_Clear_mB85947D8DDC5924E037A24A5CB807CA1D2C7BCDA_RuntimeMethod_var);
		// unreliableClientToServer.Clear();
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_2 = __this->___unreliableClientToServer_25;
		NullCheck(L_2);
		List_1_Clear_mB85947D8DDC5924E037A24A5CB807CA1D2C7BCDA_inline(L_2, List_1_Clear_mB85947D8DDC5924E037A24A5CB807CA1D2C7BCDA_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.LatencySimulation::ClientSend(System.ArraySegment`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_ClientSend_mD5875D133A05E0ED9FCAEA9E5779E905D85CD057 (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment0, int32_t ___channelId1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float latency = SimulateLatency(channelId);
		int32_t L_0 = ___channelId1;
		float L_1;
		L_1 = LatencySimulation_SimulateLatency_m5782533525AFE0D48AE519FC84A9CD19193F2551(__this, L_0, NULL);
		V_0 = L_1;
		// SimulateSend(0, segment, channelId, latency, reliableClientToServer, unreliableClientToServer);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_2 = ___segment0;
		int32_t L_3 = ___channelId1;
		float L_4 = V_0;
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_5 = __this->___reliableClientToServer_23;
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_6 = __this->___unreliableClientToServer_25;
		LatencySimulation_SimulateSend_m45CF882398BEEA5156A279558525F1E145E9D50E(__this, 0, L_2, L_3, L_4, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Uri Mirror.LatencySimulation::ServerUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* LatencySimulation_ServerUri_m4F65CC8DA5CCC3BC02BD97F480757214F6C66403 (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, const RuntimeMethod* method) 
{
	{
		// public override Uri ServerUri() => wrap.ServerUri();
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___wrap_16;
		NullCheck(L_0);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1;
		L_1 = VirtualFuncInvoker0< Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* >::Invoke(10 /* System.Uri Mirror.Transport::ServerUri() */, L_0);
		return L_1;
	}
}
// System.Boolean Mirror.LatencySimulation::ServerActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LatencySimulation_ServerActive_mEB1E43D682F0B522455757065B76CC316F05F877 (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, const RuntimeMethod* method) 
{
	{
		// public override bool ServerActive() => wrap.ServerActive();
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___wrap_16;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(11 /* System.Boolean Mirror.Transport::ServerActive() */, L_0);
		return L_1;
	}
}
// System.String Mirror.LatencySimulation::ServerGetClientAddress(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LatencySimulation_ServerGetClientAddress_m8BBB617E24802EFB6AB3829D5520504CC7FB3C5A (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, int32_t ___connectionId0, const RuntimeMethod* method) 
{
	{
		// public override string ServerGetClientAddress(int connectionId) => wrap.ServerGetClientAddress(connectionId);
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___wrap_16;
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, int32_t >::Invoke(15 /* System.String Mirror.Transport::ServerGetClientAddress(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Mirror.LatencySimulation::ServerDisconnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_ServerDisconnect_mA8F8B9D9E61ED4A9060E89F1D517DBFFD1831F72 (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, int32_t ___connectionId0, const RuntimeMethod* method) 
{
	{
		// public override void ServerDisconnect(int connectionId) => wrap.ServerDisconnect(connectionId);
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___wrap_16;
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		VirtualActionInvoker1< int32_t >::Invoke(14 /* System.Void Mirror.Transport::ServerDisconnect(System.Int32) */, L_0, L_1);
		return;
	}
}
// System.Void Mirror.LatencySimulation::ServerSend(System.Int32,System.ArraySegment`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_ServerSend_mC3CEF24EBE7EA937C19043B3B5215F8DCFC5C4CE (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, int32_t ___connectionId0, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment1, int32_t ___channelId2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float latency = SimulateLatency(channelId);
		int32_t L_0 = ___channelId2;
		float L_1;
		L_1 = LatencySimulation_SimulateLatency_m5782533525AFE0D48AE519FC84A9CD19193F2551(__this, L_0, NULL);
		V_0 = L_1;
		// SimulateSend(connectionId, segment, channelId, latency, reliableServerToClient, unreliableServerToClient);
		int32_t L_2 = ___connectionId0;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_3 = ___segment1;
		int32_t L_4 = ___channelId2;
		float L_5 = V_0;
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_6 = __this->___reliableServerToClient_24;
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_7 = __this->___unreliableServerToClient_26;
		LatencySimulation_SimulateSend_m45CF882398BEEA5156A279558525F1E145E9D50E(__this, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Mirror.LatencySimulation::ServerStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_ServerStart_m919E9E6B73AD652CCAB912B73EE95B54BB5D62A3 (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, const RuntimeMethod* method) 
{
	{
		// wrap.OnServerConnected = OnServerConnected;
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___wrap_16;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnServerConnected_11;
		NullCheck(L_0);
		L_0->___OnServerConnected_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___OnServerConnected_11), (void*)L_1);
		// wrap.OnServerDataReceived = OnServerDataReceived;
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_2 = __this->___wrap_16;
		Action_3_tAEA3B0FC298F161EA8A0E82285BF499D36D8A584* L_3 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnServerDataReceived_12;
		NullCheck(L_2);
		L_2->___OnServerDataReceived_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___OnServerDataReceived_12), (void*)L_3);
		// wrap.OnServerError = OnServerError;
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_4 = __this->___wrap_16;
		Action_3_t48732FCF57FB02B790A1EC558785687383D9D199* L_5 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnServerError_14;
		NullCheck(L_4);
		L_4->___OnServerError_14 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___OnServerError_14), (void*)L_5);
		// wrap.OnServerDisconnected = OnServerDisconnected;
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_6 = __this->___wrap_16;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnServerDisconnected_15;
		NullCheck(L_6);
		L_6->___OnServerDisconnected_15 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___OnServerDisconnected_15), (void*)L_7);
		// wrap.ServerStart();
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_8 = __this->___wrap_16;
		NullCheck(L_8);
		VirtualActionInvoker0::Invoke(12 /* System.Void Mirror.Transport::ServerStart() */, L_8);
		// }
		return;
	}
}
// System.Void Mirror.LatencySimulation::ServerStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_ServerStop_m66F53D392D9FEF8C7F0AF52EF367F668D9C33556 (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mB85947D8DDC5924E037A24A5CB807CA1D2C7BCDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// wrap.ServerStop();
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___wrap_16;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(16 /* System.Void Mirror.Transport::ServerStop() */, L_0);
		// reliableServerToClient.Clear();
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_1 = __this->___reliableServerToClient_24;
		NullCheck(L_1);
		List_1_Clear_mB85947D8DDC5924E037A24A5CB807CA1D2C7BCDA_inline(L_1, List_1_Clear_mB85947D8DDC5924E037A24A5CB807CA1D2C7BCDA_RuntimeMethod_var);
		// unreliableServerToClient.Clear();
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_2 = __this->___unreliableServerToClient_26;
		NullCheck(L_2);
		List_1_Clear_mB85947D8DDC5924E037A24A5CB807CA1D2C7BCDA_inline(L_2, List_1_Clear_mB85947D8DDC5924E037A24A5CB807CA1D2C7BCDA_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.LatencySimulation::ClientEarlyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_ClientEarlyUpdate_mCE7FBF35ED683542F390F11F5F3F12B86D248742 (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, const RuntimeMethod* method) 
{
	{
		// public override void ClientEarlyUpdate() => wrap.ClientEarlyUpdate();
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___wrap_16;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(19 /* System.Void Mirror.Transport::ClientEarlyUpdate() */, L_0);
		return;
	}
}
// System.Void Mirror.LatencySimulation::ServerEarlyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_ServerEarlyUpdate_m336DC3D58DB876CBB45B1DF2FA02E424A97650BA (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, const RuntimeMethod* method) 
{
	{
		// public override void ServerEarlyUpdate() => wrap.ServerEarlyUpdate();
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___wrap_16;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(20 /* System.Void Mirror.Transport::ServerEarlyUpdate() */, L_0);
		return;
	}
}
// System.Void Mirror.LatencySimulation::ClientLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_ClientLateUpdate_mB20231F731CAF89D3AE4819E98E25A96BDF4CE4B (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m521C2E3BAF895F66C7C8E23860E51A356A81B708_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m97F8693A77EFF15FB5ABFC98D3851B2E38EFA81C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3C12A75A82A3129476838DCD9B4BD5D25C19BC0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	QueuedMessage_t0465622402518531C942E619F10090228F292C33 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	QueuedMessage_t0465622402518531C942E619F10090228F292C33 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// for (int i = 0; i < reliableClientToServer.Count; ++i)
		V_0 = 0;
		goto IL_0049;
	}

IL_0004:
	{
		// QueuedMessage message = reliableClientToServer[i];
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_0 = __this->___reliableClientToServer_23;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		QueuedMessage_t0465622402518531C942E619F10090228F292C33 L_2;
		L_2 = List_1_get_Item_m3C12A75A82A3129476838DCD9B4BD5D25C19BC0E(L_0, L_1, List_1_get_Item_m3C12A75A82A3129476838DCD9B4BD5D25C19BC0E_RuntimeMethod_var);
		V_1 = L_2;
		// if (message.time <= Time.unscaledTimeAsDouble)
		QueuedMessage_t0465622402518531C942E619F10090228F292C33 L_3 = V_1;
		double L_4 = L_3.___time_2;
		double L_5;
		L_5 = Time_get_unscaledTimeAsDouble_mCF32298EFF264160A84352BB1788EE861A00CBB9(NULL);
		if ((!(((double)L_4) <= ((double)L_5))))
		{
			goto IL_0045;
		}
	}
	{
		// wrap.ClientSend(new ArraySegment<byte>(message.bytes), Channels.Reliable);
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_6 = __this->___wrap_16;
		QueuedMessage_t0465622402518531C942E619F10090228F292C33 L_7 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = L_7.___bytes_1;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_9;
		memset((&L_9), 0, sizeof(L_9));
		ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86((&L_9), L_8, /*hidden argument*/ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualActionInvoker2< ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, int32_t >::Invoke(8 /* System.Void Mirror.Transport::ClientSend(System.ArraySegment`1<System.Byte>,System.Int32) */, L_6, L_9, 0);
		// reliableClientToServer.RemoveAt(i);
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_10 = __this->___reliableClientToServer_23;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		List_1_RemoveAt_m521C2E3BAF895F66C7C8E23860E51A356A81B708(L_10, L_11, List_1_RemoveAt_m521C2E3BAF895F66C7C8E23860E51A356A81B708_RuntimeMethod_var);
		// --i;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0045:
	{
		// for (int i = 0; i < reliableClientToServer.Count; ++i)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0049:
	{
		// for (int i = 0; i < reliableClientToServer.Count; ++i)
		int32_t L_14 = V_0;
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_15 = __this->___reliableClientToServer_23;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m97F8693A77EFF15FB5ABFC98D3851B2E38EFA81C_inline(L_15, List_1_get_Count_m97F8693A77EFF15FB5ABFC98D3851B2E38EFA81C_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < unreliableClientToServer.Count; ++i)
		V_2 = 0;
		goto IL_00a0;
	}

IL_005b:
	{
		// QueuedMessage message = unreliableClientToServer[i];
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_17 = __this->___unreliableClientToServer_25;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		QueuedMessage_t0465622402518531C942E619F10090228F292C33 L_19;
		L_19 = List_1_get_Item_m3C12A75A82A3129476838DCD9B4BD5D25C19BC0E(L_17, L_18, List_1_get_Item_m3C12A75A82A3129476838DCD9B4BD5D25C19BC0E_RuntimeMethod_var);
		V_3 = L_19;
		// if (message.time <= Time.unscaledTimeAsDouble)
		QueuedMessage_t0465622402518531C942E619F10090228F292C33 L_20 = V_3;
		double L_21 = L_20.___time_2;
		double L_22;
		L_22 = Time_get_unscaledTimeAsDouble_mCF32298EFF264160A84352BB1788EE861A00CBB9(NULL);
		if ((!(((double)L_21) <= ((double)L_22))))
		{
			goto IL_009c;
		}
	}
	{
		// wrap.ClientSend(new ArraySegment<byte>(message.bytes), Channels.Reliable);
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_23 = __this->___wrap_16;
		QueuedMessage_t0465622402518531C942E619F10090228F292C33 L_24 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = L_24.___bytes_1;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_26;
		memset((&L_26), 0, sizeof(L_26));
		ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86((&L_26), L_25, /*hidden argument*/ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_RuntimeMethod_var);
		NullCheck(L_23);
		VirtualActionInvoker2< ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, int32_t >::Invoke(8 /* System.Void Mirror.Transport::ClientSend(System.ArraySegment`1<System.Byte>,System.Int32) */, L_23, L_26, 0);
		// unreliableClientToServer.RemoveAt(i);
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_27 = __this->___unreliableClientToServer_25;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		List_1_RemoveAt_m521C2E3BAF895F66C7C8E23860E51A356A81B708(L_27, L_28, List_1_RemoveAt_m521C2E3BAF895F66C7C8E23860E51A356A81B708_RuntimeMethod_var);
		// --i;
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
	}

IL_009c:
	{
		// for (int i = 0; i < unreliableClientToServer.Count; ++i)
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00a0:
	{
		// for (int i = 0; i < unreliableClientToServer.Count; ++i)
		int32_t L_31 = V_2;
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_32 = __this->___unreliableClientToServer_25;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = List_1_get_Count_m97F8693A77EFF15FB5ABFC98D3851B2E38EFA81C_inline(L_32, List_1_get_Count_m97F8693A77EFF15FB5ABFC98D3851B2E38EFA81C_RuntimeMethod_var);
		if ((((int32_t)L_31) < ((int32_t)L_33)))
		{
			goto IL_005b;
		}
	}
	{
		// wrap.ClientLateUpdate();
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_34 = __this->___wrap_16;
		NullCheck(L_34);
		VirtualActionInvoker0::Invoke(21 /* System.Void Mirror.Transport::ClientLateUpdate() */, L_34);
		// }
		return;
	}
}
// System.Void Mirror.LatencySimulation::ServerLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_ServerLateUpdate_m761F8C780B812B23A41883FC91DE3ED2F348D764 (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m521C2E3BAF895F66C7C8E23860E51A356A81B708_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m97F8693A77EFF15FB5ABFC98D3851B2E38EFA81C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3C12A75A82A3129476838DCD9B4BD5D25C19BC0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	QueuedMessage_t0465622402518531C942E619F10090228F292C33 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	QueuedMessage_t0465622402518531C942E619F10090228F292C33 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// for (int i = 0; i < reliableServerToClient.Count; ++i)
		V_0 = 0;
		goto IL_004f;
	}

IL_0004:
	{
		// QueuedMessage message = reliableServerToClient[i];
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_0 = __this->___reliableServerToClient_24;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		QueuedMessage_t0465622402518531C942E619F10090228F292C33 L_2;
		L_2 = List_1_get_Item_m3C12A75A82A3129476838DCD9B4BD5D25C19BC0E(L_0, L_1, List_1_get_Item_m3C12A75A82A3129476838DCD9B4BD5D25C19BC0E_RuntimeMethod_var);
		V_1 = L_2;
		// if (message.time <= Time.unscaledTimeAsDouble)
		QueuedMessage_t0465622402518531C942E619F10090228F292C33 L_3 = V_1;
		double L_4 = L_3.___time_2;
		double L_5;
		L_5 = Time_get_unscaledTimeAsDouble_mCF32298EFF264160A84352BB1788EE861A00CBB9(NULL);
		if ((!(((double)L_4) <= ((double)L_5))))
		{
			goto IL_004b;
		}
	}
	{
		// wrap.ServerSend(message.connectionId, new ArraySegment<byte>(message.bytes), Channels.Reliable);
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_6 = __this->___wrap_16;
		QueuedMessage_t0465622402518531C942E619F10090228F292C33 L_7 = V_1;
		int32_t L_8 = L_7.___connectionId_0;
		QueuedMessage_t0465622402518531C942E619F10090228F292C33 L_9 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = L_9.___bytes_1;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_11;
		memset((&L_11), 0, sizeof(L_11));
		ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86((&L_11), L_10, /*hidden argument*/ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualActionInvoker3< int32_t, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, int32_t >::Invoke(13 /* System.Void Mirror.Transport::ServerSend(System.Int32,System.ArraySegment`1<System.Byte>,System.Int32) */, L_6, L_8, L_11, 0);
		// reliableServerToClient.RemoveAt(i);
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_12 = __this->___reliableServerToClient_24;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		List_1_RemoveAt_m521C2E3BAF895F66C7C8E23860E51A356A81B708(L_12, L_13, List_1_RemoveAt_m521C2E3BAF895F66C7C8E23860E51A356A81B708_RuntimeMethod_var);
		// --i;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}

IL_004b:
	{
		// for (int i = 0; i < reliableServerToClient.Count; ++i)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_004f:
	{
		// for (int i = 0; i < reliableServerToClient.Count; ++i)
		int32_t L_16 = V_0;
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_17 = __this->___reliableServerToClient_24;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m97F8693A77EFF15FB5ABFC98D3851B2E38EFA81C_inline(L_17, List_1_get_Count_m97F8693A77EFF15FB5ABFC98D3851B2E38EFA81C_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < unreliableServerToClient.Count; ++i)
		V_2 = 0;
		goto IL_00ac;
	}

IL_0061:
	{
		// QueuedMessage message = unreliableServerToClient[i];
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_19 = __this->___unreliableServerToClient_26;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		QueuedMessage_t0465622402518531C942E619F10090228F292C33 L_21;
		L_21 = List_1_get_Item_m3C12A75A82A3129476838DCD9B4BD5D25C19BC0E(L_19, L_20, List_1_get_Item_m3C12A75A82A3129476838DCD9B4BD5D25C19BC0E_RuntimeMethod_var);
		V_3 = L_21;
		// if (message.time <= Time.unscaledTimeAsDouble)
		QueuedMessage_t0465622402518531C942E619F10090228F292C33 L_22 = V_3;
		double L_23 = L_22.___time_2;
		double L_24;
		L_24 = Time_get_unscaledTimeAsDouble_mCF32298EFF264160A84352BB1788EE861A00CBB9(NULL);
		if ((!(((double)L_23) <= ((double)L_24))))
		{
			goto IL_00a8;
		}
	}
	{
		// wrap.ServerSend(message.connectionId, new ArraySegment<byte>(message.bytes), Channels.Reliable);
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_25 = __this->___wrap_16;
		QueuedMessage_t0465622402518531C942E619F10090228F292C33 L_26 = V_3;
		int32_t L_27 = L_26.___connectionId_0;
		QueuedMessage_t0465622402518531C942E619F10090228F292C33 L_28 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = L_28.___bytes_1;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_30;
		memset((&L_30), 0, sizeof(L_30));
		ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86((&L_30), L_29, /*hidden argument*/ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_RuntimeMethod_var);
		NullCheck(L_25);
		VirtualActionInvoker3< int32_t, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, int32_t >::Invoke(13 /* System.Void Mirror.Transport::ServerSend(System.Int32,System.ArraySegment`1<System.Byte>,System.Int32) */, L_25, L_27, L_30, 0);
		// unreliableServerToClient.RemoveAt(i);
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_31 = __this->___unreliableServerToClient_26;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		List_1_RemoveAt_m521C2E3BAF895F66C7C8E23860E51A356A81B708(L_31, L_32, List_1_RemoveAt_m521C2E3BAF895F66C7C8E23860E51A356A81B708_RuntimeMethod_var);
		// --i;
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_33, 1));
	}

IL_00a8:
	{
		// for (int i = 0; i < unreliableServerToClient.Count; ++i)
		int32_t L_34 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ac:
	{
		// for (int i = 0; i < unreliableServerToClient.Count; ++i)
		int32_t L_35 = V_2;
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_36 = __this->___unreliableServerToClient_26;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = List_1_get_Count_m97F8693A77EFF15FB5ABFC98D3851B2E38EFA81C_inline(L_36, List_1_get_Count_m97F8693A77EFF15FB5ABFC98D3851B2E38EFA81C_RuntimeMethod_var);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_0061;
		}
	}
	{
		// wrap.ServerLateUpdate();
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_38 = __this->___wrap_16;
		NullCheck(L_38);
		VirtualActionInvoker0::Invoke(22 /* System.Void Mirror.Transport::ServerLateUpdate() */, L_38);
		// }
		return;
	}
}
// System.Int32 Mirror.LatencySimulation::GetBatchThreshold(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LatencySimulation_GetBatchThreshold_m0C89EC9589B1C535C5BF883CA5C9A55D3E4E8509 (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, int32_t ___channelId0, const RuntimeMethod* method) 
{
	{
		// public override int GetBatchThreshold(int channelId) => wrap.GetBatchThreshold(channelId);
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___wrap_16;
		int32_t L_1 = ___channelId0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(18 /* System.Int32 Mirror.Transport::GetBatchThreshold(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Int32 Mirror.LatencySimulation::GetMaxPacketSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LatencySimulation_GetMaxPacketSize_mD53EAFA6A87D0F78034C177B06C7CF41C5484956 (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, int32_t ___channelId0, const RuntimeMethod* method) 
{
	{
		// public override int GetMaxPacketSize(int channelId = 0) => wrap.GetMaxPacketSize(channelId);
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___wrap_16;
		int32_t L_1 = ___channelId0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(17 /* System.Int32 Mirror.Transport::GetMaxPacketSize(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Mirror.LatencySimulation::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation_Shutdown_m43E3116FFB73B8679E51BDA6BFCB17C5735276FD (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, const RuntimeMethod* method) 
{
	{
		// public override void Shutdown() => wrap.Shutdown();
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___wrap_16;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(23 /* System.Void Mirror.Transport::Shutdown() */, L_0);
		return;
	}
}
// System.String Mirror.LatencySimulation::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LatencySimulation_ToString_m29F4C5A468EC33E65980512C117EE179FB7E8DCA (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1C922D278BFE4E8D6ECDD478AB8647DE753EB7D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"{nameof(LatencySimulation)} {wrap}";
		Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07* L_0 = __this->___wrap_16;
		String_t* L_1;
		L_1 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E, _stringLiteralA1C922D278BFE4E8D6ECDD478AB8647DE753EB7D, L_0, NULL);
		return L_1;
	}
}
// System.Void Mirror.LatencySimulation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatencySimulation__ctor_m9A176E9EC035A81865F422167EFD29FB587E2EA8 (LatencySimulation_tD8FAEDB4BD235ABC00164A7EDB8F4E9B138D845C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m049EBA47B702F54F0CECD280CC6E3E6F8EDAC66B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float jitterSpeed = 1;
		__this->___jitterSpeed_18 = (1.0f);
		// List<QueuedMessage> reliableClientToServer = new List<QueuedMessage>();
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_0 = (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7*)il2cpp_codegen_object_new(List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m049EBA47B702F54F0CECD280CC6E3E6F8EDAC66B(L_0, List_1__ctor_m049EBA47B702F54F0CECD280CC6E3E6F8EDAC66B_RuntimeMethod_var);
		__this->___reliableClientToServer_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reliableClientToServer_23), (void*)L_0);
		// List<QueuedMessage> reliableServerToClient = new List<QueuedMessage>();
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_1 = (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7*)il2cpp_codegen_object_new(List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m049EBA47B702F54F0CECD280CC6E3E6F8EDAC66B(L_1, List_1__ctor_m049EBA47B702F54F0CECD280CC6E3E6F8EDAC66B_RuntimeMethod_var);
		__this->___reliableServerToClient_24 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reliableServerToClient_24), (void*)L_1);
		// List<QueuedMessage> unreliableClientToServer = new List<QueuedMessage>();
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_2 = (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7*)il2cpp_codegen_object_new(List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m049EBA47B702F54F0CECD280CC6E3E6F8EDAC66B(L_2, List_1__ctor_m049EBA47B702F54F0CECD280CC6E3E6F8EDAC66B_RuntimeMethod_var);
		__this->___unreliableClientToServer_25 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___unreliableClientToServer_25), (void*)L_2);
		// List<QueuedMessage> unreliableServerToClient = new List<QueuedMessage>();
		List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* L_3 = (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7*)il2cpp_codegen_object_new(List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m049EBA47B702F54F0CECD280CC6E3E6F8EDAC66B(L_3, List_1__ctor_m049EBA47B702F54F0CECD280CC6E3E6F8EDAC66B_RuntimeMethod_var);
		__this->___unreliableServerToClient_26 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___unreliableServerToClient_26), (void*)L_3);
		// System.Random random = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_4 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_4, NULL);
		__this->___random_27 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___random_27), (void*)L_4);
		Transport__ctor_m951E466BF3C4D441259ACE340863D31DC828B3AF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mirror.TelepathyTransport::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_Awake_mD26E0737F5AE7FD21B3510EE89E75AB2E7E7508C (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t9781903FA414ED78D7CFD5F3FB3EDC9EF32A3763_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelepathyTransport_U3CAwakeU3Eb__16_0_m6EF5E01551C912BFFB7E91ABFC9ABCAE7B63884C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral780B762059704518D09A16D9F8C8BB89E4AED59B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Telepathy.Log.Info = Debug.Log;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_0, NULL, (intptr_t)((void*)Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Log_t9781903FA414ED78D7CFD5F3FB3EDC9EF32A3763_il2cpp_TypeInfo_var);
		((Log_t9781903FA414ED78D7CFD5F3FB3EDC9EF32A3763_StaticFields*)il2cpp_codegen_static_fields_for(Log_t9781903FA414ED78D7CFD5F3FB3EDC9EF32A3763_il2cpp_TypeInfo_var))->___Info_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Log_t9781903FA414ED78D7CFD5F3FB3EDC9EF32A3763_StaticFields*)il2cpp_codegen_static_fields_for(Log_t9781903FA414ED78D7CFD5F3FB3EDC9EF32A3763_il2cpp_TypeInfo_var))->___Info_0), (void*)L_0);
		// Telepathy.Log.Warning = Debug.LogWarning;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_1, NULL, (intptr_t)((void*)Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9_RuntimeMethod_var), NULL);
		((Log_t9781903FA414ED78D7CFD5F3FB3EDC9EF32A3763_StaticFields*)il2cpp_codegen_static_fields_for(Log_t9781903FA414ED78D7CFD5F3FB3EDC9EF32A3763_il2cpp_TypeInfo_var))->___Warning_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Log_t9781903FA414ED78D7CFD5F3FB3EDC9EF32A3763_StaticFields*)il2cpp_codegen_static_fields_for(Log_t9781903FA414ED78D7CFD5F3FB3EDC9EF32A3763_il2cpp_TypeInfo_var))->___Warning_1), (void*)L_1);
		// Telepathy.Log.Error = Debug.LogError;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_2, NULL, (intptr_t)((void*)Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2_RuntimeMethod_var), NULL);
		((Log_t9781903FA414ED78D7CFD5F3FB3EDC9EF32A3763_StaticFields*)il2cpp_codegen_static_fields_for(Log_t9781903FA414ED78D7CFD5F3FB3EDC9EF32A3763_il2cpp_TypeInfo_var))->___Error_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Log_t9781903FA414ED78D7CFD5F3FB3EDC9EF32A3763_StaticFields*)il2cpp_codegen_static_fields_for(Log_t9781903FA414ED78D7CFD5F3FB3EDC9EF32A3763_il2cpp_TypeInfo_var))->___Error_2), (void*)L_2);
		// enabledCheck = () => enabled;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_3 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_3, __this, (intptr_t)((void*)TelepathyTransport_U3CAwakeU3Eb__16_0_m6EF5E01551C912BFFB7E91ABFC9ABCAE7B63884C_RuntimeMethod_var), NULL);
		__this->___enabledCheck_31 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enabledCheck_31), (void*)L_3);
		// Debug.Log("TelepathyTransport initialized!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral780B762059704518D09A16D9F8C8BB89E4AED59B, NULL);
		// }
		return;
	}
}
// System.Boolean Mirror.TelepathyTransport::Available()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TelepathyTransport_Available_m8B45325F9A468EDBAD6EC41BA5BF09E3DA8C2AB4 (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, const RuntimeMethod* method) 
{
	{
		// return Application.platform != RuntimePlatform.WebGLPlayer;
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)((int32_t)17)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Mirror.TelepathyTransport::CreateClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_CreateClient_mD717F98529973D8BDDE977D9D34332CE55A5415E (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelepathyTransport_U3CCreateClientU3Eb__18_0_m387B59EDBDDCC321D26B2C00EA37C1735989387B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelepathyTransport_U3CCreateClientU3Eb__18_1_m77DC130C9B5E564C7D1A36EFBC29C6F07CE08F3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelepathyTransport_U3CCreateClientU3Eb__18_2_m68CF6DE0A3C3A938FFCB9486F6C433ED14CC257D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client = new Telepathy.Client(clientMaxMessageSize);
		int32_t L_0 = __this->___clientMaxMessageSize_25;
		Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* L_1 = (Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042*)il2cpp_codegen_object_new(Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Client__ctor_mC85E19B3E81C5FE1F5231C023FE85A066C2C3C8B(L_1, L_0, NULL);
		__this->___client_29 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_29), (void*)L_1);
		// client.OnConnected = () => OnClientConnected.Invoke();
		Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* L_2 = __this->___client_29;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)TelepathyTransport_U3CCreateClientU3Eb__18_0_m387B59EDBDDCC321D26B2C00EA37C1735989387B_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		L_2->___OnConnected_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___OnConnected_4), (void*)L_3);
		// client.OnData = (segment) => OnClientDataReceived.Invoke(segment, Channels.Reliable);
		Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* L_4 = __this->___client_29;
		Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341* L_5 = (Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341*)il2cpp_codegen_object_new(Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m2F501C85F4BAD84573D1479FD2D3D94F6CB8687A(L_5, __this, (intptr_t)((void*)TelepathyTransport_U3CCreateClientU3Eb__18_1_m77DC130C9B5E564C7D1A36EFBC29C6F07CE08F3E_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		L_4->___OnData_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___OnData_5), (void*)L_5);
		// client.OnDisconnected = () => OnClientDisconnected?.Invoke();
		Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* L_6 = __this->___client_29;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_7, __this, (intptr_t)((void*)TelepathyTransport_U3CCreateClientU3Eb__18_2_m68CF6DE0A3C3A938FFCB9486F6C433ED14CC257D_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		L_6->___OnDisconnected_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___OnDisconnected_6), (void*)L_7);
		// client.NoDelay = NoDelay;
		Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* L_8 = __this->___client_29;
		bool L_9 = __this->___NoDelay_18;
		NullCheck(L_8);
		((Common_tA69BE931B7F9B7EA080C1C8902BD3116732B4EA8*)L_8)->___NoDelay_0 = L_9;
		// client.SendTimeout = SendTimeout;
		Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* L_10 = __this->___client_29;
		int32_t L_11 = __this->___SendTimeout_19;
		NullCheck(L_10);
		((Common_tA69BE931B7F9B7EA080C1C8902BD3116732B4EA8*)L_10)->___SendTimeout_2 = L_11;
		// client.ReceiveTimeout = ReceiveTimeout;
		Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* L_12 = __this->___client_29;
		int32_t L_13 = __this->___ReceiveTimeout_20;
		NullCheck(L_12);
		((Common_tA69BE931B7F9B7EA080C1C8902BD3116732B4EA8*)L_12)->___ReceiveTimeout_3 = L_13;
		// client.SendQueueLimit = clientSendQueueLimit;
		Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* L_14 = __this->___client_29;
		int32_t L_15 = __this->___clientSendQueueLimit_27;
		NullCheck(L_14);
		L_14->___SendQueueLimit_7 = L_15;
		// client.ReceiveQueueLimit = clientReceiveQueueLimit;
		Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* L_16 = __this->___client_29;
		int32_t L_17 = __this->___clientReceiveQueueLimit_28;
		NullCheck(L_16);
		L_16->___ReceiveQueueLimit_8 = L_17;
		// }
		return;
	}
}
// System.Boolean Mirror.TelepathyTransport::ClientConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TelepathyTransport_ClientConnected_m7F9489C37B8DE8596CF7656124B0DF8BF4BF2918 (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, const RuntimeMethod* method) 
{
	{
		// public override bool ClientConnected() => client != null && client.Connected;
		Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* L_0 = __this->___client_29;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* L_1 = __this->___client_29;
		NullCheck(L_1);
		bool L_2;
		L_2 = Client_get_Connected_mA96433225ED5D558C6826ABB66B486F3F703AFA8(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Void Mirror.TelepathyTransport::ClientConnect(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ClientConnect_m544A41E1CF5991A3AB880DC52F5CF20F86DFBC7A (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, String_t* ___address0, const RuntimeMethod* method) 
{
	{
		// CreateClient();
		TelepathyTransport_CreateClient_mD717F98529973D8BDDE977D9D34332CE55A5415E(__this, NULL);
		// client.Connect(address, port);
		Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* L_0 = __this->___client_29;
		String_t* L_1 = ___address0;
		uint16_t L_2 = __this->___port_17;
		NullCheck(L_0);
		Client_Connect_m51C154E96199A8FCF494260ECA6D23E64ECCD5F4(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Mirror.TelepathyTransport::ClientConnect(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ClientConnect_mE0361AC5DFA56E45C86E9713417064FF21A17F9B (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3FB58DAF2CFBF3D2821FA68068D1520C3A7E465);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		// CreateClient();
		TelepathyTransport_CreateClient_mD717F98529973D8BDDE977D9D34332CE55A5415E(__this, NULL);
		// if (uri.Scheme != Scheme)
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___uri0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Uri_get_Scheme_m29106D5109538220B22FC49DE7B44040E51B0F6F(L_0, NULL);
		bool L_2;
		L_2 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_1, _stringLiteralB3FB58DAF2CFBF3D2821FA68068D1520C3A7E465, NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// throw new ArgumentException($"Invalid url {uri}, use {Scheme}://host:port instead", nameof(uri));
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_3 = ___uri0;
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5B7D55577ECC2D6DEFA55674921782E5003E75A)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3FB58DAF2CFBF3D2821FA68068D1520C3A7E465)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10C63C8C602DD5E38BE4A758C90EBAC324CD3E69)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TelepathyTransport_ClientConnect_mE0361AC5DFA56E45C86E9713417064FF21A17F9B_RuntimeMethod_var)));
	}

IL_0033:
	{
		// int serverPort = uri.IsDefaultPort ? port : uri.Port;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_6 = ___uri0;
		NullCheck(L_6);
		bool L_7;
		L_7 = Uri_get_IsDefaultPort_m1BFC89B27306852E9AFDEF92897FD52B0B3ECD06(L_6, NULL);
		if (L_7)
		{
			goto IL_0043;
		}
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_8 = ___uri0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Uri_get_Port_m7A1413AC9D9A2FC5DC8A7F89DF4A01ACA0241A02(L_8, NULL);
		G_B5_0 = L_9;
		goto IL_0049;
	}

IL_0043:
	{
		uint16_t L_10 = __this->___port_17;
		G_B5_0 = ((int32_t)(L_10));
	}

IL_0049:
	{
		V_0 = G_B5_0;
		// client.Connect(uri.Host, serverPort);
		Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* L_11 = __this->___client_29;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_12 = ___uri0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = Uri_get_Host_m2C0E258C7DFF7A340049BE9BC08FF45E90988D8C(L_12, NULL);
		int32_t L_14 = V_0;
		NullCheck(L_11);
		Client_Connect_m51C154E96199A8FCF494260ECA6D23E64ECCD5F4(L_11, L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void Mirror.TelepathyTransport::ClientSend(System.ArraySegment`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ClientSend_m71BCA8B94B26D0F280CFF3B721C0FD9C12B8852F (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment0, int32_t ___channelId1, const RuntimeMethod* method) 
{
	Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* G_B2_0 = NULL;
	Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* G_B1_0 = NULL;
	Action_2_t2E07896229FB84F193E1EFE789DDB074E447FCD2* G_B5_0 = NULL;
	Action_2_t2E07896229FB84F193E1EFE789DDB074E447FCD2* G_B4_0 = NULL;
	{
		// client?.Send(segment);
		Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* L_0 = __this->___client_29;
		Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_2 = ___segment0;
		NullCheck(G_B2_0);
		bool L_3;
		L_3 = Client_Send_m4715D8257B506C69AB6BFC72CD403B00FA91F3FD(G_B2_0, L_2, NULL);
	}

IL_0013:
	{
		// OnClientDataSent?.Invoke(segment, Channels.Reliable);
		Action_2_t2E07896229FB84F193E1EFE789DDB074E447FCD2* L_4 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnClientDataSent_8;
		Action_2_t2E07896229FB84F193E1EFE789DDB074E447FCD2* L_5 = L_4;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_6 = ___segment0;
		NullCheck(G_B5_0);
		Action_2_Invoke_mD9B56B532E7EB3082C89484B6BEA93F5E281B185_inline(G_B5_0, L_6, 0, NULL);
		// }
		return;
	}
}
// System.Void Mirror.TelepathyTransport::ClientDisconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ClientDisconnect_m4A806AADE80AB51E4BB0AD00742351B47BEA08FA (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, const RuntimeMethod* method) 
{
	Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* G_B2_0 = NULL;
	Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* G_B1_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B5_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	{
		// client?.Disconnect();
		Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* L_0 = __this->___client_29;
		Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Client_Disconnect_mF6F69106E26B5EB0F977306AEFD53E705053B068(G_B2_0, NULL);
	}

IL_0011:
	{
		// client = null;
		__this->___client_29 = (Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_29), (void*)(Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042*)NULL);
		// OnClientDisconnected?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnClientDisconnected_10;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0023;
		}
	}
	{
		return;
	}

IL_0023:
	{
		NullCheck(G_B5_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B5_0, NULL);
		// }
		return;
	}
}
// System.Void Mirror.TelepathyTransport::ClientEarlyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ClientEarlyUpdate_m97F0D2EF67407DCC3CB19E962A607BAB44E6933D (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, const RuntimeMethod* method) 
{
	Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* G_B4_0 = NULL;
	Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* G_B3_0 = NULL;
	{
		// if (!enabled) return;
		bool L_0;
		L_0 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!enabled) return;
		return;
	}

IL_0009:
	{
		// client?.Tick(clientMaxReceivesPerTick, enabledCheck);
		Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* L_1 = __this->___client_29;
		Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* L_2 = L_1;
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		int32_t L_3 = __this->___clientMaxReceivesPerTick_26;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_4 = __this->___enabledCheck_31;
		NullCheck(G_B4_0);
		int32_t L_5;
		L_5 = Client_Tick_m2067F4D00B5786D025BEC0C39E9F75B17AFCA070(G_B4_0, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Uri Mirror.TelepathyTransport::ServerUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* TelepathyTransport_ServerUri_mD7DB60C6851766A74AFF0C0805F3579D4658D60F (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3FB58DAF2CFBF3D2821FA68068D1520C3A7E465);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UriBuilder builder = new UriBuilder();
		UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* L_0 = (UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72*)il2cpp_codegen_object_new(UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UriBuilder__ctor_m1CBBB001D2542111D5B3334356E2AC65AFB80D27(L_0, NULL);
		// builder.Scheme = Scheme;
		UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* L_1 = L_0;
		NullCheck(L_1);
		UriBuilder_set_Scheme_m02C71DED53B5BDB8CA03E7484B8B554D0EF4B3BA(L_1, _stringLiteralB3FB58DAF2CFBF3D2821FA68068D1520C3A7E465, NULL);
		// builder.Host = Dns.GetHostName();
		UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* L_2 = L_1;
		String_t* L_3;
		L_3 = Dns_GetHostName_m9290C5F9D0B6B8F259D53F30B7A80C4D4FB77083(NULL);
		NullCheck(L_2);
		UriBuilder_set_Host_m7CD9C7B0B9CACAF15A57ACFC363C766F19178930(L_2, L_3, NULL);
		// builder.Port = port;
		UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* L_4 = L_2;
		uint16_t L_5 = __this->___port_17;
		NullCheck(L_4);
		UriBuilder_set_Port_mC6C31D266AA5790B8ED038C31489BCC2DE55DE3D(L_4, L_5, NULL);
		// return builder.Uri;
		NullCheck(L_4);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_6;
		L_6 = UriBuilder_get_Uri_mD0DF3F7DDF7C56CC99E2D29E06C959F80A4171A1(L_4, NULL);
		return L_6;
	}
}
// System.Boolean Mirror.TelepathyTransport::ServerActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TelepathyTransport_ServerActive_m954C62905381F64F16E956D0B32FB8E22CDBBCC4 (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, const RuntimeMethod* method) 
{
	{
		// public override bool ServerActive() => server != null && server.Active;
		Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_0 = __this->___server_30;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_1 = __this->___server_30;
		NullCheck(L_1);
		bool L_2;
		L_2 = Server_get_Active_mAE0B87F64A2A8D3CB6ED892328BAA58BC0C7B714(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Void Mirror.TelepathyTransport::ServerStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ServerStart_m686B73E9C0B66519377A55B7E2A8D8831673E9A9 (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t959877CB7CAF347CECE7BC7588CE3B3D88817A2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelepathyTransport_U3CServerStartU3Eb__27_0_m17A220EE3D4B74B06CB95B5EDA7A57EC6F3D169E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelepathyTransport_U3CServerStartU3Eb__27_1_mE76F0A6DBD39412F4049EAD373DF9CB2BA611762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelepathyTransport_U3CServerStartU3Eb__27_2_mE14EDFE9FD30FD46BC79A776C83189D59CEB74FA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// server = new Telepathy.Server(serverMaxMessageSize);
		int32_t L_0 = __this->___serverMaxMessageSize_21;
		Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_1 = (Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3*)il2cpp_codegen_object_new(Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Server__ctor_mA74E44DD462C6AA53A2BE05C21C016829D34BB6E(L_1, L_0, NULL);
		__this->___server_30 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___server_30), (void*)L_1);
		// server.OnConnected = (connectionId) => OnServerConnected.Invoke(connectionId);
		Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_2 = __this->___server_30;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_3 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_3, __this, (intptr_t)((void*)TelepathyTransport_U3CServerStartU3Eb__27_0_m17A220EE3D4B74B06CB95B5EDA7A57EC6F3D169E_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		L_2->___OnConnected_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___OnConnected_4), (void*)L_3);
		// server.OnData = (connectionId, segment) => OnServerDataReceived.Invoke(connectionId, segment, Channels.Reliable);
		Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_4 = __this->___server_30;
		Action_2_t959877CB7CAF347CECE7BC7588CE3B3D88817A2E* L_5 = (Action_2_t959877CB7CAF347CECE7BC7588CE3B3D88817A2E*)il2cpp_codegen_object_new(Action_2_t959877CB7CAF347CECE7BC7588CE3B3D88817A2E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_2__ctor_m9DD325FFD17E78823DB4542941E757F225BB7FD8(L_5, __this, (intptr_t)((void*)TelepathyTransport_U3CServerStartU3Eb__27_1_mE76F0A6DBD39412F4049EAD373DF9CB2BA611762_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		L_4->___OnData_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___OnData_5), (void*)L_5);
		// server.OnDisconnected = (connectionId) => OnServerDisconnected.Invoke(connectionId);
		Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_6 = __this->___server_30;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_7, __this, (intptr_t)((void*)TelepathyTransport_U3CServerStartU3Eb__27_2_mE14EDFE9FD30FD46BC79A776C83189D59CEB74FA_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		L_6->___OnDisconnected_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___OnDisconnected_6), (void*)L_7);
		// server.NoDelay = NoDelay;
		Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_8 = __this->___server_30;
		bool L_9 = __this->___NoDelay_18;
		NullCheck(L_8);
		((Common_tA69BE931B7F9B7EA080C1C8902BD3116732B4EA8*)L_8)->___NoDelay_0 = L_9;
		// server.SendTimeout = SendTimeout;
		Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_10 = __this->___server_30;
		int32_t L_11 = __this->___SendTimeout_19;
		NullCheck(L_10);
		((Common_tA69BE931B7F9B7EA080C1C8902BD3116732B4EA8*)L_10)->___SendTimeout_2 = L_11;
		// server.ReceiveTimeout = ReceiveTimeout;
		Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_12 = __this->___server_30;
		int32_t L_13 = __this->___ReceiveTimeout_20;
		NullCheck(L_12);
		((Common_tA69BE931B7F9B7EA080C1C8902BD3116732B4EA8*)L_12)->___ReceiveTimeout_3 = L_13;
		// server.SendQueueLimit = serverSendQueueLimitPerConnection;
		Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_14 = __this->___server_30;
		int32_t L_15 = __this->___serverSendQueueLimitPerConnection_23;
		NullCheck(L_14);
		L_14->___SendQueueLimit_9 = L_15;
		// server.ReceiveQueueLimit = serverReceiveQueueLimitPerConnection;
		Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_16 = __this->___server_30;
		int32_t L_17 = __this->___serverReceiveQueueLimitPerConnection_24;
		NullCheck(L_16);
		L_16->___ReceiveQueueLimit_10 = L_17;
		// server.Start(port);
		Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_18 = __this->___server_30;
		uint16_t L_19 = __this->___port_17;
		NullCheck(L_18);
		bool L_20;
		L_20 = Server_Start_m7DEC36AA42467CBFA9255B7983231C2DFC26310B(L_18, L_19, NULL);
		// }
		return;
	}
}
// System.Void Mirror.TelepathyTransport::ServerSend(System.Int32,System.ArraySegment`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ServerSend_m236639799203074FC3133EA7C7F0495FCD5AC806 (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, int32_t ___connectionId0, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment1, int32_t ___channelId2, const RuntimeMethod* method) 
{
	Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* G_B2_0 = NULL;
	Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* G_B1_0 = NULL;
	Action_3_tAEA3B0FC298F161EA8A0E82285BF499D36D8A584* G_B5_0 = NULL;
	Action_3_tAEA3B0FC298F161EA8A0E82285BF499D36D8A584* G_B4_0 = NULL;
	{
		// server?.Send(connectionId, segment);
		Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_0 = __this->___server_30;
		Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0014;
	}

IL_000c:
	{
		int32_t L_2 = ___connectionId0;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_3 = ___segment1;
		NullCheck(G_B2_0);
		bool L_4;
		L_4 = Server_Send_m1989FC767C6D611FC0228F1F7C2870838E0B01F7(G_B2_0, L_2, L_3, NULL);
	}

IL_0014:
	{
		// OnServerDataSent?.Invoke(connectionId, segment, Channels.Reliable);
		Action_3_tAEA3B0FC298F161EA8A0E82285BF499D36D8A584* L_5 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnServerDataSent_13;
		Action_3_tAEA3B0FC298F161EA8A0E82285BF499D36D8A584* L_6 = L_5;
		G_B4_0 = L_6;
		if (L_6)
		{
			G_B5_0 = L_6;
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		int32_t L_7 = ___connectionId0;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_8 = ___segment1;
		NullCheck(G_B5_0);
		Action_3_Invoke_mE96CDA1049F0D885C6E04E35F00C99EFB3418262_inline(G_B5_0, L_7, L_8, 0, NULL);
		// }
		return;
	}
}
// System.Void Mirror.TelepathyTransport::ServerDisconnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ServerDisconnect_m96FE2C40A0FF847DBDD661D11ED2D5644356C7FA (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, int32_t ___connectionId0, const RuntimeMethod* method) 
{
	Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* G_B2_0 = NULL;
	Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* G_B1_0 = NULL;
	{
		// public override void ServerDisconnect(int connectionId) => server?.Disconnect(connectionId);
		Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_0 = __this->___server_30;
		Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_2 = ___connectionId0;
		NullCheck(G_B2_0);
		bool L_3;
		L_3 = Server_Disconnect_mA53727C5278E8357097287AD14EF7505830E29B6(G_B2_0, L_2, NULL);
		return;
	}
}
// System.String Mirror.TelepathyTransport::ServerGetClientAddress(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TelepathyTransport_ServerGetClientAddress_m9688556C245235BCD6AF41AFAEAE4B9872111DA2 (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, int32_t ___connectionId0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* G_B2_0 = NULL;
	Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	try
	{// begin try (depth: 1)
		{
			// return server?.GetClientAddress(connectionId);
			Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_0 = __this->___server_30;
			Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_1 = L_0;
			G_B1_0 = L_1;
			if (L_1)
			{
				G_B2_0 = L_1;
				goto IL_000d_1;
			}
		}
		{
			G_B3_0 = ((String_t*)(NULL));
			goto IL_0013_1;
		}

IL_000d_1:
		{
			int32_t L_2 = ___connectionId0;
			NullCheck(G_B2_0);
			String_t* L_3;
			L_3 = Server_GetClientAddress_mDC9EDE29579BD8906CE231AF834F957755A53223(G_B2_0, L_2, NULL);
			G_B3_0 = L_3;
		}

IL_0013_1:
		{
			V_0 = G_B3_0;
			goto IL_001f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{// begin catch(System.Net.Sockets.SocketException)
		// catch (SocketException)
		// return "unknown";
		V_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001f;
	}// end catch (depth: 1)

IL_001f:
	{
		// }
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Void Mirror.TelepathyTransport::ServerStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ServerStop_m30142FE0A7AD18FFDB297791CCE23E986DDA9037 (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, const RuntimeMethod* method) 
{
	Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* G_B2_0 = NULL;
	Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* G_B1_0 = NULL;
	{
		// server?.Stop();
		Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_0 = __this->___server_30;
		Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Server_Stop_m3AC1A3F1522C9CD2EB6C3C94ECFBDB2EC1DA82F0(G_B2_0, NULL);
	}

IL_0011:
	{
		// server = null;
		__this->___server_30 = (Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___server_30), (void*)(Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3*)NULL);
		// }
		return;
	}
}
// System.Void Mirror.TelepathyTransport::ServerEarlyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_ServerEarlyUpdate_mB8E201707882927EA64BED313AB0F7BAFE037355 (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, const RuntimeMethod* method) 
{
	Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* G_B4_0 = NULL;
	Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* G_B3_0 = NULL;
	{
		// if (!enabled) return;
		bool L_0;
		L_0 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!enabled) return;
		return;
	}

IL_0009:
	{
		// server?.Tick(serverMaxReceivesPerTick, enabledCheck);
		Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_1 = __this->___server_30;
		Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_2 = L_1;
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		int32_t L_3 = __this->___serverMaxReceivesPerTick_22;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_4 = __this->___enabledCheck_31;
		NullCheck(G_B4_0);
		int32_t L_5;
		L_5 = Server_Tick_m1C29EA8061DE6EFF0AEEB55045786D5852C42A7A(G_B4_0, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Mirror.TelepathyTransport::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_Shutdown_m88BE1BA8DC78A8DF18F222A2F3FE4508C24E32D1 (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE971D200E92B902817CBA6564BCC938A17CA6558);
		s_Il2CppMethodInitialized = true;
	}
	Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* G_B2_0 = NULL;
	Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* G_B1_0 = NULL;
	Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* G_B5_0 = NULL;
	Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* G_B4_0 = NULL;
	{
		// Debug.Log("TelepathyTransport Shutdown()");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralE971D200E92B902817CBA6564BCC938A17CA6558, NULL);
		// client?.Disconnect();
		Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* L_0 = __this->___client_29;
		Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0016;
		}
	}
	{
		goto IL_001b;
	}

IL_0016:
	{
		NullCheck(G_B2_0);
		Client_Disconnect_mF6F69106E26B5EB0F977306AEFD53E705053B068(G_B2_0, NULL);
	}

IL_001b:
	{
		// client = null;
		__this->___client_29 = (Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_29), (void*)(Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042*)NULL);
		// server?.Stop();
		Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_2 = __this->___server_30;
		Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_002e;
		}
	}
	{
		goto IL_0033;
	}

IL_002e:
	{
		NullCheck(G_B5_0);
		Server_Stop_m3AC1A3F1522C9CD2EB6C3C94ECFBDB2EC1DA82F0(G_B5_0, NULL);
	}

IL_0033:
	{
		// server = null;
		__this->___server_30 = (Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___server_30), (void*)(Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3*)NULL);
		// }
		return;
	}
}
// System.Int32 Mirror.TelepathyTransport::GetMaxPacketSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TelepathyTransport_GetMaxPacketSize_mC4224624132E9932A501046DF195E8846D42F000 (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, int32_t ___channelId0, const RuntimeMethod* method) 
{
	{
		// return serverMaxMessageSize;
		int32_t L_0 = __this->___serverMaxMessageSize_21;
		return L_0;
	}
}
// System.String Mirror.TelepathyTransport::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TelepathyTransport_ToString_m01925FEE4D26BD1CF08ADDE1A5C88224B334CD2F (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral419B12628B3E524D69E9ECB19EDDD406CD742316);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E8CFA17B532A84971C4610DC101CE1124814CCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral973A66DB55AF166CD9F932F251FE02DA521831C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (server != null && server.Active && server.listener != null)
		Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_0 = __this->___server_30;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_1 = __this->___server_30;
		NullCheck(L_1);
		bool L_2;
		L_2 = Server_get_Active_mAE0B87F64A2A8D3CB6ED892328BAA58BC0C7B714(L_1, NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		Server_t88217EB567B7CA28FDDD19E6A674041E18541AB3* L_3 = __this->___server_30;
		NullCheck(L_3);
		TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82* L_4 = L_3->___listener_7;
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// return $"Telepathy Server port: {port}";
		uint16_t L_5 = __this->___port_17;
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral419B12628B3E524D69E9ECB19EDDD406CD742316, L_7, NULL);
		return L_8;
	}

IL_0038:
	{
		// else if (client != null && (client.Connecting || client.Connected))
		Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* L_9 = __this->___client_29;
		if (!L_9)
		{
			goto IL_0070;
		}
	}
	{
		Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* L_10 = __this->___client_29;
		NullCheck(L_10);
		bool L_11;
		L_11 = Client_get_Connecting_m63805D70B60308699B5FD9BA12C12032063F839E(L_10, NULL);
		if (L_11)
		{
			goto IL_005a;
		}
	}
	{
		Client_t20C4A90FC449D8BE16EC6ED1368A5AB3AC647042* L_12 = __this->___client_29;
		NullCheck(L_12);
		bool L_13;
		L_13 = Client_get_Connected_mA96433225ED5D558C6826ABB66B486F3F703AFA8(L_12, NULL);
		if (!L_13)
		{
			goto IL_0070;
		}
	}

IL_005a:
	{
		// return $"Telepathy Client port: {port}";
		uint16_t L_14 = __this->___port_17;
		uint16_t L_15 = L_14;
		RuntimeObject* L_16 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral4E8CFA17B532A84971C4610DC101CE1124814CCF, L_16, NULL);
		return L_17;
	}

IL_0070:
	{
		// return "Telepathy (inactive/disconnected)";
		return _stringLiteral973A66DB55AF166CD9F932F251FE02DA521831C5;
	}
}
// System.Void Mirror.TelepathyTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport__ctor_m6C6DDB9CE73ABCC87A58B16E17FC04EBF75F6D1D (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, const RuntimeMethod* method) 
{
	{
		// public ushort port = 7777;
		__this->___port_17 = (uint16_t)((int32_t)7777);
		// public bool NoDelay = true;
		__this->___NoDelay_18 = (bool)1;
		// public int SendTimeout = 5000;
		__this->___SendTimeout_19 = ((int32_t)5000);
		// public int ReceiveTimeout = 30000;
		__this->___ReceiveTimeout_20 = ((int32_t)30000);
		// public int serverMaxMessageSize = 16 * 1024;
		__this->___serverMaxMessageSize_21 = ((int32_t)16384);
		// public int serverMaxReceivesPerTick = 10000;
		__this->___serverMaxReceivesPerTick_22 = ((int32_t)10000);
		// public int serverSendQueueLimitPerConnection = 10000;
		__this->___serverSendQueueLimitPerConnection_23 = ((int32_t)10000);
		// public int serverReceiveQueueLimitPerConnection = 10000;
		__this->___serverReceiveQueueLimitPerConnection_24 = ((int32_t)10000);
		// public int clientMaxMessageSize = 16 * 1024;
		__this->___clientMaxMessageSize_25 = ((int32_t)16384);
		// public int clientMaxReceivesPerTick = 1000;
		__this->___clientMaxReceivesPerTick_26 = ((int32_t)1000);
		// public int clientSendQueueLimit = 10000;
		__this->___clientSendQueueLimit_27 = ((int32_t)10000);
		// public int clientReceiveQueueLimit = 10000;
		__this->___clientReceiveQueueLimit_28 = ((int32_t)10000);
		Transport__ctor_m951E466BF3C4D441259ACE340863D31DC828B3AF(__this, NULL);
		return;
	}
}
// System.Boolean Mirror.TelepathyTransport::<Awake>b__16_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TelepathyTransport_U3CAwakeU3Eb__16_0_m6EF5E01551C912BFFB7E91ABFC9ABCAE7B63884C (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, const RuntimeMethod* method) 
{
	{
		// enabledCheck = () => enabled;
		bool L_0;
		L_0 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(__this, NULL);
		return L_0;
	}
}
// System.Void Mirror.TelepathyTransport::<CreateClient>b__18_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_U3CCreateClientU3Eb__18_0_m387B59EDBDDCC321D26B2C00EA37C1735989387B (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, const RuntimeMethod* method) 
{
	{
		// client.OnConnected = () => OnClientConnected.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnClientConnected_6;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		return;
	}
}
// System.Void Mirror.TelepathyTransport::<CreateClient>b__18_1(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_U3CCreateClientU3Eb__18_1_m77DC130C9B5E564C7D1A36EFBC29C6F07CE08F3E (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment0, const RuntimeMethod* method) 
{
	{
		// client.OnData = (segment) => OnClientDataReceived.Invoke(segment, Channels.Reliable);
		Action_2_t2E07896229FB84F193E1EFE789DDB074E447FCD2* L_0 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnClientDataReceived_7;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = ___segment0;
		NullCheck(L_0);
		Action_2_Invoke_mD9B56B532E7EB3082C89484B6BEA93F5E281B185_inline(L_0, L_1, 0, NULL);
		return;
	}
}
// System.Void Mirror.TelepathyTransport::<CreateClient>b__18_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_U3CCreateClientU3Eb__18_2_m68CF6DE0A3C3A938FFCB9486F6C433ED14CC257D (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// client.OnDisconnected = () => OnClientDisconnected?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnClientDisconnected_10;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		return;
	}
}
// System.Void Mirror.TelepathyTransport::<ServerStart>b__27_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_U3CServerStartU3Eb__27_0_m17A220EE3D4B74B06CB95B5EDA7A57EC6F3D169E (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, int32_t ___connectionId0, const RuntimeMethod* method) 
{
	{
		// server.OnConnected = (connectionId) => OnServerConnected.Invoke(connectionId);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnServerConnected_11;
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(L_0, L_1, NULL);
		return;
	}
}
// System.Void Mirror.TelepathyTransport::<ServerStart>b__27_1(System.Int32,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_U3CServerStartU3Eb__27_1_mE76F0A6DBD39412F4049EAD373DF9CB2BA611762 (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, int32_t ___connectionId0, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment1, const RuntimeMethod* method) 
{
	{
		// server.OnData = (connectionId, segment) => OnServerDataReceived.Invoke(connectionId, segment, Channels.Reliable);
		Action_3_tAEA3B0FC298F161EA8A0E82285BF499D36D8A584* L_0 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnServerDataReceived_12;
		int32_t L_1 = ___connectionId0;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_2 = ___segment1;
		NullCheck(L_0);
		Action_3_Invoke_mE96CDA1049F0D885C6E04E35F00C99EFB3418262_inline(L_0, L_1, L_2, 0, NULL);
		return;
	}
}
// System.Void Mirror.TelepathyTransport::<ServerStart>b__27_2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelepathyTransport_U3CServerStartU3Eb__27_2_mE14EDFE9FD30FD46BC79A776C83189D59CEB74FA (TelepathyTransport_t24B57277A0CC5CB9BE955D8430DCF6A236336258* __this, int32_t ___connectionId0, const RuntimeMethod* method) 
{
	{
		// server.OnDisconnected = (connectionId) => OnServerDisconnected.Invoke(connectionId);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnServerDisconnected_15;
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(L_0, L_1, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 kcp2k.KcpTransport::FromKcpChannel(kcp2k.KcpChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpTransport_FromKcpChannel_m8408EE5FD730D2F7336895000E93F3A13DE44598 (uint8_t ___channel0, const RuntimeMethod* method) 
{
	{
		// channel == KcpChannel.Reliable ? Channels.Reliable : Channels.Unreliable;
		uint8_t L_0 = ___channel0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0006;
		}
	}
	{
		return 1;
	}

IL_0006:
	{
		return 0;
	}
}
// kcp2k.KcpChannel kcp2k.KcpTransport::ToKcpChannel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t KcpTransport_ToKcpChannel_m8B43290E6C533642FE9C52B978DC703D36616EAC (int32_t ___channel0, const RuntimeMethod* method) 
{
	{
		// channel == Channels.Reliable ? KcpChannel.Reliable : KcpChannel.Unreliable;
		int32_t L_0 = ___channel0;
		if (!L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (uint8_t)(2);
	}

IL_0005:
	{
		return (uint8_t)(1);
	}
}
// Mirror.TransportError kcp2k.KcpTransport::ToTransportError(kcp2k.ErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t KcpTransport_ToTransportError_m5683BF645DB585008A659602F46A1B2D412B164B (uint8_t ___error0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___error0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0024;
			}
			case 1:
			{
				goto IL_0026;
			}
			case 2:
			{
				goto IL_0028;
			}
			case 3:
			{
				goto IL_002a;
			}
			case 4:
			{
				goto IL_002c;
			}
			case 5:
			{
				goto IL_002e;
			}
			case 6:
			{
				goto IL_0030;
			}
		}
	}
	{
		goto IL_0032;
	}

IL_0024:
	{
		// case ErrorCode.DnsResolve: return TransportError.DnsResolve;
		return (uint8_t)(0);
	}

IL_0026:
	{
		// case ErrorCode.Timeout: return TransportError.Timeout;
		return (uint8_t)(2);
	}

IL_0028:
	{
		// case ErrorCode.Congestion: return TransportError.Congestion;
		return (uint8_t)(3);
	}

IL_002a:
	{
		// case ErrorCode.InvalidReceive: return TransportError.InvalidReceive;
		return (uint8_t)(4);
	}

IL_002c:
	{
		// case ErrorCode.InvalidSend: return TransportError.InvalidSend;
		return (uint8_t)(5);
	}

IL_002e:
	{
		// case ErrorCode.ConnectionClosed: return TransportError.ConnectionClosed;
		return (uint8_t)(6);
	}

IL_0030:
	{
		// case ErrorCode.Unexpected: return TransportError.Unexpected;
		return (uint8_t)(7);
	}

IL_0032:
	{
		// default: throw new InvalidCastException($"KCP: missing error translation for {error}");
		uint8_t L_1 = ___error0;
		uint8_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ErrorCode_tE65BC4A5E8394ECBF5FEEE7E6F65AFC33125DEA5_il2cpp_TypeInfo_var)), &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral44AA9B32C683732404B7A54A90552A1AF0FA2951)), L_3, NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KcpTransport_ToTransportError_m5683BF645DB585008A659602F46A1B2D412B164B_RuntimeMethod_var)));
	}
}
// System.Void kcp2k.KcpTransport::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_Awake_m068F5109644FD81DC48614888C6C6C8CA7166B31 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_tB927C850E441C1E678D28E51343AA3B753873A2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_tE12BE99979C339D5F96975616AC3B9856017C9E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpConfig_t0C03722728EF98EB68D698A5DE03B2EEA9921FD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpTransport_U3CAwakeU3Eb__23_1_m7E2D8162F7DA519AB1E6D66689948EE3D0564057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpTransport_U3CAwakeU3Eb__23_2_mABB6265F7E7764A4527F3BB3C9AFB073C199A27B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpTransport_U3CAwakeU3Eb__23_3_m793D72C5F205FFAAB7279BFF17FFF8E90060B980_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpTransport_U3CAwakeU3Eb__23_4_m01A20A29245CD2E0F1CED676C2AE29E2A7449A25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpTransport_U3CAwakeU3Eb__23_5_m34364203AE4F37DC01E77A15ED7E3D68106707C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpTransport_U3CAwakeU3Eb__23_6_m1908BC5F872B473BF7F3A9B14F794AB6EF1C6743_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpTransport_U3CAwakeU3Eb__23_7_m920319D5344E4C8E6B540F2D0CD11B5728EFD7DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KcpTransport_U3CAwakeU3Eb__23_8_m1E3B9720779B007D816A2D945DE541BE6B5216FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__23_0_mF5014DA8A385E8A053CA9450002460EC83E6AE99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA08CDFC5085CF7E4192D56750787D111E301864);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA16D37945B909A6128D0DEE597FF63BA9E83C8C);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B4_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B3_0 = NULL;
	{
		// if (debugLog)
		bool L_0 = __this->___debugLog_33;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// Log.Info = Debug.Log;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_1, NULL, (intptr_t)((void*)Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Info_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Info_0), (void*)L_1);
		goto IL_003f;
	}

IL_001b:
	{
		// Log.Info = _ => {};
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = ((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9__23_0_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_003a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var);
		U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967* L_4 = ((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_5 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CAwakeU3Eb__23_0_mF5014DA8A385E8A053CA9450002460EC83E6AE99_RuntimeMethod_var), NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = L_5;
		((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9__23_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9__23_0_1), (void*)L_6);
		G_B4_0 = L_6;
	}

IL_003a:
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Info_0 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Info_0), (void*)G_B4_0);
	}

IL_003f:
	{
		// Log.Warning = Debug.LogWarning;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_7, NULL, (intptr_t)((void*)Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var);
		((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Warning_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Warning_1), (void*)L_7);
		// Log.Error = Debug.LogError;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_8, NULL, (intptr_t)((void*)Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2_RuntimeMethod_var), NULL);
		((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Error_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_StaticFields*)il2cpp_codegen_static_fields_for(Log_tE3E7C9463E639FD4101185C7A65EB0360BA5A961_il2cpp_TypeInfo_var))->___Error_2), (void*)L_8);
		// config = new KcpConfig(DualMode, MaximizeSocketBuffers, NoDelay, Interval, FastResend, CongestionWindow, SendWindowSize, ReceiveWindowSize, Timeout, MaxRetransmit);
		bool L_9 = __this->___DualMode_18;
		bool L_10 = __this->___MaximizeSocketBuffers_27;
		bool L_11 = __this->___NoDelay_19;
		uint32_t L_12 = __this->___Interval_20;
		int32_t L_13 = __this->___FastResend_22;
		bool L_14 = __this->___CongestionWindow_23;
		uint32_t L_15 = __this->___SendWindowSize_24;
		uint32_t L_16 = __this->___ReceiveWindowSize_25;
		int32_t L_17 = __this->___Timeout_21;
		uint32_t L_18 = __this->___MaxRetransmit_26;
		KcpConfig_t0C03722728EF98EB68D698A5DE03B2EEA9921FD3* L_19 = (KcpConfig_t0C03722728EF98EB68D698A5DE03B2EEA9921FD3*)il2cpp_codegen_object_new(KcpConfig_t0C03722728EF98EB68D698A5DE03B2EEA9921FD3_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		KcpConfig__ctor_m7AC4428C8749F5B6812331C59C4C4C381B33E00F(L_19, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, NULL);
		__this->___config_30 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___config_30), (void*)L_19);
		// client = new KcpClient(
		//     () => OnClientConnected.Invoke(),
		//     (message, channel) => OnClientDataReceived.Invoke(message, FromKcpChannel(channel)),
		//     () => OnClientDisconnected.Invoke(),
		//     (error, reason) => OnClientError.Invoke(ToTransportError(error), reason)
		// );
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_20 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_20, __this, (intptr_t)((void*)KcpTransport_U3CAwakeU3Eb__23_1_m7E2D8162F7DA519AB1E6D66689948EE3D0564057_RuntimeMethod_var), NULL);
		Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED* L_21 = (Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED*)il2cpp_codegen_object_new(Action_2_tC2D3CA832F868E9436EA0A3271ADA9189C1F14ED_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Action_2__ctor_m5314E7E349F5C9931DB128DEC31B647B828E260C(L_21, __this, (intptr_t)((void*)KcpTransport_U3CAwakeU3Eb__23_2_mABB6265F7E7764A4527F3BB3C9AFB073C199A27B_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_22 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_22, __this, (intptr_t)((void*)KcpTransport_U3CAwakeU3Eb__23_3_m793D72C5F205FFAAB7279BFF17FFF8E90060B980_RuntimeMethod_var), NULL);
		Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487* L_23 = (Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487*)il2cpp_codegen_object_new(Action_2_t380281766D86EEF86589EE7A291E1BCF6FFD9487_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Action_2__ctor_m5D467A089982DE16D19EDAE7C21DABDAB2760863(L_23, __this, (intptr_t)((void*)KcpTransport_U3CAwakeU3Eb__23_4_m01A20A29245CD2E0F1CED676C2AE29E2A7449A25_RuntimeMethod_var), NULL);
		KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* L_24 = (KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5*)il2cpp_codegen_object_new(KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		KcpClient__ctor_mA42DF334D8EABD9AED2CD2F85BFDDB3F5006B4C1(L_24, L_20, L_21, L_22, L_23, NULL);
		__this->___client_32 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_32), (void*)L_24);
		// server = new KcpServer(
		//           (connectionId) => OnServerConnected.Invoke(connectionId),
		//           (connectionId, message, channel) => OnServerDataReceived.Invoke(connectionId, message, FromKcpChannel(channel)),
		//           (connectionId) => OnServerDisconnected.Invoke(connectionId),
		//           (connectionId, error, reason) => OnServerError.Invoke(connectionId, ToTransportError(error), reason),
		//           config
		// );
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_25 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_25, __this, (intptr_t)((void*)KcpTransport_U3CAwakeU3Eb__23_5_m34364203AE4F37DC01E77A15ED7E3D68106707C5_RuntimeMethod_var), NULL);
		Action_3_tE12BE99979C339D5F96975616AC3B9856017C9E4* L_26 = (Action_3_tE12BE99979C339D5F96975616AC3B9856017C9E4*)il2cpp_codegen_object_new(Action_3_tE12BE99979C339D5F96975616AC3B9856017C9E4_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Action_3__ctor_m38672CEC381B43263147F9B5AC62ADC0AD39532D(L_26, __this, (intptr_t)((void*)KcpTransport_U3CAwakeU3Eb__23_6_m1908BC5F872B473BF7F3A9B14F794AB6EF1C6743_RuntimeMethod_var), NULL);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_27 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_27, __this, (intptr_t)((void*)KcpTransport_U3CAwakeU3Eb__23_7_m920319D5344E4C8E6B540F2D0CD11B5728EFD7DE_RuntimeMethod_var), NULL);
		Action_3_tB927C850E441C1E678D28E51343AA3B753873A2D* L_28 = (Action_3_tB927C850E441C1E678D28E51343AA3B753873A2D*)il2cpp_codegen_object_new(Action_3_tB927C850E441C1E678D28E51343AA3B753873A2D_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		Action_3__ctor_mBE8EFB98233883462B5A9EEE6018503AFCEAE978(L_28, __this, (intptr_t)((void*)KcpTransport_U3CAwakeU3Eb__23_8_m1E3B9720779B007D816A2D945DE541BE6B5216FA_RuntimeMethod_var), NULL);
		KcpConfig_t0C03722728EF98EB68D698A5DE03B2EEA9921FD3* L_29 = __this->___config_30;
		KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* L_30 = (KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6*)il2cpp_codegen_object_new(KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		KcpServer__ctor_mD263EA072AD5B3AC5D617DA90BAAAC70AF633E28(L_30, L_25, L_26, L_27, L_28, L_29, NULL);
		__this->___server_31 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___server_31), (void*)L_30);
		// if (statisticsLog)
		bool L_31 = __this->___statisticsLog_35;
		if (!L_31)
		{
			goto IL_0141;
		}
	}
	{
		// InvokeRepeating(nameof(OnLogStatistics), 1, 1);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteralAA16D37945B909A6128D0DEE597FF63BA9E83C8C, (1.0f), (1.0f), NULL);
	}

IL_0141:
	{
		// Debug.Log("KcpTransport initialized!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralAA08CDFC5085CF7E4192D56750787D111E301864, NULL);
		// }
		return;
	}
}
// System.Void kcp2k.KcpTransport::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_OnValidate_m9122E103C1CA6C385B8286DC11C2DD7578993AEA (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) 
{
	{
		// ReliableMaxMessageSize = KcpPeer.ReliableMaxMessageSize(ReceiveWindowSize);
		uint32_t L_0 = __this->___ReceiveWindowSize_25;
		int32_t L_1;
		L_1 = KcpPeer_ReliableMaxMessageSize_mEABA6BD88087F98D927F2D46951E84D6B743EA97(L_0, NULL);
		__this->___ReliableMaxMessageSize_28 = L_1;
		// UnreliableMaxMessageSize = KcpPeer.UnreliableMaxMessageSize;
		__this->___UnreliableMaxMessageSize_29 = ((int32_t)1199);
		// }
		return;
	}
}
// System.Boolean kcp2k.KcpTransport::Available()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KcpTransport_Available_mF72E6A271370D17A3B5D6F32E71F0B92681BAECA (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) 
{
	{
		// Application.platform != RuntimePlatform.WebGLPlayer;
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)((int32_t)17)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean kcp2k.KcpTransport::ClientConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KcpTransport_ClientConnected_mADFB30AABD2E50B168E5E9A489B801DA79ACF78B (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) 
{
	{
		// public override bool ClientConnected() => client.connected;
		KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* L_0 = __this->___client_32;
		NullCheck(L_0);
		bool L_1 = L_0->___connected_8;
		return L_1;
	}
}
// System.Void kcp2k.KcpTransport::ClientConnect(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_ClientConnect_mBD9B2B4B16D18B432997DD494CE6EADB126D296D (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, String_t* ___address0, const RuntimeMethod* method) 
{
	{
		// client.Connect(address, Port, config);
		KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* L_0 = __this->___client_32;
		String_t* L_1 = ___address0;
		uint16_t L_2 = __this->___Port_17;
		KcpConfig_t0C03722728EF98EB68D698A5DE03B2EEA9921FD3* L_3 = __this->___config_30;
		NullCheck(L_0);
		KcpClient_Connect_mC0AF2BAF0BE75C0B1BE26FCF1EC058510BBCC2C1(L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void kcp2k.KcpTransport::ClientConnect(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_ClientConnect_m4A0E4054D55532BEC51A5FB6D2303F8F85BA47FD (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC7ABCA5219F17C4E2B43D828798162C5FE762FC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		// if (uri.Scheme != Scheme)
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___uri0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Uri_get_Scheme_m29106D5109538220B22FC49DE7B44040E51B0F6F(L_0, NULL);
		bool L_2;
		L_2 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_1, _stringLiteralDC7ABCA5219F17C4E2B43D828798162C5FE762FC, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// throw new ArgumentException($"Invalid url {uri}, use {Scheme}://host:port instead", nameof(uri));
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_3 = ___uri0;
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5B7D55577ECC2D6DEFA55674921782E5003E75A)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC7ABCA5219F17C4E2B43D828798162C5FE762FC)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10C63C8C602DD5E38BE4A758C90EBAC324CD3E69)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KcpTransport_ClientConnect_m4A0E4054D55532BEC51A5FB6D2303F8F85BA47FD_RuntimeMethod_var)));
	}

IL_002d:
	{
		// int serverPort = uri.IsDefaultPort ? Port : uri.Port;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_6 = ___uri0;
		NullCheck(L_6);
		bool L_7;
		L_7 = Uri_get_IsDefaultPort_m1BFC89B27306852E9AFDEF92897FD52B0B3ECD06(L_6, NULL);
		if (L_7)
		{
			goto IL_003d;
		}
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_8 = ___uri0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Uri_get_Port_m7A1413AC9D9A2FC5DC8A7F89DF4A01ACA0241A02(L_8, NULL);
		G_B5_0 = L_9;
		goto IL_0043;
	}

IL_003d:
	{
		uint16_t L_10 = __this->___Port_17;
		G_B5_0 = ((int32_t)(L_10));
	}

IL_0043:
	{
		V_0 = G_B5_0;
		// client.Connect(uri.Host, (ushort)serverPort, config);
		KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* L_11 = __this->___client_32;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_12 = ___uri0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = Uri_get_Host_m2C0E258C7DFF7A340049BE9BC08FF45E90988D8C(L_12, NULL);
		int32_t L_14 = V_0;
		KcpConfig_t0C03722728EF98EB68D698A5DE03B2EEA9921FD3* L_15 = __this->___config_30;
		NullCheck(L_11);
		KcpClient_Connect_mC0AF2BAF0BE75C0B1BE26FCF1EC058510BBCC2C1(L_11, L_13, (uint16_t)((int32_t)(uint16_t)L_14), L_15, NULL);
		// }
		return;
	}
}
// System.Void kcp2k.KcpTransport::ClientSend(System.ArraySegment`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_ClientSend_m1CF479C211C7D3544F563FB3DC16D08C3CE78146 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment0, int32_t ___channelId1, const RuntimeMethod* method) 
{
	Action_2_t2E07896229FB84F193E1EFE789DDB074E447FCD2* G_B2_0 = NULL;
	Action_2_t2E07896229FB84F193E1EFE789DDB074E447FCD2* G_B1_0 = NULL;
	{
		// client.Send(segment, ToKcpChannel(channelId));
		KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* L_0 = __this->___client_32;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = ___segment0;
		int32_t L_2 = ___channelId1;
		uint8_t L_3;
		L_3 = KcpTransport_ToKcpChannel_m8B43290E6C533642FE9C52B978DC703D36616EAC(L_2, NULL);
		NullCheck(L_0);
		KcpClient_Send_m53625D46141304166BC26093AB18F0B13D29DD59(L_0, L_1, L_3, NULL);
		// OnClientDataSent?.Invoke(segment, channelId);
		Action_2_t2E07896229FB84F193E1EFE789DDB074E447FCD2* L_4 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnClientDataSent_8;
		Action_2_t2E07896229FB84F193E1EFE789DDB074E447FCD2* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_6 = ___segment0;
		int32_t L_7 = ___channelId1;
		NullCheck(G_B2_0);
		Action_2_Invoke_mD9B56B532E7EB3082C89484B6BEA93F5E281B185_inline(G_B2_0, L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void kcp2k.KcpTransport::ClientDisconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_ClientDisconnect_m1D4AD4FB043F38E15B483FA7C614FC8F486C9244 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) 
{
	{
		// public override void ClientDisconnect() => client.Disconnect();
		KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* L_0 = __this->___client_32;
		NullCheck(L_0);
		KcpClient_Disconnect_m49F7D3DD77CF170A8F4591497EA49BC220D7B1C2(L_0, NULL);
		return;
	}
}
// System.Void kcp2k.KcpTransport::ClientEarlyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_ClientEarlyUpdate_m20DBC38DD7829C8D527AEA494A776ACEC3DFA651 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) 
{
	{
		// if (enabled) client.TickIncoming();
		bool L_0;
		L_0 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(__this, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (enabled) client.TickIncoming();
		KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* L_1 = __this->___client_32;
		NullCheck(L_1);
		KcpClient_TickIncoming_m9DD9D3D53BCC9EE20713EF10980185EFEE0E5F00(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpTransport::ClientLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_ClientLateUpdate_m58AE5D55686B4E6552D90D84B5F3683FA8B79410 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) 
{
	{
		// public override void ClientLateUpdate() => client.TickOutgoing();
		KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* L_0 = __this->___client_32;
		NullCheck(L_0);
		KcpClient_TickOutgoing_mA528E9BEAF933EC18D66ACF5D6272AF0DEA12B72(L_0, NULL);
		return;
	}
}
// System.Uri kcp2k.KcpTransport::ServerUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* KcpTransport_ServerUri_mC77F0AB819B909E4E872E77A39DA5E05750A4074 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC7ABCA5219F17C4E2B43D828798162C5FE762FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UriBuilder builder = new UriBuilder();
		UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* L_0 = (UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72*)il2cpp_codegen_object_new(UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UriBuilder__ctor_m1CBBB001D2542111D5B3334356E2AC65AFB80D27(L_0, NULL);
		// builder.Scheme = Scheme;
		UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* L_1 = L_0;
		NullCheck(L_1);
		UriBuilder_set_Scheme_m02C71DED53B5BDB8CA03E7484B8B554D0EF4B3BA(L_1, _stringLiteralDC7ABCA5219F17C4E2B43D828798162C5FE762FC, NULL);
		// builder.Host = Dns.GetHostName();
		UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* L_2 = L_1;
		String_t* L_3;
		L_3 = Dns_GetHostName_m9290C5F9D0B6B8F259D53F30B7A80C4D4FB77083(NULL);
		NullCheck(L_2);
		UriBuilder_set_Host_m7CD9C7B0B9CACAF15A57ACFC363C766F19178930(L_2, L_3, NULL);
		// builder.Port = Port;
		UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* L_4 = L_2;
		uint16_t L_5 = __this->___Port_17;
		NullCheck(L_4);
		UriBuilder_set_Port_mC6C31D266AA5790B8ED038C31489BCC2DE55DE3D(L_4, L_5, NULL);
		// return builder.Uri;
		NullCheck(L_4);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_6;
		L_6 = UriBuilder_get_Uri_mD0DF3F7DDF7C56CC99E2D29E06C959F80A4171A1(L_4, NULL);
		return L_6;
	}
}
// System.Boolean kcp2k.KcpTransport::ServerActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KcpTransport_ServerActive_mB5A6F0B6FAE17D5D2E7B250B72A62D5C793CA77E (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) 
{
	{
		// public override bool ServerActive() => server.IsActive();
		KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* L_0 = __this->___server_31;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean kcp2k.KcpServer::IsActive() */, L_0);
		return L_1;
	}
}
// System.Void kcp2k.KcpTransport::ServerStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_ServerStart_m71D36D4DC85E3943F44FA22C17D286EE3D130720 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) 
{
	{
		// public override void ServerStart() => server.Start(Port);
		KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* L_0 = __this->___server_31;
		uint16_t L_1 = __this->___Port_17;
		NullCheck(L_0);
		VirtualActionInvoker1< uint16_t >::Invoke(5 /* System.Void kcp2k.KcpServer::Start(System.UInt16) */, L_0, L_1);
		return;
	}
}
// System.Void kcp2k.KcpTransport::ServerSend(System.Int32,System.ArraySegment`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_ServerSend_m3FCD867C4C411AA66A06BCF669FFA5494EA05722 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, int32_t ___connectionId0, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment1, int32_t ___channelId2, const RuntimeMethod* method) 
{
	Action_3_tAEA3B0FC298F161EA8A0E82285BF499D36D8A584* G_B2_0 = NULL;
	Action_3_tAEA3B0FC298F161EA8A0E82285BF499D36D8A584* G_B1_0 = NULL;
	{
		// server.Send(connectionId, segment, ToKcpChannel(channelId));
		KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* L_0 = __this->___server_31;
		int32_t L_1 = ___connectionId0;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_2 = ___segment1;
		int32_t L_3 = ___channelId2;
		uint8_t L_4;
		L_4 = KcpTransport_ToKcpChannel_m8B43290E6C533642FE9C52B978DC703D36616EAC(L_3, NULL);
		NullCheck(L_0);
		KcpServer_Send_m08686F847CAE31C842035EE8028684E4FA2CD5F6(L_0, L_1, L_2, L_4, NULL);
		// OnServerDataSent?.Invoke(connectionId, segment, channelId);
		Action_3_tAEA3B0FC298F161EA8A0E82285BF499D36D8A584* L_5 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnServerDataSent_13;
		Action_3_tAEA3B0FC298F161EA8A0E82285BF499D36D8A584* L_6 = L_5;
		G_B1_0 = L_6;
		if (L_6)
		{
			G_B2_0 = L_6;
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_7 = ___connectionId0;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_8 = ___segment1;
		int32_t L_9 = ___channelId2;
		NullCheck(G_B2_0);
		Action_3_Invoke_mE96CDA1049F0D885C6E04E35F00C99EFB3418262_inline(G_B2_0, L_7, L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void kcp2k.KcpTransport::ServerDisconnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_ServerDisconnect_m1945B08B75F350111736B9240C85AA418C185F0F (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, int32_t ___connectionId0, const RuntimeMethod* method) 
{
	{
		// public override void ServerDisconnect(int connectionId) =>  server.Disconnect(connectionId);
		KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* L_0 = __this->___server_31;
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		KcpServer_Disconnect_mB885B1BF26149DF64FC0719A462AA9F96B2B3CF5(L_0, L_1, NULL);
		return;
	}
}
// System.String kcp2k.KcpTransport::ServerGetClientAddress(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KcpTransport_ServerGetClientAddress_m8ABDAF94CD92A44749B31D1B90985713C06E0BC2 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, int32_t ___connectionId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* V_0 = NULL;
	{
		// IPEndPoint endPoint = server.GetClientEndPoint(connectionId);
		KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* L_0 = __this->___server_31;
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_2;
		L_2 = KcpServer_GetClientEndPoint_m088997828E97B771B361923BA1544B4B22A29421(L_0, L_1, NULL);
		V_0 = L_2;
		// return endPoint != null ? endPoint.Address.ToString() : "";
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_3 = V_0;
		if (L_3)
		{
			goto IL_0016;
		}
	}
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0016:
	{
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_4 = V_0;
		NullCheck(L_4);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_5;
		L_5 = IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		return L_6;
	}
}
// System.Void kcp2k.KcpTransport::ServerStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_ServerStop_m00FCA0F0B7504D607ED2466030D2DC4F7255D4E0 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) 
{
	{
		// public override void ServerStop() => server.Stop();
		KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* L_0 = __this->___server_31;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(12 /* System.Void kcp2k.KcpServer::Stop() */, L_0);
		return;
	}
}
// System.Void kcp2k.KcpTransport::ServerEarlyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_ServerEarlyUpdate_m3AAD2825DA56007F2F20F8E89F71BA22CA91950B (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) 
{
	{
		// if (enabled) server.TickIncoming();
		bool L_0;
		L_0 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(__this, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (enabled) server.TickIncoming();
		KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* L_1 = __this->___server_31;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(9 /* System.Void kcp2k.KcpServer::TickIncoming() */, L_1);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void kcp2k.KcpTransport::ServerLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_ServerLateUpdate_mDFD87B714A383A202C7F2F6F6528E6DCBA03EF57 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) 
{
	{
		// public override void ServerLateUpdate() => server.TickOutgoing();
		KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* L_0 = __this->___server_31;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(10 /* System.Void kcp2k.KcpServer::TickOutgoing() */, L_0);
		return;
	}
}
// System.Void kcp2k.KcpTransport::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_Shutdown_m9FC92C3AB2DD1FA4EBA058F5FBEE625270981982 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) 
{
	{
		// public override void Shutdown() {}
		return;
	}
}
// System.Int32 kcp2k.KcpTransport::GetMaxPacketSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpTransport_GetMaxPacketSize_mAF8B70C92CFDDE424B060AC366C3A7D0C67878A5 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, int32_t ___channelId0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___channelId0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000a;
		}
	}
	{
		// return KcpPeer.UnreliableMaxMessageSize;
		return ((int32_t)1199);
	}

IL_000a:
	{
		// return KcpPeer.ReliableMaxMessageSize(ReceiveWindowSize);
		uint32_t L_1 = __this->___ReceiveWindowSize_25;
		int32_t L_2;
		L_2 = KcpPeer_ReliableMaxMessageSize_mEABA6BD88087F98D927F2D46951E84D6B743EA97(L_1, NULL);
		return L_2;
	}
}
// System.Int32 kcp2k.KcpTransport::GetBatchThreshold(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KcpTransport_GetBatchThreshold_m9DBFF8787681D36BC02CBB0E1E2A4FF8094C011A (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, int32_t ___channelId0, const RuntimeMethod* method) 
{
	{
		// KcpPeer.UnreliableMaxMessageSize;
		return ((int32_t)1199);
	}
}
// System.Int64 kcp2k.KcpTransport::GetAverageMaxSendRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t KcpTransport_GetAverageMaxSendRate_m7C8239606F8479704D12089CC08F0BCBE848A570 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mC967B0386C18A597A74E8E96FDFB2CB76A65C0DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Sum_TisKcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_m1B5C12A56406C80375D6DAC7EA90BB0C3AF31DEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetAverageMaxSendRateU3Eb__45_0_m2FCFF577DEB032275B2C15022CB20380591E7D53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA* G_B4_0 = NULL;
	ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* G_B4_1 = NULL;
	Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA* G_B3_0 = NULL;
	ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* G_B3_1 = NULL;
	{
		// server.connections.Count > 0
		//     ? server.connections.Values.Sum(conn => (long)conn.peer.MaxSendRate) / server.connections.Count
		//     : 0;
		KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* L_0 = __this->___server_31;
		NullCheck(L_0);
		Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* L_1 = L_0->___connections_8;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Dictionary_2_get_Count_mC967B0386C18A597A74E8E96FDFB2CB76A65C0DB(L_1, Dictionary_2_get_Count_mC967B0386C18A597A74E8E96FDFB2CB76A65C0DB_RuntimeMethod_var);
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		return ((int64_t)0);
	}

IL_0016:
	{
		KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* L_3 = __this->___server_31;
		NullCheck(L_3);
		Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* L_4 = L_3->___connections_8;
		NullCheck(L_4);
		ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* L_5;
		L_5 = Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C(L_4, Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var);
		Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA* L_6 = ((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9__45_0_2;
		Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA* L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = L_5;
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = L_5;
			goto IL_0045;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var);
		U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967* L_8 = ((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA* L_9 = (Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA*)il2cpp_codegen_object_new(Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_2__ctor_m0BFF066ABDCD0D6403AA7885C9B2EFDB8E16AC9E(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3CGetAverageMaxSendRateU3Eb__45_0_m2FCFF577DEB032275B2C15022CB20380591E7D53_RuntimeMethod_var), NULL);
		Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA* L_10 = L_9;
		((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9__45_0_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9__45_0_2), (void*)L_10);
		G_B4_0 = L_10;
		G_B4_1 = G_B3_1;
	}

IL_0045:
	{
		int64_t L_11;
		L_11 = Enumerable_Sum_TisKcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_m1B5C12A56406C80375D6DAC7EA90BB0C3AF31DEA(G_B4_1, G_B4_0, Enumerable_Sum_TisKcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_m1B5C12A56406C80375D6DAC7EA90BB0C3AF31DEA_RuntimeMethod_var);
		KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* L_12 = __this->___server_31;
		NullCheck(L_12);
		Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* L_13 = L_12->___connections_8;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_mC967B0386C18A597A74E8E96FDFB2CB76A65C0DB(L_13, Dictionary_2_get_Count_mC967B0386C18A597A74E8E96FDFB2CB76A65C0DB_RuntimeMethod_var);
		return ((int64_t)(L_11/((int64_t)L_14)));
	}
}
// System.Int64 kcp2k.KcpTransport::GetAverageMaxReceiveRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t KcpTransport_GetAverageMaxReceiveRate_m5B179AE3BB2F98F4AE81D63CF70F025BC0B1A54F (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mC967B0386C18A597A74E8E96FDFB2CB76A65C0DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Sum_TisKcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_m1B5C12A56406C80375D6DAC7EA90BB0C3AF31DEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetAverageMaxReceiveRateU3Eb__46_0_m6E916BFAAA82B5B9DBBC3CA2DC683A06FD5BA09A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA* G_B4_0 = NULL;
	ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* G_B4_1 = NULL;
	Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA* G_B3_0 = NULL;
	ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* G_B3_1 = NULL;
	{
		// server.connections.Count > 0
		//     ? server.connections.Values.Sum(conn => (long)conn.peer.MaxReceiveRate) / server.connections.Count
		//     : 0;
		KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* L_0 = __this->___server_31;
		NullCheck(L_0);
		Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* L_1 = L_0->___connections_8;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Dictionary_2_get_Count_mC967B0386C18A597A74E8E96FDFB2CB76A65C0DB(L_1, Dictionary_2_get_Count_mC967B0386C18A597A74E8E96FDFB2CB76A65C0DB_RuntimeMethod_var);
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		return ((int64_t)0);
	}

IL_0016:
	{
		KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* L_3 = __this->___server_31;
		NullCheck(L_3);
		Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* L_4 = L_3->___connections_8;
		NullCheck(L_4);
		ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* L_5;
		L_5 = Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C(L_4, Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var);
		Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA* L_6 = ((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9__46_0_3;
		Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA* L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = L_5;
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = L_5;
			goto IL_0045;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var);
		U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967* L_8 = ((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA* L_9 = (Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA*)il2cpp_codegen_object_new(Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_2__ctor_m0BFF066ABDCD0D6403AA7885C9B2EFDB8E16AC9E(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3CGetAverageMaxReceiveRateU3Eb__46_0_m6E916BFAAA82B5B9DBBC3CA2DC683A06FD5BA09A_RuntimeMethod_var), NULL);
		Func_2_t3C08D999362636E5026BAEE69D708939A1443FFA* L_10 = L_9;
		((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9__46_0_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9__46_0_3), (void*)L_10);
		G_B4_0 = L_10;
		G_B4_1 = G_B3_1;
	}

IL_0045:
	{
		int64_t L_11;
		L_11 = Enumerable_Sum_TisKcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_m1B5C12A56406C80375D6DAC7EA90BB0C3AF31DEA(G_B4_1, G_B4_0, Enumerable_Sum_TisKcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_m1B5C12A56406C80375D6DAC7EA90BB0C3AF31DEA_RuntimeMethod_var);
		KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* L_12 = __this->___server_31;
		NullCheck(L_12);
		Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* L_13 = L_12->___connections_8;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_mC967B0386C18A597A74E8E96FDFB2CB76A65C0DB(L_13, Dictionary_2_get_Count_mC967B0386C18A597A74E8E96FDFB2CB76A65C0DB_RuntimeMethod_var);
		return ((int64_t)(L_11/((int64_t)L_14)));
	}
}
// System.Int64 kcp2k.KcpTransport::GetTotalSendQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t KcpTransport_GetTotalSendQueue_m7973510A195622933D4521C54BA5857FE8F11329 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Sum_TisKcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_m5B0FAC7DED1A89C9A266D63C7BDA1D1D0147B1F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetTotalSendQueueU3Eb__47_0_mB3E0E2654D646FC03E433E9ACB62F8B812F46135_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* G_B2_0 = NULL;
	ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* G_B2_1 = NULL;
	Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* G_B1_0 = NULL;
	ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* G_B1_1 = NULL;
	{
		// server.connections.Values.Sum(conn => conn.peer.SendQueueCount);
		KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* L_0 = __this->___server_31;
		NullCheck(L_0);
		Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* L_1 = L_0->___connections_8;
		NullCheck(L_1);
		ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* L_2;
		L_2 = Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C(L_1, Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var);
		Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* L_3 = ((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9__47_0_4;
		Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var);
		U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967* L_5 = ((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* L_6 = (Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83*)il2cpp_codegen_object_new(Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_mA9F758309CD0504586E6582C75DD05C5075C2E34(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CGetTotalSendQueueU3Eb__47_0_mB3E0E2654D646FC03E433E9ACB62F8B812F46135_RuntimeMethod_var), NULL);
		Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* L_7 = L_6;
		((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9__47_0_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9__47_0_4), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002f:
	{
		int32_t L_8;
		L_8 = Enumerable_Sum_TisKcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_m5B0FAC7DED1A89C9A266D63C7BDA1D1D0147B1F7(G_B2_1, G_B2_0, Enumerable_Sum_TisKcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_m5B0FAC7DED1A89C9A266D63C7BDA1D1D0147B1F7_RuntimeMethod_var);
		return ((int64_t)L_8);
	}
}
// System.Int64 kcp2k.KcpTransport::GetTotalReceiveQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t KcpTransport_GetTotalReceiveQueue_m813DF3A127D346B6EDD611E360EDA7FE3FC166C7 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Sum_TisKcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_m5B0FAC7DED1A89C9A266D63C7BDA1D1D0147B1F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetTotalReceiveQueueU3Eb__48_0_m5C5BBC8E0CA73795CA586967A9B65D36BFECC218_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* G_B2_0 = NULL;
	ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* G_B2_1 = NULL;
	Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* G_B1_0 = NULL;
	ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* G_B1_1 = NULL;
	{
		// server.connections.Values.Sum(conn => conn.peer.ReceiveQueueCount);
		KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* L_0 = __this->___server_31;
		NullCheck(L_0);
		Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* L_1 = L_0->___connections_8;
		NullCheck(L_1);
		ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* L_2;
		L_2 = Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C(L_1, Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var);
		Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* L_3 = ((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9__48_0_5;
		Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var);
		U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967* L_5 = ((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* L_6 = (Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83*)il2cpp_codegen_object_new(Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_mA9F758309CD0504586E6582C75DD05C5075C2E34(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CGetTotalReceiveQueueU3Eb__48_0_m5C5BBC8E0CA73795CA586967A9B65D36BFECC218_RuntimeMethod_var), NULL);
		Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* L_7 = L_6;
		((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9__48_0_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9__48_0_5), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002f:
	{
		int32_t L_8;
		L_8 = Enumerable_Sum_TisKcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_m5B0FAC7DED1A89C9A266D63C7BDA1D1D0147B1F7(G_B2_1, G_B2_0, Enumerable_Sum_TisKcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_m5B0FAC7DED1A89C9A266D63C7BDA1D1D0147B1F7_RuntimeMethod_var);
		return ((int64_t)L_8);
	}
}
// System.Int64 kcp2k.KcpTransport::GetTotalSendBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t KcpTransport_GetTotalSendBuffer_mE6344FC7870D41F9D7F3D96B732A4A31A24B4511 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Sum_TisKcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_m5B0FAC7DED1A89C9A266D63C7BDA1D1D0147B1F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetTotalSendBufferU3Eb__49_0_m7801927C2D741F2C0DA99F9DB77A9C27820A7B5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* G_B2_0 = NULL;
	ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* G_B2_1 = NULL;
	Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* G_B1_0 = NULL;
	ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* G_B1_1 = NULL;
	{
		// server.connections.Values.Sum(conn => conn.peer.SendBufferCount);
		KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* L_0 = __this->___server_31;
		NullCheck(L_0);
		Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* L_1 = L_0->___connections_8;
		NullCheck(L_1);
		ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* L_2;
		L_2 = Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C(L_1, Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var);
		Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* L_3 = ((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9__49_0_6;
		Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var);
		U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967* L_5 = ((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* L_6 = (Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83*)il2cpp_codegen_object_new(Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_mA9F758309CD0504586E6582C75DD05C5075C2E34(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CGetTotalSendBufferU3Eb__49_0_m7801927C2D741F2C0DA99F9DB77A9C27820A7B5D_RuntimeMethod_var), NULL);
		Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* L_7 = L_6;
		((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9__49_0_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9__49_0_6), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002f:
	{
		int32_t L_8;
		L_8 = Enumerable_Sum_TisKcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_m5B0FAC7DED1A89C9A266D63C7BDA1D1D0147B1F7(G_B2_1, G_B2_0, Enumerable_Sum_TisKcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_m5B0FAC7DED1A89C9A266D63C7BDA1D1D0147B1F7_RuntimeMethod_var);
		return ((int64_t)L_8);
	}
}
// System.Int64 kcp2k.KcpTransport::GetTotalReceiveBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t KcpTransport_GetTotalReceiveBuffer_mB2D0A9C0E02E624AB7A26CDC7062809D1294422E (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Sum_TisKcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_m5B0FAC7DED1A89C9A266D63C7BDA1D1D0147B1F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetTotalReceiveBufferU3Eb__50_0_m755F4E1E118DC154444D602B474415D562307F26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* G_B2_0 = NULL;
	ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* G_B2_1 = NULL;
	Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* G_B1_0 = NULL;
	ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* G_B1_1 = NULL;
	{
		// server.connections.Values.Sum(conn => conn.peer.ReceiveBufferCount);
		KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* L_0 = __this->___server_31;
		NullCheck(L_0);
		Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* L_1 = L_0->___connections_8;
		NullCheck(L_1);
		ValueCollection_t13214D30252F6C14E275BE2AA777DA7412B1ACD8* L_2;
		L_2 = Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C(L_1, Dictionary_2_get_Values_mFE527A6B2CD7BE8C993051E6DF10EFA27D4CD65C_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var);
		Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* L_3 = ((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9__50_0_7;
		Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var);
		U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967* L_5 = ((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* L_6 = (Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83*)il2cpp_codegen_object_new(Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_mA9F758309CD0504586E6582C75DD05C5075C2E34(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CGetTotalReceiveBufferU3Eb__50_0_m755F4E1E118DC154444D602B474415D562307F26_RuntimeMethod_var), NULL);
		Func_2_t440E7DBD17787A21CBC5267EABEBBE7A84C06C83* L_7 = L_6;
		((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9__50_0_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9__50_0_7), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002f:
	{
		int32_t L_8;
		L_8 = Enumerable_Sum_TisKcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_m5B0FAC7DED1A89C9A266D63C7BDA1D1D0147B1F7(G_B2_1, G_B2_0, Enumerable_Sum_TisKcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D_m5B0FAC7DED1A89C9A266D63C7BDA1D1D0147B1F7_RuntimeMethod_var);
		return ((int64_t)L_8);
	}
}
// System.String kcp2k.KcpTransport::PrettyBytes(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KcpTransport_PrettyBytes_m241BF81554E230E88FA9CBEC86D87DBE4DE2FC06 (int64_t ___bytes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5485DF65A5AD70B0B4426EAB6D393C6BD12E0B0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83A97BB66E419B3BF3C187FE22E82A40D3637270);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD73CF4BB8A380CC220E26F7A8E043F82AE17D5ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C31F428762090166BA3FEB4CBED42AEE59882B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bytes < 1024)
		int64_t L_0 = ___bytes0;
		if ((((int64_t)L_0) >= ((int64_t)((int64_t)((int32_t)1024)))))
		{
			goto IL_001a;
		}
	}
	{
		// return $"{bytes} B";
		int64_t L_1 = ___bytes0;
		int64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD73CF4BB8A380CC220E26F7A8E043F82AE17D5ED, L_3, NULL);
		return L_4;
	}

IL_001a:
	{
		// else if (bytes < 1024L * 1024L)
		int64_t L_5 = ___bytes0;
		if ((((int64_t)L_5) >= ((int64_t)((int64_t)((int32_t)1048576)))))
		{
			goto IL_003b;
		}
	}
	{
		// return $"{(bytes / 1024f):F2} KB";
		int64_t L_6 = ___bytes0;
		float L_7 = ((float)(((float)L_6)/(1024.0f)));
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral83A97BB66E419B3BF3C187FE22E82A40D3637270, L_8, NULL);
		return L_9;
	}

IL_003b:
	{
		// else if (bytes < 1024 * 1024L * 1024L)
		int64_t L_10 = ___bytes0;
		if ((((int64_t)L_10) >= ((int64_t)((int64_t)((int32_t)1073741824)))))
		{
			goto IL_005c;
		}
	}
	{
		// return $"{(bytes / (1024f * 1024f)):F2} MB";
		int64_t L_11 = ___bytes0;
		float L_12 = ((float)(((float)L_11)/(1048576.0f)));
		RuntimeObject* L_13 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralE5C31F428762090166BA3FEB4CBED42AEE59882B, L_13, NULL);
		return L_14;
	}

IL_005c:
	{
		// return $"{(bytes / (1024f * 1024f * 1024f)):F2} GB";
		int64_t L_15 = ___bytes0;
		float L_16 = ((float)(((float)L_15)/(1.07374182E+09f)));
		RuntimeObject* L_17 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18;
		L_18 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral5485DF65A5AD70B0B4426EAB6D393C6BD12E0B0F, L_17, NULL);
		return L_18;
	}
}
// System.Void kcp2k.KcpTransport::OnLogStatistics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_OnLogStatistics_m5D49236A5931F55BE3BF85DFF7B6C61C848A7C70 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mC967B0386C18A597A74E8E96FDFB2CB76A65C0DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTime_tCD4F30747CA03A3546CF22603ADA94666CBBF375_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral052F608B101811F11367BF8AC7C12EF779D80EE8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A6F74723145E7D67CC81ECE6223A9E74B7D9AA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral211B7E218A00AD1BD2CBCB2D5B179B3054BC5614);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BB4EA9C3831AFF284706373CC4FCDF2A7F29423);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3972FB35247EE348E7728EFA511D8799E48D45B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40C08A491396526C235F8AA06FB5795ABCB40578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47EC2319FA623A7296AA5C92ACE019E963C06300);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F4683DDD2BE1706F0DC1753BF8876AC46CF6C59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral710C87067D91A1562C09A9D3D67C64CAF7331613);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral984177DAAF44D2BB62649414C4001D67DB5AA510);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF15FEDCB3824C03B5F21AA79536BCFDF0CD6FF44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF463EA49BDCEC43EC4BAD1CF8AD65A431B473A9D);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// if (ServerActive())
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(11 /* System.Boolean Mirror.Transport::ServerActive() */, __this);
		if (!L_0)
		{
			goto IL_00ec;
		}
	}
	{
		// string log = "kcp SERVER @ time: " + NetworkTime.localTime + "\n";
		il2cpp_codegen_runtime_class_init_inline(NetworkTime_tCD4F30747CA03A3546CF22603ADA94666CBBF375_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = NetworkTime_get_localTime_mBFC19FC1D8BB89B82A91985B92F97671ABAF2502_inline(NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_0), NULL);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral984177DAAF44D2BB62649414C4001D67DB5AA510, L_2, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		// log += $"  connections: {server.connections.Count}\n";
		KcpServer_tE26814B163D77A83F9DE98DE794A92C1C34475F6* L_4 = __this->___server_31;
		NullCheck(L_4);
		Dictionary_2_tB432E5BA1E42262AFC2C225CA2A1D44B747C056F* L_5 = L_4->___connections_8;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Dictionary_2_get_Count_mC967B0386C18A597A74E8E96FDFB2CB76A65C0DB(L_5, Dictionary_2_get_Count_mC967B0386C18A597A74E8E96FDFB2CB76A65C0DB_RuntimeMethod_var);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral47EC2319FA623A7296AA5C92ACE019E963C06300, L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, L_9, NULL);
		// log += $"  MaxSendRate (avg): {PrettyBytes(GetAverageMaxSendRate())}/s\n";
		int64_t L_11;
		L_11 = KcpTransport_GetAverageMaxSendRate_m7C8239606F8479704D12089CC08F0BCBE848A570(__this, NULL);
		String_t* L_12;
		L_12 = KcpTransport_PrettyBytes_m241BF81554E230E88FA9CBEC86D87DBE4DE2FC06(L_11, NULL);
		String_t* L_13;
		L_13 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_10, _stringLiteral211B7E218A00AD1BD2CBCB2D5B179B3054BC5614, L_12, _stringLiteralF15FEDCB3824C03B5F21AA79536BCFDF0CD6FF44, NULL);
		// log += $"  MaxRecvRate (avg): {PrettyBytes(GetAverageMaxReceiveRate())}/s\n";
		int64_t L_14;
		L_14 = KcpTransport_GetAverageMaxReceiveRate_m5B179AE3BB2F98F4AE81D63CF70F025BC0B1A54F(__this, NULL);
		String_t* L_15;
		L_15 = KcpTransport_PrettyBytes_m241BF81554E230E88FA9CBEC86D87DBE4DE2FC06(L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_13, _stringLiteral40C08A491396526C235F8AA06FB5795ABCB40578, L_15, _stringLiteralF15FEDCB3824C03B5F21AA79536BCFDF0CD6FF44, NULL);
		// log += $"  SendQueue: {GetTotalSendQueue()}\n";
		int64_t L_17;
		L_17 = KcpTransport_GetTotalSendQueue_m7973510A195622933D4521C54BA5857FE8F11329(__this, NULL);
		int64_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_18);
		String_t* L_20;
		L_20 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral052F608B101811F11367BF8AC7C12EF779D80EE8, L_19, NULL);
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_16, L_20, NULL);
		// log += $"  ReceiveQueue: {GetTotalReceiveQueue()}\n";
		int64_t L_22;
		L_22 = KcpTransport_GetTotalReceiveQueue_m813DF3A127D346B6EDD611E360EDA7FE3FC166C7(__this, NULL);
		int64_t L_23 = L_22;
		RuntimeObject* L_24 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_23);
		String_t* L_25;
		L_25 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral2BB4EA9C3831AFF284706373CC4FCDF2A7F29423, L_24, NULL);
		String_t* L_26;
		L_26 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_21, L_25, NULL);
		// log += $"  SendBuffer: {GetTotalSendBuffer()}\n";
		int64_t L_27;
		L_27 = KcpTransport_GetTotalSendBuffer_mE6344FC7870D41F9D7F3D96B732A4A31A24B4511(__this, NULL);
		int64_t L_28 = L_27;
		RuntimeObject* L_29 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_28);
		String_t* L_30;
		L_30 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral1A6F74723145E7D67CC81ECE6223A9E74B7D9AA6, L_29, NULL);
		String_t* L_31;
		L_31 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_26, L_30, NULL);
		// log += $"  ReceiveBuffer: {GetTotalReceiveBuffer()}\n\n";
		int64_t L_32;
		L_32 = KcpTransport_GetTotalReceiveBuffer_mB2D0A9C0E02E624AB7A26CDC7062809D1294422E(__this, NULL);
		int64_t L_33 = L_32;
		RuntimeObject* L_34 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_33);
		String_t* L_35;
		L_35 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral4F4683DDD2BE1706F0DC1753BF8876AC46CF6C59, L_34, NULL);
		String_t* L_36;
		L_36 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_31, L_35, NULL);
		// Debug.Log(log);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_36, NULL);
	}

IL_00ec:
	{
		// if (ClientConnected())
		bool L_37;
		L_37 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean Mirror.Transport::ClientConnected() */, __this);
		if (!L_37)
		{
			goto IL_01f2;
		}
	}
	{
		// string log = "kcp CLIENT @ time: " + NetworkTime.localTime + "\n";
		il2cpp_codegen_runtime_class_init_inline(NetworkTime_tCD4F30747CA03A3546CF22603ADA94666CBBF375_il2cpp_TypeInfo_var);
		double L_38;
		L_38 = NetworkTime_get_localTime_mBFC19FC1D8BB89B82A91985B92F97671ABAF2502_inline(NULL);
		V_0 = L_38;
		String_t* L_39;
		L_39 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_0), NULL);
		String_t* L_40;
		L_40 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral3972FB35247EE348E7728EFA511D8799E48D45B6, L_39, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		// log += $"  MaxSendRate: {PrettyBytes(client.peer.MaxSendRate)}/s\n";
		KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* L_41 = __this->___client_32;
		NullCheck(L_41);
		KcpPeer_t9877F9EA5CC2640D1A178EF2CE3097EB7E4309A2* L_42 = L_41->___peer_0;
		NullCheck(L_42);
		uint32_t L_43;
		L_43 = KcpPeer_get_MaxSendRate_mAEFDC4AB7FE17F07CAC4456580EEC1A7840DE82C(L_42, NULL);
		String_t* L_44;
		L_44 = KcpTransport_PrettyBytes_m241BF81554E230E88FA9CBEC86D87DBE4DE2FC06(((int64_t)(uint64_t)L_43), NULL);
		String_t* L_45;
		L_45 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_40, _stringLiteralF463EA49BDCEC43EC4BAD1CF8AD65A431B473A9D, L_44, _stringLiteralF15FEDCB3824C03B5F21AA79536BCFDF0CD6FF44, NULL);
		// log += $"  MaxRecvRate: {PrettyBytes(client.peer.MaxReceiveRate)}/s\n";
		KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* L_46 = __this->___client_32;
		NullCheck(L_46);
		KcpPeer_t9877F9EA5CC2640D1A178EF2CE3097EB7E4309A2* L_47 = L_46->___peer_0;
		NullCheck(L_47);
		uint32_t L_48;
		L_48 = KcpPeer_get_MaxReceiveRate_m2D53899CB8C77D6349DCC7467C541F5BC31D6CD1(L_47, NULL);
		String_t* L_49;
		L_49 = KcpTransport_PrettyBytes_m241BF81554E230E88FA9CBEC86D87DBE4DE2FC06(((int64_t)(uint64_t)L_48), NULL);
		String_t* L_50;
		L_50 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_45, _stringLiteral710C87067D91A1562C09A9D3D67C64CAF7331613, L_49, _stringLiteralF15FEDCB3824C03B5F21AA79536BCFDF0CD6FF44, NULL);
		// log += $"  SendQueue: {client.peer.SendQueueCount}\n";
		KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* L_51 = __this->___client_32;
		NullCheck(L_51);
		KcpPeer_t9877F9EA5CC2640D1A178EF2CE3097EB7E4309A2* L_52 = L_51->___peer_0;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = KcpPeer_get_SendQueueCount_m7C518B0956A45185C3583812CF72883345EA1EE2(L_52, NULL);
		int32_t L_54 = L_53;
		RuntimeObject* L_55 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_54);
		String_t* L_56;
		L_56 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral052F608B101811F11367BF8AC7C12EF779D80EE8, L_55, NULL);
		String_t* L_57;
		L_57 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_50, L_56, NULL);
		// log += $"  ReceiveQueue: {client.peer.ReceiveQueueCount}\n";
		KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* L_58 = __this->___client_32;
		NullCheck(L_58);
		KcpPeer_t9877F9EA5CC2640D1A178EF2CE3097EB7E4309A2* L_59 = L_58->___peer_0;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = KcpPeer_get_ReceiveQueueCount_m995862277820955D557F6BAABCF1D788AC1E11DD(L_59, NULL);
		int32_t L_61 = L_60;
		RuntimeObject* L_62 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_61);
		String_t* L_63;
		L_63 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral2BB4EA9C3831AFF284706373CC4FCDF2A7F29423, L_62, NULL);
		String_t* L_64;
		L_64 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_57, L_63, NULL);
		// log += $"  SendBuffer: {client.peer.SendBufferCount}\n";
		KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* L_65 = __this->___client_32;
		NullCheck(L_65);
		KcpPeer_t9877F9EA5CC2640D1A178EF2CE3097EB7E4309A2* L_66 = L_65->___peer_0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = KcpPeer_get_SendBufferCount_mA0D7FDF8FB687FE8C4FC7B40D9DFA134B35E60CB(L_66, NULL);
		int32_t L_68 = L_67;
		RuntimeObject* L_69 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_68);
		String_t* L_70;
		L_70 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral1A6F74723145E7D67CC81ECE6223A9E74B7D9AA6, L_69, NULL);
		String_t* L_71;
		L_71 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_64, L_70, NULL);
		// log += $"  ReceiveBuffer: {client.peer.ReceiveBufferCount}\n\n";
		KcpClient_t26F877ED9501BB62952A8FC7D5C294EF4431B5A5* L_72 = __this->___client_32;
		NullCheck(L_72);
		KcpPeer_t9877F9EA5CC2640D1A178EF2CE3097EB7E4309A2* L_73 = L_72->___peer_0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = KcpPeer_get_ReceiveBufferCount_m33B1FC53206C9E2472D15644275927F5E366424B(L_73, NULL);
		int32_t L_75 = L_74;
		RuntimeObject* L_76 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_75);
		String_t* L_77;
		L_77 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral4F4683DDD2BE1706F0DC1753BF8876AC46CF6C59, L_76, NULL);
		String_t* L_78;
		L_78 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_71, L_77, NULL);
		// Debug.Log(log);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_78, NULL);
	}

IL_01f2:
	{
		// }
		return;
	}
}
// System.String kcp2k.KcpTransport::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KcpTransport_ToString_m381ACD39E34EE1C771B661C5A7807909DE6B595B (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2E7C16867BFF673EBDDC2E5D919300C18C3FE05);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => "KCP";
		return _stringLiteralB2E7C16867BFF673EBDDC2E5D919300C18C3FE05;
	}
}
// System.Void kcp2k.KcpTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport__ctor_m6BD449245AB591016C46856F440C6F830854908C (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) 
{
	{
		// public ushort Port = 7777;
		__this->___Port_17 = (uint16_t)((int32_t)7777);
		// public bool DualMode = true;
		__this->___DualMode_18 = (bool)1;
		// public bool NoDelay = true;
		__this->___NoDelay_19 = (bool)1;
		// public uint Interval = 10;
		__this->___Interval_20 = ((int32_t)10);
		// public int Timeout = 10000;
		__this->___Timeout_21 = ((int32_t)10000);
		// public int FastResend = 2;
		__this->___FastResend_22 = 2;
		// public uint SendWindowSize = 4096; //Kcp.WND_SND; 32 by default. Mirror sends a lot, so we need a lot more.
		__this->___SendWindowSize_24 = ((int32_t)4096);
		// public uint ReceiveWindowSize = 4096; //Kcp.WND_RCV; 128 by default. Mirror sends a lot, so we need a lot more.
		__this->___ReceiveWindowSize_25 = ((int32_t)4096);
		// public uint MaxRetransmit = Kcp.DEADLINK * 2; // default prematurely disconnects a lot of people (#3022). use 2x.
		__this->___MaxRetransmit_26 = ((int32_t)40);
		// public bool MaximizeSocketBuffers = true;
		__this->___MaximizeSocketBuffers_27 = (bool)1;
		Transport__ctor_m951E466BF3C4D441259ACE340863D31DC828B3AF(__this, NULL);
		return;
	}
}
// System.Void kcp2k.KcpTransport::<Awake>b__23_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_U3CAwakeU3Eb__23_1_m7E2D8162F7DA519AB1E6D66689948EE3D0564057 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) 
{
	{
		// () => OnClientConnected.Invoke(),
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnClientConnected_6;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		return;
	}
}
// System.Void kcp2k.KcpTransport::<Awake>b__23_2(System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_U3CAwakeU3Eb__23_2_mABB6265F7E7764A4527F3BB3C9AFB073C199A27B (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___message0, uint8_t ___channel1, const RuntimeMethod* method) 
{
	{
		// (message, channel) => OnClientDataReceived.Invoke(message, FromKcpChannel(channel)),
		Action_2_t2E07896229FB84F193E1EFE789DDB074E447FCD2* L_0 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnClientDataReceived_7;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = ___message0;
		uint8_t L_2 = ___channel1;
		int32_t L_3;
		L_3 = KcpTransport_FromKcpChannel_m8408EE5FD730D2F7336895000E93F3A13DE44598(L_2, NULL);
		NullCheck(L_0);
		Action_2_Invoke_mD9B56B532E7EB3082C89484B6BEA93F5E281B185_inline(L_0, L_1, L_3, NULL);
		return;
	}
}
// System.Void kcp2k.KcpTransport::<Awake>b__23_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_U3CAwakeU3Eb__23_3_m793D72C5F205FFAAB7279BFF17FFF8E90060B980 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, const RuntimeMethod* method) 
{
	{
		// () => OnClientDisconnected.Invoke(),
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnClientDisconnected_10;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		return;
	}
}
// System.Void kcp2k.KcpTransport::<Awake>b__23_4(kcp2k.ErrorCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_U3CAwakeU3Eb__23_4_m01A20A29245CD2E0F1CED676C2AE29E2A7449A25 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, uint8_t ___error0, String_t* ___reason1, const RuntimeMethod* method) 
{
	{
		// (error, reason) => OnClientError.Invoke(ToTransportError(error), reason)
		Action_2_t1DB0E50B6F58F0A9FBE73D2080C1F2ABEB453625* L_0 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnClientError_9;
		uint8_t L_1 = ___error0;
		uint8_t L_2;
		L_2 = KcpTransport_ToTransportError_m5683BF645DB585008A659602F46A1B2D412B164B(L_1, NULL);
		String_t* L_3 = ___reason1;
		NullCheck(L_0);
		Action_2_Invoke_m21EF67DE6B2369593898C71751BFE6DBD6212AE4_inline(L_0, L_2, L_3, NULL);
		return;
	}
}
// System.Void kcp2k.KcpTransport::<Awake>b__23_5(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_U3CAwakeU3Eb__23_5_m34364203AE4F37DC01E77A15ED7E3D68106707C5 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, int32_t ___connectionId0, const RuntimeMethod* method) 
{
	{
		// (connectionId) => OnServerConnected.Invoke(connectionId),
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnServerConnected_11;
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(L_0, L_1, NULL);
		return;
	}
}
// System.Void kcp2k.KcpTransport::<Awake>b__23_6(System.Int32,System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_U3CAwakeU3Eb__23_6_m1908BC5F872B473BF7F3A9B14F794AB6EF1C6743 (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, int32_t ___connectionId0, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___message1, uint8_t ___channel2, const RuntimeMethod* method) 
{
	{
		// (connectionId, message, channel) => OnServerDataReceived.Invoke(connectionId, message, FromKcpChannel(channel)),
		Action_3_tAEA3B0FC298F161EA8A0E82285BF499D36D8A584* L_0 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnServerDataReceived_12;
		int32_t L_1 = ___connectionId0;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_2 = ___message1;
		uint8_t L_3 = ___channel2;
		int32_t L_4;
		L_4 = KcpTransport_FromKcpChannel_m8408EE5FD730D2F7336895000E93F3A13DE44598(L_3, NULL);
		NullCheck(L_0);
		Action_3_Invoke_mE96CDA1049F0D885C6E04E35F00C99EFB3418262_inline(L_0, L_1, L_2, L_4, NULL);
		return;
	}
}
// System.Void kcp2k.KcpTransport::<Awake>b__23_7(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_U3CAwakeU3Eb__23_7_m920319D5344E4C8E6B540F2D0CD11B5728EFD7DE (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, int32_t ___connectionId0, const RuntimeMethod* method) 
{
	{
		// (connectionId) => OnServerDisconnected.Invoke(connectionId),
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnServerDisconnected_15;
		int32_t L_1 = ___connectionId0;
		NullCheck(L_0);
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(L_0, L_1, NULL);
		return;
	}
}
// System.Void kcp2k.KcpTransport::<Awake>b__23_8(System.Int32,kcp2k.ErrorCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KcpTransport_U3CAwakeU3Eb__23_8_m1E3B9720779B007D816A2D945DE541BE6B5216FA (KcpTransport_t7F1A671A92E026EE52302B0EB60FA7B30A25D074* __this, int32_t ___connectionId0, uint8_t ___error1, String_t* ___reason2, const RuntimeMethod* method) 
{
	{
		// (connectionId, error, reason) => OnServerError.Invoke(connectionId, ToTransportError(error), reason),
		Action_3_t48732FCF57FB02B790A1EC558785687383D9D199* L_0 = ((Transport_t8E1D3887BA35250F79E4200BB8008A5C2D4E7E07*)__this)->___OnServerError_14;
		int32_t L_1 = ___connectionId0;
		uint8_t L_2 = ___error1;
		uint8_t L_3;
		L_3 = KcpTransport_ToTransportError_m5683BF645DB585008A659602F46A1B2D412B164B(L_2, NULL);
		String_t* L_4 = ___reason2;
		NullCheck(L_0);
		Action_3_Invoke_mC49776F686EA605ABDD64E05BA13CFA7DB078F51_inline(L_0, L_1, L_3, L_4, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void kcp2k.KcpTransport/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m84AF27A5E7A0BC45BF7C51ADE12A178AEE2E75C9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967* L_0 = (U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967*)il2cpp_codegen_object_new(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m3E33B84FDCB076A2C03E3FA76121641954AC2CE6(L_0, NULL);
		((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void kcp2k.KcpTransport/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3E33B84FDCB076A2C03E3FA76121641954AC2CE6 (U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void kcp2k.KcpTransport/<>c::<Awake>b__23_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CAwakeU3Eb__23_0_mF5014DA8A385E8A053CA9450002460EC83E6AE99 (U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967* __this, String_t* ____0, const RuntimeMethod* method) 
{
	{
		// Log.Info = _ => {};
		return;
	}
}
// System.Int64 kcp2k.KcpTransport/<>c::<GetAverageMaxSendRate>b__45_0(kcp2k.KcpServerConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t U3CU3Ec_U3CGetAverageMaxSendRateU3Eb__45_0_m2FCFF577DEB032275B2C15022CB20380591E7D53 (U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967* __this, KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D ___conn0, const RuntimeMethod* method) 
{
	{
		// ? server.connections.Values.Sum(conn => (long)conn.peer.MaxSendRate) / server.connections.Count
		KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D L_0 = ___conn0;
		KcpPeer_t9877F9EA5CC2640D1A178EF2CE3097EB7E4309A2* L_1 = L_0.___peer_0;
		NullCheck(L_1);
		uint32_t L_2;
		L_2 = KcpPeer_get_MaxSendRate_mAEFDC4AB7FE17F07CAC4456580EEC1A7840DE82C(L_1, NULL);
		return ((int64_t)(uint64_t)L_2);
	}
}
// System.Int64 kcp2k.KcpTransport/<>c::<GetAverageMaxReceiveRate>b__46_0(kcp2k.KcpServerConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t U3CU3Ec_U3CGetAverageMaxReceiveRateU3Eb__46_0_m6E916BFAAA82B5B9DBBC3CA2DC683A06FD5BA09A (U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967* __this, KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D ___conn0, const RuntimeMethod* method) 
{
	{
		// ? server.connections.Values.Sum(conn => (long)conn.peer.MaxReceiveRate) / server.connections.Count
		KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D L_0 = ___conn0;
		KcpPeer_t9877F9EA5CC2640D1A178EF2CE3097EB7E4309A2* L_1 = L_0.___peer_0;
		NullCheck(L_1);
		uint32_t L_2;
		L_2 = KcpPeer_get_MaxReceiveRate_m2D53899CB8C77D6349DCC7467C541F5BC31D6CD1(L_1, NULL);
		return ((int64_t)(uint64_t)L_2);
	}
}
// System.Int32 kcp2k.KcpTransport/<>c::<GetTotalSendQueue>b__47_0(kcp2k.KcpServerConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetTotalSendQueueU3Eb__47_0_mB3E0E2654D646FC03E433E9ACB62F8B812F46135 (U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967* __this, KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D ___conn0, const RuntimeMethod* method) 
{
	{
		// server.connections.Values.Sum(conn => conn.peer.SendQueueCount);
		KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D L_0 = ___conn0;
		KcpPeer_t9877F9EA5CC2640D1A178EF2CE3097EB7E4309A2* L_1 = L_0.___peer_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = KcpPeer_get_SendQueueCount_m7C518B0956A45185C3583812CF72883345EA1EE2(L_1, NULL);
		return L_2;
	}
}
// System.Int32 kcp2k.KcpTransport/<>c::<GetTotalReceiveQueue>b__48_0(kcp2k.KcpServerConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetTotalReceiveQueueU3Eb__48_0_m5C5BBC8E0CA73795CA586967A9B65D36BFECC218 (U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967* __this, KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D ___conn0, const RuntimeMethod* method) 
{
	{
		// server.connections.Values.Sum(conn => conn.peer.ReceiveQueueCount);
		KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D L_0 = ___conn0;
		KcpPeer_t9877F9EA5CC2640D1A178EF2CE3097EB7E4309A2* L_1 = L_0.___peer_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = KcpPeer_get_ReceiveQueueCount_m995862277820955D557F6BAABCF1D788AC1E11DD(L_1, NULL);
		return L_2;
	}
}
// System.Int32 kcp2k.KcpTransport/<>c::<GetTotalSendBuffer>b__49_0(kcp2k.KcpServerConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetTotalSendBufferU3Eb__49_0_m7801927C2D741F2C0DA99F9DB77A9C27820A7B5D (U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967* __this, KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D ___conn0, const RuntimeMethod* method) 
{
	{
		// server.connections.Values.Sum(conn => conn.peer.SendBufferCount);
		KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D L_0 = ___conn0;
		KcpPeer_t9877F9EA5CC2640D1A178EF2CE3097EB7E4309A2* L_1 = L_0.___peer_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = KcpPeer_get_SendBufferCount_mA0D7FDF8FB687FE8C4FC7B40D9DFA134B35E60CB(L_1, NULL);
		return L_2;
	}
}
// System.Int32 kcp2k.KcpTransport/<>c::<GetTotalReceiveBuffer>b__50_0(kcp2k.KcpServerConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetTotalReceiveBufferU3Eb__50_0_m755F4E1E118DC154444D602B474415D562307F26 (U3CU3Ec_tD3A05E4D5E288F990D2D3BC5C12EF3F24A990967* __this, KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D ___conn0, const RuntimeMethod* method) 
{
	{
		// server.connections.Values.Sum(conn => conn.peer.ReceiveBufferCount);
		KcpServerConnection_tE1643B2B5EE383056B6893314CFF07666B3D646D L_0 = ___conn0;
		KcpPeer_t9877F9EA5CC2640D1A178EF2CE3097EB7E4309A2* L_1 = L_0.___peer_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = KcpPeer_get_ReceiveBufferCount_m33B1FC53206C9E2472D15644275927F5E366424B(L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) 
{
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = __this->____address_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NetworkTime_get_localTime_mBFC19FC1D8BB89B82A91985B92F97671ABAF2502_inline (const RuntimeMethod* method) 
{
	{
		// get => Time.timeAsDouble;
		double L_0;
		L_0 = Time_get_timeAsDouble_mCF1AEB0A4C786299443150DBEBDD75F7724D6800(NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)__this->____array_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____offset_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m9B10F34069191B7158D083249E97F542E88F5A62_gshared_inline (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* __this, QueuedMessage_t0465622402518531C942E619F10090228F292C33 ___item0, const RuntimeMethod* method) 
{
	QueuedMessageU5BU5D_t0B97FD904D679975CF316949854F85D33DED345B* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		QueuedMessageU5BU5D_t0B97FD904D679975CF316949854F85D33DED345B* L_1 = (QueuedMessageU5BU5D_t0B97FD904D679975CF316949854F85D33DED345B*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		QueuedMessageU5BU5D_t0B97FD904D679975CF316949854F85D33DED345B* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		QueuedMessageU5BU5D_t0B97FD904D679975CF316949854F85D33DED345B* L_6 = V_0;
		int32_t L_7 = V_1;
		QueuedMessage_t0465622402518531C942E619F10090228F292C33 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (QueuedMessage_t0465622402518531C942E619F10090228F292C33)L_8);
		return;
	}

IL_0034:
	{
		QueuedMessage_t0465622402518531C942E619F10090228F292C33 L_9 = ___item0;
		((  void (*) (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7*, QueuedMessage_t0465622402518531C942E619F10090228F292C33, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m97F8693A77EFF15FB5ABFC98D3851B2E38EFA81C_gshared_inline (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mB85947D8DDC5924E037A24A5CB807CA1D2C7BCDA_gshared_inline (List_1_tCE352F5FA705304380D0469B6045D5FA18E8D4B7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		QueuedMessageU5BU5D_t0B97FD904D679975CF316949854F85D33DED345B* L_3 = (QueuedMessageU5BU5D_t0B97FD904D679975CF316949854F85D33DED345B*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mD9B56B532E7EB3082C89484B6BEA93F5E281B185_gshared_inline (Action_2_t2E07896229FB84F193E1EFE789DDB074E447FCD2* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___arg10, int32_t ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_mE96CDA1049F0D885C6E04E35F00C99EFB3418262_gshared_inline (Action_3_tAEA3B0FC298F161EA8A0E82285BF499D36D8A584* __this, int32_t ___arg10, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___arg21, int32_t ___arg32, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mADA9AC43FB6FD8EC3EEDF8200782C490A1F7C834_gshared_inline (Action_2_tBCC61F27E6A6723F5DEAC0BC701267FC80237CFE* __this, uint8_t ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, uint8_t, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m4AD71431485D0650D2983AA721404AD8005D9257_gshared_inline (Action_3_t948B3D0BD3945F4E479750B05235856B0ED54A52* __this, int32_t ___arg10, uint8_t ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, uint8_t, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
