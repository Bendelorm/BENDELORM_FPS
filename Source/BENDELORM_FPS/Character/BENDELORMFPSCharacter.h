// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputSubsystemInterface.h"
#include "GameFramework/Character.h"
#include "BENDELORMFPSCharacter.generated.h"

struct FInputActionValue;
class UCameraComponent;
class UInputComponent;
class UInputAction;
class UInputMappingContext;

UCLASS()
class BENDELORM_FPS_API ABENDELORMFPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABENDELORMFPSCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Components

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraComponent* FPVCameraComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent* SKFPV;

	//Input Mapping Context and Actions
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* IMC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* JumpAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* LookAction;

	void Move(const FInputActionValue& Value);

	void LookAround(const FInputActionValue& Value);

	//Weapon
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon")
	bool bHasWeapon;

	UFUNCTION(BlueprintCallable, Category = "Weapon")
	void SetHasWeapon(bool bHasNewWeapon);

	UFUNCTION(BlueprintCallable, Category = "Weapon")
	bool GetHasWeapon();

	USkeletalMeshComponent* GetMeshSKFPV() const;

	UCameraComponent* GetSKFPVCameraComponent() const;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
