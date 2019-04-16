// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
	I_R_API UClass* Z_Construct_UClass_AModule_NoRegister();
	I_R_API UClass* Z_Construct_UClass_AModule();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	I_R_API UFunction* Z_Construct_UFunction_AModule_PlaceActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	I_R_API UFunction* Z_Construct_UFunction_AModule_PlaceModule();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	I_R_API UFunction* Z_Construct_UFunction_AModule_Random_Module_Place();
	I_R_API UFunction* Z_Construct_UFunction_AModule_Randomly_Spawn_Actors();
// End Cross Module References
class UScriptStruct* FIs_Location_Taken::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern I_R_API uint32 Get_Z_Construct_UScriptStruct_FIs_Location_Taken_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIs_Location_Taken, Z_Construct_UPackage__Script_I_R(), TEXT("Is_Location_Taken"), sizeof(FIs_Location_Taken), Get_Z_Construct_UScriptStruct_FIs_Location_Taken_Hash());
	}
	return Singleton;
}
template<> I_R_API UScriptStruct* StaticStruct<FIs_Location_Taken>()
{
	return FIs_Location_Taken::StaticStruct();
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
		sizeof(FIs_Location_Taken),
		alignof(FIs_Location_Taken),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIs_Location_Taken_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FIs_Location_Taken_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIs_Location_Taken()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIs_Location_Taken_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_I_R();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Is_Location_Taken"), sizeof(FIs_Location_Taken), Get_Z_Construct_UScriptStruct_FIs_Location_Taken_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIs_Location_Taken_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIs_Location_Taken_Hash() { return 1610508742U; }
class UScriptStruct* FSpawn_Locations::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern I_R_API uint32 Get_Z_Construct_UScriptStruct_FSpawn_Locations_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawn_Locations, Z_Construct_UPackage__Script_I_R(), TEXT("Spawn_Locations"), sizeof(FSpawn_Locations), Get_Z_Construct_UScriptStruct_FSpawn_Locations_Hash());
	}
	return Singleton;
}
template<> I_R_API UScriptStruct* StaticStruct<FSpawn_Locations>()
{
	return FSpawn_Locations::StaticStruct();
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
		sizeof(FSpawn_Locations),
		alignof(FSpawn_Locations),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawn_Locations_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawn_Locations_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpawn_Locations()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpawn_Locations_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_I_R();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Spawn_Locations"), sizeof(FSpawn_Locations), Get_Z_Construct_UScriptStruct_FSpawn_Locations_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpawn_Locations_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpawn_Locations_Hash() { return 3221449147U; }
	void AModule::StaticRegisterNativesAModule()
	{
		UClass* Class = AModule::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlaceActor", &AModule::execPlaceActor },
			{ "PlaceModule", &AModule::execPlaceModule },
			{ "Random_Module_Place", &AModule::execRandom_Module_Place },
			{ "Randomly_Spawn_Actors", &AModule::execRandomly_Spawn_Actors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AModule_PlaceActor_Statics
	{
		struct Module_eventPlaceActor_Parms
		{
			TSubclassOf<AActor>  ToSpawn;
			FVector SpawnLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModule_PlaceActor_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Module_eventPlaceActor_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AModule_PlaceActor_Statics::NewProp_ToSpawn = { "ToSpawn", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Module_eventPlaceActor_Parms, ToSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModule_PlaceActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModule_PlaceActor_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModule_PlaceActor_Statics::NewProp_ToSpawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModule_PlaceActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpawnObjects" },
		{ "ModuleRelativePath", "Module.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModule_PlaceActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModule, nullptr, "PlaceActor", sizeof(Module_eventPlaceActor_Parms), Z_Construct_UFunction_AModule_PlaceActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AModule_PlaceActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModule_PlaceActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AModule_PlaceActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModule_PlaceActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModule_PlaceActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModule_PlaceModule_Statics
	{
		struct Module_eventPlaceModule_Parms
		{
			TSubclassOf<AActor>  Module;
			FVector Location;
			FRotator Rotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Module;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModule_PlaceModule_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Module_eventPlaceModule_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModule_PlaceModule_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Module_eventPlaceModule_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AModule_PlaceModule_Statics::NewProp_Module = { "Module", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Module_eventPlaceModule_Parms, Module), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModule_PlaceModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModule_PlaceModule_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModule_PlaceModule_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModule_PlaceModule_Statics::NewProp_Module,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModule_PlaceModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Module.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModule_PlaceModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModule, nullptr, "PlaceModule", sizeof(Module_eventPlaceModule_Parms), Z_Construct_UFunction_AModule_PlaceModule_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AModule_PlaceModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModule_PlaceModule_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AModule_PlaceModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModule_PlaceModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModule_PlaceModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModule_Random_Module_Place_Statics
	{
		struct Module_eventRandom_Module_Place_Parms
		{
			FVector Spawn_Location;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spawn_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModule_Random_Module_Place_Statics::NewProp_Spawn_Location = { "Spawn_Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Module_eventRandom_Module_Place_Parms, Spawn_Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModule_Random_Module_Place_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModule_Random_Module_Place_Statics::NewProp_Spawn_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModule_Random_Module_Place_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpawnObjects" },
		{ "ModuleRelativePath", "Module.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModule_Random_Module_Place_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModule, nullptr, "Random_Module_Place", sizeof(Module_eventRandom_Module_Place_Parms), Z_Construct_UFunction_AModule_Random_Module_Place_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AModule_Random_Module_Place_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModule_Random_Module_Place_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AModule_Random_Module_Place_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModule_Random_Module_Place()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModule_Random_Module_Place_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModule_Randomly_Spawn_Actors_Statics
	{
		struct Module_eventRandomly_Spawn_Actors_Parms
		{
			TSubclassOf<AActor>  ToSpawn;
			int32 Quantity;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AModule_Randomly_Spawn_Actors_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Module_eventRandomly_Spawn_Actors_Parms, Quantity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AModule_Randomly_Spawn_Actors_Statics::NewProp_ToSpawn = { "ToSpawn", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Module_eventRandomly_Spawn_Actors_Parms, ToSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModule_Randomly_Spawn_Actors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModule_Randomly_Spawn_Actors_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModule_Randomly_Spawn_Actors_Statics::NewProp_ToSpawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModule_Randomly_Spawn_Actors_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpawnObjects" },
		{ "ModuleRelativePath", "Module.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModule_Randomly_Spawn_Actors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModule, nullptr, "Randomly_Spawn_Actors", sizeof(Module_eventRandomly_Spawn_Actors_Parms), Z_Construct_UFunction_AModule_Randomly_Spawn_Actors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AModule_Randomly_Spawn_Actors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModule_Randomly_Spawn_Actors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AModule_Randomly_Spawn_Actors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModule_Randomly_Spawn_Actors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModule_Randomly_Spawn_Actors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AModule_NoRegister()
	{
		return AModule::StaticClass();
	}
	struct Z_Construct_UClass_AModule_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Module_05_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Module_05;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Module_04_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Module_04;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Module_03_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Module_03;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Module_02_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Module_02;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Module_01_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Module_01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Module_00_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Module_00;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_I_R,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AModule_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AModule_PlaceActor, "PlaceActor" }, // 3220570808
		{ &Z_Construct_UFunction_AModule_PlaceModule, "PlaceModule" }, // 2990721924
		{ &Z_Construct_UFunction_AModule_Random_Module_Place, "Random_Module_Place" }, // 2336216630
		{ &Z_Construct_UFunction_AModule_Randomly_Spawn_Actors, "Randomly_Spawn_Actors" }, // 493190470
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModule_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Module.h" },
		{ "ModuleRelativePath", "Module.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModule_Statics::NewProp_Module_05_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Module.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AModule_Statics::NewProp_Module_05 = { "Module_05", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModule, Module_05), Z_Construct_UClass_AModule_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AModule_Statics::NewProp_Module_05_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModule_Statics::NewProp_Module_05_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModule_Statics::NewProp_Module_04_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Module.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AModule_Statics::NewProp_Module_04 = { "Module_04", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModule, Module_04), Z_Construct_UClass_AModule_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AModule_Statics::NewProp_Module_04_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModule_Statics::NewProp_Module_04_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModule_Statics::NewProp_Module_03_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Module.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AModule_Statics::NewProp_Module_03 = { "Module_03", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModule, Module_03), Z_Construct_UClass_AModule_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AModule_Statics::NewProp_Module_03_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModule_Statics::NewProp_Module_03_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModule_Statics::NewProp_Module_02_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Module.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AModule_Statics::NewProp_Module_02 = { "Module_02", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModule, Module_02), Z_Construct_UClass_AModule_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AModule_Statics::NewProp_Module_02_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModule_Statics::NewProp_Module_02_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModule_Statics::NewProp_Module_01_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Module.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AModule_Statics::NewProp_Module_01 = { "Module_01", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModule, Module_01), Z_Construct_UClass_AModule_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AModule_Statics::NewProp_Module_01_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModule_Statics::NewProp_Module_01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModule_Statics::NewProp_Module_00_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Module.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AModule_Statics::NewProp_Module_00 = { "Module_00", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModule, Module_00), Z_Construct_UClass_AModule_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AModule_Statics::NewProp_Module_00_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModule_Statics::NewProp_Module_00_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModule_Statics::NewProp_Module_05,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModule_Statics::NewProp_Module_04,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModule_Statics::NewProp_Module_03,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModule_Statics::NewProp_Module_02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModule_Statics::NewProp_Module_01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModule_Statics::NewProp_Module_00,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AModule_Statics::ClassParams = {
		&AModule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AModule_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AModule_Statics::PropPointers),
		0,
		0x009000A0u,
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
	IMPLEMENT_CLASS(AModule, 2328379301);
	template<> I_R_API UClass* StaticClass<AModule>()
	{
		return AModule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModule(Z_Construct_UClass_AModule, &AModule::StaticClass, TEXT("/Script/I_R"), TEXT("AModule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
