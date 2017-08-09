// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "SampleLady.generated.h"

UCLASS()
class AGILE_API ASampleLady : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASampleLady();

	UPROPERTY(EditAnywhere)
	float StunTime = 10.0f * 60;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float GetStunTime() { return StunTime; };

private:
	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
};
