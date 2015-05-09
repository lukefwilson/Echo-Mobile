// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Echo.h"
#include "EchoGameMode.h"
#include "EchoHUD.h"
#include "EchoCharacter.h"

AEchoGameMode::AEchoGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AEchoHUD::StaticClass();
}
