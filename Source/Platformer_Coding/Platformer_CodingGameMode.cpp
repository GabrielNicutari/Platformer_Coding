// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Platformer_CodingGameMode.h"
#include "Platformer_CodingCharacter.h"
#include "UObject/ConstructorHelpers.h"

APlatformer_CodingGameMode::APlatformer_CodingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
