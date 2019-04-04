// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
#ifdef I_R_Modules_generator_generated_h
#error "Modules_generator.generated.h already included, missing '#pragma once' in Modules_generator.h"
#endif
#define I_R_Modules_generator_generated_h

#define I_R_Source_I_R_Modules_generator_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlaceModule) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Module); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlaceModule(Z_Param_Module,Z_Param_Location); \
		P_NATIVE_END; \
	}


#define I_R_Source_I_R_Modules_generator_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlaceModule) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Module); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlaceModule(Z_Param_Module,Z_Param_Location); \
		P_NATIVE_END; \
	}


#define I_R_Source_I_R_Modules_generator_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAModules_generator(); \
	friend struct Z_Construct_UClass_AModules_generator_Statics; \
public: \
	DECLARE_CLASS(AModules_generator, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/I_R"), NO_API) \
	DECLARE_SERIALIZER(AModules_generator)


#define I_R_Source_I_R_Modules_generator_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAModules_generator(); \
	friend struct Z_Construct_UClass_AModules_generator_Statics; \
public: \
	DECLARE_CLASS(AModules_generator, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/I_R"), NO_API) \
	DECLARE_SERIALIZER(AModules_generator)


#define I_R_Source_I_R_Modules_generator_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AModules_generator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AModules_generator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModules_generator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModules_generator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AModules_generator(AModules_generator&&); \
	NO_API AModules_generator(const AModules_generator&); \
public:


#define I_R_Source_I_R_Modules_generator_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AModules_generator(AModules_generator&&); \
	NO_API AModules_generator(const AModules_generator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModules_generator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModules_generator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AModules_generator)


#define I_R_Source_I_R_Modules_generator_h_14_PRIVATE_PROPERTY_OFFSET
#define I_R_Source_I_R_Modules_generator_h_11_PROLOG
#define I_R_Source_I_R_Modules_generator_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	I_R_Source_I_R_Modules_generator_h_14_PRIVATE_PROPERTY_OFFSET \
	I_R_Source_I_R_Modules_generator_h_14_RPC_WRAPPERS \
	I_R_Source_I_R_Modules_generator_h_14_INCLASS \
	I_R_Source_I_R_Modules_generator_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define I_R_Source_I_R_Modules_generator_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	I_R_Source_I_R_Modules_generator_h_14_PRIVATE_PROPERTY_OFFSET \
	I_R_Source_I_R_Modules_generator_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	I_R_Source_I_R_Modules_generator_h_14_INCLASS_NO_PURE_DECLS \
	I_R_Source_I_R_Modules_generator_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID I_R_Source_I_R_Modules_generator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
