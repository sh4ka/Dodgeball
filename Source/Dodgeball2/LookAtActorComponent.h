// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Components/SceneComponent.h"
#include "LookAtActorComponent.generated.h"

/**
 * 
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DODGEBALL2_API ULookAtActorComponent : public USceneComponent
{
	GENERATED_BODY()

protected:
	bool LookAtActor();
	AActor* TargetActor;
	bool bCanSeeTarget = false;

public:
	ULookAtActorComponent();
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	FORCEINLINE void SetTarget(AActor* NewTarget) {TargetActor = NewTarget;}
	FORCEINLINE bool CanSeeTarget() {return bCanSeeTarget;}
};
