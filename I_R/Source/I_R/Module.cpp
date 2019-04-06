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
	

	//Randomly_Spawn_Actors(Spawn_01, Number_objects_to_spawn);
}


void AModule::Randomly_Spawn_Actors(TSubclassOf<AActor> ToSpawn,int32 Quantity) {
	Quantity = FMath::Clamp(Quantity, 0, 4);
	for (int i = 0; i < Quantity; i++) {
		FVector Location = Find_free_location(Taken_Locations);
		if (Location != FVector(0, 0, 0)) {
			UE_LOG(LogTemp, Warning, TEXT("Spawning."));

			PlaceActor(ToSpawn, Location);
		}
	}
	

}

FVector AModule::Find_free_location(FIs_Location_Taken& Is_Location_Free) {
	int32 MAX_ATTEMPTS = 10;
	int32 RandomPosition;
	while (MAX_ATTEMPTS > 0) {
		RandomPosition = FMath::RandRange(0, 3);
		if (RandomPosition == 0 && !Is_Location_Free.first) {
			Is_Location_Free.first = true;
			UE_LOG(LogTemp, Warning, TEXT("FOUND."));

			return Spawn_Locations.Location_first;
		}
		else if (RandomPosition == 1 && !Is_Location_Free.second) {
			Is_Location_Free.second = true;
			UE_LOG(LogTemp, Warning, TEXT("FOUND."));

			return Spawn_Locations.Location_second;
		}
		else if (RandomPosition == 2 && !Is_Location_Free.third) {
			Is_Location_Free.third = true;
			UE_LOG(LogTemp, Warning, TEXT("FOUND."));

			return Spawn_Locations.Location_third;
		}
		else if (RandomPosition == 3 && !Is_Location_Free.fourth) {
			Is_Location_Free.fourth = true;
			UE_LOG(LogTemp, Warning, TEXT("FOUND.") );

			return Spawn_Locations.Location_fourth;
		}
		else {
			MAX_ATTEMPTS--;
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("Didn't find location.") );

	return FVector(0, 0, 0);
}



void AModule::PlaceActor(TSubclassOf<AActor> ToSpawn, FVector SpawnLocation) {
	AActor* Spawned = GetWorld()->SpawnActor<AActor>(ToSpawn);
	Spawned->SetActorRelativeLocation(SpawnLocation);
	Spawned->AttachToActor(this, FAttachmentTransformRules(EAttachmentRule::KeepRelative, false));
	Spawned->SetActorRotation(FRotator(0, 0, 0));
	UE_LOG(LogTemp, Warning, TEXT("Actor spawned"));

}