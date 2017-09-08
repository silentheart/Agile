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
	/*GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 20.0f, 20.0f);
	bUseControllerRotationYaw = false;*/
}

// Called every frame
void ACreditCardLady::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	auto world = GetWorld();
	if (world == nullptr) return;

	auto playerController = world->GetFirstPlayerController();
	if (playerController == nullptr) return;

	auto playerPawn = playerController->GetPawn();
	if (playerPawn == nullptr) return;

	auto playerLocation = playerPawn->GetActorLocation();
	
	// Move towards player
	FVector OldLocation = GetActorLocation();
	auto distToPlayer = (playerLocation - GetActorLocation()).GetSafeNormal();
	FVector NewLocation = GetActorLocation() + (distToPlayer * MovementSpeed * DeltaTime);

	// Set each movement component individually, to enable sliding along surfaces
	FVector NewXLocation(NewLocation.X, OldLocation.Y, OldLocation.Z);
	SetActorLocation(NewXLocation, true);

	FVector NewYLocation(GetActorLocation().X, NewLocation.Y, GetActorLocation().Z);
	SetActorLocation(NewYLocation, true);

	auto dirVec = GetActorRotation().Vector();
	auto dotProd = FVector::DotProduct(dirVec, distToPlayer);

	int angleSign = 1;
	if (dotProd < 0)
	{
		angleSign = -1;
	}

	FRotator NewRotation = FRotator(0, GetActorRotation().Yaw + acos(dotProd) * angleSign, 0);
	SetActorRotation(NewRotation);
}


