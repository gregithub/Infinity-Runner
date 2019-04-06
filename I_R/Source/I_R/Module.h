// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include"Modules_generator.h"
#include "Module.generated.h"

USTRUCT()
struct FSpawn_Locations {
	GENERATED_USTRUCT_BODY()

	FVector Location_first;
	FVector Location_second;
	FVector Location_third;
	FVector Location_fourth;
};
USTRUCT()
struct FIs_Location_Taken {
	GENERATED_USTRUCT_BODY()

	bool first;
	bool second;
	bool third;
	bool fourth;
	int32 Free_Locations = 4;
	
};


UCLASS()
class I_R_API AModule : public AModules_generator
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AModule();

	UPROPERTY(EditDefaultsOnly, Category = Spawn_properties)
		int32 Objects_to_spawn = 1;

	UPROPERTY(EditDefaultsOnly, Category = Spawn_objects)
		TSubclassOf<AActor> Spawn_01;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
private:	

	TArray<int32> Is_Taken;
	FSpawn_Locations Spawn_Locations;
	FSpawn_Locations Set_Locations_for_spawn();
	FIs_Location_Taken Taken_Locations;
	
	void Randomly_Spawn_Actors(int32 Quantity);
	FVector Find_free_location(FIs_Location_Taken& Is_Location_Free);

	void PlaceActor(TSubclassOf<AActor> ToSpawn, FVector SpawnLocation);

	
};
