// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomPlayerController.h"


void ACustomPlayerController::BeginPlay() 
{
	Super::BeginPlay();
	MyPawn = Cast<APlayerCharacterPawn>(GetPawn());
}
void ACustomPlayerController::SetupInputComponent() 
{
	Super::SetupInputComponent();
	
	check(InputComponent);
	InputComponent->BindAxis("Move Forwards", this, &ACustomPlayerController::CallForwards);
	InputComponent->BindAxis("Turn", this, &ACustomPlayerController::CallTurn);
	InputComponent->BindAction("Fire", EInputEvent::IE_Pressed, this,
		&ACustomPlayerController::CallFire);

}
void ACustomPlayerController::CallForwards(float Value)
{
	if (MyPawn) 
	{
		MyPawn->playerMovement->MoveForward(Value);
	}

}
void ACustomPlayerController::CallTurn(float Value)
{
	if (MyPawn)
	{
		MyPawn->playerMovement->Turn(Value);
	}
}
void ACustomPlayerController::CallFire()
{
	if (MyPawn)
	{
		MyPawn->playerMovement->Fire();
	}
}
