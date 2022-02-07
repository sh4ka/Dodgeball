// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UObject/Object.h"
#include "RestartWidget.generated.h"

/**
 * 
 */
UCLASS()
class DODGEBALL2_API URestartWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget, OptionalWidget = true))
	class UButton* RestartButton;
	
	UPROPERTY(meta = (BindWidget, OptionalWidget = true))
	class UButton* ExitButton;

public:
	virtual void NativeOnInitialized() override;

protected:
	UFUNCTION()
	void OnRestartClicked();

	UFUNCTION()
	void OnExitClicked();
};
