// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DodgeballProjectile.generated.h"

UCLASS()
class DODGEBALL2_API ADodgeballProjectile : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Dodgeball, meta = (AllowPrivateAccess = "true"))
	class USphereComponent* SphereComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Dodgeball, meta = (AllowPrivateAccess = "true"))
	class UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(EditAnywhere, Category = Sound)
	class USoundBase* BounceSound;

	UPROPERTY(EditAnywhere, Category = Sound)
	class USoundBase* DamageSound;

	UPROPERTY(EditAnywhere, Category = Sound)
	class USoundAttenuation* BounceSoundAttenuation;
	
protected:

	virtual void BeginPlay() override;

	// The damage the dodgeball will deal to the player's character
	UPROPERTY(EditAnywhere, Category = Damage)
	float Damage = 34.f;
	
	UPROPERTY(EditAnywhere, Category = Particles)
	class UParticleSystem* HitParticles;

public:	

	ADodgeballProjectile();

	virtual void Tick(float DeltaTime) override;

	FORCEINLINE UProjectileMovementComponent* GetProjectileMovementComponent() const
	{
		return ProjectileMovement;
	}

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp,
			   AActor* OtherActor,
			   UPrimitiveComponent* OtherComp,
			   FVector NormalImpulse,
			   const FHitResult& Hit);
};
