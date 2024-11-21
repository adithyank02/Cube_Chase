// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

#include "InputActionValue.h"

#include "PlayerCube.generated.h"

UCLASS()
class CUBECHASE_API APlayerCube : public ACharacter
{
	GENERATED_BODY()

public:
	
	APlayerCube();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	USpringArmComponent* CameraBoom;

	UPROPERTY(EditDefaultsOnly)
	UCameraComponent* PlayerCamera;

	virtual void Tick(float DeltaTime) override;

public:

	void MoveFunction(const FInputActionValue& InputValue);
};
