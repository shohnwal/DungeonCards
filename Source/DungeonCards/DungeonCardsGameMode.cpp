// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "DungeonCardsGameMode.h"
#include "DungeonCardsPlayerController.h"
#include "DungeonCardsCharacter.h"
#include "UObject/ConstructorHelpers.h"


ADungeonCardsGameMode::ADungeonCardsGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ADungeonCardsPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	
}

