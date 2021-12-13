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
struct FHitResult;
#ifdef DODGEBALL2_VictoryBox_generated_h
#error "VictoryBox.generated.h already included, missing '#pragma once' in VictoryBox.h"
#endif
#define DODGEBALL2_VictoryBox_generated_h

#define Dodgeball2_Source_Dodgeball2_VictoryBox_h_12_SPARSE_DATA
#define Dodgeball2_Source_Dodgeball2_VictoryBox_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Dodgeball2_Source_Dodgeball2_VictoryBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Dodgeball2_Source_Dodgeball2_VictoryBox_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVictoryBox(); \
	friend struct Z_Construct_UClass_AVictoryBox_Statics; \
public: \
	DECLARE_CLASS(AVictoryBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dodgeball2"), NO_API) \
	DECLARE_SERIALIZER(AVictoryBox)


#define Dodgeball2_Source_Dodgeball2_VictoryBox_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAVictoryBox(); \
	friend struct Z_Construct_UClass_AVictoryBox_Statics; \
public: \
	DECLARE_CLASS(AVictoryBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dodgeball2"), NO_API) \
	DECLARE_SERIALIZER(AVictoryBox)


#define Dodgeball2_Source_Dodgeball2_VictoryBox_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVictoryBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVictoryBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVictoryBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVictoryBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVictoryBox(AVictoryBox&&); \
	NO_API AVictoryBox(const AVictoryBox&); \
public:


#define Dodgeball2_Source_Dodgeball2_VictoryBox_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVictoryBox(AVictoryBox&&); \
	NO_API AVictoryBox(const AVictoryBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVictoryBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVictoryBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVictoryBox)


#define Dodgeball2_Source_Dodgeball2_VictoryBox_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RootScene() { return STRUCT_OFFSET(AVictoryBox, RootScene); } \
	FORCEINLINE static uint32 __PPO__CollisionBox() { return STRUCT_OFFSET(AVictoryBox, CollisionBox); }


#define Dodgeball2_Source_Dodgeball2_VictoryBox_h_9_PROLOG
#define Dodgeball2_Source_Dodgeball2_VictoryBox_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dodgeball2_Source_Dodgeball2_VictoryBox_h_12_PRIVATE_PROPERTY_OFFSET \
	Dodgeball2_Source_Dodgeball2_VictoryBox_h_12_SPARSE_DATA \
	Dodgeball2_Source_Dodgeball2_VictoryBox_h_12_RPC_WRAPPERS \
	Dodgeball2_Source_Dodgeball2_VictoryBox_h_12_INCLASS \
	Dodgeball2_Source_Dodgeball2_VictoryBox_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dodgeball2_Source_Dodgeball2_VictoryBox_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dodgeball2_Source_Dodgeball2_VictoryBox_h_12_PRIVATE_PROPERTY_OFFSET \
	Dodgeball2_Source_Dodgeball2_VictoryBox_h_12_SPARSE_DATA \
	Dodgeball2_Source_Dodgeball2_VictoryBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Dodgeball2_Source_Dodgeball2_VictoryBox_h_12_INCLASS_NO_PURE_DECLS \
	Dodgeball2_Source_Dodgeball2_VictoryBox_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DODGEBALL2_API UClass* StaticClass<class AVictoryBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dodgeball2_Source_Dodgeball2_VictoryBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
