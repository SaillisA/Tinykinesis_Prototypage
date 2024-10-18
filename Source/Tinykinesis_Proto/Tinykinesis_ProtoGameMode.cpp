// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tinykinesis_ProtoGameMode.h"
#include "Tinykinesis_ProtoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATinykinesis_ProtoGameMode::ATinykinesis_ProtoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
