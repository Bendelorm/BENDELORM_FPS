// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyActor.h"
#include "EnemySpawnManager.generated.h"

UCLASS()
class BENDELORM_FPS_API AEnemySpawnManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemySpawnManager();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float TimeToLive;
	UPROPERTY(EditAnywhere, Category = "Enemy")
	TSubclassOf<class AEnemyActor> EnemyClass;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
