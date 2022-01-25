// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeatherStatus/Public/WeatherStateRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeatherStateRequest() {}
// Cross Module References
	WEATHERSTATUS_API UFunction* Z_Construct_UDelegateFunction_WeatherStatus_BlueprintAsyncWeatherResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_WeatherStatus();
	WEATHERSTATUS_API UScriptStruct* Z_Construct_UScriptStruct_FWeatherInfo();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	WEATHERSTATUS_API UClass* Z_Construct_UClass_UWeatherStateRequest_NoRegister();
	WEATHERSTATUS_API UClass* Z_Construct_UClass_UWeatherStateRequest();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_WeatherStatus_BlueprintAsyncWeatherResult__DelegateSignature_Statics
	{
		struct _Script_WeatherStatus_eventBlueprintAsyncWeatherResult_Parms
		{
			FWeatherInfo Result;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_WeatherStatus_BlueprintAsyncWeatherResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WeatherStatus_eventBlueprintAsyncWeatherResult_Parms, Result), Z_Construct_UScriptStruct_FWeatherInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeatherStatus_BlueprintAsyncWeatherResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeatherStatus_BlueprintAsyncWeatherResult__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeatherStatus_BlueprintAsyncWeatherResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeatherStateRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WeatherStatus_BlueprintAsyncWeatherResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WeatherStatus, nullptr, "BlueprintAsyncWeatherResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_WeatherStatus_eventBlueprintAsyncWeatherResult_Parms), Z_Construct_UDelegateFunction_WeatherStatus_BlueprintAsyncWeatherResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeatherStatus_BlueprintAsyncWeatherResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeatherStatus_BlueprintAsyncWeatherResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeatherStatus_BlueprintAsyncWeatherResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WeatherStatus_BlueprintAsyncWeatherResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_WeatherStatus_BlueprintAsyncWeatherResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FWeatherInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WEATHERSTATUS_API uint32 Get_Z_Construct_UScriptStruct_FWeatherInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeatherInfo, Z_Construct_UPackage__Script_WeatherStatus(), TEXT("WeatherInfo"), sizeof(FWeatherInfo), Get_Z_Construct_UScriptStruct_FWeatherInfo_Hash());
	}
	return Singleton;
}
template<> WEATHERSTATUS_API UScriptStruct* StaticStruct<FWeatherInfo>()
{
	return FWeatherInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeatherInfo(FWeatherInfo::StaticStruct, TEXT("/Script/WeatherStatus"), TEXT("WeatherInfo"), false, nullptr, nullptr);
static struct FScriptStruct_WeatherStatus_StaticRegisterNativesFWeatherInfo
{
	FScriptStruct_WeatherStatus_StaticRegisterNativesFWeatherInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WeatherInfo")),new UScriptStruct::TCppStructOps<FWeatherInfo>);
	}
} ScriptStruct_WeatherStatus_StaticRegisterNativesFWeatherInfo;
	struct Z_Construct_UScriptStruct_FWeatherInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeatherCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeatherCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Temperature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WindDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WindPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Humidity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Humidity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeatherImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeatherImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeatherInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/WeatherStateRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeatherInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_WeatherCondition_MetaData[] = {
		{ "Category", "WeatherInfo" },
		{ "Comment", "/* ???????? */" },
		{ "ModuleRelativePath", "Public/WeatherStateRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_WeatherCondition = { "WeatherCondition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeatherInfo, WeatherCondition), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_WeatherCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_WeatherCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_Temperature_MetaData[] = {
		{ "Category", "WeatherInfo" },
		{ "Comment", "/* \xca\xb5\xca\xb1???? */" },
		{ "ModuleRelativePath", "Public/WeatherStateRequest.h" },
		{ "ToolTip", "\xca\xb5\xca\xb1????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeatherInfo, Temperature), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_Temperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_Temperature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_WindDirection_MetaData[] = {
		{ "Category", "WeatherInfo" },
		{ "Comment", "/* ???????? */" },
		{ "ModuleRelativePath", "Public/WeatherStateRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_WindDirection = { "WindDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeatherInfo, WindDirection), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_WindDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_WindDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_WindPower_MetaData[] = {
		{ "Category", "WeatherInfo" },
		{ "Comment", "/* ???????? */" },
		{ "ModuleRelativePath", "Public/WeatherStateRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_WindPower = { "WindPower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeatherInfo, WindPower), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_WindPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_WindPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_Humidity_MetaData[] = {
		{ "Category", "WeatherInfo" },
		{ "Comment", "/* ????\xca\xaa?? */" },
		{ "ModuleRelativePath", "Public/WeatherStateRequest.h" },
		{ "ToolTip", "????\xca\xaa??" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_Humidity = { "Humidity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeatherInfo, Humidity), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_Humidity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_Humidity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_WeatherImage_MetaData[] = {
		{ "Category", "WeatherInfo" },
		{ "Comment", "/* ????\xcd\xbc\xc6\xac */" },
		{ "ModuleRelativePath", "Public/WeatherStateRequest.h" },
		{ "ToolTip", "????\xcd\xbc\xc6\xac" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_WeatherImage = { "WeatherImage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeatherInfo, WeatherImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_WeatherImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_WeatherImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeatherInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_WeatherCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_Temperature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_WindDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_WindPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_Humidity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeatherInfo_Statics::NewProp_WeatherImage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeatherInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeatherStatus,
		nullptr,
		&NewStructOps,
		"WeatherInfo",
		sizeof(FWeatherInfo),
		alignof(FWeatherInfo),
		Z_Construct_UScriptStruct_FWeatherInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeatherInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeatherInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeatherInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeatherInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeatherInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_WeatherStatus();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeatherInfo"), sizeof(FWeatherInfo), Get_Z_Construct_UScriptStruct_FWeatherInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeatherInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeatherInfo_Hash() { return 3151434283U; }
	DEFINE_FUNCTION(UWeatherStateRequest::execWeatherInformation)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CityAdcode);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWeatherStateRequest**)Z_Param__Result=UWeatherStateRequest::WeatherInformation(Z_Param_CityAdcode,Z_Param_UserKey);
		P_NATIVE_END;
	}
	void UWeatherStateRequest::StaticRegisterNativesUWeatherStateRequest()
	{
		UClass* Class = UWeatherStateRequest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WeatherInformation", &UWeatherStateRequest::execWeatherInformation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeatherStateRequest_WeatherInformation_Statics
	{
		struct WeatherStateRequest_eventWeatherInformation_Parms
		{
			FString CityAdcode;
			FString UserKey;
			UWeatherStateRequest* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CityAdcode;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserKey;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWeatherStateRequest_WeatherInformation_Statics::NewProp_CityAdcode = { "CityAdcode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherStateRequest_eventWeatherInformation_Parms, CityAdcode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWeatherStateRequest_WeatherInformation_Statics::NewProp_UserKey = { "UserKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherStateRequest_eventWeatherInformation_Parms, UserKey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherStateRequest_WeatherInformation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherStateRequest_eventWeatherInformation_Parms, ReturnValue), Z_Construct_UClass_UWeatherStateRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherStateRequest_WeatherInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherStateRequest_WeatherInformation_Statics::NewProp_CityAdcode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherStateRequest_WeatherInformation_Statics::NewProp_UserKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherStateRequest_WeatherInformation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeatherStateRequest_WeatherInformation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = \"true\", WorldContext = \"WorldContextObject\", Delay = \"0.5\"))\n//\x09static UWeatherStateRequest* AsyncDelay(UObject* WorldContextObject, float Delay);\n" },
		{ "ModuleRelativePath", "Public/WeatherStateRequest.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = \"true\", WorldContext = \"WorldContextObject\", Delay = \"0.5\"))\n       static UWeatherStateRequest* AsyncDelay(UObject* WorldContextObject, float Delay);" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherStateRequest_WeatherInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherStateRequest, nullptr, "WeatherInformation", nullptr, nullptr, sizeof(WeatherStateRequest_eventWeatherInformation_Parms), Z_Construct_UFunction_UWeatherStateRequest_WeatherInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherStateRequest_WeatherInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeatherStateRequest_WeatherInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherStateRequest_WeatherInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeatherStateRequest_WeatherInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeatherStateRequest_WeatherInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWeatherStateRequest_NoRegister()
	{
		return UWeatherStateRequest::StaticClass();
	}
	struct Z_Construct_UClass_UWeatherStateRequest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeatherStateRequest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WeatherStatus,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeatherStateRequest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeatherStateRequest_WeatherInformation, "WeatherInformation" }, // 2111146715
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeatherStateRequest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeatherStateRequest.h" },
		{ "ModuleRelativePath", "Public/WeatherStateRequest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeatherStateRequest_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeatherStateRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWeatherStateRequest_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0040000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeatherStateRequest, OnSuccess), Z_Construct_UDelegateFunction_WeatherStatus_BlueprintAsyncWeatherResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWeatherStateRequest_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeatherStateRequest_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeatherStateRequest_Statics::NewProp_OnError_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeatherStateRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWeatherStateRequest_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0040000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeatherStateRequest, OnError), Z_Construct_UDelegateFunction_WeatherStatus_BlueprintAsyncWeatherResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWeatherStateRequest_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeatherStateRequest_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeatherStateRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeatherStateRequest_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeatherStateRequest_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeatherStateRequest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeatherStateRequest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWeatherStateRequest_Statics::ClassParams = {
		&UWeatherStateRequest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWeatherStateRequest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeatherStateRequest_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWeatherStateRequest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeatherStateRequest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeatherStateRequest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeatherStateRequest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeatherStateRequest, 2541424291);
	template<> WEATHERSTATUS_API UClass* StaticClass<UWeatherStateRequest>()
	{
		return UWeatherStateRequest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeatherStateRequest(Z_Construct_UClass_UWeatherStateRequest, &UWeatherStateRequest::StaticClass, TEXT("/Script/WeatherStatus"), TEXT("UWeatherStateRequest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeatherStateRequest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
