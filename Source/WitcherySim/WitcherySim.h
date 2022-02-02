// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

UENUM(BlueprintType)
enum class EHeroAbilityInputID: uint8 {
	// 0 None
	None			UMETA(DisplayName = "None"),
	// 1 Confirm
	Confirm			UMETA(DisplayName = "Confirm"),
	// 2 Cancel
	Cancel			UMETA(DisplayName = "Cancel"),
	// 3 LMB
	Spell1		UMETA(DisplayName = "Ability1"),
	// 4 RMB
	Spell2		UMETA(DisplayName = "Ability2"),
	// 5 Q
	Shield		UMETA(DisplayName = "Shield"),
};