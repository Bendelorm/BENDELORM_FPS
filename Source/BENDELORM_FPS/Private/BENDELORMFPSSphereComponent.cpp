// Fill out your copyright notice in the Description page of Project Settings.

#include "BENDELORM_FPS/Public/BENDELORMFPSSphereComponent.h"

UBENDELORMFPSSphereComponent::UBENDELORMFPSSphereComponent()
{
	SphereRadius = 30.f;
}

void UBENDELORMFPSSphereComponent::BeginPlay()
{
	Super::BeginPlay();

	OnComponentBeginOverlap.AddDynamic(this, &UBENDELORMFPSSphereComponent::OnSphereBeginOverlap);
}

void UBENDELORMFPSSphereComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
	const FHitResult& SweepResult)
{
	ABENDELORMFPSCharacter* Character = Cast<ABENDELORMFPSCharacter>(OtherActor);
	if(Character != nullptr)
	{
		OnPickUp.Broadcast(Character);

		OnComponentBeginOverlap.RemoveAll(this);
	}
}