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
	I_R_API UClass* Z_Construct_UClass_AModule_NoRegister();
	I_R_API UClass* Z_Construct_UClass_AModule();
	I_R_API UClass* Z_Construct_UClass_AModules_generator();
	UPackage* Z_Construct_UPackage__Script_I_R();
// End Cross Module References
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AModule_Statics::ClassParams = {
		&AModule::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
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
	IMPLEMENT_CLASS(AModule, 458381045);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModule(Z_Construct_UClass_AModule, &AModule::StaticClass, TEXT("/Script/I_R"), TEXT("AModule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
