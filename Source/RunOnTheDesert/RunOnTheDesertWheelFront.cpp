// Copyright Epic Games, Inc. All Rights Reserved.

#include "RunOnTheDesertWheelFront.h"
#include "UObject/ConstructorHelpers.h"

URunOnTheDesertWheelFront::URunOnTheDesertWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}