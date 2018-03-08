// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WaypointManager.generated.h"

UCLASS()
class FPSGAME_API AWaypointManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWaypointManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Waypoints")
	TArray<AActor*> WaypointsArray;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
