// Copyright Epic Games, Inc. All Rights Reserved.

#include "Light_Door2GameMode.h"
#include "Light_Door2Character.h"
#include "UObject/ConstructorHelpers.h"

ALight_Door2GameMode::ALight_Door2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
