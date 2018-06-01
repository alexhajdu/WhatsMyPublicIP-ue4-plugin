// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/WhatsMyPublicIP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWhatsMyPublicIP() {}
// Cross Module References
	WHATSMYPUBLICIP_API UFunction* Z_Construct_UDelegateFunction_WhatsMyPublicIP_IPDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_WhatsMyPublicIP();
	WHATSMYPUBLICIP_API UClass* Z_Construct_UClass_UWhatsMyPublicIP_NoRegister();
	WHATSMYPUBLICIP_API UClass* Z_Construct_UClass_UWhatsMyPublicIP();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	WHATSMYPUBLICIP_API UFunction* Z_Construct_UFunction_UWhatsMyPublicIP_GetCachedIP();
	WHATSMYPUBLICIP_API UFunction* Z_Construct_UFunction_UWhatsMyPublicIP_GetMyPublicIP();
	WHATSMYPUBLICIP_API UFunction* Z_Construct_UFunction_UWhatsMyPublicIP_OverrideAPIUrl();
	WHATSMYPUBLICIP_API UFunction* Z_Construct_UFunction_UWhatsMyPublicIP_OverrideJSONKey();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_WhatsMyPublicIP_IPDelegate__DelegateSignature()
	{
		struct _Script_WhatsMyPublicIP_eventIPDelegate_Parms
		{
			FString IP;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_IP = { UE4CodeGen_Private::EPropertyClass::Str, "IP", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_WhatsMyPublicIP_eventIPDelegate_Parms, IP), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IP,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/WhatsMyPublicIP.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WhatsMyPublicIP, "IPDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_WhatsMyPublicIP_eventIPDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UWhatsMyPublicIP::StaticRegisterNativesUWhatsMyPublicIP()
	{
		UClass* Class = UWhatsMyPublicIP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCachedIP", &UWhatsMyPublicIP::execGetCachedIP },
			{ "GetMyPublicIP", &UWhatsMyPublicIP::execGetMyPublicIP },
			{ "OverrideAPIUrl", &UWhatsMyPublicIP::execOverrideAPIUrl },
			{ "OverrideJSONKey", &UWhatsMyPublicIP::execOverrideJSONKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UWhatsMyPublicIP_GetCachedIP()
	{
		struct WhatsMyPublicIP_eventGetCachedIP_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WhatsMyPublicIP_eventGetCachedIP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Networking" },
				{ "ModuleRelativePath", "Public/WhatsMyPublicIP.h" },
				{ "ToolTip", "Getter for IP string. Returns empty string if still no response from server." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhatsMyPublicIP, "GetCachedIP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(WhatsMyPublicIP_eventGetCachedIP_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWhatsMyPublicIP_GetMyPublicIP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Networking" },
				{ "ModuleRelativePath", "Public/WhatsMyPublicIP.h" },
				{ "ToolTip", "Main function to call in order to get your public IP" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhatsMyPublicIP, "GetMyPublicIP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWhatsMyPublicIP_OverrideAPIUrl()
	{
		struct WhatsMyPublicIP_eventOverrideAPIUrl_Parms
		{
			FString NewAPIUrl;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewAPIUrl = { UE4CodeGen_Private::EPropertyClass::Str, "NewAPIUrl", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WhatsMyPublicIP_eventOverrideAPIUrl_Parms, NewAPIUrl), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewAPIUrl,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Networking" },
				{ "ModuleRelativePath", "Public/WhatsMyPublicIP.h" },
				{ "ToolTip", "Set your own API url if you want." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhatsMyPublicIP, "OverrideAPIUrl", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(WhatsMyPublicIP_eventOverrideAPIUrl_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWhatsMyPublicIP_OverrideJSONKey()
	{
		struct WhatsMyPublicIP_eventOverrideJSONKey_Parms
		{
			FString NewJsonKey;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewJsonKey = { UE4CodeGen_Private::EPropertyClass::Str, "NewJsonKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WhatsMyPublicIP_eventOverrideJSONKey_Parms, NewJsonKey), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewJsonKey,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Networking" },
				{ "ModuleRelativePath", "Public/WhatsMyPublicIP.h" },
				{ "ToolTip", "Set necessary key to get value from json to fit your API response. Note: works only on simple object." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhatsMyPublicIP, "OverrideJSONKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(WhatsMyPublicIP_eventOverrideJSONKey_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWhatsMyPublicIP_NoRegister()
	{
		return UWhatsMyPublicIP::StaticClass();
	}
	UClass* Z_Construct_UClass_UWhatsMyPublicIP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_WhatsMyPublicIP,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UWhatsMyPublicIP_GetCachedIP, "GetCachedIP" }, // 3727912529
				{ &Z_Construct_UFunction_UWhatsMyPublicIP_GetMyPublicIP, "GetMyPublicIP" }, // 2282079769
				{ &Z_Construct_UFunction_UWhatsMyPublicIP_OverrideAPIUrl, "OverrideAPIUrl" }, // 2710058411
				{ &Z_Construct_UFunction_UWhatsMyPublicIP_OverrideJSONKey, "OverrideJSONKey" }, // 965279957
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "WhatsMyPublicIP.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/WhatsMyPublicIP.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnIPAddressReceived_MetaData[] = {
				{ "Category", "Networking" },
				{ "ModuleRelativePath", "Public/WhatsMyPublicIP.h" },
				{ "ToolTip", "Subscribe to this event and get your IP address safely" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIPAddressReceived = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnIPAddressReceived", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UWhatsMyPublicIP, OnIPAddressReceived), Z_Construct_UDelegateFunction_WhatsMyPublicIP_IPDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnIPAddressReceived_MetaData, ARRAY_COUNT(NewProp_OnIPAddressReceived_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnIPAddressReceived,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UWhatsMyPublicIP>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UWhatsMyPublicIP::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWhatsMyPublicIP, 1139173715);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWhatsMyPublicIP(Z_Construct_UClass_UWhatsMyPublicIP, &UWhatsMyPublicIP::StaticClass, TEXT("/Script/WhatsMyPublicIP"), TEXT("UWhatsMyPublicIP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWhatsMyPublicIP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
