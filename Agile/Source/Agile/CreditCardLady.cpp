// Fill out your copyright notice in the Description page of Project Settings.

#include "CreditCardLady.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Core/Public/GenericPlatform/GenericPlatformMath.h"

// Sets default values
ACreditCardLady::ACreditCardLady() : Super()
{
	CurrentTargetIndex = 0;
}

// Called when the game starts or when spawned
void ACreditCardLady::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ACreditCardLady::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	MoveToTargetNode(DeltaTime);
}

void ACreditCardLady::MoveToTargetNode(float DeltaTime)
{
	if (MovementTargets.Num() < 1)
	{
		return;
	}

	auto targetLocation = MovementTargets[CurrentTargetIndex]->GetActorLocation();

	// Move towards target
	FVector OldLocation = GetActorLocation();
	auto distToTarget = (targetLocation - GetActorLocation()).GetSafeNormal();
	FVector NewLocation = GetActorLocation() + (distToTarget * MovementSpeed * DeltaTime);

	// Set each movement component individually, to enable sliding along surfaces
	FVector NewXLocation(NewLocation.X, OldLocation.Y, OldLocation.Z);
	SetActorLocation(NewXLocation, true);

	FVector NewYLocation(GetActorLocation().X, NewLocation.Y, GetActorLocation().Z);
	SetActorLocation(NewYLocation, true);

    // Rotate the actor to look at target. Need to move to object space to get an accurate angle
    auto theta = atan2(distToTarget.Y, distToTarget.X);
	SetActorRotation(FRotator(0, FMath::RadiansToDegrees(theta), 0));

	auto dist = FVector::DistXY(GetActorLocation(), targetLocation);

	if (dist < .01f)
	{
		auto oldIndex = CurrentTargetIndex;
		CurrentTargetIndex = (CurrentTargetIndex + 1) % MovementTargets.Num();
	}
}

