// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include"Components/ShapeComponent.h"
#include"Modules_generator.h"
#include "Module.generated.h"


UCLASS()
class I_R_API AModule : public AModules_generator
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AModule();



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	
};
