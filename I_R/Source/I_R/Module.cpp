// Fill out your copyright notice in the Description page of Project Settings.

#include "Module.h"
#include"Engine/World.h"


// Sets default values
AModule::AModule()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	
}

// Called when the game starts or when spawned
void AModule::BeginPlay()
{
	Super::BeginPlay();
	Spawn_Locations = Set_Locations_for_spawn();

	PlaceActor(Spawn_01, Spawn_Locations.Location_first);
}

FSpawn_Locations AModule::Set_Locations_for_spawn() {
	FSpawn_Locations Locations;
	Locations.Location_first = FVector(500, -400, 100);
	Locations.Location_second = FVector(500, -200, 100);
	Locations.Location_third = FVector(500, 200, 100);
	Locations.Location_fourth= FVector(500, -400, 100);
	
	return Locations;
}
void AModule::PlaceActors(TSubclassOf<AActor> ToSpawn, int MinSpawn, int MaxSpawn, float Radius, float MinScale, float MaxScale)
{
	TArray<FSpawn_Position> SpawnPositions = RandomSpawnPositions(MinSpawn, MaxSpawn, Radius, MinScale, MaxScale);
	for (FSpawn_Position SpawnPosition : SpawnPositions)
	{
		UE_LOG(LogTemp, Warning, TEXT("IM HERE"));

		PlaceActor(ToSpawn, SpawnPosition);
	}
}

TArray<FSpawn_Position> AModule::RandomSpawnPositions(int MinSpawn, int MaxSpawn, float Radius, float MinScale, float MaxScale)
{
	TArray<FSpawn_Position> SpawnPositions;
	int NumberToSpawn = FMath::RandRange(MinSpawn, MaxSpawn);
	for (size_t i = 0; i < NumberToSpawn; i++)
	{
		FSpawn_Position SpawnPosition;
		SpawnPosition.Scale = FMath::RandRange(MinScale, MaxScale);
		bool found = FindEmptyLocation(SpawnPosition.Location, Radius * SpawnPosition.Scale);
		UE_LOG(LogTemp, Warning, TEXT("Before bool found"));

		if (found)
		{
			UE_LOG(LogTemp, Warning, TEXT("bool found"));

			SpawnPosition.Rotation = FMath::RandRange(-180.f, 180.f);
			SpawnPositions.Add(SpawnPosition);
		}
	}

	return SpawnPositions;
}

bool AModule::FindEmptyLocation(FVector& OutLocation, float Radius) {
	FBox Bounds(MinExtent, MaxExtent);
	const int MAX_ATTEMPTS = 100;
	for (size_t i = 0; i < MAX_ATTEMPTS; i++)
	{
		FVector CandidatePoint = FMath::RandPointInBox(Bounds);
		if (CanSpawnAtLocation(CandidatePoint, Radius)) {
			UE_LOG(LogTemp, Warning, TEXT("Can spawn at location"));

			OutLocation = CandidatePoint;
			return true;
		}
	}
	return false;
}

bool AModule::CanSpawnAtLocation(FVector Location, float Radius)
{
	FHitResult HitResult;
	FVector GlobalLocation = ActorToWorld().TransformPosition(Location);
	UE_LOG(LogTemp, Warning, TEXT("Location: %s"),*Location.ToString());

	bool HasHit = GetWorld()->SweepSingleByChannel(
		HitResult,
		GlobalLocation,
		GlobalLocation,
		FQuat::Identity,
		ECollisionChannel::ECC_WorldStatic, //TODO pick correct channel
		FCollisionShape::MakeSphere(Radius)
	);
	return !HasHit;
}

void AModule::PlaceActor(TSubclassOf<AActor> ToSpawn, FSpawn_Position SpawnPosition) {
	AActor* Spawned = GetWorld()->SpawnActor<AActor>(ToSpawn);
	Spawned->SetActorRelativeLocation(SpawnPosition.Location);
	Spawned->AttachToActor(this, FAttachmentTransformRules(EAttachmentRule::KeepRelative, false));
	Spawned->SetActorRotation(FRotator(0, SpawnPosition.Rotation, 0));
	Spawned->SetActorScale3D(FVector(SpawnPosition.Scale));
	UE_LOG(LogTemp, Warning, TEXT("Actor spawned"));

}
void AModule::PlaceActor(TSubclassOf<AActor> ToSpawn, FVector SpawnLocation) {
	AActor* Spawned = GetWorld()->SpawnActor<AActor>(ToSpawn);
	Spawned->SetActorRelativeLocation(SpawnLocation);
	Spawned->AttachToActor(this, FAttachmentTransformRules(EAttachmentRule::KeepRelative, false));
	Spawned->SetActorRotation(FRotator(0, 0, 0));
	UE_LOG(LogTemp, Warning, TEXT("Actor spawned"));

}