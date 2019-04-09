// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "I_R/Modules_generator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModules_generator() {}
// Cross Module References
	I_R_API UClass* Z_Construct_UClass_AModules_generator_NoRegister();
	I_R_API UClass* Z_Construct_UClass_AModules_generator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_I_R();
	I_R_API UFunction* Z_Construct_UFunction_AModules_generator_PlaceModule();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AModules_generator::StaticRegisterNativesAModules_generator()
	{
		UClass* Class = AModules_generator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlaceModule", &AModules_generator::execPlaceModule },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AModules_generator_PlaceModule_Statics
	{
		struct Modules_generator_eventPlaceModule_Parms
		{
			TSubclassOf<AActor>  Module;
			FVector Location;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Module;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModules_generator_PlaceModule_Statics::NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Modules_generator_eventPlaceModule_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AModules_generator_PlaceModule_Statics::NewProp_Module = { UE4CodeGen_Private::EPropertyClass::Class, "Module", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(Modules_generator_eventPlaceModule_Parms, Module), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModules_generator_PlaceModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModules_generator_PlaceModule_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModules_generator_PlaceModule_Statics::NewProp_Module,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModules_generator_PlaceModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Modules_generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModules_generator_PlaceModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModules_generator, "PlaceModule", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Modules_generator_eventPlaceModule_Parms), Z_Construct_UFunction_AModules_generator_PlaceModule_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AModules_generator_PlaceModule_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModules_generator_PlaceModule_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AModules_generator_PlaceModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModules_generator_PlaceModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModules_generator_PlaceModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AModules_generator_NoRegister()
	{
		return AModules_generator::StaticClass();
	}
	struct Z_Construct_UClass_AModules_generator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModules_generator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_I_R,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AModules_generator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AModules_generator_PlaceModule, "PlaceModule" }, // 1596675293
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModules_generator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Modules_generator.h" },
		{ "ModuleRelativePath", "Modules_generator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModules_generator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModules_generator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AModules_generator_Statics::ClassParams = {
		&AModules_generator::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AModules_generator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AModules_generator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModules_generator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AModules_generator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AModules_generator, 2567765163);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModules_generator(Z_Construct_UClass_AModules_generator, &AModules_generator::StaticClass, TEXT("/Script/I_R"), TEXT("AModules_generator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModules_generator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
