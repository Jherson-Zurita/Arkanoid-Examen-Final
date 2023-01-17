// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ARKANOID_Spawn_generated_h
#error "Spawn.generated.h already included, missing '#pragma once' in Spawn.h"
#endif
#define ARKANOID_Spawn_generated_h

#define Arkanoid_master_Source_Arkanoid_Spawn_h_15_SPARSE_DATA
#define Arkanoid_master_Source_Arkanoid_Spawn_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Arkanoid_master_Source_Arkanoid_Spawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Arkanoid_master_Source_Arkanoid_Spawn_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawn(); \
	friend struct Z_Construct_UClass_ASpawn_Statics; \
public: \
	DECLARE_CLASS(ASpawn, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arkanoid"), NO_API) \
	DECLARE_SERIALIZER(ASpawn)


#define Arkanoid_master_Source_Arkanoid_Spawn_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASpawn(); \
	friend struct Z_Construct_UClass_ASpawn_Statics; \
public: \
	DECLARE_CLASS(ASpawn, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arkanoid"), NO_API) \
	DECLARE_SERIALIZER(ASpawn)


#define Arkanoid_master_Source_Arkanoid_Spawn_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawn(ASpawn&&); \
	NO_API ASpawn(const ASpawn&); \
public:


#define Arkanoid_master_Source_Arkanoid_Spawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawn(ASpawn&&); \
	NO_API ASpawn(const ASpawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawn)


#define Arkanoid_master_Source_Arkanoid_Spawn_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxDetec() { return STRUCT_OFFSET(ASpawn, BoxDetec); }


#define Arkanoid_master_Source_Arkanoid_Spawn_h_12_PROLOG
#define Arkanoid_master_Source_Arkanoid_Spawn_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arkanoid_master_Source_Arkanoid_Spawn_h_15_PRIVATE_PROPERTY_OFFSET \
	Arkanoid_master_Source_Arkanoid_Spawn_h_15_SPARSE_DATA \
	Arkanoid_master_Source_Arkanoid_Spawn_h_15_RPC_WRAPPERS \
	Arkanoid_master_Source_Arkanoid_Spawn_h_15_INCLASS \
	Arkanoid_master_Source_Arkanoid_Spawn_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arkanoid_master_Source_Arkanoid_Spawn_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arkanoid_master_Source_Arkanoid_Spawn_h_15_PRIVATE_PROPERTY_OFFSET \
	Arkanoid_master_Source_Arkanoid_Spawn_h_15_SPARSE_DATA \
	Arkanoid_master_Source_Arkanoid_Spawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Arkanoid_master_Source_Arkanoid_Spawn_h_15_INCLASS_NO_PURE_DECLS \
	Arkanoid_master_Source_Arkanoid_Spawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARKANOID_API UClass* StaticClass<class ASpawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Arkanoid_master_Source_Arkanoid_Spawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
