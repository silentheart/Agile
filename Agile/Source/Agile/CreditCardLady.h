// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SampleLady.h"
#include "TargetNode.h"
#include "Runtime/Core/Public/Containers/Array.h"
#include "CreditCardLady.generated.h"

/**
 * 
 */
UCLASS()
class AGILE_API ACreditCardLady : public ASampleLady
{
	GENERATED_BODY()
	
public:
	// Sets default values for this character's properties
	ACreditCardLady();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere)
	float MovementSpeed = 300.0f;

	UPROPERTY(EditAnywhere)
	TArray<ATargetNode*> MovementTargets;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	ATargetNode* CurrentTarget;
	int CurrentTargetIndex;

	void MoveToTargetNode(float DeltaTime);
};
