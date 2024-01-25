// Fill out your copyright notice in the Description page of Project Settings.


#include "BENDELORM_FPS/Character/BENDELORMFPSCharacter.h"

// Sets default values
ABENDELORMFPSCharacter::ABENDELORMFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SKFPV = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FPSMesh"));
}

// Called when the game starts or when spawned
void ABENDELORMFPSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABENDELORMFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABENDELORMFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

