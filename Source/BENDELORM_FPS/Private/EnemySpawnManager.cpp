// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySpawnManager.h"

// Sets default values
AEnemySpawnManager::AEnemySpawnManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemySpawnManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemySpawnManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TimeToLive += DeltaTime;
	if (TimeToLive >= 2.0f)
	{
		TimeToLive -= 2.0f;

		FVector loc = GetActorLocation();
		//Calculate a random spawn position
		float SpawnX = FMath::RandRange(loc.X + 1.0f, loc.X + 1000.0f);
		float SpawnY = FMath::RandRange(loc.Y + 1.0f, loc.X + 1000.0f);
		float SpawnZ = loc.Z + 1000.0f; //Spawn above ground
		FVector SpawnPosition = FVector(SpawnX, SpawnY, SpawnZ);

		//spawn the raindrop
		GetWorld()->SpawnActor<AEnemyActor>(EnemyClass, SpawnPosition, FRotator::ZeroRotator);
	}
}