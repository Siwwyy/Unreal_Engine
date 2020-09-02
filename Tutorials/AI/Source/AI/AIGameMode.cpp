// Copyright Epic Games, Inc. All Rights Reserved.

#include "AIGameMode.h"
#include "AICharacter.h"
#include "UObject/ConstructorHelpers.h"

AAIGameMode::AAIGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
