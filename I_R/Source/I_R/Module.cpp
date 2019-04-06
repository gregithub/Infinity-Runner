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

	Randomly_Spawn_Actors(Objects_to_spawn);
}

FSpawn_Locations AModule::Set_Locations_for_spawn() {
	FSpawn_Locations Locations;
	Locations.Location_first = FVector(500, -400, 100);
	Locations.Location_second = FVector(500, -125, 100);
	Locations.Location_third = FVector(500, 125, 100);
	Locations.Location_fourth= FVector(500, 400, 100);
	
	return Locations;
}

void AModule::Randomly_Spawn_Actors(int32 Quantity) {
	FVector Location=FVector(0,0,0);
	Quantity = FMath::Clamp(Quantity, 0, 4);
	for (int i = 0; i < Quantity; i++) {
		Location = Find_free_location(Taken_Locations);
		if (Location != FVector(0, 0, 0)) {
			PlaceActor(Spawn_01, Location);
		}
	}
	

}

FVector AModule::Find_free_location(FIs_Location_Taken& Is_Location_Free) {
	const int32 MAX_ATTEMPTS = 10;
	for (int i = 0; i < MAX_ATTEMPTS; i++) {
		switch (FMath::RandRange(0, 3)) {
		case 0:
			Is_Location_Free.first = true;
			return Spawn_Locations.Location_first;
		case 1:
			Is_Location_Free.second = true;
			return Spawn_Locations.Location_second;
		case 2:
			Is_Location_Free.third = true;
			return Spawn_Locations.Location_third;
		case 3:
			Is_Location_Free.fourth= true;
			return Spawn_Locations.Location_fourth;
		default:
			return FVector(0, 0, 0);
		}
	}
	return FVector(0, 0, 0);
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