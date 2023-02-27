// Copyright Epic Games, Inc. All Rights Reserved.

#include "NebulaSimpleGameGameMode.h"
#include "NebulaSimpleGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANebulaSimpleGameGameMode::ANebulaSimpleGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
