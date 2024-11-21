// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/PlayerCube.h"


APlayerCube::APlayerCube()
{
	PrimaryActorTick.bCanEverTick = false;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	CameraBoom->SetupAttachment(RootComponent);

	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	PlayerCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

}

void APlayerCube::BeginPlay()
{
	Super::BeginPlay();
	
}

void APlayerCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlayerCube::MoveFunction(const FInputActionValue& InputValue)
{
	FVector2D MovementValue = InputValue.Get<FVector2D>();

	AddMovementInput(GetActorForwardVector(), MovementValue.X);
	AddMovementInput(GetActorRightVector(), MovementValue.Y);
}


