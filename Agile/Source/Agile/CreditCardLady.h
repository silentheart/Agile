// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SampleLady.h"
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
};
