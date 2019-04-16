// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef I_R_I_RGameModeBase_generated_h
#error "I_RGameModeBase.generated.h already included, missing '#pragma once' in I_RGameModeBase.h"
#endif
#define I_R_I_RGameModeBase_generated_h

#define I_R_Source_I_R_I_RGameModeBase_h_15_RPC_WRAPPERS
#define I_R_Source_I_R_I_RGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define I_R_Source_I_R_I_RGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAI_RGameModeBase(); \
	friend struct Z_Construct_UClass_AI_RGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AI_RGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/I_R"), NO_API) \
	DECLARE_SERIALIZER(AI_RGameModeBase)


#define I_R_Source_I_R_I_RGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAI_RGameModeBase(); \
	friend struct Z_Construct_UClass_AI_RGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AI_RGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/I_R"), NO_API) \
	DECLARE_SERIALIZER(AI_RGameModeBase)


#define I_R_Source_I_R_I_RGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AI_RGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AI_RGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AI_RGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AI_RGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AI_RGameModeBase(AI_RGameModeBase&&); \
	NO_API AI_RGameModeBase(const AI_RGameModeBase&); \
public:


#define I_R_Source_I_R_I_RGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AI_RGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AI_RGameModeBase(AI_RGameModeBase&&); \
	NO_API AI_RGameModeBase(const AI_RGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AI_RGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AI_RGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AI_RGameModeBase)


#define I_R_Source_I_R_I_RGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define I_R_Source_I_R_I_RGameModeBase_h_12_PROLOG
#define I_R_Source_I_R_I_RGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	I_R_Source_I_R_I_RGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	I_R_Source_I_R_I_RGameModeBase_h_15_RPC_WRAPPERS \
	I_R_Source_I_R_I_RGameModeBase_h_15_INCLASS \
	I_R_Source_I_R_I_RGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define I_R_Source_I_R_I_RGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	I_R_Source_I_R_I_RGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	I_R_Source_I_R_I_RGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	I_R_Source_I_R_I_RGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	I_R_Source_I_R_I_RGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> I_R_API UClass* StaticClass<class AI_RGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID I_R_Source_I_R_I_RGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
