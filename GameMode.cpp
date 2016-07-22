// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "MyProject7.h"
#include "MyProject7GameMode.h"
#include "MyProject7Character.h"

AMyProject7GameMode::AMyProject7GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
