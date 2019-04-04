// Fill out your copyright notice in the Description page of Project Settings.

#include "Modules_generator.h"
#include"Engine/World.h"

// Sets default values
AModules_generator::AModules_generator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AModules_generator::BeginPlay()
{
	Super::BeginPlay();

	PlaceModule(Module_01, Starting_Position);
	
}



void AModules_generator::PlaceModule(TSubclassOf<AActor> Module, FVector Location) {
	AActor* Spawned = GetWorld()->SpawnActor<AActor>(Module);
	if (Spawned) {
		Spawned->SetActorRelativeLocation(Location);
		Spawned->AttachToActor(this, FAttachmentTransformRules(EAttachmentRule::KeepRelative, false));
	
		

	}
}

