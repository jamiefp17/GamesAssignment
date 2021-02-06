// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CustomMovementComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ASSIGNMENT_API UCustomMovementComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	void MoveForward(float AxisValue);
	void Turn(float AxisValue);
	void Fire();
	void Strafe(float AxisValue);
private:
	UPROPERTY(EditAnywhere)
		float MoveSpeed = 250.0f;
	UPROPERTY(EditAnywhere)
		float RotationSpeed = 500.0f;
		
};
