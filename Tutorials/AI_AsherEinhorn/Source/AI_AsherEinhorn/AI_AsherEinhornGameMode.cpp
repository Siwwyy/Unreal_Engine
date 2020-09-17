// Copyright Epic Games, Inc. All Rights Reserved.

#include "AI_AsherEinhornGameMode.h"
#include "AI_AsherEinhornCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAI_AsherEinhornGameMode::AAI_AsherEinhornGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
