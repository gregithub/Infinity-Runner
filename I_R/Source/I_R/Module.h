// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include"Modules_generator.h"
#include "Module.generated.h"

USTRUCT()
struct FSpawn_Locations {
	GENERATED_USTRUCT_BODY()

	FVector Location_first = FVector(500, -400, 100);
	FVector Location_second = FVector(500, -125, 100);
	FVector Location_third = FVector(500, 125, 100);
	FVector Location_fourth = FVector(500, 400, 100);
};
USTRUCT()
struct FIs_Location_Taken {
	GENERATED_USTRUCT_BODY()

	bool first=false;
	bool second=false;
	bool third=false;
	bool fourth=false;	
};


UCLASS()
class I_R_API AModule : public AModules_generator
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AModule();

	UPROPERTY(EditDefaultsOnly, Category = Spawn_properties)
		int32 Number_objects_to_spawn = 1;

	UPROPERTY(EditDefaultsOnly, Category = Spawn_objects)
		TSubclassOf<AActor> Spawn_01;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
private:	

	FSpawn_Locations Spawn_Locations;
	FIs_Location_Taken Taken_Locations;
	
	UFUNCTION(BlueprintCallable, Category = "SpawnObjects")
		void Randomly_Spawn_Actors(TSubclassOf<AActor> ToSpawn,int32 Quantity);

	FVector Find_free_location(FIs_Location_Taken& Is_Location_Free);

	UFUNCTION(BlueprintCallable, Category = "SpawnObjects")
		void PlaceActor(TSubclassOf<AActor> ToSpawn, FVector SpawnLocation);

	
};
