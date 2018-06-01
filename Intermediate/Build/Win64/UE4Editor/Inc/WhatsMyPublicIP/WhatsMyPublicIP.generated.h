// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WHATSMYPUBLICIP_WhatsMyPublicIP_generated_h
#error "WhatsMyPublicIP.generated.h already included, missing '#pragma once' in WhatsMyPublicIP.h"
#endif
#define WHATSMYPUBLICIP_WhatsMyPublicIP_generated_h

#define HostProject_Plugins_WhatsMyPublicIP_Source_WhatsMyPublicIP_Public_WhatsMyPublicIP_h_13_DELEGATE \
struct _Script_WhatsMyPublicIP_eventIPDelegate_Parms \
{ \
	FString IP; \
}; \
static inline void FIPDelegate_DelegateWrapper(const FMulticastScriptDelegate& IPDelegate, const FString& IP) \
{ \
	_Script_WhatsMyPublicIP_eventIPDelegate_Parms Parms; \
	Parms.IP=IP; \
	IPDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_WhatsMyPublicIP_Source_WhatsMyPublicIP_Public_WhatsMyPublicIP_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOverrideJSONKey) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewJsonKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OverrideJSONKey(Z_Param_NewJsonKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOverrideAPIUrl) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewAPIUrl); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OverrideAPIUrl(Z_Param_NewAPIUrl); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCachedIP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetCachedIP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMyPublicIP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMyPublicIP(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_WhatsMyPublicIP_Source_WhatsMyPublicIP_Public_WhatsMyPublicIP_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverrideJSONKey) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewJsonKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OverrideJSONKey(Z_Param_NewJsonKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOverrideAPIUrl) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewAPIUrl); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OverrideAPIUrl(Z_Param_NewAPIUrl); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCachedIP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetCachedIP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMyPublicIP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMyPublicIP(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_WhatsMyPublicIP_Source_WhatsMyPublicIP_Public_WhatsMyPublicIP_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWhatsMyPublicIP(); \
	friend WHATSMYPUBLICIP_API class UClass* Z_Construct_UClass_UWhatsMyPublicIP(); \
public: \
	DECLARE_CLASS(UWhatsMyPublicIP, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/WhatsMyPublicIP"), NO_API) \
	DECLARE_SERIALIZER(UWhatsMyPublicIP) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_WhatsMyPublicIP_Source_WhatsMyPublicIP_Public_WhatsMyPublicIP_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUWhatsMyPublicIP(); \
	friend WHATSMYPUBLICIP_API class UClass* Z_Construct_UClass_UWhatsMyPublicIP(); \
public: \
	DECLARE_CLASS(UWhatsMyPublicIP, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/WhatsMyPublicIP"), NO_API) \
	DECLARE_SERIALIZER(UWhatsMyPublicIP) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_WhatsMyPublicIP_Source_WhatsMyPublicIP_Public_WhatsMyPublicIP_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWhatsMyPublicIP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWhatsMyPublicIP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWhatsMyPublicIP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWhatsMyPublicIP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWhatsMyPublicIP(UWhatsMyPublicIP&&); \
	NO_API UWhatsMyPublicIP(const UWhatsMyPublicIP&); \
public:


#define HostProject_Plugins_WhatsMyPublicIP_Source_WhatsMyPublicIP_Public_WhatsMyPublicIP_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWhatsMyPublicIP(UWhatsMyPublicIP&&); \
	NO_API UWhatsMyPublicIP(const UWhatsMyPublicIP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWhatsMyPublicIP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWhatsMyPublicIP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWhatsMyPublicIP)


#define HostProject_Plugins_WhatsMyPublicIP_Source_WhatsMyPublicIP_Public_WhatsMyPublicIP_h_18_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_WhatsMyPublicIP_Source_WhatsMyPublicIP_Public_WhatsMyPublicIP_h_15_PROLOG
#define HostProject_Plugins_WhatsMyPublicIP_Source_WhatsMyPublicIP_Public_WhatsMyPublicIP_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_WhatsMyPublicIP_Source_WhatsMyPublicIP_Public_WhatsMyPublicIP_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_WhatsMyPublicIP_Source_WhatsMyPublicIP_Public_WhatsMyPublicIP_h_18_RPC_WRAPPERS \
	HostProject_Plugins_WhatsMyPublicIP_Source_WhatsMyPublicIP_Public_WhatsMyPublicIP_h_18_INCLASS \
	HostProject_Plugins_WhatsMyPublicIP_Source_WhatsMyPublicIP_Public_WhatsMyPublicIP_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_WhatsMyPublicIP_Source_WhatsMyPublicIP_Public_WhatsMyPublicIP_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_WhatsMyPublicIP_Source_WhatsMyPublicIP_Public_WhatsMyPublicIP_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_WhatsMyPublicIP_Source_WhatsMyPublicIP_Public_WhatsMyPublicIP_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_WhatsMyPublicIP_Source_WhatsMyPublicIP_Public_WhatsMyPublicIP_h_18_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_WhatsMyPublicIP_Source_WhatsMyPublicIP_Public_WhatsMyPublicIP_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_WhatsMyPublicIP_Source_WhatsMyPublicIP_Public_WhatsMyPublicIP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
