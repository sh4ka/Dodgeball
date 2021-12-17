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

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UHUDWidget> BP_HudWidget;
	
private:
	UPROPERTY()
	class URestartWidget* RestartWidget;

	UPROPERTY()
	class UHUDWidget* HUDWidget;

public:
	void ShowRestartWidget();
	void HideRestartWidget();
	void UpdateHealthPercent(float HealthPercent);

protected:	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
