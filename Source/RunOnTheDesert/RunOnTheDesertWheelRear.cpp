// Copyright Epic Games, Inc. All Rights Reserved.

#include "RunOnTheDesertWheelRear.h"
#include "UObject/ConstructorHelpers.h"

URunOnTheDesertWheelRear::URunOnTheDesertWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}