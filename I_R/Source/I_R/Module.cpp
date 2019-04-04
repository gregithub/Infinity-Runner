// Fill out your copyright notice in the Description page of Project Settings.

#include "Module.h"
#include"Engine/Classes/Components/BoxComponent.h"


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
	
}


