// Copyright Epic Games, Inc. All Rights Reserved.

#include "homework1GameMode.h"
#include "homework1HUD.h"
#include "homework1Character.h"
#include "UObject/ConstructorHelpers.h"

Ahomework1GameMode::Ahomework1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Ahomework1HUD::StaticClass();
}
