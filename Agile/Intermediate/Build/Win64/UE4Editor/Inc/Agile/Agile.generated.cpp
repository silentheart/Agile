// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Agile.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1Agile() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_APlayerController();

	AGILE_API class UClass* Z_Construct_UClass_AAgileCharacter_NoRegister();
	AGILE_API class UClass* Z_Construct_UClass_AAgileCharacter();
	AGILE_API class UClass* Z_Construct_UClass_AAgileGameMode_NoRegister();
	AGILE_API class UClass* Z_Construct_UClass_AAgileGameMode();
	AGILE_API class UClass* Z_Construct_UClass_AAgilePlayerController_NoRegister();
	AGILE_API class UClass* Z_Construct_UClass_AAgilePlayerController();
	AGILE_API class UPackage* Z_Construct_UPackage__Script_Agile();
	void AAgileCharacter::StaticRegisterNativesAAgileCharacter()
	{
	}
	UClass* Z_Construct_UClass_AAgileCharacter_NoRegister()
	{
		return AAgileCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AAgileCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_Agile();
			OuterClass = AAgileCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_CursorToWorld = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CursorToWorld"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CursorToWorld, AAgileCharacter), 0x00400000000a001d, Z_Construct_UClass_UDecalComponent_NoRegister());
				UProperty* NewProp_CameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, AAgileCharacter), 0x00400000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
				UProperty* NewProp_TopDownCameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TopDownCameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TopDownCameraComponent, AAgileCharacter), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<AAgileCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AgileCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AgileCharacter.h"));
				MetaData->SetValue(NewProp_CursorToWorld, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CursorToWorld, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CursorToWorld, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CursorToWorld, TEXT("ModuleRelativePath"), TEXT("AgileCharacter.h"));
				MetaData->SetValue(NewProp_CursorToWorld, TEXT("ToolTip"), TEXT("A decal that projects to the cursor location."));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ModuleRelativePath"), TEXT("AgileCharacter.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ToolTip"), TEXT("Camera boom positioning the camera above the character"));
				MetaData->SetValue(NewProp_TopDownCameraComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_TopDownCameraComponent, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_TopDownCameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_TopDownCameraComponent, TEXT("ModuleRelativePath"), TEXT("AgileCharacter.h"));
				MetaData->SetValue(NewProp_TopDownCameraComponent, TEXT("ToolTip"), TEXT("Top down camera"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAgileCharacter, 4053537371);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAgileCharacter(Z_Construct_UClass_AAgileCharacter, &AAgileCharacter::StaticClass, TEXT("/Script/Agile"), TEXT("AAgileCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAgileCharacter);
	void AAgileGameMode::StaticRegisterNativesAAgileGameMode()
	{
	}
	UClass* Z_Construct_UClass_AAgileGameMode_NoRegister()
	{
		return AAgileGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AAgileGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_Agile();
			OuterClass = AAgileGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20880288;


				static TCppClassTypeInfo<TCppClassTypeTraits<AAgileGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AgileGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AgileGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAgileGameMode, 265841443);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAgileGameMode(Z_Construct_UClass_AAgileGameMode, &AAgileGameMode::StaticClass, TEXT("/Script/Agile"), TEXT("AAgileGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAgileGameMode);
	void AAgilePlayerController::StaticRegisterNativesAAgilePlayerController()
	{
	}
	UClass* Z_Construct_UClass_AAgilePlayerController_NoRegister()
	{
		return AAgilePlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_AAgilePlayerController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerController();
			Z_Construct_UPackage__Script_Agile();
			OuterClass = AAgilePlayerController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800284;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AAgilePlayerController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AgilePlayerController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AgilePlayerController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAgilePlayerController, 1842954706);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAgilePlayerController(Z_Construct_UClass_AAgilePlayerController, &AAgilePlayerController::StaticClass, TEXT("/Script/Agile"), TEXT("AAgilePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAgilePlayerController);
	UPackage* Z_Construct_UPackage__Script_Agile()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Agile")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x64A73889;
			Guid.B = 0xFA34FD6E;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
