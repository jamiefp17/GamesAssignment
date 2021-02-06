// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "CustomMovementComponent.h"
#include "Math/Vector.h"
#include "PlayerCharacterPawn.generated.h"

UCLASS()
class ASSIGNMENT_API APlayerCharacterPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerCharacterPawn();
	UPROPERTY(EditAnywhere)
		UCustomMovementComponent* playerMovement;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* playerMesh;
	UPROPERTY(EditAnywhere)
		USpringArmComponent* springArm;
	UPROPERTY(EditAnywhere)
		UCameraComponent* camera;
	UPROPERTY(EditAnywhere)
		FVector springArmSocketOffset = { 0.0f, 0.0f, 60.0f };
	
	
};
