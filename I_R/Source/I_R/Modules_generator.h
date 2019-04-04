// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Modules_generator.generated.h"

class AModule;

UCLASS()
class I_R_API AModules_generator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AModules_generator();

	UFUNCTION(BlueprintCallable, Category = "Spawn")
		void PlaceModule(TSubclassOf<AActor> Module, FVector Location);
	UPROPERTY(EditDefaultsOnly, Category = "Spawn")
		FVector Starting_Position;

	UPROPERTY(EditDefaultsOnly, Category = Rooms)
		TSubclassOf<AActor> Module_01;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	



private:
		

		




};
