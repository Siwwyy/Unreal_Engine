// Copyright Epic Games, Inc. All Rights Reserved.

#include "Light_DoorGameMode.h"
#include "Light_DoorCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALight_DoorGameMode::ALight_DoorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
