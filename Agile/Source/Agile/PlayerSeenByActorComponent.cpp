// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerSeenByActorComponent.h"
#include "AgileCharacter.h"
#include "SampleLady.h"

UPlayerSeenByActorComponent::UPlayerSeenByActorComponent()
{
	StunTime = 0;
	StunCooldown = 0;
	bPlayerSeen = false;
}

void UPlayerSeenByActorComponent::InitiateActorSeen(AActor* viewer)
{
	UE_LOG(LogTemp, Log, TEXT("UPlayerSeenByActorComponent::InitiateActorSeen"));

	AAgileCharacter* player = Cast<AAgileCharacter>(GetParentActor());
	ASampleLady* lady = Cast<ASampleLady>(viewer);
	if (player != nullptr && lady != nullptr)
	{
		StunTime = lady->GetStunTime();
		player->SetCanMove(false);
		bPlayerSeen = true;
	}
}

// Called every frame
void UPlayerSeenByActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bPlayerSeen && StunCooldown == 0)
	{
		if (StunTime == 0)
		{
			AAgileCharacter* player = Cast<AAgileCharacter>(GetParentActor());
			if (player != nullptr)
			{
				player->SetCanMove(true);
				bPlayerSeen = false;
				StunCooldown = 90;
			}
		}
		else if (StunTime > 0)
		{
			--StunTime;
		}
	}
	else if (StunCooldown > 0)
	{
		--StunCooldown;
	}
}