// Fill out your copyright notice in the Description page of Project Settings.

#include "SampleLady.h"
#include "SeenByActorComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"


// Sets default values
ASampleLady::ASampleLady()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Our root component will be a sphere that reacts to physics
	USphereComponent* SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
	RootComponent = SphereComponent;
	SphereComponent->InitSphereRadius(40.0f);
	SphereComponent->SetCollisionProfileName(TEXT("SampleLady"));

	// Create and position a mesh component so we can see where our sphere is
	UStaticMeshComponent* SampleLadyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualRepresentation"));
	SampleLadyMesh->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SampleLadyVisualAsset(TEXT("/Game/Geometry/Meshes/1M_Cube"));
	if (SampleLadyVisualAsset.Succeeded())
	{
		SampleLadyMesh->SetStaticMesh(SampleLadyVisualAsset.Object);
		SampleLadyMesh->SetRelativeLocation(FVector(0.0f, 0.0f, -40.0f));
		//SampleLadyMesh->SetWorldScale3D(FVector(0.8f));
	}

	// Register for collisions
	SphereComponent->OnComponentHit.AddDynamic(this, &ASampleLady::OnHit);
}

// Called when the game starts or when spawned
void ASampleLady::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASampleLady::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASampleLady::OnHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	TArray<USeenByActorComponent*> SeenByActorComponents;

	OtherActor->GetComponents(SeenByActorComponents);

	if (SeenByActorComponents.Num() > 0)
	{
		USeenByActorComponent* SeenByActorComp = SeenByActorComponents[0];
		SeenByActorComp->InitiateActorSeen(this);
	}
}