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
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_APlayerController();
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();

	AGILE_API class UFunction* Z_Construct_UFunction_AAgileCharacter_OnBeginOverlap();
	AGILE_API class UClass* Z_Construct_UClass_AAgileCharacter_NoRegister();
	AGILE_API class UClass* Z_Construct_UClass_AAgileCharacter();
	AGILE_API class UClass* Z_Construct_UClass_AAgileGameMode_NoRegister();
	AGILE_API class UClass* Z_Construct_UClass_AAgileGameMode();
	AGILE_API class UClass* Z_Construct_UClass_AAgilePlayerController_NoRegister();
	AGILE_API class UClass* Z_Construct_UClass_AAgilePlayerController();
	AGILE_API class UClass* Z_Construct_UClass_UInteractionComponent_NoRegister();
	AGILE_API class UClass* Z_Construct_UClass_UInteractionComponent();
	AGILE_API class UClass* Z_Construct_UClass_UPickupComponent_NoRegister();
	AGILE_API class UClass* Z_Construct_UClass_UPickupComponent();
	AGILE_API class UClass* Z_Construct_UClass_APickupableItem_NoRegister();
	AGILE_API class UClass* Z_Construct_UClass_APickupableItem();
	AGILE_API class UFunction* Z_Construct_UFunction_ASampleLady_OnBeginOverlap();
	AGILE_API class UClass* Z_Construct_UClass_ASampleLady_NoRegister();
	AGILE_API class UClass* Z_Construct_UClass_ASampleLady();
	AGILE_API class UClass* Z_Construct_UClass_ATargetNode_NoRegister();
	AGILE_API class UClass* Z_Construct_UClass_ATargetNode();
	AGILE_API class UClass* Z_Construct_UClass_ACreditCardLady_NoRegister();
	AGILE_API class UClass* Z_Construct_UClass_ACreditCardLady();
	AGILE_API class UFunction* Z_Construct_UFunction_USeenByActorComponent_InitiateActorSeen();
	AGILE_API class UClass* Z_Construct_UClass_USeenByActorComponent_NoRegister();
	AGILE_API class UClass* Z_Construct_UClass_USeenByActorComponent();
	AGILE_API class UFunction* Z_Construct_UFunction_UPlayerSeenByActorComponent_InitiateActorSeen();
	AGILE_API class UClass* Z_Construct_UClass_UPlayerSeenByActorComponent_NoRegister();
	AGILE_API class UClass* Z_Construct_UClass_UPlayerSeenByActorComponent();
	AGILE_API class UPackage* Z_Construct_UPackage__Script_Agile();
	void AAgileCharacter::StaticRegisterNativesAAgileCharacter()
	{
		UClass* Class = AAgileCharacter::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnBeginOverlap", (Native)&AAgileCharacter::execOnBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_AAgileCharacter_OnBeginOverlap()
	{
		struct AgileCharacter_eventOnBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		UObject* Outer=Z_Construct_UClass_AAgileCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnBeginOverlap"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00440401, 65535, sizeof(AgileCharacter_eventOnBeginOverlap_Parms));
			UProperty* NewProp_SweepResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SweepResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SweepResult, AgileCharacter_eventOnBeginOverlap_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFromSweep, AgileCharacter_eventOnBeginOverlap_Parms, bool);
			UProperty* NewProp_bFromSweep = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bFromSweep"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFromSweep, AgileCharacter_eventOnBeginOverlap_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bFromSweep, AgileCharacter_eventOnBeginOverlap_Parms), sizeof(bool), true);
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, AgileCharacter_eventOnBeginOverlap_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, AgileCharacter_eventOnBeginOverlap_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, AgileCharacter_eventOnBeginOverlap_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComponent, AgileCharacter_eventOnBeginOverlap_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("AgileCharacter.h"));
			MetaData->SetValue(NewProp_SweepResult, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
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

				OuterClass->LinkChild(Z_Construct_UFunction_AAgileCharacter_OnBeginOverlap());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_CursorToWorld = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CursorToWorld"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CursorToWorld, AAgileCharacter), 0x00400000000a001d, Z_Construct_UClass_UDecalComponent_NoRegister());
				UProperty* NewProp_CameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, AAgileCharacter), 0x00400000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
				UProperty* NewProp_TopDownCameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TopDownCameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TopDownCameraComponent, AAgileCharacter), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_MovementSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MovementSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MovementSpeed, AAgileCharacter), 0x0010000000000001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AAgileCharacter_OnBeginOverlap(), "OnBeginOverlap"); // 1588204250
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
				MetaData->SetValue(NewProp_MovementSpeed, TEXT("Category"), TEXT("AgileCharacter"));
				MetaData->SetValue(NewProp_MovementSpeed, TEXT("ModuleRelativePath"), TEXT("AgileCharacter.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAgileCharacter, 3364438562);
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
	void UInteractionComponent::StaticRegisterNativesUInteractionComponent()
	{
	}
	UClass* Z_Construct_UClass_UInteractionComponent_NoRegister()
	{
		return UInteractionComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UInteractionComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_Agile();
			OuterClass = UInteractionComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UInteractionComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InteractionComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("InteractionComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionComponent, 1370176308);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionComponent(Z_Construct_UClass_UInteractionComponent, &UInteractionComponent::StaticClass, TEXT("/Script/Agile"), TEXT("UInteractionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionComponent);
	void UPickupComponent::StaticRegisterNativesUPickupComponent()
	{
	}
	UClass* Z_Construct_UClass_UPickupComponent_NoRegister()
	{
		return UPickupComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UPickupComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UInteractionComponent();
			Z_Construct_UPackage__Script_Agile();
			OuterClass = UPickupComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UPickupComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PickupComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PickupComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPickupComponent, 73578440);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPickupComponent(Z_Construct_UClass_UPickupComponent, &UPickupComponent::StaticClass, TEXT("/Script/Agile"), TEXT("UPickupComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPickupComponent);
	void APickupableItem::StaticRegisterNativesAPickupableItem()
	{
	}
	UClass* Z_Construct_UClass_APickupableItem_NoRegister()
	{
		return APickupableItem::StaticClass();
	}
	UClass* Z_Construct_UClass_APickupableItem()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Agile();
			OuterClass = APickupableItem::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<APickupableItem> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PickupableItem.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PickupableItem.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickupableItem, 3587158896);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickupableItem(Z_Construct_UClass_APickupableItem, &APickupableItem::StaticClass, TEXT("/Script/Agile"), TEXT("APickupableItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupableItem);
	void ASampleLady::StaticRegisterNativesASampleLady()
	{
		UClass* Class = ASampleLady::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnBeginOverlap", (Native)&ASampleLady::execOnBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_ASampleLady_OnBeginOverlap()
	{
		struct SampleLady_eventOnBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		UObject* Outer=Z_Construct_UClass_ASampleLady();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnBeginOverlap"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00440401, 65535, sizeof(SampleLady_eventOnBeginOverlap_Parms));
			UProperty* NewProp_SweepResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SweepResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SweepResult, SampleLady_eventOnBeginOverlap_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFromSweep, SampleLady_eventOnBeginOverlap_Parms, bool);
			UProperty* NewProp_bFromSweep = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bFromSweep"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFromSweep, SampleLady_eventOnBeginOverlap_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bFromSweep, SampleLady_eventOnBeginOverlap_Parms), sizeof(bool), true);
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, SampleLady_eventOnBeginOverlap_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, SampleLady_eventOnBeginOverlap_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, SampleLady_eventOnBeginOverlap_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComponent, SampleLady_eventOnBeginOverlap_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("SampleLady.h"));
			MetaData->SetValue(NewProp_SweepResult, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASampleLady_NoRegister()
	{
		return ASampleLady::StaticClass();
	}
	UClass* Z_Construct_UClass_ASampleLady()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_Agile();
			OuterClass = ASampleLady::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ASampleLady_OnBeginOverlap());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_StunTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StunTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StunTime, ASampleLady), 0x0010000000000001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASampleLady_OnBeginOverlap(), "OnBeginOverlap"); // 3164159964
				static TCppClassTypeInfo<TCppClassTypeTraits<ASampleLady> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SampleLady.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("SampleLady.h"));
				MetaData->SetValue(NewProp_StunTime, TEXT("Category"), TEXT("SampleLady"));
				MetaData->SetValue(NewProp_StunTime, TEXT("ModuleRelativePath"), TEXT("SampleLady.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASampleLady, 1929734299);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASampleLady(Z_Construct_UClass_ASampleLady, &ASampleLady::StaticClass, TEXT("/Script/Agile"), TEXT("ASampleLady"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASampleLady);
	void ATargetNode::StaticRegisterNativesATargetNode()
	{
	}
	UClass* Z_Construct_UClass_ATargetNode_NoRegister()
	{
		return ATargetNode::StaticClass();
	}
	UClass* Z_Construct_UClass_ATargetNode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Agile();
			OuterClass = ATargetNode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<ATargetNode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TargetNode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("TargetNode.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATargetNode, 157073740);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATargetNode(Z_Construct_UClass_ATargetNode, &ATargetNode::StaticClass, TEXT("/Script/Agile"), TEXT("ATargetNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATargetNode);
	void ACreditCardLady::StaticRegisterNativesACreditCardLady()
	{
	}
	UClass* Z_Construct_UClass_ACreditCardLady_NoRegister()
	{
		return ACreditCardLady::StaticClass();
	}
	UClass* Z_Construct_UClass_ACreditCardLady()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ASampleLady();
			Z_Construct_UPackage__Script_Agile();
			OuterClass = ACreditCardLady::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_MovementTargets = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MovementTargets"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(MovementTargets, ACreditCardLady), 0x0010000000000001);
				UProperty* NewProp_MovementTargets_Inner = new(EC_InternalUseOnlyConstructor, NewProp_MovementTargets, TEXT("MovementTargets"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_ATargetNode_NoRegister());
				UProperty* NewProp_MovementSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MovementSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MovementSpeed, ACreditCardLady), 0x0010000000000001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<ACreditCardLady> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CreditCardLady.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("CreditCardLady.h"));
				MetaData->SetValue(NewProp_MovementTargets, TEXT("Category"), TEXT("CreditCardLady"));
				MetaData->SetValue(NewProp_MovementTargets, TEXT("ModuleRelativePath"), TEXT("CreditCardLady.h"));
				MetaData->SetValue(NewProp_MovementSpeed, TEXT("Category"), TEXT("CreditCardLady"));
				MetaData->SetValue(NewProp_MovementSpeed, TEXT("ModuleRelativePath"), TEXT("CreditCardLady.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACreditCardLady, 2393691814);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACreditCardLady(Z_Construct_UClass_ACreditCardLady, &ACreditCardLady::StaticClass, TEXT("/Script/Agile"), TEXT("ACreditCardLady"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACreditCardLady);
	void USeenByActorComponent::StaticRegisterNativesUSeenByActorComponent()
	{
		UClass* Class = USeenByActorComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "InitiateActorSeen", (Native)&USeenByActorComponent::execInitiateActorSeen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_USeenByActorComponent_InitiateActorSeen()
	{
		struct SeenByActorComponent_eventInitiateActorSeen_Parms
		{
			AActor* viewer;
		};
		UObject* Outer=Z_Construct_UClass_USeenByActorComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InitiateActorSeen"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020400, 65535, sizeof(SeenByActorComponent_eventInitiateActorSeen_Parms));
			UProperty* NewProp_viewer = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("viewer"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(viewer, SeenByActorComponent_eventInitiateActorSeen_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("SeenByActorComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USeenByActorComponent_NoRegister()
	{
		return USeenByActorComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USeenByActorComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_Agile();
			OuterClass = USeenByActorComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;

				OuterClass->LinkChild(Z_Construct_UFunction_USeenByActorComponent_InitiateActorSeen());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USeenByActorComponent_InitiateActorSeen(), "InitiateActorSeen"); // 2657010224
				static TCppClassTypeInfo<TCppClassTypeTraits<USeenByActorComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SeenByActorComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("SeenByActorComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USeenByActorComponent, 2323572051);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USeenByActorComponent(Z_Construct_UClass_USeenByActorComponent, &USeenByActorComponent::StaticClass, TEXT("/Script/Agile"), TEXT("USeenByActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USeenByActorComponent);
	void UPlayerSeenByActorComponent::StaticRegisterNativesUPlayerSeenByActorComponent()
	{
		UClass* Class = UPlayerSeenByActorComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "InitiateActorSeen", (Native)&UPlayerSeenByActorComponent::execInitiateActorSeen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_UPlayerSeenByActorComponent_InitiateActorSeen()
	{
		struct PlayerSeenByActorComponent_eventInitiateActorSeen_Parms
		{
			AActor* viewer;
		};
		UObject* Outer=Z_Construct_UClass_UPlayerSeenByActorComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InitiateActorSeen"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020400, 65535, sizeof(PlayerSeenByActorComponent_eventInitiateActorSeen_Parms));
			UProperty* NewProp_viewer = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("viewer"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(viewer, PlayerSeenByActorComponent_eventInitiateActorSeen_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("PlayerSeenByActorComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerSeenByActorComponent_NoRegister()
	{
		return UPlayerSeenByActorComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UPlayerSeenByActorComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USeenByActorComponent();
			Z_Construct_UPackage__Script_Agile();
			OuterClass = UPlayerSeenByActorComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;

				OuterClass->LinkChild(Z_Construct_UFunction_UPlayerSeenByActorComponent_InitiateActorSeen());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPlayerSeenByActorComponent_InitiateActorSeen(), "InitiateActorSeen"); // 3048316186
				static TCppClassTypeInfo<TCppClassTypeTraits<UPlayerSeenByActorComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PlayerSeenByActorComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PlayerSeenByActorComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerSeenByActorComponent, 3560708099);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerSeenByActorComponent(Z_Construct_UClass_UPlayerSeenByActorComponent, &UPlayerSeenByActorComponent::StaticClass, TEXT("/Script/Agile"), TEXT("UPlayerSeenByActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerSeenByActorComponent);
	UPackage* Z_Construct_UPackage__Script_Agile()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Agile")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xB795E04B;
			Guid.B = 0xDBBF8112;
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
