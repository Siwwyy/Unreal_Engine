// Copyright Epic Games, Inc. All Rights Reserved.

#include "InteractablesGameMode.h"
#include "InteractablesHUD.h"
#include "InteractablesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AInteractablesGameMode::AInteractablesGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AInteractablesHUD::StaticClass();
}
