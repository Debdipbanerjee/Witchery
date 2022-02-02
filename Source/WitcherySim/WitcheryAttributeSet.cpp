// Fill out your copyright notice in the Description page of Project Settings.


#include "WitcheryAttributeSet.h"
#include "Net/UnrealNetwork.h"

UWitcheryAttributeSet::UWitcheryAttributeSet() {
}

void UWitcheryAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UWitcheryAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UWitcheryAttributeSet, Mana, COND_None, REPNOTIFY_Always);
}

void UWitcheryAttributeSet::OnRep_Health(const FGameplayAttributeData& oldHealth) {
	GAMEPLAYATTRIBUTE_REPNOTIFY(UWitcheryAttributeSet, Health, oldHealth);
}

void UWitcheryAttributeSet::OnRep_Mana(const FGameplayAttributeData& oldMana) {
	GAMEPLAYATTRIBUTE_REPNOTIFY(UWitcheryAttributeSet, Mana, oldMana);
}
