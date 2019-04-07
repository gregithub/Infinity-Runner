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
			PlaceActor(ToSpawn, Location);
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("DIDN't find location"));
		}
	}
	

}

FVector AModule::Find_free_location(FIs_Location_Taken& Taken_Location) {
	int32 MAX_ATTEMPTS = 5;
	int32 RandomPosition;
	while (MAX_ATTEMPTS > 0) {
		RandomPosition = FMath::RandRange(0, 3);
		if (RandomPosition == 0 && !Taken_Location.first) {
			Taken_Location.first = true;

			return Spawn_Locations.Location_first;
		}
		else if (RandomPosition == 1 && !Taken_Location.second) {
			Taken_Location.second = true;

			return Spawn_Locations.Location_second;
		}
		else if (RandomPosition == 2 && !Taken_Location.third) {
			Taken_Location.third = true;

			return Spawn_Locations.Location_third;
		}
		else if (RandomPosition == 3 && !Taken_Location.fourth) {
			Taken_Location.fourth = true;

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
}