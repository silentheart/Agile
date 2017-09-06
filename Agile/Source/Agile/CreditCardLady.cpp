// Fill out your copyright notice in the Description page of Project Settings.

#include "CreditCardLady.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/World.h"

// Sets default values
ACreditCardLady::ACreditCardLady() : Super()
{
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
	FVector NewLocation = GetActorLocation() + ((playerLocation - GetActorLocation()).GetSafeNormal() * MovementSpeed * DeltaTime);

	// Set each movement component individually, to enable sliding along surfaces
	FVector NewXLocation(NewLocation.X, OldLocation.Y, OldLocation.Z);
	SetActorLocation(NewXLocation, true);

	FVector NewYLocation(GetActorLocation().X, NewLocation.Y, GetActorLocation().Z);
	SetActorLocation(NewYLocation, true);
}


