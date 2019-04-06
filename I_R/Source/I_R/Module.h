// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include"Modules_generator.h"
#include "Module.generated.h"

USTRUCT()
struct FSpawn_Position {
	GENERATED_USTRUCT_BODY()

	FVector Location;
	float Rotation;
	float Scale;
};

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
};

UCLASS()
class I_R_API AModule : public AModules_generator
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AModule();

	UFUNCTION(BlueprintCallable, Category = "Spawning")
		void PlaceActors(TSubclassOf<AActor> ToSpawn,
			int MinSpawn = 1, int MaxSpawn = 1, float Radius = 500, float MinScale = 1, float MaxScale = 1);

	UPROPERTY(EditDefaultsOnly, Category = Spawn_objects)
		TSubclassOf<AActor> Spawn_01;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "Spawning")
		FVector MinExtent;
	UPROPERTY(EditDefaultsOnly, Category = "Spawning")
		FVector MaxExtent;
private:	

	FSpawn_Locations Spawn_Locations;
	FSpawn_Locations Set_Locations_for_spawn();


	TArray<FSpawn_Position> RandomSpawnPositions(int MinSpawn, int MaxSpawn, float Radius, float MinScale, float MaxScale);

	bool FindEmptyLocation(FVector& OutLocation, float Radius);

	void PlaceActor(TSubclassOf<AActor> ToSpawn, FSpawn_Position SpawnPosition);
	void PlaceActor(TSubclassOf<AActor> ToSpawn, FVector SpawnLocation);

	bool CanSpawnAtLocation(FVector Location, float Radius);

};
