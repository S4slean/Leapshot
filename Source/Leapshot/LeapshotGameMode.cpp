// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "LeapshotGameMode.h"
#include "LeapshotCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALeapshotGameMode::ALeapshotGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
