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

	// Create and position a mesh component so we can see where our sphere is
	UStaticMeshComponent* SampleLadyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualRepresentation"));
	SampleLadyMesh->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SampleLadyVisualAsset(TEXT("/Game/Geometry/Meshes/1M_Cube"));
	if (SampleLadyVisualAsset.Succeeded())
	{
		SampleLadyMesh->SetStaticMesh(SampleLadyVisualAsset.Object);
		SampleLadyMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
	RootComponent = SampleLadyMesh;

	// Create sphere components to make a cone of sight
	USphereComponent* SphereComponent1 = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent1"));
	SphereComponent1->AttachToComponent(RootComponent, FAttachmentTransformRules(EAttachmentRule::KeepRelative, false));
	SphereComponent1->InitSphereRadius(50.0f);
	SphereComponent1->bGenerateOverlapEvents = true;
	SphereComponent1->SetCollisionProfileName(TEXT("SampleLady1"));
	SphereComponent1->SetRelativeLocation(RootComponent->GetForwardVector() * 150);
	
	USphereComponent* SphereComponent2 = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent2"));
	SphereComponent2->AttachToComponent(RootComponent, FAttachmentTransformRules(EAttachmentRule::KeepRelative, false));
	SphereComponent2->InitSphereRadius(25.0f);
	SphereComponent2->bGenerateOverlapEvents = true;
	SphereComponent2->SetCollisionProfileName(TEXT("SampleLady2"));
	SphereComponent2->SetRelativeLocation(RootComponent->GetForwardVector() * 100);

	/*USphereComponent* SphereComponent3 = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent3"));
	SphereComponent3->AttachToComponent(RootComponent, FAttachmentTransformRules(EAttachmentRule::KeepRelative, false));
	SphereComponent3->InitSphereRadius(12.5f);
	SphereComponent3->bGenerateOverlapEvents = true;
	SphereComponent3->SetCollisionProfileName(TEXT("SampleLady3"));
	SphereComponent3->SetRelativeLocation(RootComponent->GetForwardVector() * 75);*/

	SetActorEnableCollision(true);

	// Register for collisions
	SphereComponent1->OnComponentBeginOverlap.AddDynamic(this, &ASampleLady::OnBeginOverlap);
	SphereComponent2->OnComponentBeginOverlap.AddDynamic(this, &ASampleLady::OnBeginOverlap);
	//SphereComponent3->OnComponentBeginOverlap.AddDynamic(this, &ASampleLady::OnBeginOverlap);
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

void ASampleLady::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	TArray<USeenByActorComponent*> SeenByActorComponents;

	OtherActor->GetComponents(SeenByActorComponents);

	if (SeenByActorComponents.Num() > 0)
	{
		USeenByActorComponent* SeenByActorComp = SeenByActorComponents[0];
		SeenByActorComp->InitiateActorSeen(this);
	}
}