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