// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseInputHandler.generated.h"

UCLASS(Blueprintable)
class WITCHERYSIM_API ABaseInputHandler : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Map)
	TMap<FString, float> InputVariables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Map)
	int TestVariable;
	
public:	
	// Sets default values for this actor's properties
	ABaseInputHandler();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
