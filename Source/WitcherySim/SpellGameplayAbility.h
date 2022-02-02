// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "WitcherySim.h"
#include "SpellGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class WITCHERYSIM_API USpellGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:
	USpellGameplayAbility();

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
	EHeroAbilityInputID AbilityInputID = EHeroAbilityInputID::None;
};