// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BENDELORM_FPS/Character/BENDELORMFPSCharacter.h"
#include "Components/SkeletalMeshComponent.h"
#include "BENDELORM_FPS_SkeletalMeshComp.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
class BENDELORM_FPS_API UBENDELORM_FPS_SkeletalMeshComp : public USkeletalMeshComponent
{
	GENERATED_BODY()
public:
	UBENDELORM_FPS_SkeletalMeshComp();

	ABENDELORMFPSCharacter* Character;

	UFUNCTION(Blueprintable, BlueprintCallable, Category = "Object")
	void AttachComponentToPlayer(ABENDELORMFPSCharacter* TargetCharacter);

	UFUNCTION()
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponSettings")
	FVector GuntipOffset;


	//IMC and Actions

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputMappingContext* FireImc;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputAction* FireAction;

	UFUNCTION(BlueprintCallable, Category = "Input")
	void Fire();
	
	//Animation and Sound

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation and Sound")
	USoundBase* FireSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation and Sound")
	UAnimMontage* FireAnimation;

	//Projectile

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	TSubclassOf<AActor> ProjectileToSpawn;

};