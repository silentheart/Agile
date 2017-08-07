// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SeenByActorComponent.h"
#include "PlayerSeenByActorComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class AGILE_API UPlayerSeenByActorComponent : public USeenByActorComponent
{
	GENERATED_BODY()
	
public:
	UPlayerSeenByActorComponent();

	UFUNCTION(BlueprintCallable)
	virtual void InitiateActorSeen(AActor* viewer) override;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
private:
	float StunTime;
};
