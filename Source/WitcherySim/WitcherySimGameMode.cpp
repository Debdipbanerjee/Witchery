// Copyright Epic Games, Inc. All Rights Reserved.

#include "WitcherySimGameMode.h"
#include "WitcherySimHUD.h"
#include "WitcherySimCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWitcherySimGameMode::AWitcherySimGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AWitcherySimHUD::StaticClass();
}
