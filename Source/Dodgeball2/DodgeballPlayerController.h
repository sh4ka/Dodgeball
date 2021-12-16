// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DodgeballPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class DODGEBALL2_API ADodgeballPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class URestartWidget> BP_RestartWidget;
private:
	UPROPERTY()
	class URestartWidget* RestartWidget;

public:
	void ShowRestartWidget();
	void HideRestartWidget();
};
