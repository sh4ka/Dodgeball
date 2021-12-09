// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DODGEBALL2_EnemyCharacter_generated_h
#error "EnemyCharacter.generated.h already included, missing '#pragma once' in EnemyCharacter.h"
#endif
#define DODGEBALL2_EnemyCharacter_generated_h

#define Dodgeball2_Source_Dodgeball2_EnemyCharacter_h_12_SPARSE_DATA
#define Dodgeball2_Source_Dodgeball2_EnemyCharacter_h_12_RPC_WRAPPERS
#define Dodgeball2_Source_Dodgeball2_EnemyCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Dodgeball2_Source_Dodgeball2_EnemyCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend struct Z_Construct_UClass_AEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dodgeball2"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacter)


#define Dodgeball2_Source_Dodgeball2_EnemyCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend struct Z_Construct_UClass_AEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dodgeball2"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacter)


#define Dodgeball2_Source_Dodgeball2_EnemyCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyCharacter(AEnemyCharacter&&); \
	NO_API AEnemyCharacter(const AEnemyCharacter&); \
public:


#define Dodgeball2_Source_Dodgeball2_EnemyCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyCharacter(AEnemyCharacter&&); \
	NO_API AEnemyCharacter(const AEnemyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyCharacter)


#define Dodgeball2_Source_Dodgeball2_EnemyCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SightSource() { return STRUCT_OFFSET(AEnemyCharacter, SightSource); }


#define Dodgeball2_Source_Dodgeball2_EnemyCharacter_h_9_PROLOG
#define Dodgeball2_Source_Dodgeball2_EnemyCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dodgeball2_Source_Dodgeball2_EnemyCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Dodgeball2_Source_Dodgeball2_EnemyCharacter_h_12_SPARSE_DATA \
	Dodgeball2_Source_Dodgeball2_EnemyCharacter_h_12_RPC_WRAPPERS \
	Dodgeball2_Source_Dodgeball2_EnemyCharacter_h_12_INCLASS \
	Dodgeball2_Source_Dodgeball2_EnemyCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dodgeball2_Source_Dodgeball2_EnemyCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dodgeball2_Source_Dodgeball2_EnemyCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Dodgeball2_Source_Dodgeball2_EnemyCharacter_h_12_SPARSE_DATA \
	Dodgeball2_Source_Dodgeball2_EnemyCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Dodgeball2_Source_Dodgeball2_EnemyCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Dodgeball2_Source_Dodgeball2_EnemyCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DODGEBALL2_API UClass* StaticClass<class AEnemyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dodgeball2_Source_Dodgeball2_EnemyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
