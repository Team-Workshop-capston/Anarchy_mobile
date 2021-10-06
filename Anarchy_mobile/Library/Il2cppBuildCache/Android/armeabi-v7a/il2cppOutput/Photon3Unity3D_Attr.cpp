#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Reflection.AssemblyCompanyAttribute
struct AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4;
// System.Reflection.AssemblyConfigurationAttribute
struct AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C;
// System.Reflection.AssemblyCopyrightAttribute
struct AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC;
// System.Reflection.AssemblyDescriptionAttribute
struct AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3;
// System.Reflection.AssemblyFileVersionAttribute
struct AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F;
// System.Reflection.AssemblyInformationalVersionAttribute
struct AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0;
// System.Reflection.AssemblyProductAttribute
struct AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA;
// System.Reflection.AssemblyTitleAttribute
struct AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.Diagnostics.DebuggerBrowsableAttribute
struct DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53;
// System.Reflection.DefaultMemberAttribute
struct DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5;
// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC;
// System.FlagsAttribute
struct FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36;
// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671;
// ExitGames.Client.Photon.PreserveAttribute
struct PreserveAttribute_tCC0AA2F199BC71EE6BEE5F51262C0D71CFFAB9F2;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// System.String
struct String_t;
// System.Runtime.Versioning.TargetFrameworkAttribute
struct TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Reflection.AssemblyCompanyAttribute
struct AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyCompanyAttribute::m_company
	String_t* ___m_company_0;

public:
	inline static int32_t get_offset_of_m_company_0() { return static_cast<int32_t>(offsetof(AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4, ___m_company_0)); }
	inline String_t* get_m_company_0() const { return ___m_company_0; }
	inline String_t** get_address_of_m_company_0() { return &___m_company_0; }
	inline void set_m_company_0(String_t* value)
	{
		___m_company_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_company_0), (void*)value);
	}
};


// System.Reflection.AssemblyConfigurationAttribute
struct AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyConfigurationAttribute::m_configuration
	String_t* ___m_configuration_0;

public:
	inline static int32_t get_offset_of_m_configuration_0() { return static_cast<int32_t>(offsetof(AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C, ___m_configuration_0)); }
	inline String_t* get_m_configuration_0() const { return ___m_configuration_0; }
	inline String_t** get_address_of_m_configuration_0() { return &___m_configuration_0; }
	inline void set_m_configuration_0(String_t* value)
	{
		___m_configuration_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_configuration_0), (void*)value);
	}
};


// System.Reflection.AssemblyCopyrightAttribute
struct AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyCopyrightAttribute::m_copyright
	String_t* ___m_copyright_0;

public:
	inline static int32_t get_offset_of_m_copyright_0() { return static_cast<int32_t>(offsetof(AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC, ___m_copyright_0)); }
	inline String_t* get_m_copyright_0() const { return ___m_copyright_0; }
	inline String_t** get_address_of_m_copyright_0() { return &___m_copyright_0; }
	inline void set_m_copyright_0(String_t* value)
	{
		___m_copyright_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_copyright_0), (void*)value);
	}
};


// System.Reflection.AssemblyDescriptionAttribute
struct AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyDescriptionAttribute::m_description
	String_t* ___m_description_0;

public:
	inline static int32_t get_offset_of_m_description_0() { return static_cast<int32_t>(offsetof(AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3, ___m_description_0)); }
	inline String_t* get_m_description_0() const { return ___m_description_0; }
	inline String_t** get_address_of_m_description_0() { return &___m_description_0; }
	inline void set_m_description_0(String_t* value)
	{
		___m_description_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_description_0), (void*)value);
	}
};


// System.Reflection.AssemblyFileVersionAttribute
struct AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyFileVersionAttribute::_version
	String_t* ____version_0;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F, ____version_0)); }
	inline String_t* get__version_0() const { return ____version_0; }
	inline String_t** get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(String_t* value)
	{
		____version_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____version_0), (void*)value);
	}
};


// System.Reflection.AssemblyInformationalVersionAttribute
struct AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyInformationalVersionAttribute::m_informationalVersion
	String_t* ___m_informationalVersion_0;

public:
	inline static int32_t get_offset_of_m_informationalVersion_0() { return static_cast<int32_t>(offsetof(AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0, ___m_informationalVersion_0)); }
	inline String_t* get_m_informationalVersion_0() const { return ___m_informationalVersion_0; }
	inline String_t** get_address_of_m_informationalVersion_0() { return &___m_informationalVersion_0; }
	inline void set_m_informationalVersion_0(String_t* value)
	{
		___m_informationalVersion_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_informationalVersion_0), (void*)value);
	}
};


// System.Reflection.AssemblyProductAttribute
struct AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyProductAttribute::m_product
	String_t* ___m_product_0;

public:
	inline static int32_t get_offset_of_m_product_0() { return static_cast<int32_t>(offsetof(AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA, ___m_product_0)); }
	inline String_t* get_m_product_0() const { return ___m_product_0; }
	inline String_t** get_address_of_m_product_0() { return &___m_product_0; }
	inline void set_m_product_0(String_t* value)
	{
		___m_product_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_product_0), (void*)value);
	}
};


// System.Reflection.AssemblyTitleAttribute
struct AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyTitleAttribute::m_title
	String_t* ___m_title_0;

public:
	inline static int32_t get_offset_of_m_title_0() { return static_cast<int32_t>(offsetof(AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7, ___m_title_0)); }
	inline String_t* get_m_title_0() const { return ___m_title_0; }
	inline String_t** get_address_of_m_title_0() { return &___m_title_0; }
	inline void set_m_title_0(String_t* value)
	{
		___m_title_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_title_0), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Reflection.DefaultMemberAttribute
struct DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.DefaultMemberAttribute::m_memberName
	String_t* ___m_memberName_0;

public:
	inline static int32_t get_offset_of_m_memberName_0() { return static_cast<int32_t>(offsetof(DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5, ___m_memberName_0)); }
	inline String_t* get_m_memberName_0() const { return ___m_memberName_0; }
	inline String_t** get_address_of_m_memberName_0() { return &___m_memberName_0; }
	inline void set_m_memberName_0(String_t* value)
	{
		___m_memberName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_memberName_0), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.FlagsAttribute
struct FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_0), (void*)value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____error_1)); }
	inline bool get__error_1() const { return ____error_1; }
	inline bool* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(bool value)
	{
		____error_1 = value;
	}
};


// ExitGames.Client.Photon.PreserveAttribute
struct PreserveAttribute_tCC0AA2F199BC71EE6BEE5F51262C0D71CFFAB9F2  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// System.Runtime.Versioning.TargetFrameworkAttribute
struct TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.Versioning.TargetFrameworkAttribute::_frameworkName
	String_t* ____frameworkName_0;
	// System.String System.Runtime.Versioning.TargetFrameworkAttribute::_frameworkDisplayName
	String_t* ____frameworkDisplayName_1;

