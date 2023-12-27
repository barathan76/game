// Copyright Epic Games, Inc. All Rights Reserved.

#include "sample_gameGameMode.h"
#include "sample_gameCharacter.h"
#include "UObject/ConstructorHelpers.h"

Asample_gameGameMode::Asample_gameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
