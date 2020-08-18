// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstGameMode.h"
#include "FirstCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirstGameMode::AFirstGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