public:
	inline static int32_t get_offset_of__frameworkName_0() { return static_cast<int32_t>(offsetof(TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517, ____frameworkName_0)); }
	inline String_t* get__frameworkName_0() const { return ____frameworkName_0; }
	inline String_t** get_address_of__frameworkName_0() { return &____frameworkName_0; }
	inline void set__frameworkName_0(String_t* value)
	{
		____frameworkName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frameworkName_0), (void*)value);
	}

	inline static int32_t get_offset_of__frameworkDisplayName_1() { return static_cast<int32_t>(offsetof(TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517, ____frameworkDisplayName_1)); }
	inline String_t* get__frameworkDisplayName_1() const { return ____frameworkDisplayName_1; }
	inline String_t** get_address_of__frameworkDisplayName_1() { return &____frameworkDisplayName_1; }
	inline void set__frameworkDisplayName_1(String_t* value)
	{
		____frameworkDisplayName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frameworkDisplayName_1), (void*)value);
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Diagnostics.DebuggerBrowsableState
struct DebuggerBrowsableState_t2A824ECEB650CFABB239FD0918FCC88A09B45091 
{
public:
	// System.Int32 System.Diagnostics.DebuggerBrowsableState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggerBrowsableState_t2A824ECEB650CFABB239FD0918FCC88A09B45091, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};


// System.Diagnostics.DebuggerBrowsableAttribute
struct DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggerBrowsableState System.Diagnostics.DebuggerBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Reflection.AssemblyTitleAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyTitleAttribute__ctor_mE239F206B3B369C48AE1F3B4211688778FE99E8D (AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 * __this, String_t* ___title0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyInformationalVersionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyInformationalVersionAttribute__ctor_m9BF349D8F980B0ABAB2A6312E422915285FA1678 (AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0 * __this, String_t* ___informationalVersion0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyFileVersionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyFileVersionAttribute__ctor_mF855AEBC51CB72F4FF913499256741AE57B0F13D (AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F * __this, String_t* ___version0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyDescriptionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyDescriptionAttribute__ctor_m3A0BD500FF352A67235FBA499FBA58EFF15B1F25 (AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 * __this, String_t* ___description0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyCopyrightAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyCopyrightAttribute__ctor_mB0B5F5C1A7A8B172289CC694E2711F07A37CE3F3 (AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC * __this, String_t* ___copyright0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyConfigurationAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyConfigurationAttribute__ctor_m6EE76F5A155EDEA71967A32F78D777038ADD0757 (AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C * __this, String_t* ___configuration0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyCompanyAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyCompanyAttribute__ctor_m435C9FEC405646617645636E67860598A0C46FF0 (AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 * __this, String_t* ___company0, const RuntimeMethod* method);
// System.Void System.Runtime.Versioning.TargetFrameworkAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetFrameworkAttribute__ctor_m0F8E5550F9199AC44F2CBCCD3E968EC26731187D (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___frameworkName0, const RuntimeMethod* method);
// System.Void System.Runtime.Versioning.TargetFrameworkAttribute::set_FrameworkDisplayName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ExtensionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * __this, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyProductAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyProductAttribute__ctor_m26DF1EBC1C86E7DA4786C66B44123899BE8DBCB8 (AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA * __this, String_t* ___product0, const RuntimeMethod* method);
// System.Void System.Reflection.DefaultMemberAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7 (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * __this, String_t* ___memberName0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggerBrowsableAttribute::.ctor(System.Diagnostics.DebuggerBrowsableState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5 (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * __this, int32_t ___state0, const RuntimeMethod* method);
// System.Void System.ObsoleteAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868 (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.FlagsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229 (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PreserveAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_m95DB539C9E0501CD6252873B6032F8CD594F5FC6 (PreserveAttribute_tCC0AA2F199BC71EE6BEE5F51262C0D71CFFAB9F2 * __this, const RuntimeMethod* method);
// System.Void System.ObsoleteAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853 (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * __this, const RuntimeMethod* method);
static void Photon3Unity3D_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 * tmp = (AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 *)cache->attributes[0];
		AssemblyTitleAttribute__ctor_mE239F206B3B369C48AE1F3B4211688778FE99E8D(tmp, il2cpp_codegen_string_new_wrapper("\x50\x68\x6F\x74\x6F\x6E\x33\x55\x6E\x69\x74\x79\x33\x44"), NULL);
	}
	{
		AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0 * tmp = (AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0 *)cache->attributes[1];
		AssemblyInformationalVersionAttribute__ctor_m9BF349D8F980B0ABAB2A6312E422915285FA1678(tmp, il2cpp_codegen_string_new_wrapper("\x34\x2E\x31\x2E\x36\x2E\x37"), NULL);
	}
	{
		AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F * tmp = (AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F *)cache->attributes[2];
		AssemblyFileVersionAttribute__ctor_mF855AEBC51CB72F4FF913499256741AE57B0F13D(tmp, il2cpp_codegen_string_new_wrapper("\x34\x2E\x31\x2E\x36\x2E\x37"), NULL);
	}
	{
		AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 * tmp = (AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 *)cache->attributes[3];
		AssemblyDescriptionAttribute__ctor_m3A0BD500FF352A67235FBA499FBA58EFF15B1F25(tmp, il2cpp_codegen_string_new_wrapper("\x50\x68\x6F\x74\x6F\x6E\x20\x2E\x4E\x65\x74\x20\x43\x6C\x69\x65\x6E\x74\x20\x4C\x69\x62\x72\x61\x72\x79\x2E\x20\x44\x65\x62\x75\x67\x2E"), NULL);
	}
	{
		AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC * tmp = (AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC *)cache->attributes[4];
		AssemblyCopyrightAttribute__ctor_mB0B5F5C1A7A8B172289CC694E2711F07A37CE3F3(tmp, il2cpp_codegen_string_new_wrapper("\x28\x63\x29\x20\x45\x78\x69\x74\x20\x47\x61\x6D\x65\x73\x20\x47\x6D\x62\x48\x2C\x20\x68\x74\x74\x70\x3A\x2F\x2F\x77\x77\x77\x2E\x65\x78\x69\x74\x67\x61\x6D\x65\x73\x2E\x63\x6F\x6D"), NULL);
	}
	{
		AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C * tmp = (AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C *)cache->attributes[5];
		AssemblyConfigurationAttribute__ctor_m6EE76F5A155EDEA71967A32F78D777038ADD0757(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2D\x44\x65\x62\x75\x67"), NULL);
	}
	{
		AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 * tmp = (AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 *)cache->attributes[6];
		AssemblyCompanyAttribute__ctor_m435C9FEC405646617645636E67860598A0C46FF0(tmp, il2cpp_codegen_string_new_wrapper("\x45\x78\x69\x74\x20\x47\x61\x6D\x65\x73\x20\x47\x6D\x62\x48"), NULL);
	}
	{
		TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * tmp = (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 *)cache->attributes[7];
		TargetFrameworkAttribute__ctor_m0F8E5550F9199AC44F2CBCCD3E968EC26731187D(tmp, il2cpp_codegen_string_new_wrapper("\x2E\x4E\x45\x54\x53\x74\x61\x6E\x64\x61\x72\x64\x2C\x56\x65\x72\x73\x69\x6F\x6E\x3D\x76\x32\x2E\x30"), NULL);
		TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[8];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 263LL, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[9];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[10];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[11];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
	{
		AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA * tmp = (AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA *)cache->attributes[12];
		AssemblyProductAttribute__ctor_m26DF1EBC1C86E7DA4786C66B44123899BE8DBCB8(tmp, il2cpp_codegen_string_new_wrapper("\x50\x68\x6F\x74\x6F\x6E\x20\x2E\x4E\x65\x74\x20\x43\x6C\x69\x65\x6E\x74\x20\x4C\x69\x62\x72\x61\x72\x79\x2E\x20\x44\x65\x62\x75\x67\x2E"), NULL);
	}
}
static void NonAllocDictionary_2_t494108AA5392585175363DC011E0A8548B83D323_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void Hashtable_t43276794A006CD84952AFAB156E51DD9D331596D_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void EnetPeer_t5AD13D3D19967EEBDC6E6ABF4014FEABA9B91A11_CustomAttributesCacheGenerator_EnetPeer_U3CExecuteCommandU3Eb__67_0_m8F605FA9632A74152FB5A72722CCA847943F531A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_U3CStateU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_U3CProxyServerAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_U3CServerIpAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_U3CServerPortU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_U3CAddressResolvedAsIpv6U3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_U3CUrlProtocolU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_U3CUrlPathU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_get_State_mDAFB23564FCDD0B908349615A9F89F7B8A8BFCB7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_set_State_mEB1A3E332871058C2AE41245B3E4F0E244634352(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerAddress_m56C64D66D3113ABC6FB69CA60197FF4133521634(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerAddress_m77C312F7EE07976DCFE34E8764640322DD2DD8F6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_get_ProxyServerAddress_mA402452D1BAD9BFB332C18380F119F387FD67196(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_set_ProxyServerAddress_m293884170C06E3EE7CBE34D7F8B929804947D477(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerIpAddress_m876B5EC11C76C6E9D791940C83B623543E2E0BC3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerIpAddress_m25917C1E33695DD3DBAAC3987F51B8C68EF5A8AB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerPort_mA1212F90468B45FBAD6595D8B6DF7843F7D9083D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerPort_mD58933D87186FD560F2EC043A08C05C0E656EA18(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_get_AddressResolvedAsIpv6_m38D2AA58774AE12096CC08949B7E1657FE7B09B1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_set_AddressResolvedAsIpv6_m3D040A7D67865B70B446B04DF6D4E6643314FBF7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_get_UrlProtocol_m208EDECA0FCDD3BC72B2E4DE3023F17FAB49D208(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_set_UrlProtocol_mF3ACCBDEF01E64D438B5B068D9E825F585829995(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_get_UrlPath_m9C0611FCF989016E5DC593F96C00C10121541EBE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_set_UrlPath_m17E864630E823F853EC4C43CF114460538A2522C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_GetIpAddress_m996B87B3843D000F9C531ABC0EC95D9CEE11E6BC(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x47\x65\x74\x49\x70\x41\x64\x64\x72\x65\x73\x73\x65\x73\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_U3CHandleExceptionU3Eb__52_0_mB01D02D1DE74230127CA24ED9AF9869CE383161F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_t9A2BC021C4A880E8D16586B3CD40A858C1011163_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IProtocol_t97CF065A514B86E8246F81F94877443594E66C4D_CustomAttributesCacheGenerator_IProtocol_SerializeOperationRequest_mBBD6586715541B9E0A0F4B50A74E15A775AEBDAF(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x50\x61\x72\x61\x6D\x65\x74\x65\x72\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void SimulationItem_t6E9C1A0B0B5553624C07719111B7B4F85948B6C7_CustomAttributesCacheGenerator_U3CDelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SimulationItem_t6E9C1A0B0B5553624C07719111B7B4F85948B6C7_CustomAttributesCacheGenerator_SimulationItem_get_Delay_m141FE4B8806BDA19F6A73DCF04037305882F2990(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SimulationItem_t6E9C1A0B0B5553624C07719111B7B4F85948B6C7_CustomAttributesCacheGenerator_SimulationItem_set_Delay_m90CF81EE0138EC226B93F3F2508AE0F67FE316C4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_t060FC4D6F11CBEC8256836EF4214FA5E85297C94_CustomAttributesCacheGenerator_U3CLostPackagesOutU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void NetworkSimulationSet_t060FC4D6F11CBEC8256836EF4214FA5E85297C94_CustomAttributesCacheGenerator_U3CLostPackagesInU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void NetworkSimulationSet_t060FC4D6F11CBEC8256836EF4214FA5E85297C94_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesOut_m46194E80E8FBCC649A17BBDEDDC87D8B1284741C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_t060FC4D6F11CBEC8256836EF4214FA5E85297C94_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesOut_mFE8310FE3BD579497025DBEDBF004AE1501A414F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_t060FC4D6F11CBEC8256836EF4214FA5E85297C94_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesIn_m909AC17AEDCD0B59F2CBF9B91164CE24482DBE0C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_t060FC4D6F11CBEC8256836EF4214FA5E85297C94_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesIn_mF715AE42E56240A47D69943588D8163AB64CB159(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ParameterDictionary_tB15EFEE2CDF94EA8CCB2E555C303C2E9B881FC48_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void InitV3Flags_tEDF20BE4B3CD3397F82FFB6818803AA2B6C79972_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * tmp = (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)cache->attributes[0];
		FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229(tmp, NULL);
	}
}
static void PeerBase_t0434FE9EB58DFED6DB6E034A71351A7D4BF7C1CC_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PeerBase_t0434FE9EB58DFED6DB6E034A71351A7D4BF7C1CC_CustomAttributesCacheGenerator_U3CProxyServerAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PeerBase_t0434FE9EB58DFED6DB6E034A71351A7D4BF7C1CC_CustomAttributesCacheGenerator_PeerBase_get_ServerAddress_mBA00E051166380F8610D8AAA35432B582A10744B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PeerBase_t0434FE9EB58DFED6DB6E034A71351A7D4BF7C1CC_CustomAttributesCacheGenerator_PeerBase_set_ServerAddress_m828DE274DD25D5997E245F747954432CFDFB4B8A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PeerBase_t0434FE9EB58DFED6DB6E034A71351A7D4BF7C1CC_CustomAttributesCacheGenerator_PeerBase_get_ProxyServerAddress_m5DB6BE58131FFA09158D375D136FD75AA9100286(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PeerBase_t0434FE9EB58DFED6DB6E034A71351A7D4BF7C1CC_CustomAttributesCacheGenerator_PeerBase_set_ProxyServerAddress_m8E8947B118B0A71272D4563E44C155A53A1D7E99(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass108_0_tBB05E30A677ADB956D2883A292F69D17A0FF2F93_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass109_0_t1E66B11CA652319C771043F6270FD73F48258A37_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonClientWebSocket_t430BF4D7E528165DAEFCA5095D4B0AF0ECA46634_CustomAttributesCacheGenerator_PhotonClientWebSocket__ctor_m98E546896B93412B98162E1A9C515F51D0945FD1(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_tCC0AA2F199BC71EE6BEE5F51262C0D71CFFAB9F2 * tmp = (PreserveAttribute_tCC0AA2F199BC71EE6BEE5F51262C0D71CFFAB9F2 *)cache->attributes[0];
		PreserveAttribute__ctor_m95DB539C9E0501CD6252873B6032F8CD594F5FC6(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_U3CCommandBufferSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_U3CLimitOfUnreliableCommandsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_WarningSize(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x43\x68\x65\x63\x6B\x20\x51\x75\x65\x75\x65\x64\x4F\x75\x74\x67\x6F\x69\x6E\x67\x43\x6F\x6D\x6D\x61\x6E\x64\x73\x20\x61\x6E\x64\x20\x51\x75\x65\x75\x65\x64\x49\x6E\x63\x6F\x6D\x69\x6E\x67\x43\x6F\x6D\x6D\x61\x6E\x64\x73\x20\x6F\x6E\x20\x64\x65\x6D\x61\x6E\x64\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_NativeDatagramEncrypt(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x57\x68\x65\x72\x65\x20\x64\x79\x6E\x61\x6D\x69\x63\x20\x6C\x69\x6E\x6B\x69\x6E\x67\x20\x69\x73\x20\x61\x76\x61\x69\x6C\x61\x62\x6C\x65\x2C\x20\x74\x68\x69\x73\x20\x6C\x69\x62\x72\x61\x72\x79\x20\x77\x69\x6C\x6C\x20\x61\x74\x74\x65\x6D\x70\x74\x20\x74\x6F\x20\x6C\x6F\x61\x64\x20\x69\x74\x20\x61\x6E\x64\x20\x66\x61\x6C\x6C\x62\x61\x63\x6B\x20\x74\x6F\x20\x61\x20\x6D\x61\x6E\x61\x67\x65\x64\x20\x69\x6D\x70\x6C\x65\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x2E\x20\x54\x68\x69\x73\x20\x76\x61\x6C\x75\x65\x20\x69\x73\x20\x61\x6C\x77\x61\x79\x73\x20\x74\x72\x75\x65\x2E"), NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_CommandLogSize(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x74\x68\x65\x20\x49\x54\x72\x61\x66\x66\x69\x63\x52\x65\x63\x6F\x72\x64\x65\x72\x20\x74\x6F\x20\x63\x61\x70\x74\x75\x72\x65\x20\x61\x6C\x6C\x20\x74\x72\x61\x66\x66\x69\x63\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_NativeSocketLibAvailable(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x41\x20\x4E\x61\x74\x69\x76\x65\x20\x53\x6F\x63\x6B\x65\x74\x20\x69\x6D\x70\x6C\x65\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x69\x73\x20\x6E\x6F\x20\x6C\x6F\x6E\x67\x65\x72\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x74\x68\x69\x73\x20\x44\x4C\x4C\x20\x62\x75\x74\x20\x64\x65\x6C\x69\x76\x65\x72\x65\x64\x20\x69\x6E\x20\x61\x20\x73\x65\x70\x61\x72\x61\x74\x65\x20\x61\x64\x64\x2D\x6F\x6E\x2E\x20\x54\x68\x69\x73\x20\x76\x61\x6C\x75\x65\x20\x61\x6C\x77\x61\x79\x73\x20\x72\x65\x74\x75\x72\x6E\x73\x20\x66\x61\x6C\x73\x65\x2E"), NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_NativePayloadEncryptionLibAvailable(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x61\x74\x69\x76\x65\x20\x50\x61\x79\x6C\x6F\x61\x64\x20\x45\x6E\x63\x72\x79\x70\x74\x69\x6F\x6E\x20\x69\x73\x20\x6E\x6F\x20\x6C\x6F\x6E\x67\x65\x72\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x74\x68\x69\x73\x20\x44\x4C\x4C\x20\x62\x75\x74\x20\x64\x65\x6C\x69\x76\x65\x72\x65\x64\x20\x69\x6E\x20\x61\x20\x73\x65\x70\x61\x72\x61\x74\x65\x20\x61\x64\x64\x2D\x6F\x6E\x2E\x20\x54\x68\x69\x73\x20\x76\x61\x6C\x75\x65\x20\x61\x6C\x77\x61\x79\x73\x20\x72\x65\x74\x75\x72\x6E\x73\x20\x66\x61\x6C\x73\x65\x2E"), NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_NativeDatagramEncryptionLibAvailable(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x61\x74\x69\x76\x65\x20\x44\x61\x74\x61\x67\x72\x61\x6D\x20\x45\x6E\x63\x72\x79\x70\x74\x69\x6F\x6E\x20\x69\x73\x20\x6E\x6F\x20\x6C\x6F\x6E\x67\x65\x72\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x74\x68\x69\x73\x20\x44\x4C\x4C\x20\x62\x75\x74\x20\x64\x65\x6C\x69\x76\x65\x72\x65\x64\x20\x69\x6E\x20\x61\x20\x73\x65\x70\x61\x72\x61\x74\x65\x20\x61\x64\x64\x2D\x6F\x6E\x2E\x20\x54\x68\x69\x73\x20\x76\x61\x6C\x75\x65\x20\x61\x6C\x77\x61\x79\x73\x20\x72\x65\x74\x75\x72\x6E\x73\x20\x66\x61\x6C\x73\x65\x2E"), NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_U3CSerializationProtocolTypeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_U3CSocketImplementationU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_U3CListenerU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_OnDisconnectMessage(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_U3CEnableServerTracingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_U3CTransportProtocolU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_U3CIsSendingOnlyAcksU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_U3CTrafficStatsIncomingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_U3CTrafficStatsOutgoingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_U3CTrafficStatsGameLevelU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_U3CCountDiscardedU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_U3CDeltaUnreliableNumberU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_get_CommandBufferSize_mED4A67BEA18EFDD5E442F220D30251B5E955F053(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_set_CommandBufferSize_mDC4867BD684A8EEF618FF803DF926041176EB7CC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_get_LimitOfUnreliableCommands_m63A949D0F66E1B4A8B5D2F1966B0620ABC278760(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_set_LimitOfUnreliableCommands_m7FD97CDEEB91D1093EFE9D91084BD6B7946447CE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_CommandLogToString_m2AD468802CC562162E6A4C4D96C1F707E513C9F8(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x74\x68\x65\x20\x49\x54\x72\x61\x66\x66\x69\x63\x52\x65\x63\x6F\x72\x64\x65\x72\x20\x74\x6F\x20\x63\x61\x70\x74\x75\x72\x65\x20\x61\x6C\x6C\x20\x74\x72\x61\x66\x66\x69\x63\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_get_SerializationProtocolType_mF60E595723244B0D51488DC7ED439BBD91D9691D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_set_SerializationProtocolType_m0D0AF7D18EBB0BDB86758603974F08E573709C97(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_get_SocketImplementation_mAC4A1FC38B0992934D9EB4FC6EC12021D2C07602(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_set_SocketImplementation_mCB5F277B27CE41B02711F7CA8DA13BD23206480B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_get_Listener_m32A614E05D4B4FA72290C3053E76FF9806D6ED40(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_set_Listener_m3B9D9064882296A931EBF0825985F3E972B71484(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_add_OnDisconnectMessage_m258A7479574B12A2AB747ACE1AA231715047E75A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_remove_OnDisconnectMessage_mA8AC170F3AAF9C3E554AE8DD54A5BA74BCE8A107(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_get_EnableServerTracing_m073F7619DBFAD33E5F268BBC7529C8EF09C83993(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_set_EnableServerTracing_m605F93EC9C46490BA7F423D3BF65295BAF467FF0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_get_TransportProtocol_m01550D021FF3018EA1C26EA5D03FB28E8E48B976(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_set_TransportProtocol_mD0C65EA0EAFE8C4B5B97F0AB1C78901B7FD21C7C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_get_IsSendingOnlyAcks_m144C45758C3A22E01F075F36A116027386AFB59A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_set_IsSendingOnlyAcks_mA963C7F1BDC2679771389686C2DC80BEF036226C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsIncoming_m48CFA163E760CF4E49E4D6114D480BCF3F14242B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsIncoming_mFCDB22308CA59E52318FE926DF2E18567A3488A0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsOutgoing_m8C84A20B4F544DD19AD1D89DBE7C758C32BAC859(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsOutgoing_m897667F27CC4D49576C2ED11DB156D49DBA98E89(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsGameLevel_m547273B4F799F32F340414A92D4685096C723651(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsGameLevel_m2F9D814A65DC82B1FC89422CB6A64AF2260C4C4B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_get_CountDiscarded_mEFBE5D76A731B7BB4C99839C1B2161E1A43AA661(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_set_CountDiscarded_m9F48EC3A68D7E463D29CA1C5F400EB4F96F72B6B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_get_DeltaUnreliableNumber_mE51DC4246011A2B0D9C50246508D52C64D2E75ED(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_set_DeltaUnreliableNumber_mB6BCB6E8E2F601C09D21383D952446869C599829(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_U3CEstablishEncryptionU3Eb__220_0_mE667CAA31466463CCFCB6084061770CA57F3F67B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD____CommandBufferSize_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x53\x65\x65\x20\x72\x65\x6D\x61\x72\x6B\x73\x2E"), NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD____LimitOfUnreliableCommands_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x53\x65\x65\x20\x72\x65\x6D\x61\x72\x6B\x73\x2E"), NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD____LocalTimeInMilliSeconds_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x52\x65\x74\x75\x72\x6E\x73\x20\x53\x75\x70\x70\x6F\x72\x74\x43\x6C\x61\x73\x73\x2E\x47\x65\x74\x54\x69\x63\x6B\x43\x6F\x75\x6E\x74\x28\x29\x2E\x20\x53\x68\x6F\x75\x6C\x64\x20\x62\x65\x20\x72\x65\x70\x6C\x61\x63\x65\x64\x20\x62\x79\x20\x61\x20\x53\x74\x6F\x70\x57\x61\x74\x63\x68\x20\x6F\x72\x20\x74\x68\x65\x20\x70\x65\x72\x20\x70\x65\x65\x72\x20\x50\x68\x6F\x74\x6F\x6E\x50\x65\x65\x72\x2E\x43\x6C\x69\x65\x6E\x74\x54\x69\x6D\x65\x2E"), NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD____ClientVersion_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x73\x74\x61\x74\x69\x63\x20\x73\x74\x72\x69\x6E\x67\x20\x56\x65\x72\x73\x69\x6F\x6E\x20\x73\x68\x6F\x75\x6C\x64\x20\x62\x65\x20\x70\x72\x65\x66\x65\x72\x72\x65\x64\x2E"), NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD____LocalMsTimestampDelegate_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x50\x68\x6F\x74\x6F\x6E\x50\x65\x65\x72\x20\x77\x69\x6C\x6C\x20\x6E\x6F\x20\x6C\x6F\x6E\x67\x65\x72\x20\x75\x73\x65\x20\x74\x68\x69\x73\x20\x64\x65\x6C\x65\x67\x61\x74\x65\x2E\x20\x49\x74\x20\x75\x73\x65\x73\x20\x61\x20\x53\x74\x6F\x70\x77\x61\x74\x63\x68\x20\x69\x6E\x20\x61\x6C\x6C\x20\x63\x61\x73\x65\x73\x2E\x20\x59\x6F\x75\x20\x63\x61\x6E\x20\x61\x63\x63\x65\x73\x73\x20\x50\x68\x6F\x74\x6F\x6E\x50\x65\x65\x72\x2E\x43\x6F\x6E\x6E\x65\x63\x74\x69\x6F\x6E\x54\x69\x6D\x65\x2E"), NULL);
	}
}
static void PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD____IsSendingOnlyAcks_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x49\x6E\x74\x65\x72\x6E\x61\x6C\x6C\x79\x20\x6E\x6F\x74\x20\x75\x73\x65\x64\x20\x61\x6E\x79\x6D\x6F\x72\x65\x2E\x20\x43\x61\x6C\x6C\x20\x53\x65\x6E\x64\x41\x63\x6B\x73\x4F\x6E\x6C\x79\x28\x29\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void OperationResponse_t9F45DBD05141C2572E1B7C2BB11FCC67539B2339_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void EventData_t41CAA5D795431288640D65BE20D34F143095CAA0_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void Protocol_tAAF1E6CCEDD412DC75640BB2ABFFE544B77BE426_CustomAttributesCacheGenerator_Protocol_Serialize_m12B5F68DCE95A73EEF827614659747445BDA181E(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Protocol_tAAF1E6CCEDD412DC75640BB2ABFFE544B77BE426_CustomAttributesCacheGenerator_Protocol_Deserialize_m39BBF69941057724F92A9888606F11C7FD066E3A(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Protocol16_t596EA8306EB75FE816B67296ED3BE02D27E8EB28_CustomAttributesCacheGenerator_Protocol16_SerializeOperationRequest_m312D6090797204076EC3A44AE3E18EDF3A7B6B3E(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x50\x61\x72\x61\x6D\x65\x74\x65\x72\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void Protocol16_t596EA8306EB75FE816B67296ED3BE02D27E8EB28_CustomAttributesCacheGenerator_Protocol16_SerializeParameterTable_mA119FFA12DAC30EAC196877B1129335A850965C5(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x50\x61\x72\x61\x6D\x65\x74\x65\x72\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x20\x69\x6E\x73\x74\x65\x61\x64\x20\x6F\x66\x20\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x3C\x62\x79\x74\x65\x2C\x20\x6F\x62\x6A\x65\x63\x74\x3E\x2E"), NULL);
	}
}
static void Protocol18_tEB062EBABDD1F23701CFC8C61840F02645BA1A6A_CustomAttributesCacheGenerator_Protocol18_ReadParameterTable_mBB8059C8855D4F068EF4751E6B81E4CDD633AD9D(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x50\x61\x72\x61\x6D\x65\x74\x65\x72\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void Protocol18_tEB062EBABDD1F23701CFC8C61840F02645BA1A6A_CustomAttributesCacheGenerator_Protocol18_SerializeOperationRequest_m43DF94330632DB5856291F6F2D725B2745FAF456(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x50\x61\x72\x61\x6D\x65\x74\x65\x72\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void SocketTcp_t01C6083F9CEF0FADEB60D2E707AAAAB86CAB785D_CustomAttributesCacheGenerator_SocketTcp__ctor_mD141A944D060CD6D5B3CA236FEEE3EDA841DA5F1(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_tCC0AA2F199BC71EE6BEE5F51262C0D71CFFAB9F2 * tmp = (PreserveAttribute_tCC0AA2F199BC71EE6BEE5F51262C0D71CFFAB9F2 *)cache->attributes[0];
		PreserveAttribute__ctor_m95DB539C9E0501CD6252873B6032F8CD594F5FC6(tmp, NULL);
	}
}
static void SocketTcpAsync_t207303B13BC1A92F2D1CEF472F7B192AD88E53F9_CustomAttributesCacheGenerator_SocketTcpAsync__ctor_m3B5F4CB21E1B9B3E619553571AE611B073AC805E(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_tCC0AA2F199BC71EE6BEE5F51262C0D71CFFAB9F2 * tmp = (PreserveAttribute_tCC0AA2F199BC71EE6BEE5F51262C0D71CFFAB9F2 *)cache->attributes[0];
		PreserveAttribute__ctor_m95DB539C9E0501CD6252873B6032F8CD594F5FC6(tmp, NULL);
	}
}
static void SocketUdp_tF59E237D5B40CF2580FA3A9A8393A922F3050103_CustomAttributesCacheGenerator_SocketUdp__ctor_mDECBE74F464FA5BACFE8919B950045B93720F75C(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_tCC0AA2F199BC71EE6BEE5F51262C0D71CFFAB9F2 * tmp = (PreserveAttribute_tCC0AA2F199BC71EE6BEE5F51262C0D71CFFAB9F2 *)cache->attributes[0];
		PreserveAttribute__ctor_m95DB539C9E0501CD6252873B6032F8CD594F5FC6(tmp, NULL);
	}
}
static void SocketUdpAsync_t5493EC69082FE106C9585E489CDC7037FD837D2A_CustomAttributesCacheGenerator_SocketUdpAsync__ctor_m1BAFB585CA8F1E06FB40C7155D14AA71D7101323(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_tCC0AA2F199BC71EE6BEE5F51262C0D71CFFAB9F2 * tmp = (PreserveAttribute_tCC0AA2F199BC71EE6BEE5F51262C0D71CFFAB9F2 *)cache->attributes[0];
		PreserveAttribute__ctor_m95DB539C9E0501CD6252873B6032F8CD594F5FC6(tmp, NULL);
	}
}
static void SupportClass_t46830F4C99606EB80D0E3B11502460A06782A012_CustomAttributesCacheGenerator_IntegerMilliseconds(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x61\x20\x53\x74\x6F\x70\x77\x61\x74\x63\x68\x20\x28\x6F\x72\x20\x65\x71\x75\x69\x76\x61\x6C\x65\x6E\x74\x29\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void SupportClass_t46830F4C99606EB80D0E3B11502460A06782A012_CustomAttributesCacheGenerator_SupportClass_GetTickCount_m6E96AA7752CB48A847EB37373F8FE7C5743C02BC(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x61\x20\x53\x74\x6F\x70\x77\x61\x74\x63\x68\x20\x28\x6F\x72\x20\x65\x71\x75\x69\x76\x61\x6C\x65\x6E\x74\x29\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void SupportClass_t46830F4C99606EB80D0E3B11502460A06782A012_CustomAttributesCacheGenerator_SupportClass_HashtableToString_m0BC17B78D5F62D25534E44AC31562B83719A0863(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x54\x6F\x53\x74\x72\x69\x6E\x67\x28\x29\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void IntegerMillisecondsDelegate_t3B747A2EE4B95236BD820C0D9B70C2CF2FCAE750_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x61\x20\x53\x74\x6F\x70\x77\x61\x74\x63\x68\x20\x28\x6F\x72\x20\x65\x71\x75\x69\x76\x61\x6C\x65\x6E\x74\x29\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void U3CU3Ec__DisplayClass6_0_tF85F03854BAA5BA374F696C56DDD9BF298D75001_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_tAC8414720601A183308D2AA65AD7F08279081DEF_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Pool_1_t311BD0ECBB5BF708792FFCBAA59B394033DC9223_CustomAttributesCacheGenerator_Pool_1_Push_m8C4FB6D02D497F6C30295FDF505BCE9755A0F22F(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x52\x65\x6C\x65\x61\x73\x65\x28\x29\x20\x72\x61\x74\x68\x65\x72\x20\x74\x68\x61\x6E\x20\x50\x75\x73\x68\x28\x29"), NULL);
	}
}
static void Pool_1_t311BD0ECBB5BF708792FFCBAA59B394033DC9223_CustomAttributesCacheGenerator_Pool_1_Pop_m5BD13FE3A4DA03BC98D0783A0A6273358E66FC94(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x41\x63\x71\x75\x69\x72\x65\x28\x29\x20\x72\x61\x74\x68\x65\x72\x20\x74\x68\x61\x6E\x20\x50\x6F\x70\x28\x29"), NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3COperationByteCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3COperationCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CResultByteCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CResultCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CEventByteCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CEventCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CLongestEventCallbackU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CLongestMessageCallbackU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CLongestRawMessageCallbackU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CLongestEventCallbackCodeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenSendingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CDispatchIncomingCommandsCallsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CSendOutgoingCommandsCallsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationByteCount_mEAEA6746A0E37D562347595A41576E1866DCAB6E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationByteCount_mDBA2636180CB4B0875CC0E9146908C4290AF49A7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationCount_m6A5540472A3E756325282101AAE3C131BEBD77DF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationCount_m9E168CEE3D5A9CF7E3EE71C3C2561EAB1837454A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultByteCount_mD463A4DEAE994194240AF24FAD525A923990122A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultByteCount_m4D8E9C2CC2F78A544B1D19D249ACE9047AAFB720(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultCount_m90665579E797420B1D859E82181D963AE423A1BB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultCount_m4E0F96A38ED3DEC0803CF53AB337A589F8932D78(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventByteCount_m82BE4C6CC4E3F3C2FF8243BB2F9113B9853CDB39(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventByteCount_m44C38C2A6834322C46145DDEE5F67E80C85D8390(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventCount_m1D1BB997DCC0E6028583BB61AADDBC721E107F5F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventCount_m3EFD81CFDAD6B23A3D38DD975C79C40BEE394ADD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestOpResponseCallback_m89C4A1997BD56FC19FFD7E104A78A8CA328BD031(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallback_m114807F3D0DD6BD4FDDD3CB62B87857BD226BC95(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_mE4EF2EA1B28D3CBCADBED4CDED5E997D4983C3D3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_mA9A1B11FAAD6969A5826A2E0C9A631DF7DBC2B20(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestEventCallback_mA58215CA362E5A376906B8770F7C437E90AB0C00(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallback_mB42ECC6E81E9F64F758E738644844CEE9D382877(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestMessageCallback_m98E3D06E66D21D50676AEF0B0F96EBF93F2C0085(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestMessageCallback_mD79BDA14591257A8AB1A6FA356717ECA67063DF9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestRawMessageCallback_m1EAA1C2717808D7692F5B7C349B8AA31979A020D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestRawMessageCallback_m8E337CE4AAC5C504BABA0746C2946590AB40BE5B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestEventCallbackCode_m83BC5AAF7C4BB8FDFFE77E7D5EC6777B45FBC084(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallbackCode_m5B0C5BC84316A4A3099C8361918371BFB2EFAFA9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m2138CCC0FB816757A149D23A841B684B1332C52C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_mF79FC622793ACE1A05FD00755226B15964D1E3D7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenSending_mA240841A234D13776BC922E471DBDD56102CD1DF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m51D0312C6ED647FCFD69579C5E5A7DE60E690F75(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m67FE1757E48B20BD5BDED5D15445A404EBDA8186(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_m5432A40E4A84CBD756AA97E29ED6C60D537D4715(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m06F333C2230987AEE7BA61181492B3EEA9487460(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_m68F95A69F7E28629D5AA6BBDBAF8D45E735A4860(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE____DispatchCalls_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x44\x69\x73\x70\x61\x74\x63\x68\x49\x6E\x63\x6F\x6D\x69\x6E\x67\x43\x6F\x6D\x6D\x61\x6E\x64\x73\x43\x61\x6C\x6C\x73\x2C\x20\x77\x68\x69\x63\x68\x20\x68\x61\x73\x20\x70\x72\x6F\x70\x65\x72\x20\x6E\x61\x6D\x69\x6E\x67\x2E"), NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_U3CPackageHeaderSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_U3CReliableCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_U3CUnreliableCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_U3CFragmentCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_U3CControlCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_U3CTotalPacketCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_U3CTotalCommandsInPacketsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_U3CReliableCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_U3CUnreliableCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_U3CFragmentCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_U3CControlCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_U3CTimestampOfLastAckU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_U3CTimestampOfLastReliableCommandU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_get_PackageHeaderSize_m6E7967C05DC07B5CEE066B7592958FBA38AEE2AE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_set_PackageHeaderSize_m0A546780848D3DE78AF09AAF3ECF3B6D9FD35EEE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandCount_m3A00B8B87206F07D3349C4BD10C171C1E4F43D8A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandCount_m688661290C1B82D59EBE55E67DFC9D51BAEE2CA2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandCount_mD2101C26EDE2021AAA0C22153E3980D28F2001EF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandCount_m9A154B152B89094F71D03B9A734E29572587D64E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandCount_m7A2C94AB9548C5D78BE04732C5F42FB69E894AEF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandCount_m9A9706E97A88FACCDB9597649E3CB22349E54718(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandCount_mD536B0DE0D5027299A83057B9F902634172620F6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandCount_mAFA53CF50631B403C5A8578C1D6BB404B5AA312E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_get_TotalPacketCount_m18F47303C566612B682A48DA17A363D1D5B5B36C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_set_TotalPacketCount_mA7661F711C01B043943C70168C2242E62C53669E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_get_TotalCommandsInPackets_m210E35991B39DD61B66310627B783D09E8CE2FA7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_set_TotalCommandsInPackets_m7A4FABB9CB8D5ABC2F4554519DDF019CD4D0E75E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandBytes_m0FD14CACEEBE0873883D979D803D7D8F0894C3A6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandBytes_mFD53F673FAFC9D362BE59DDFCF54782159C551E8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandBytes_m4355182C66C5863229FA674D3029587CD1C08363(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandBytes_m0438CEB34B857617B95751EDC8357F48124C3F51(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandBytes_m396E7AFE87DCF40B2133E3C031A8C4BF34287909(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandBytes_m8AA50DAAB78996AFBB9AE2EF7FB1A815232458B6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandBytes_m2CDF35F035C14FB76CCB6E451835B4F1D010401E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandBytes_m0CB11A574B1A810EBB1C801B42DFCB98BE9D6400(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_get_TimestampOfLastAck_m113A8659BEF193FF510165B59EC45C0575162A3F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastAck_m05F177031BE76494F61D4237379263A61A58FE8C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_get_TimestampOfLastReliableCommand_mB0CD45E41D3574C46A4DBCF6DBC02C5F0D01AB53(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastReliableCommand_mB6AA07D8D13D5299AE8423CACE824E8686A5AAAB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void StructWrapper_1_tA516629CF7BF2DA777AB08048CC5DA56731EA178_CustomAttributesCacheGenerator_U3CReturnPoolU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void StructWrapper_1_tA516629CF7BF2DA777AB08048CC5DA56731EA178_CustomAttributesCacheGenerator_StructWrapper_1_get_ReturnPool_mF536F2866FD01E6A644324C8FD1F4A2662D08B30(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void StructWrapper_1_tA516629CF7BF2DA777AB08048CC5DA56731EA178_CustomAttributesCacheGenerator_StructWrapper_1_set_ReturnPool_m3CF9F57E151517FB6476BD558307481DC2A7BD49(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void StructWrapperUtility_t3DCB5F594B52C3FD2FAC20B70A1917F0CE382447_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void StructWrapperUtility_t3DCB5F594B52C3FD2FAC20B70A1917F0CE382447_CustomAttributesCacheGenerator_StructWrapperUtility_Unwrap_mF4BC8FACE3F9788E56E0B8273FD0B9804358D5B1(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void StructWrapperUtility_t3DCB5F594B52C3FD2FAC20B70A1917F0CE382447_CustomAttributesCacheGenerator_StructWrapperUtility_Get_m17BAD71EF24025677616E71865C1ACEA8DCD2907(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void U3CPrivateImplementationDetailsU3E_t875A03481A7463178D9107FBC6E9B99ABC484045_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_Photon3Unity3D_AttributeGenerators[];
const CustomAttributesCacheGenerator g_Photon3Unity3D_AttributeGenerators[223] = 
{
	NonAllocDictionary_2_t494108AA5392585175363DC011E0A8548B83D323_CustomAttributesCacheGenerator,
	Hashtable_t43276794A006CD84952AFAB156E51DD9D331596D_CustomAttributesCacheGenerator,
	U3CU3Ec_t9A2BC021C4A880E8D16586B3CD40A858C1011163_CustomAttributesCacheGenerator,
	ParameterDictionary_tB15EFEE2CDF94EA8CCB2E555C303C2E9B881FC48_CustomAttributesCacheGenerator,
	InitV3Flags_tEDF20BE4B3CD3397F82FFB6818803AA2B6C79972_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass108_0_tBB05E30A677ADB956D2883A292F69D17A0FF2F93_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass109_0_t1E66B11CA652319C771043F6270FD73F48258A37_CustomAttributesCacheGenerator,
	OperationResponse_t9F45DBD05141C2572E1B7C2BB11FCC67539B2339_CustomAttributesCacheGenerator,
	EventData_t41CAA5D795431288640D65BE20D34F143095CAA0_CustomAttributesCacheGenerator,
	IntegerMillisecondsDelegate_t3B747A2EE4B95236BD820C0D9B70C2CF2FCAE750_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass6_0_tF85F03854BAA5BA374F696C56DDD9BF298D75001_CustomAttributesCacheGenerator,
	U3CU3Ec_tAC8414720601A183308D2AA65AD7F08279081DEF_CustomAttributesCacheGenerator,
	StructWrapperUtility_t3DCB5F594B52C3FD2FAC20B70A1917F0CE382447_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_t875A03481A7463178D9107FBC6E9B99ABC484045_CustomAttributesCacheGenerator,
	IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_U3CStateU3Ek__BackingField,
	IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField,
	IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_U3CProxyServerAddressU3Ek__BackingField,
	IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_U3CServerIpAddressU3Ek__BackingField,
	IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_U3CServerPortU3Ek__BackingField,
	IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_U3CAddressResolvedAsIpv6U3Ek__BackingField,
	IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_U3CUrlProtocolU3Ek__BackingField,
	IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_U3CUrlPathU3Ek__BackingField,
	SimulationItem_t6E9C1A0B0B5553624C07719111B7B4F85948B6C7_CustomAttributesCacheGenerator_U3CDelayU3Ek__BackingField,
	NetworkSimulationSet_t060FC4D6F11CBEC8256836EF4214FA5E85297C94_CustomAttributesCacheGenerator_U3CLostPackagesOutU3Ek__BackingField,
	NetworkSimulationSet_t060FC4D6F11CBEC8256836EF4214FA5E85297C94_CustomAttributesCacheGenerator_U3CLostPackagesInU3Ek__BackingField,
	PeerBase_t0434FE9EB58DFED6DB6E034A71351A7D4BF7C1CC_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField,
	PeerBase_t0434FE9EB58DFED6DB6E034A71351A7D4BF7C1CC_CustomAttributesCacheGenerator_U3CProxyServerAddressU3Ek__BackingField,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_U3CCommandBufferSizeU3Ek__BackingField,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_U3CLimitOfUnreliableCommandsU3Ek__BackingField,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_WarningSize,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_NativeDatagramEncrypt,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_CommandLogSize,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_NativeSocketLibAvailable,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_NativePayloadEncryptionLibAvailable,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_NativeDatagramEncryptionLibAvailable,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_U3CSerializationProtocolTypeU3Ek__BackingField,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_U3CSocketImplementationU3Ek__BackingField,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_U3CListenerU3Ek__BackingField,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_OnDisconnectMessage,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_U3CEnableServerTracingU3Ek__BackingField,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_U3CTransportProtocolU3Ek__BackingField,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_U3CIsSendingOnlyAcksU3Ek__BackingField,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_U3CTrafficStatsIncomingU3Ek__BackingField,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_U3CTrafficStatsOutgoingU3Ek__BackingField,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_U3CTrafficStatsGameLevelU3Ek__BackingField,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_U3CCountDiscardedU3Ek__BackingField,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_U3CDeltaUnreliableNumberU3Ek__BackingField,
	SupportClass_t46830F4C99606EB80D0E3B11502460A06782A012_CustomAttributesCacheGenerator_IntegerMilliseconds,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3COperationByteCountU3Ek__BackingField,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3COperationCountU3Ek__BackingField,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CResultByteCountU3Ek__BackingField,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CResultCountU3Ek__BackingField,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CEventByteCountU3Ek__BackingField,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CEventCountU3Ek__BackingField,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackU3Ek__BackingField,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CLongestEventCallbackU3Ek__BackingField,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CLongestMessageCallbackU3Ek__BackingField,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CLongestRawMessageCallbackU3Ek__BackingField,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CLongestEventCallbackCodeU3Ek__BackingField,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenSendingU3Ek__BackingField,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CDispatchIncomingCommandsCallsU3Ek__BackingField,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_U3CSendOutgoingCommandsCallsU3Ek__BackingField,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_U3CPackageHeaderSizeU3Ek__BackingField,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_U3CReliableCommandCountU3Ek__BackingField,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_U3CUnreliableCommandCountU3Ek__BackingField,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_U3CFragmentCommandCountU3Ek__BackingField,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_U3CControlCommandCountU3Ek__BackingField,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_U3CTotalPacketCountU3Ek__BackingField,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_U3CTotalCommandsInPacketsU3Ek__BackingField,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_U3CReliableCommandBytesU3Ek__BackingField,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_U3CUnreliableCommandBytesU3Ek__BackingField,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_U3CFragmentCommandBytesU3Ek__BackingField,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_U3CControlCommandBytesU3Ek__BackingField,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_U3CTimestampOfLastAckU3Ek__BackingField,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_U3CTimestampOfLastReliableCommandU3Ek__BackingField,
	StructWrapper_1_tA516629CF7BF2DA777AB08048CC5DA56731EA178_CustomAttributesCacheGenerator_U3CReturnPoolU3Ek__BackingField,
	EnetPeer_t5AD13D3D19967EEBDC6E6ABF4014FEABA9B91A11_CustomAttributesCacheGenerator_EnetPeer_U3CExecuteCommandU3Eb__67_0_m8F605FA9632A74152FB5A72722CCA847943F531A,
	IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_get_State_mDAFB23564FCDD0B908349615A9F89F7B8A8BFCB7,
	IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_set_State_mEB1A3E332871058C2AE41245B3E4F0E244634352,
	IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerAddress_m56C64D66D3113ABC6FB69CA60197FF4133521634,
	IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerAddress_m77C312F7EE07976DCFE34E8764640322DD2DD8F6,
	IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_get_ProxyServerAddress_mA402452D1BAD9BFB332C18380F119F387FD67196,
	IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_set_ProxyServerAddress_m293884170C06E3EE7CBE34D7F8B929804947D477,
	IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerIpAddress_m876B5EC11C76C6E9D791940C83B623543E2E0BC3,
	IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerIpAddress_m25917C1E33695DD3DBAAC3987F51B8C68EF5A8AB,
	IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerPort_mA1212F90468B45FBAD6595D8B6DF7843F7D9083D,
	IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerPort_mD58933D87186FD560F2EC043A08C05C0E656EA18,
	IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_get_AddressResolvedAsIpv6_m38D2AA58774AE12096CC08949B7E1657FE7B09B1,
	IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_set_AddressResolvedAsIpv6_m3D040A7D67865B70B446B04DF6D4E6643314FBF7,
	IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_get_UrlProtocol_m208EDECA0FCDD3BC72B2E4DE3023F17FAB49D208,
	IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_set_UrlProtocol_mF3ACCBDEF01E64D438B5B068D9E825F585829995,
	IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_get_UrlPath_m9C0611FCF989016E5DC593F96C00C10121541EBE,
	IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_set_UrlPath_m17E864630E823F853EC4C43CF114460538A2522C,
	IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_GetIpAddress_m996B87B3843D000F9C531ABC0EC95D9CEE11E6BC,
	IPhotonSocket_tD67DD59253FDB038A799E32DC55BC4DE917D311B_CustomAttributesCacheGenerator_IPhotonSocket_U3CHandleExceptionU3Eb__52_0_mB01D02D1DE74230127CA24ED9AF9869CE383161F,
	IProtocol_t97CF065A514B86E8246F81F94877443594E66C4D_CustomAttributesCacheGenerator_IProtocol_SerializeOperationRequest_mBBD6586715541B9E0A0F4B50A74E15A775AEBDAF,
	SimulationItem_t6E9C1A0B0B5553624C07719111B7B4F85948B6C7_CustomAttributesCacheGenerator_SimulationItem_get_Delay_m141FE4B8806BDA19F6A73DCF04037305882F2990,
	SimulationItem_t6E9C1A0B0B5553624C07719111B7B4F85948B6C7_CustomAttributesCacheGenerator_SimulationItem_set_Delay_m90CF81EE0138EC226B93F3F2508AE0F67FE316C4,
	NetworkSimulationSet_t060FC4D6F11CBEC8256836EF4214FA5E85297C94_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesOut_m46194E80E8FBCC649A17BBDEDDC87D8B1284741C,
	NetworkSimulationSet_t060FC4D6F11CBEC8256836EF4214FA5E85297C94_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesOut_mFE8310FE3BD579497025DBEDBF004AE1501A414F,
	NetworkSimulationSet_t060FC4D6F11CBEC8256836EF4214FA5E85297C94_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesIn_m909AC17AEDCD0B59F2CBF9B91164CE24482DBE0C,
	NetworkSimulationSet_t060FC4D6F11CBEC8256836EF4214FA5E85297C94_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesIn_mF715AE42E56240A47D69943588D8163AB64CB159,
	PeerBase_t0434FE9EB58DFED6DB6E034A71351A7D4BF7C1CC_CustomAttributesCacheGenerator_PeerBase_get_ServerAddress_mBA00E051166380F8610D8AAA35432B582A10744B,
	PeerBase_t0434FE9EB58DFED6DB6E034A71351A7D4BF7C1CC_CustomAttributesCacheGenerator_PeerBase_set_ServerAddress_m828DE274DD25D5997E245F747954432CFDFB4B8A,
	PeerBase_t0434FE9EB58DFED6DB6E034A71351A7D4BF7C1CC_CustomAttributesCacheGenerator_PeerBase_get_ProxyServerAddress_m5DB6BE58131FFA09158D375D136FD75AA9100286,
	PeerBase_t0434FE9EB58DFED6DB6E034A71351A7D4BF7C1CC_CustomAttributesCacheGenerator_PeerBase_set_ProxyServerAddress_m8E8947B118B0A71272D4563E44C155A53A1D7E99,
	PhotonClientWebSocket_t430BF4D7E528165DAEFCA5095D4B0AF0ECA46634_CustomAttributesCacheGenerator_PhotonClientWebSocket__ctor_m98E546896B93412B98162E1A9C515F51D0945FD1,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_get_CommandBufferSize_mED4A67BEA18EFDD5E442F220D30251B5E955F053,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_set_CommandBufferSize_mDC4867BD684A8EEF618FF803DF926041176EB7CC,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_get_LimitOfUnreliableCommands_m63A949D0F66E1B4A8B5D2F1966B0620ABC278760,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_set_LimitOfUnreliableCommands_m7FD97CDEEB91D1093EFE9D91084BD6B7946447CE,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_CommandLogToString_m2AD468802CC562162E6A4C4D96C1F707E513C9F8,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_get_SerializationProtocolType_mF60E595723244B0D51488DC7ED439BBD91D9691D,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_set_SerializationProtocolType_m0D0AF7D18EBB0BDB86758603974F08E573709C97,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_get_SocketImplementation_mAC4A1FC38B0992934D9EB4FC6EC12021D2C07602,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_set_SocketImplementation_mCB5F277B27CE41B02711F7CA8DA13BD23206480B,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_get_Listener_m32A614E05D4B4FA72290C3053E76FF9806D6ED40,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_set_Listener_m3B9D9064882296A931EBF0825985F3E972B71484,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_add_OnDisconnectMessage_m258A7479574B12A2AB747ACE1AA231715047E75A,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_remove_OnDisconnectMessage_mA8AC170F3AAF9C3E554AE8DD54A5BA74BCE8A107,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_get_EnableServerTracing_m073F7619DBFAD33E5F268BBC7529C8EF09C83993,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_set_EnableServerTracing_m605F93EC9C46490BA7F423D3BF65295BAF467FF0,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_get_TransportProtocol_m01550D021FF3018EA1C26EA5D03FB28E8E48B976,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_set_TransportProtocol_mD0C65EA0EAFE8C4B5B97F0AB1C78901B7FD21C7C,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_get_IsSendingOnlyAcks_m144C45758C3A22E01F075F36A116027386AFB59A,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_set_IsSendingOnlyAcks_mA963C7F1BDC2679771389686C2DC80BEF036226C,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsIncoming_m48CFA163E760CF4E49E4D6114D480BCF3F14242B,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsIncoming_mFCDB22308CA59E52318FE926DF2E18567A3488A0,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsOutgoing_m8C84A20B4F544DD19AD1D89DBE7C758C32BAC859,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsOutgoing_m897667F27CC4D49576C2ED11DB156D49DBA98E89,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsGameLevel_m547273B4F799F32F340414A92D4685096C723651,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsGameLevel_m2F9D814A65DC82B1FC89422CB6A64AF2260C4C4B,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_get_CountDiscarded_mEFBE5D76A731B7BB4C99839C1B2161E1A43AA661,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_set_CountDiscarded_m9F48EC3A68D7E463D29CA1C5F400EB4F96F72B6B,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_get_DeltaUnreliableNumber_mE51DC4246011A2B0D9C50246508D52C64D2E75ED,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_set_DeltaUnreliableNumber_mB6BCB6E8E2F601C09D21383D952446869C599829,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_U3CEstablishEncryptionU3Eb__220_0_mE667CAA31466463CCFCB6084061770CA57F3F67B,
	Protocol_tAAF1E6CCEDD412DC75640BB2ABFFE544B77BE426_CustomAttributesCacheGenerator_Protocol_Serialize_m12B5F68DCE95A73EEF827614659747445BDA181E,
	Protocol_tAAF1E6CCEDD412DC75640BB2ABFFE544B77BE426_CustomAttributesCacheGenerator_Protocol_Deserialize_m39BBF69941057724F92A9888606F11C7FD066E3A,
	Protocol16_t596EA8306EB75FE816B67296ED3BE02D27E8EB28_CustomAttributesCacheGenerator_Protocol16_SerializeOperationRequest_m312D6090797204076EC3A44AE3E18EDF3A7B6B3E,
	Protocol16_t596EA8306EB75FE816B67296ED3BE02D27E8EB28_CustomAttributesCacheGenerator_Protocol16_SerializeParameterTable_mA119FFA12DAC30EAC196877B1129335A850965C5,
	Protocol18_tEB062EBABDD1F23701CFC8C61840F02645BA1A6A_CustomAttributesCacheGenerator_Protocol18_ReadParameterTable_mBB8059C8855D4F068EF4751E6B81E4CDD633AD9D,
	Protocol18_tEB062EBABDD1F23701CFC8C61840F02645BA1A6A_CustomAttributesCacheGenerator_Protocol18_SerializeOperationRequest_m43DF94330632DB5856291F6F2D725B2745FAF456,
	SocketTcp_t01C6083F9CEF0FADEB60D2E707AAAAB86CAB785D_CustomAttributesCacheGenerator_SocketTcp__ctor_mD141A944D060CD6D5B3CA236FEEE3EDA841DA5F1,
	SocketTcpAsync_t207303B13BC1A92F2D1CEF472F7B192AD88E53F9_CustomAttributesCacheGenerator_SocketTcpAsync__ctor_m3B5F4CB21E1B9B3E619553571AE611B073AC805E,
	SocketUdp_tF59E237D5B40CF2580FA3A9A8393A922F3050103_CustomAttributesCacheGenerator_SocketUdp__ctor_mDECBE74F464FA5BACFE8919B950045B93720F75C,
	SocketUdpAsync_t5493EC69082FE106C9585E489CDC7037FD837D2A_CustomAttributesCacheGenerator_SocketUdpAsync__ctor_m1BAFB585CA8F1E06FB40C7155D14AA71D7101323,
	SupportClass_t46830F4C99606EB80D0E3B11502460A06782A012_CustomAttributesCacheGenerator_SupportClass_GetTickCount_m6E96AA7752CB48A847EB37373F8FE7C5743C02BC,
	SupportClass_t46830F4C99606EB80D0E3B11502460A06782A012_CustomAttributesCacheGenerator_SupportClass_HashtableToString_m0BC17B78D5F62D25534E44AC31562B83719A0863,
	Pool_1_t311BD0ECBB5BF708792FFCBAA59B394033DC9223_CustomAttributesCacheGenerator_Pool_1_Push_m8C4FB6D02D497F6C30295FDF505BCE9755A0F22F,
	Pool_1_t311BD0ECBB5BF708792FFCBAA59B394033DC9223_CustomAttributesCacheGenerator_Pool_1_Pop_m5BD13FE3A4DA03BC98D0783A0A6273358E66FC94,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationByteCount_mEAEA6746A0E37D562347595A41576E1866DCAB6E,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationByteCount_mDBA2636180CB4B0875CC0E9146908C4290AF49A7,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationCount_m6A5540472A3E756325282101AAE3C131BEBD77DF,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationCount_m9E168CEE3D5A9CF7E3EE71C3C2561EAB1837454A,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultByteCount_mD463A4DEAE994194240AF24FAD525A923990122A,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultByteCount_m4D8E9C2CC2F78A544B1D19D249ACE9047AAFB720,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultCount_m90665579E797420B1D859E82181D963AE423A1BB,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultCount_m4E0F96A38ED3DEC0803CF53AB337A589F8932D78,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventByteCount_m82BE4C6CC4E3F3C2FF8243BB2F9113B9853CDB39,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventByteCount_m44C38C2A6834322C46145DDEE5F67E80C85D8390,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventCount_m1D1BB997DCC0E6028583BB61AADDBC721E107F5F,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventCount_m3EFD81CFDAD6B23A3D38DD975C79C40BEE394ADD,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestOpResponseCallback_m89C4A1997BD56FC19FFD7E104A78A8CA328BD031,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallback_m114807F3D0DD6BD4FDDD3CB62B87857BD226BC95,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_mE4EF2EA1B28D3CBCADBED4CDED5E997D4983C3D3,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_mA9A1B11FAAD6969A5826A2E0C9A631DF7DBC2B20,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestEventCallback_mA58215CA362E5A376906B8770F7C437E90AB0C00,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallback_mB42ECC6E81E9F64F758E738644844CEE9D382877,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestMessageCallback_m98E3D06E66D21D50676AEF0B0F96EBF93F2C0085,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestMessageCallback_mD79BDA14591257A8AB1A6FA356717ECA67063DF9,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestRawMessageCallback_m1EAA1C2717808D7692F5B7C349B8AA31979A020D,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestRawMessageCallback_m8E337CE4AAC5C504BABA0746C2946590AB40BE5B,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestEventCallbackCode_m83BC5AAF7C4BB8FDFFE77E7D5EC6777B45FBC084,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallbackCode_m5B0C5BC84316A4A3099C8361918371BFB2EFAFA9,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m2138CCC0FB816757A149D23A841B684B1332C52C,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_mF79FC622793ACE1A05FD00755226B15964D1E3D7,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenSending_mA240841A234D13776BC922E471DBDD56102CD1DF,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m51D0312C6ED647FCFD69579C5E5A7DE60E690F75,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m67FE1757E48B20BD5BDED5D15445A404EBDA8186,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_m5432A40E4A84CBD756AA97E29ED6C60D537D4715,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m06F333C2230987AEE7BA61181492B3EEA9487460,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_m68F95A69F7E28629D5AA6BBDBAF8D45E735A4860,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_get_PackageHeaderSize_m6E7967C05DC07B5CEE066B7592958FBA38AEE2AE,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_set_PackageHeaderSize_m0A546780848D3DE78AF09AAF3ECF3B6D9FD35EEE,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandCount_m3A00B8B87206F07D3349C4BD10C171C1E4F43D8A,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandCount_m688661290C1B82D59EBE55E67DFC9D51BAEE2CA2,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandCount_mD2101C26EDE2021AAA0C22153E3980D28F2001EF,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandCount_m9A154B152B89094F71D03B9A734E29572587D64E,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandCount_m7A2C94AB9548C5D78BE04732C5F42FB69E894AEF,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandCount_m9A9706E97A88FACCDB9597649E3CB22349E54718,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandCount_mD536B0DE0D5027299A83057B9F902634172620F6,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandCount_mAFA53CF50631B403C5A8578C1D6BB404B5AA312E,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_get_TotalPacketCount_m18F47303C566612B682A48DA17A363D1D5B5B36C,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_set_TotalPacketCount_mA7661F711C01B043943C70168C2242E62C53669E,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_get_TotalCommandsInPackets_m210E35991B39DD61B66310627B783D09E8CE2FA7,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_set_TotalCommandsInPackets_m7A4FABB9CB8D5ABC2F4554519DDF019CD4D0E75E,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandBytes_m0FD14CACEEBE0873883D979D803D7D8F0894C3A6,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandBytes_mFD53F673FAFC9D362BE59DDFCF54782159C551E8,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandBytes_m4355182C66C5863229FA674D3029587CD1C08363,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandBytes_m0438CEB34B857617B95751EDC8357F48124C3F51,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandBytes_m396E7AFE87DCF40B2133E3C031A8C4BF34287909,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandBytes_m8AA50DAAB78996AFBB9AE2EF7FB1A815232458B6,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandBytes_m2CDF35F035C14FB76CCB6E451835B4F1D010401E,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandBytes_m0CB11A574B1A810EBB1C801B42DFCB98BE9D6400,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_get_TimestampOfLastAck_m113A8659BEF193FF510165B59EC45C0575162A3F,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastAck_m05F177031BE76494F61D4237379263A61A58FE8C,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_get_TimestampOfLastReliableCommand_mB0CD45E41D3574C46A4DBCF6DBC02C5F0D01AB53,
	TrafficStats_tD0749D381A0995A317FB0FD8F1196D4E8F1E4871_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastReliableCommand_mB6AA07D8D13D5299AE8423CACE824E8686A5AAAB,
	StructWrapper_1_tA516629CF7BF2DA777AB08048CC5DA56731EA178_CustomAttributesCacheGenerator_StructWrapper_1_get_ReturnPool_mF536F2866FD01E6A644324C8FD1F4A2662D08B30,
	StructWrapper_1_tA516629CF7BF2DA777AB08048CC5DA56731EA178_CustomAttributesCacheGenerator_StructWrapper_1_set_ReturnPool_m3CF9F57E151517FB6476BD558307481DC2A7BD49,
	StructWrapperUtility_t3DCB5F594B52C3FD2FAC20B70A1917F0CE382447_CustomAttributesCacheGenerator_StructWrapperUtility_Unwrap_mF4BC8FACE3F9788E56E0B8273FD0B9804358D5B1,
	StructWrapperUtility_t3DCB5F594B52C3FD2FAC20B70A1917F0CE382447_CustomAttributesCacheGenerator_StructWrapperUtility_Get_m17BAD71EF24025677616E71865C1ACEA8DCD2907,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD____CommandBufferSize_PropertyInfo,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD____LimitOfUnreliableCommands_PropertyInfo,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD____LocalTimeInMilliSeconds_PropertyInfo,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD____ClientVersion_PropertyInfo,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD____LocalMsTimestampDelegate_PropertyInfo,
	PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD_CustomAttributesCacheGenerator_PhotonPeer_tA9416F27EB935317E1AFD34031CEA28BF957CADD____IsSendingOnlyAcks_PropertyInfo,
	TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE_CustomAttributesCacheGenerator_TrafficStatsGameLevel_t058AE246B0BBFC65A16C16D2FB5631204E603CFE____DispatchCalls_PropertyInfo,
	Photon3Unity3D_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__frameworkDisplayName_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
