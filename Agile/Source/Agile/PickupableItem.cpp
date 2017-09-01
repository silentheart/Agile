// Fill out your copyright notice in the Description page of Project Settings.

#include "PickupableItem.h"
#include "AgileCharacter.h"
#include "PickupComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

// Sets default values
APickupableItem::APickupableItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create and position a mesh component so we can see where our sphere is
	UStaticMeshComponent* PickupableItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualRepresentation"));
	PickupableItemMesh->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PickupableItemVisualAsset(TEXT("/Game/Geometry/Meshes/1M_Cube"));
	if (PickupableItemVisualAsset.Succeeded())
	{
		PickupableItemMesh->SetStaticMesh(PickupableItemVisualAsset.Object);
		PickupableItemMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
	RootComponent = PickupableItemMesh;

	// Attach components
	UPickupComponent* pickupComponent = CreateDefaultSubobject<UPickupComponent>(TEXT("PickupComponent"));
	pickupComponent->SetParentActor(this);
	AddOwnedComponent(pickupComponent);

	SetActorEnableCollision(true);
}

// Called when the game starts or when spawned
void APickupableItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickupableItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
