// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BENDELORM_FPS/Public/EnemyActor.h"
#include "Components/CapsuleComponent.h"
#include "BENDELORMFPSCapsuleComponent.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
class BENDELORM_FPS_API UBENDELORMFPSCapsuleComponent : public UCapsuleComponent
{
	GENERATED_BODY()

public:
	UBENDELORMFPSCapsuleComponent();

	virtual void BeginPlay() override;

	UFUNCTION()
	void OnCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};