// Copyright Epic Games, Inc. All Rights Reserved.

#include "AdvancedObsMechanicsGameMode.h"
#include "AdvancedObsMechanicsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAdvancedObsMechanicsGameMode::AAdvancedObsMechanicsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
