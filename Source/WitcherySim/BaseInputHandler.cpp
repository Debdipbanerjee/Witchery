// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseInputHandler.h"

// Sets default values
ABaseInputHandler::ABaseInputHandler()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	InputVariables.Add(TEXT("PB1"), 10);
	InputVariables.Add(TEXT("PB2"), 0);
	InputVariables.Add(TEXT("PB3"), 0);
	InputVariables.Add(TEXT("Jx"), 0);
	InputVariables.Add(TEXT("Jy"), 0);
	InputVariables.Add(TEXT("JB"), 0);
	InputVariables.Add(TEXT("Rx"), 0);
	InputVariables.Add(TEXT("Ry"), 0);
	InputVariables.Add(TEXT("Rz"), 0);
}

// Called when the game starts or when spawned
void ABaseInputHandler::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseInputHandler::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

