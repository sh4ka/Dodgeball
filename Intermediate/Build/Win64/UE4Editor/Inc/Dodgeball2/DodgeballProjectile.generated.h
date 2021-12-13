// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef DODGEBALL2_DodgeballProjectile_generated_h
#error "DodgeballProjectile.generated.h already included, missing '#pragma once' in DodgeballProjectile.h"
#endif
#define DODGEBALL2_DodgeballProjectile_generated_h

#define Dodgeball2_Source_Dodgeball2_DodgeballProjectile_h_12_SPARSE_DATA
#define Dodgeball2_Source_Dodgeball2_DodgeballProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Dodgeball2_Source_Dodgeball2_DodgeballProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Dodgeball2_Source_Dodgeball2_DodgeballProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADodgeballProjectile(); \
	friend struct Z_Construct_UClass_ADodgeballProjectile_Statics; \
public: \
	DECLARE_CLASS(ADodgeballProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dodgeball2"), NO_API) \
	DECLARE_SERIALIZER(ADodgeballProjectile)


#define Dodgeball2_Source_Dodgeball2_DodgeballProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADodgeballProjectile(); \
	friend struct Z_Construct_UClass_ADodgeballProjectile_Statics; \
public: \
	DECLARE_CLASS(ADodgeballProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dodgeball2"), NO_API) \
	DECLARE_SERIALIZER(ADodgeballProjectile)


#define Dodgeball2_Source_Dodgeball2_DodgeballProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADodgeballProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADodgeballProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADodgeballProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADodgeballProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADodgeballProjectile(ADodgeballProjectile&&); \
	NO_API ADodgeballProjectile(const ADodgeballProjectile&); \
public:


#define Dodgeball2_Source_Dodgeball2_DodgeballProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADodgeballProjectile(ADodgeballProjectile&&); \
	NO_API ADodgeballProjectile(const ADodgeballProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADodgeballProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADodgeballProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADodgeballProjectile)


#define Dodgeball2_Source_Dodgeball2_DodgeballProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SphereComponent() { return STRUCT_OFFSET(ADodgeballProjectile, SphereComponent); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ADodgeballProjectile, ProjectileMovement); }


#define Dodgeball2_Source_Dodgeball2_DodgeballProjectile_h_9_PROLOG
#define Dodgeball2_Source_Dodgeball2_DodgeballProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dodgeball2_Source_Dodgeball2_DodgeballProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Dodgeball2_Source_Dodgeball2_DodgeballProjectile_h_12_SPARSE_DATA \
	Dodgeball2_Source_Dodgeball2_DodgeballProjectile_h_12_RPC_WRAPPERS \
	Dodgeball2_Source_Dodgeball2_DodgeballProjectile_h_12_INCLASS \
	Dodgeball2_Source_Dodgeball2_DodgeballProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dodgeball2_Source_Dodgeball2_DodgeballProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dodgeball2_Source_Dodgeball2_DodgeballProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Dodgeball2_Source_Dodgeball2_DodgeballProjectile_h_12_SPARSE_DATA \
	Dodgeball2_Source_Dodgeball2_DodgeballProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Dodgeball2_Source_Dodgeball2_DodgeballProjectile_h_12_INCLASS_NO_PURE_DECLS \
	Dodgeball2_Source_Dodgeball2_DodgeballProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DODGEBALL2_API UClass* StaticClass<class ADodgeballProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dodgeball2_Source_Dodgeball2_DodgeballProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
