// Copyright Epic Games, Inc. All Rights Reserved.

#include "RunOnTheDesertGameMode.h"
#include "RunOnTheDesertPlayerController.h"

ARunOnTheDesertGameMode::ARunOnTheDesertGameMode()
{
	PlayerControllerClass = ARunOnTheDesertPlayerController::StaticClass();
}
