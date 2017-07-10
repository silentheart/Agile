// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "AgileGameMode.h"
#include "AgilePlayerController.h"
#include "AgileCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAgileGameMode::AAgileGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AAgilePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}