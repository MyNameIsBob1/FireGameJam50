// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Firejam2GameMode.h"
#include "Firejam2Character.h"
#include "UObject/ConstructorHelpers.h"

AFirejam2GameMode::AFirejam2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
