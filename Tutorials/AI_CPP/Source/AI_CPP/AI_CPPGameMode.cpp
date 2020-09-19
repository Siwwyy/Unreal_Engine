// Copyright Epic Games, Inc. All Rights Reserved.

#include "AI_CPPGameMode.h"
#include "AI_CPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAI_CPPGameMode::AAI_CPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
