// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"

#include "InputMappingContext.h"
#include "InputActionValue.h"

#include "CubePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class CUBECHASE_API ACubePlayerController : public APlayerController
{
	GENERATED_BODY()

protected:

	void BeginPlay()override;

private:

	UPROPERTY(EditDefaultsOnly, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* PlayerMappingContext;

	UPROPERTY(EditDefaultsOnly, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveInputAction;

	
};
