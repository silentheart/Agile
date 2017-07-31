// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/PlayerSeenByActorComponent.h"
#include "AgileCharacter.h"
#include "SampleLady.h"

UPlayerSeenByActorComponent::UPlayerSeenByActorComponent()
{
	StunTime = 0;
}

void UPlayerSeenByActorComponent::InitiateActorSeen(AActor* viewer)
{
	AAgileCharacter* player = Cast<AAgileCharacter>(GetParentActor());
	ASampleLady* lady = Cast<ASampleLady>(viewer);
	if (player != nullptr && lady != nullptr)
	{
		StunTime = lady->GetStunTime();
		player->SetCanMove(false);
	}
}

// Called every frame
void UPlayerSeenByActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (StunTime <= 0)
	{
		AAgileCharacter* player = Cast<AAgileCharacter>(GetParentActor());
		if (player != nullptr)
		{
			player->SetCanMove(true);
		}
	}
	else
		StunTime--;
}