// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerCharacterPawn.h"
#include "CustomMovementComponent.h"
#include "CustomPlayerController.generated.h"

UCLASS()
class ASSIGNMENT_API ACustomPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;
public:
	virtual void SetupInputComponent();
	virtual void CallForwards(float Value);
	virtual void CallTurn(float Value);
	virtual void CallFire();
	virtual void CallStrafe(float Value);

	APlayerCharacterPawn* MyPawn;
};
