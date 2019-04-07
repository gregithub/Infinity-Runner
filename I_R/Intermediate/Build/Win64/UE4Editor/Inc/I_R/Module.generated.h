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
#ifdef I_R_Module_generated_h
#error "Module.generated.h already included, missing '#pragma once' in Module.h"
#endif
#define I_R_Module_generated_h

#define I_R_Source_I_R_Module_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIs_Location_Taken_Statics; \
	I_R_API static class UScriptStruct* StaticStruct();


#define I_R_Source_I_R_Module_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpawn_Locations_Statics; \
	I_R_API static class UScriptStruct* StaticStruct();


#define I_R_Source_I_R_Module_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlaceActor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ToSpawn); \
		P_GET_STRUCT(FVector,Z_Param_SpawnLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlaceActor(Z_Param_ToSpawn,Z_Param_SpawnLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomly_Spawn_Actors) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ToSpawn); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Quantity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Randomly_Spawn_Actors(Z_Param_ToSpawn,Z_Param_Quantity); \
		P_NATIVE_END; \
	}


#define I_R_Source_I_R_Module_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlaceActor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ToSpawn); \
		P_GET_STRUCT(FVector,Z_Param_SpawnLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlaceActor(Z_Param_ToSpawn,Z_Param_SpawnLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomly_Spawn_Actors) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ToSpawn); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Quantity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Randomly_Spawn_Actors(Z_Param_ToSpawn,Z_Param_Quantity); \
		P_NATIVE_END; \
	}


#define I_R_Source_I_R_Module_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAModule(); \
	friend struct Z_Construct_UClass_AModule_Statics; \
public: \
	DECLARE_CLASS(AModule, AModules_generator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/I_R"), NO_API) \
	DECLARE_SERIALIZER(AModule)


#define I_R_Source_I_R_Module_h_33_INCLASS \
private: \
	static void StaticRegisterNativesAModule(); \
	friend struct Z_Construct_UClass_AModule_Statics; \
public: \
	DECLARE_CLASS(AModule, AModules_generator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/I_R"), NO_API) \
	DECLARE_SERIALIZER(AModule)


#define I_R_Source_I_R_Module_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AModule(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AModule) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModule); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModule); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AModule(AModule&&); \
	NO_API AModule(const AModule&); \
public:


#define I_R_Source_I_R_Module_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AModule(AModule&&); \
	NO_API AModule(const AModule&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModule); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModule); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AModule)


#define I_R_Source_I_R_Module_h_33_PRIVATE_PROPERTY_OFFSET
#define I_R_Source_I_R_Module_h_30_PROLOG
#define I_R_Source_I_R_Module_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	I_R_Source_I_R_Module_h_33_PRIVATE_PROPERTY_OFFSET \
	I_R_Source_I_R_Module_h_33_RPC_WRAPPERS \
	I_R_Source_I_R_Module_h_33_INCLASS \
	I_R_Source_I_R_Module_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define I_R_Source_I_R_Module_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	I_R_Source_I_R_Module_h_33_PRIVATE_PROPERTY_OFFSET \
	I_R_Source_I_R_Module_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	I_R_Source_I_R_Module_h_33_INCLASS_NO_PURE_DECLS \
	I_R_Source_I_R_Module_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID I_R_Source_I_R_Module_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
