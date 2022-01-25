// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeatherStatus/Public/WeatherImageDataTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeatherImageDataTable() {}
// Cross Module References
	WEATHERSTATUS_API UScriptStruct* Z_Construct_UScriptStruct_FImageDataTable();
	UPackage* Z_Construct_UPackage__Script_WeatherStatus();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	WEATHERSTATUS_API UClass* Z_Construct_UClass_UWeatherImageDataTable_NoRegister();
	WEATHERSTATUS_API UClass* Z_Construct_UClass_UWeatherImageDataTable();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable();
// End Cross Module References

static_assert(std::is_polymorphic<FImageDataTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FImageDataTable cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FImageDataTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WEATHERSTATUS_API uint32 Get_Z_Construct_UScriptStruct_FImageDataTable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FImageDataTable, Z_Construct_UPackage__Script_WeatherStatus(), TEXT("ImageDataTable"), sizeof(FImageDataTable), Get_Z_Construct_UScriptStruct_FImageDataTable_Hash());
	}
	return Singleton;
}
template<> WEATHERSTATUS_API UScriptStruct* StaticStruct<FImageDataTable>()
{
	return FImageDataTable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FImageDataTable(FImageDataTable::StaticStruct, TEXT("/Script/WeatherStatus"), TEXT("ImageDataTable"), false, nullptr, nullptr);
static struct FScriptStruct_WeatherStatus_StaticRegisterNativesFImageDataTable
{
	FScriptStruct_WeatherStatus_StaticRegisterNativesFImageDataTable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ImageDataTable")),new UScriptStruct::TCppStructOps<FImageDataTable>);
	}
} ScriptStruct_WeatherStatus_StaticRegisterNativesFImageDataTable;
	struct Z_Construct_UScriptStruct_FImageDataTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeatherImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeatherImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/WeatherImageDataTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImageDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImageDataTable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageDataTable_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "DataTable Test" },
		{ "ModuleRelativePath", "Public/WeatherImageDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImageDataTable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageDataTable, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageDataTable_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageDataTable_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageDataTable_Statics::NewProp_WeatherImage_MetaData[] = {
		{ "Category", "DataTable Test" },
		{ "ModuleRelativePath", "Public/WeatherImageDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FImageDataTable_Statics::NewProp_WeatherImage = { "WeatherImage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImageDataTable, WeatherImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageDataTable_Statics::NewProp_WeatherImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageDataTable_Statics::NewProp_WeatherImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImageDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageDataTable_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageDataTable_Statics::NewProp_WeatherImage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImageDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeatherStatus,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ImageDataTable",
		sizeof(FImageDataTable),
		alignof(FImageDataTable),
		Z_Construct_UScriptStruct_FImageDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageDataTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImageDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImageDataTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FImageDataTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_WeatherStatus();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ImageDataTable"), sizeof(FImageDataTable), Get_Z_Construct_UScriptStruct_FImageDataTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FImageDataTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FImageDataTable_Hash() { return 411025815U; }
	void UWeatherImageDataTable::StaticRegisterNativesUWeatherImageDataTable()
	{
	}
	UClass* Z_Construct_UClass_UWeatherImageDataTable_NoRegister()
	{
		return UWeatherImageDataTable::StaticClass();
	}
	struct Z_Construct_UClass_UWeatherImageDataTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeatherImageDataTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataTable,
		(UObject* (*)())Z_Construct_UPackage__Script_WeatherStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeatherImageDataTable_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DataTable,ImportOptions" },
		{ "IncludePath", "WeatherImageDataTable.h" },
		{ "ModuleRelativePath", "Public/WeatherImageDataTable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeatherImageDataTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeatherImageDataTable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWeatherImageDataTable_Statics::ClassParams = {
		&UWeatherImageDataTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWeatherImageDataTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeatherImageDataTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeatherImageDataTable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeatherImageDataTable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeatherImageDataTable, 1866989435);
	template<> WEATHERSTATUS_API UClass* StaticClass<UWeatherImageDataTable>()
	{
		return UWeatherImageDataTable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeatherImageDataTable(Z_Construct_UClass_UWeatherImageDataTable, &UWeatherImageDataTable::StaticClass, TEXT("/Script/WeatherStatus"), TEXT("UWeatherImageDataTable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeatherImageDataTable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
