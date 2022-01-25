// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FWeatherInfo;
class UWeatherStateRequest;
#ifdef WEATHERSTATUS_WeatherStateRequest_generated_h
#error "WeatherStateRequest.generated.h already included, missing '#pragma once' in WeatherStateRequest.h"
#endif
#define WEATHERSTATUS_WeatherStateRequest_generated_h

#define TestPlugins_Plugins_WeatherStatus_Source_WeatherStatus_Public_WeatherStateRequest_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeatherInfo_Statics; \
	WEATHERSTATUS_API static class UScriptStruct* StaticStruct();


template<> WEATHERSTATUS_API UScriptStruct* StaticStruct<struct FWeatherInfo>();

#define TestPlugins_Plugins_WeatherStatus_Source_WeatherStatus_Public_WeatherStateRequest_h_40_DELEGATE \
struct _Script_WeatherStatus_eventBlueprintAsyncWeatherResult_Parms \
{ \
	FWeatherInfo Result; \
}; \
static inline void FBlueprintAsyncWeatherResult_DelegateWrapper(const FMulticastScriptDelegate& BlueprintAsyncWeatherResult, FWeatherInfo Result) \
{ \
	_Script_WeatherStatus_eventBlueprintAsyncWeatherResult_Parms Parms; \
	Parms.Result=Result; \
	BlueprintAsyncWeatherResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TestPlugins_Plugins_WeatherStatus_Source_WeatherStatus_Public_WeatherStateRequest_h_46_SPARSE_DATA
#define TestPlugins_Plugins_WeatherStatus_Source_WeatherStatus_Public_WeatherStateRequest_h_46_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWeatherInformation);


#define TestPlugins_Plugins_WeatherStatus_Source_WeatherStatus_Public_WeatherStateRequest_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWeatherInformation);


#define TestPlugins_Plugins_WeatherStatus_Source_WeatherStatus_Public_WeatherStateRequest_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeatherStateRequest(); \
	friend struct Z_Construct_UClass_UWeatherStateRequest_Statics; \
public: \
	DECLARE_CLASS(UWeatherStateRequest, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeatherStatus"), NO_API) \
	DECLARE_SERIALIZER(UWeatherStateRequest)


#define TestPlugins_Plugins_WeatherStatus_Source_WeatherStatus_Public_WeatherStateRequest_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUWeatherStateRequest(); \
	friend struct Z_Construct_UClass_UWeatherStateRequest_Statics; \
public: \
	DECLARE_CLASS(UWeatherStateRequest, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeatherStatus"), NO_API) \
	DECLARE_SERIALIZER(UWeatherStateRequest)


#define TestPlugins_Plugins_WeatherStatus_Source_WeatherStatus_Public_WeatherStateRequest_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeatherStateRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeatherStateRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeatherStateRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeatherStateRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeatherStateRequest(UWeatherStateRequest&&); \
	NO_API UWeatherStateRequest(const UWeatherStateRequest&); \
public:


#define TestPlugins_Plugins_WeatherStatus_Source_WeatherStatus_Public_WeatherStateRequest_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeatherStateRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeatherStateRequest(UWeatherStateRequest&&); \
	NO_API UWeatherStateRequest(const UWeatherStateRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeatherStateRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeatherStateRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeatherStateRequest)


#define TestPlugins_Plugins_WeatherStatus_Source_WeatherStatus_Public_WeatherStateRequest_h_46_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnSuccess() { return STRUCT_OFFSET(UWeatherStateRequest, OnSuccess); } \
	FORCEINLINE static uint32 __PPO__OnError() { return STRUCT_OFFSET(UWeatherStateRequest, OnError); }


#define TestPlugins_Plugins_WeatherStatus_Source_WeatherStatus_Public_WeatherStateRequest_h_43_PROLOG
#define TestPlugins_Plugins_WeatherStatus_Source_WeatherStatus_Public_WeatherStateRequest_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestPlugins_Plugins_WeatherStatus_Source_WeatherStatus_Public_WeatherStateRequest_h_46_PRIVATE_PROPERTY_OFFSET \
	TestPlugins_Plugins_WeatherStatus_Source_WeatherStatus_Public_WeatherStateRequest_h_46_SPARSE_DATA \
	TestPlugins_Plugins_WeatherStatus_Source_WeatherStatus_Public_WeatherStateRequest_h_46_RPC_WRAPPERS \
	TestPlugins_Plugins_WeatherStatus_Source_WeatherStatus_Public_WeatherStateRequest_h_46_INCLASS \
	TestPlugins_Plugins_WeatherStatus_Source_WeatherStatus_Public_WeatherStateRequest_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestPlugins_Plugins_WeatherStatus_Source_WeatherStatus_Public_WeatherStateRequest_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestPlugins_Plugins_WeatherStatus_Source_WeatherStatus_Public_WeatherStateRequest_h_46_PRIVATE_PROPERTY_OFFSET \
	TestPlugins_Plugins_WeatherStatus_Source_WeatherStatus_Public_WeatherStateRequest_h_46_SPARSE_DATA \
	TestPlugins_Plugins_WeatherStatus_Source_WeatherStatus_Public_WeatherStateRequest_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	TestPlugins_Plugins_WeatherStatus_Source_WeatherStatus_Public_WeatherStateRequest_h_46_INCLASS_NO_PURE_DECLS \
	TestPlugins_Plugins_WeatherStatus_Source_WeatherStatus_Public_WeatherStateRequest_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEATHERSTATUS_API UClass* StaticClass<class UWeatherStateRequest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestPlugins_Plugins_WeatherStatus_Source_WeatherStatus_Public_WeatherStateRequest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
