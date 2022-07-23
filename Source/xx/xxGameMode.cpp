// Copyright Epic Games, Inc. All Rights Reserved.

#include "xxGameMode.h"
#include "xxCharacter.h"
#include "UObject/ConstructorHelpers.h"

AxxGameMode::AxxGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
