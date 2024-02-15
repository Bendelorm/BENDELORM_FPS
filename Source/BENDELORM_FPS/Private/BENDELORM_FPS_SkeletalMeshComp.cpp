// Fill out your copyright notice in the Description page of Project Settings.


#include "BENDELORM_FPS/Public/BENDELORM_FPS_SkeletalMeshComp.h"

void UBENDELORM_FPS_SkeletalMeshComp::AttachComponentToPlayer(ABENDELORMFPSCharacter* TargetCharacter)
{
	Character = TargetCharacter;

	if(Character == nullptr || Character->GetHasWeapon())
	{
		return;
	}

	FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, true);
	AttachToComponent(Character->GetMeshSKFPV(), AttachmentRules, FName(TEXT("AttachSocket")));

	Character->SetHasWeapon(true);
}

void UBENDELORM_FPS_SkeletalMeshComp::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (Character == nullptr)
	{
		return;
	}
}
