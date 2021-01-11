// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "AdvancedVehicleHud.generated.h"

UCLASS(config = Game)
class AAdvancedVehicleHud : public AHUD
{
	GENERATED_BODY()

public:
	AAdvancedVehicleHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface

};
