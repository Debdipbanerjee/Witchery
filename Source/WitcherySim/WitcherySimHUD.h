// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "WitcherySimHUD.generated.h"

UCLASS()
class AWitcherySimHUD : public AHUD
{
	GENERATED_BODY()

public:
	AWitcherySimHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

