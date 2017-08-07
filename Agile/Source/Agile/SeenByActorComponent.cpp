// Fill out your copyright notice in the Description page of Project Settings.

#include "SeenByActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"


// Sets default values for this component's properties
USeenByActorComponent::USeenByActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USeenByActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USeenByActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

AActor* USeenByActorComponent::GetParentActor()
{
	auto Owner = GetOwner();
	if (Owner == nullptr)
	{
		return nullptr;
	}

	/*auto OwnerRootComp = Owner->GetRootComponent();
	if (OwnerRootComp == nullptr)
	{
		return nullptr;
	}

	auto AttachedParent = OwnerRootComp->GetAttachParent();
	if (AttachedParent == nullptr)
	{
		return nullptr;
	}

	auto AttachedParentOwner = AttachedParent->GetOwner();
	if (AttachedParentOwner == nullptr)
	{
		return nullptr;
	}*/

	return Owner;
}