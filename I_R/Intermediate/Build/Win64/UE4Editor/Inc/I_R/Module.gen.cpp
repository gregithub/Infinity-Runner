// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "I_R/Module.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModule() {}
// Cross Module References
	I_R_API UScriptStruct* Z_Construct_UScriptStruct_FIs_Location_Taken();
	UPackage* Z_Construct_UPackage__Script_I_R();
	I_R_API UScriptStruct* Z_Construct_UScriptStruct_FSpawn_Locations();
	I_R_API UScriptStruct* Z_Construct_UScriptStruct_FSpawn_Position();
	I_R_API UClass* Z_Construct_UClass_AModule_NoRegister();
	I_R_API UClass* Z_Construct_UClass_AModule();
	I_R_API UClass* Z_Construct_UClass_AModules_generator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FIs_Location_Taken::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern I_R_API uint32 Get_Z_Construct_UScriptStruct_FIs_Location_Taken_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIs_Location_Taken, Z_Construct_UPackage__Script_I_R(), TEXT("Is_Location_Taken"), sizeof(FIs_Location_Taken), Get_Z_Construct_UScriptStruct_FIs_Location_Taken_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIs_Location_Taken(FIs_Location_Taken::StaticStruct, TEXT("/Script/I_R"), TEXT("Is_Location_Taken"), false, nullptr, nullptr);
static struct FScriptStruct_I_R_StaticRegisterNativesFIs_Location_Taken
{
	FScriptStruct_I_R_StaticRegisterNativesFIs_Location_Taken()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Is_Location_Taken")),new UScriptStruct::TCppStructOps<FIs_Location_Taken>);
	}
} ScriptStruct_I_R_StaticRegisterNativesFIs_Location_Taken;
	struct Z_Construct_UScriptStruct_FIs_Location_Taken_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIs_Location_Taken_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Module.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIs_Location_Taken_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIs_Location_Taken>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIs_Location_Taken_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_I_R,
		nullptr,
		&NewStructOps,
		"Is_Location_Taken",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FIs_Location_Taken),
		alignof(FIs_Location_Taken),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIs_Location_Taken_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FIs_Location_Taken_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIs_Location_Taken()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIs_Location_Taken_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_I_R();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Is_Location_Taken"), sizeof(FIs_Location_Taken), Get_Z_Construct_UScriptStruct_FIs_Location_Taken_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIs_Location_Taken_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIs_Location_Taken_CRC() { return 1848936617U; }
class UScriptStruct* FSpawn_Locations::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern I_R_API uint32 Get_Z_Construct_UScriptStruct_FSpawn_Locations_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawn_Locations, Z_Construct_UPackage__Script_I_R(), TEXT("Spawn_Locations"), sizeof(FSpawn_Locations), Get_Z_Construct_UScriptStruct_FSpawn_Locations_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpawn_Locations(FSpawn_Locations::StaticStruct, TEXT("/Script/I_R"), TEXT("Spawn_Locations"), false, nullptr, nullptr);
static struct FScriptStruct_I_R_StaticRegisterNativesFSpawn_Locations
{
	FScriptStruct_I_R_StaticRegisterNativesFSpawn_Locations()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Spawn_Locations")),new UScriptStruct::TCppStructOps<FSpawn_Locations>);
	}
} ScriptStruct_I_R_StaticRegisterNativesFSpawn_Locations;
	struct Z_Construct_UScriptStruct_FSpawn_Locations_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawn_Locations_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Module.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpawn_Locations_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawn_Locations>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawn_Locations_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_I_R,
		nullptr,
		&NewStructOps,
		"Spawn_Locations",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSpawn_Locations),
		alignof(FSpawn_Locations),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawn_Locations_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawn_Locations_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpawn_Locations()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpawn_Locations_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_I_R();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Spawn_Locations"), sizeof(FSpawn_Locations), Get_Z_Construct_UScriptStruct_FSpawn_Locations_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpawn_Locations_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpawn_Locations_CRC() { return 1184039125U; }
class UScriptStruct* FSpawn_Position::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern I_R_API uint32 Get_Z_Construct_UScriptStruct_FSpawn_Position_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawn_Position, Z_Construct_UPackage__Script_I_R(), TEXT("Spawn_Position"), sizeof(FSpawn_Position), Get_Z_Construct_UScriptStruct_FSpawn_Position_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpawn_Position(FSpawn_Position::StaticStruct, TEXT("/Script/I_R"), TEXT("Spawn_Position"), false, nullptr, nullptr);
static struct FScriptStruct_I_R_StaticRegisterNativesFSpawn_Position
{
	FScriptStruct_I_R_StaticRegisterNativesFSpawn_Position()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Spawn_Position")),new UScriptStruct::TCppStructOps<FSpawn_Position>);
	}
} ScriptStruct_I_R_StaticRegisterNativesFSpawn_Position;
	struct Z_Construct_UScriptStruct_FSpawn_Position_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawn_Position_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Module.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpawn_Position_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawn_Position>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawn_Position_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_I_R,
		nullptr,
		&NewStructOps,
		"Spawn_Position",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSpawn_Position),
		alignof(FSpawn_Position),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawn_Position_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawn_Position_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpawn_Position()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpawn_Position_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_I_R();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Spawn_Position"), sizeof(FSpawn_Position), Get_Z_Construct_UScriptStruct_FSpawn_Position_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpawn_Position_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpawn_Position_CRC() { return 491484786U; }
	void AModule::StaticRegisterNativesAModule()
	{
	}
	UClass* Z_Construct_UClass_AModule_NoRegister()
	{
		return AModule::StaticClass();
	}
	struct Z_Construct_UClass_AModule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawn_01_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Spawn_01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objects_to_spawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Objects_to_spawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AModules_generator,
		(UObject* (*)())Z_Construct_UPackage__Script_I_R,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModule_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Module.h" },
		{ "ModuleRelativePath", "Module.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModule_Statics::NewProp_Spawn_01_MetaData[] = {
		{ "Category", "Spawn_objects" },
		{ "ModuleRelativePath", "Module.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AModule_Statics::NewProp_Spawn_01 = { UE4CodeGen_Private::EPropertyClass::Class, "Spawn_01", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(AModule, Spawn_01), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AModule_Statics::NewProp_Spawn_01_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModule_Statics::NewProp_Spawn_01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModule_Statics::NewProp_Objects_to_spawn_MetaData[] = {
		{ "Category", "Spawn_properties" },
		{ "ModuleRelativePath", "Module.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AModule_Statics::NewProp_Objects_to_spawn = { UE4CodeGen_Private::EPropertyClass::Int, "Objects_to_spawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AModule, Objects_to_spawn), METADATA_PARAMS(Z_Construct_UClass_AModule_Statics::NewProp_Objects_to_spawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModule_Statics::NewProp_Objects_to_spawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModule_Statics::NewProp_Spawn_01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModule_Statics::NewProp_Objects_to_spawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AModule_Statics::ClassParams = {
		&AModule::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AModule_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AModule_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AModule_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AModule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AModule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AModule, 766942032);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModule(Z_Construct_UClass_AModule, &AModule::StaticClass, TEXT("/Script/I_R"), TEXT("AModule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
