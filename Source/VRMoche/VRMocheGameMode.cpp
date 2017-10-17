// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "VRMocheGameMode.h"
#include "VRMocheHUD.h"
#include "VRMocheCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVRMocheGameMode::AVRMocheGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AVRMocheHUD::StaticClass();
}
