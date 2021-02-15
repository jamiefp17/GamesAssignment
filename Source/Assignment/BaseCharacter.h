// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "ProjectileActor.h"
#include "Camera/CameraComponent.h"

#include "Math/Vector.h"
#include "BaseCharacter.generated.h"

class UCustomMovementComponent;

UCLASS()
class ASSIGNMENT_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();
	//virtual void SetupInputComponent(UInputComponent* playerInput);

	UPROPERTY(EditAnywhere)
		UCustomMovementComponent* playerMovement;

	//Children
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* playerMesh;
	UPROPERTY(EditAnywhere)
		USpringArmComponent* springArm;
	UPROPERTY(EditAnywhere)
		UCameraComponent* camera;
	UPROPERTY(EditAnywhere)
		USceneComponent* projectileSpawnPoint;

	//Variables on Children
	UPROPERTY(VisibleAnywhere)
		FVector springArmSocketOffset = { 0.0f, 0.0f, 50.0f };
	UPROPERTY(VisibleAnywhere)
		FVector SpringArmLocation = {0.0f, 30.0f, 70.0f};
	UPROPERTY(VisibleAnywhere)
		FVector projectileLocalPosition = {400.0f, -30.0f, -60.0f}; //The Spawnpoint for the projectiles fired by the player relative to the model
	UPROPERTY(VisibleAnywhere)
		FRotator projectileRotation = { 0.0f, 0.0f, 0.0f };




};
