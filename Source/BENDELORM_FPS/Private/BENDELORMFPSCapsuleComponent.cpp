// Fill out your copyright notice in the Description page of Project Settings.

#include "BENDELORM_FPS/Public/BENDELORMFPSCapsuleComponent.h"

UBENDELORMFPSCapsuleComponent::UBENDELORMFPSCapsuleComponent()
{
	CapsuleRadius = 30.f;
}

void UBENDELORMFPSCapsuleComponent::BeginPlay()
{
	Super::BeginPlay();

	OnComponentBeginOverlap.AddDynamic(this, &UBENDELORMFPSCapsuleComponent::OnCapsuleBeginOverlap);
}

void UBENDELORMFPSCapsuleComponent::OnCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
	const FHitResult& SweepResult)
{
	AEnemyActor* EnemyActor = Cast<AEnemyActor>(OtherActor);
	if (EnemyActor != nullptr)
	{
		OnComponentBeginOverlap.RemoveAll(this);
	}
}