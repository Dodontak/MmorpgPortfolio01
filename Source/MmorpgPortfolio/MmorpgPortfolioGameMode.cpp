// Copyright Epic Games, Inc. All Rights Reserved.

#include "MmorpgPortfolioGameMode.h"
#include "MmorpgPortfolioCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMmorpgPortfolioGameMode::AMmorpgPortfolioGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
