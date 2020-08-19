// Copyright Epic Games, Inc. All Rights Reserved.

#include "Player_InputGameMode.h"
#include "Player_InputCharacter.h"
#include "UObject/ConstructorHelpers.h"

APlayer_InputGameMode::APlayer_InputGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
