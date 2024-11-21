// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerController/CubePlayerController.h"

#include "Player/PlayerCube.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"


void ACubePlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
	{
		//Setting Up The Mapping Context
		Subsystem->ClearAllMappings();
		Subsystem->AddMappingContext(PlayerMappingContext, 0);
	}


	if (UEnhancedInputComponent* EnhancedInput = Cast <UEnhancedInputComponent>(this->InputComponent))
	{
		if (APlayerCube* CubePlayer = Cast<APlayerCube>(GetPawn()))
		{
			//Binding InputAction And The Correspoding Functions
			EnhancedInput->BindAction(MoveInputAction, ETriggerEvent::Triggered, CubePlayer, &APlayerCube::MoveFunction);
		}
	}

}
