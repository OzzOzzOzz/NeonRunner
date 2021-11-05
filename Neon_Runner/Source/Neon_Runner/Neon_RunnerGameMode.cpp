// Copyright Epic Games, Inc. All Rights Reserved.

#include "Neon_RunnerGameMode.h"
#include "Neon_RunnerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANeon_RunnerGameMode::ANeon_RunnerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
