// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BENDELORM_FPS/Character/BENDELORMFPSCharacter.h"
#include "Components/SphereComponent.h"
#include "BENDELORMFPSSphereComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPickUp, ABENDELORMFPSCharacter*, PickUpCharacter);

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
class BENDELORM_FPS_API UBENDELORMFPSSphereComponent : public USphereComponent
{
	GENERATED_BODY()
public:

	UPROPERTY(BlueprintAssignable, Category = "Interaction")
	FOnPickUp OnPickUp;

	UBENDELORMFPSSphereComponent();

	virtual void BeginPlay() override;

	UFUNCTION()
	void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};