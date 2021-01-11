// Copyright Epic Games, Inc. All Rights Reserved.

#include "AdvancedVehicleGameMode.h"
#include "AdvancedVehiclePawn.h"
#include "AdvancedVehicleHud.h"

AAdvancedVehicleGameMode::AAdvancedVehicleGameMode()
{
	DefaultPawnClass = AAdvancedVehiclePawn::StaticClass();
	HUDClass = AAdvancedVehicleHud::StaticClass();
}
