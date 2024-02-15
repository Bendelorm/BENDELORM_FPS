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
	UBENDELORM_FPS_SkeletalMeshComp() = default;

	ABENDELORMFPSCharacter* Character;

	UFUNCTION(Blueprintable, BlueprintCallable, Category = "Object")
	void AttachComponentToPlayer(ABENDELORMFPSCharacter* TargetCharacter);

	UFUNCTION()
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

};