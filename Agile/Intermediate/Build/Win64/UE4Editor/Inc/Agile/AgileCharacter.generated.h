// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef AGILE_AgileCharacter_generated_h
#error "AgileCharacter.generated.h already included, missing '#pragma once' in AgileCharacter.h"
#endif
#define AGILE_AgileCharacter_generated_h

#define Agile_Source_Agile_AgileCharacter_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Agile_Source_Agile_AgileCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Agile_Source_Agile_AgileCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAgileCharacter(); \
	friend AGILE_API class UClass* Z_Construct_UClass_AAgileCharacter(); \
public: \
	DECLARE_CLASS(AAgileCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Agile"), NO_API) \
	DECLARE_SERIALIZER(AAgileCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Agile_Source_Agile_AgileCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAAgileCharacter(); \
	friend AGILE_API class UClass* Z_Construct_UClass_AAgileCharacter(); \
public: \
	DECLARE_CLASS(AAgileCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Agile"), NO_API) \
	DECLARE_SERIALIZER(AAgileCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Agile_Source_Agile_AgileCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAgileCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAgileCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAgileCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAgileCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAgileCharacter(AAgileCharacter&&); \
	NO_API AAgileCharacter(const AAgileCharacter&); \
public:


#define Agile_Source_Agile_AgileCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAgileCharacter(AAgileCharacter&&); \
	NO_API AAgileCharacter(const AAgileCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAgileCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAgileCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAgileCharacter)


#define Agile_Source_Agile_AgileCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(AAgileCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AAgileCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(AAgileCharacter, CursorToWorld); }


#define Agile_Source_Agile_AgileCharacter_h_10_PROLOG
#define Agile_Source_Agile_AgileCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Agile_Source_Agile_AgileCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	Agile_Source_Agile_AgileCharacter_h_13_RPC_WRAPPERS \
	Agile_Source_Agile_AgileCharacter_h_13_INCLASS \
	Agile_Source_Agile_AgileCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Agile_Source_Agile_AgileCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Agile_Source_Agile_AgileCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	Agile_Source_Agile_AgileCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Agile_Source_Agile_AgileCharacter_h_13_INCLASS_NO_PURE_DECLS \
	Agile_Source_Agile_AgileCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Agile_Source_Agile_AgileCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
