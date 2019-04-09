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

	Modules_To_Place = Fill_Modules();



}

TArray<TSubclassOf<AModule>> AModule::Fill_Modules() {
	TArray<TSubclassOf<AModule>> Modules;

	if (Module_00 != nullptr) Modules.Add(Module_00); 	
	if (Module_01 != nullptr) Modules.Add(Module_01);
	if (Module_02 != nullptr) Modules.Add(Module_02);
	if (Module_03 != nullptr) Modules.Add(Module_03);
	if (Module_04 != nullptr) Modules.Add(Module_04);
	return Modules;
}

void AModule::Random_Module_Place(FVector Spawn_Location) {
	if (Modules_To_Place.Num() > 0) {
		int Pick_Random_Module = FMath::RandRange(1, Modules_To_Place.Num());
		PlaceModule_Module(Modules_To_Place[Pick_Random_Module - 1], Spawn_Location,Roation);
	}
}

void AModule::PlaceModule_Module(TSubclassOf<AModule> Module, FVector Location, FRotator Rotation) {
	AModule* Spawned = GetWorld()->SpawnActor<AModule>(Module, Location,Rotation);
	
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

	return FVector(0, 0, 0);
}



void AModule::PlaceActor(TSubclassOf<AActor> ToSpawn, FVector SpawnLocation) {
	AActor* Spawned = GetWorld()->SpawnActor<AActor>(ToSpawn,SpawnLocation,FRotator(0,0,0));

	Spawned->AttachToActor(this, FAttachmentTransformRules(EAttachmentRule::KeepRelative, false));
	
}