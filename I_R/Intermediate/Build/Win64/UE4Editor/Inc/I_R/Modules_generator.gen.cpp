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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AModules_generator::StaticRegisterNativesAModules_generator()
	{
	}
	UClass* Z_Construct_UClass_AModules_generator_NoRegister()
	{
		return AModules_generator::StaticClass();
	}
	struct Z_Construct_UClass_AModules_generator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Starting_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Starting_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Module_01_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Module_01;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModules_generator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_I_R,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModules_generator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Modules_generator.h" },
		{ "ModuleRelativePath", "Modules_generator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModules_generator_Statics::NewProp_Starting_Position_MetaData[] = {
		{ "Category", "Level properties" },
		{ "ModuleRelativePath", "Modules_generator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AModules_generator_Statics::NewProp_Starting_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Starting_Position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AModules_generator, Starting_Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AModules_generator_Statics::NewProp_Starting_Position_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModules_generator_Statics::NewProp_Starting_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModules_generator_Statics::NewProp_Module_01_MetaData[] = {
		{ "Category", "Rooms" },
		{ "ModuleRelativePath", "Modules_generator.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AModules_generator_Statics::NewProp_Module_01 = { UE4CodeGen_Private::EPropertyClass::Class, "Module_01", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(AModules_generator, Module_01), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AModules_generator_Statics::NewProp_Module_01_MetaData, ARRAY_COUNT(Z_Construct_UClass_AModules_generator_Statics::NewProp_Module_01_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModules_generator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModules_generator_Statics::NewProp_Starting_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModules_generator_Statics::NewProp_Module_01,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModules_generator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModules_generator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AModules_generator_Statics::ClassParams = {
		&AModules_generator::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AModules_generator_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AModules_generator_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AModules_generator, 85843171);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModules_generator(Z_Construct_UClass_AModules_generator, &AModules_generator::StaticClass, TEXT("/Script/I_R"), TEXT("AModules_generator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModules_generator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
