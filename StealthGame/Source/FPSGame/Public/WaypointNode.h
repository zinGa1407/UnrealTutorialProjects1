// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WaypointNode.generated.h"

//class USphereComponent;
class UArrowComponent;

UCLASS()
class FPSGAME_API AWaypointNode : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWaypointNode();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


protected:
	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	//UStaticMeshComponent * MeshComp;

	//UPROPERTY(VisibleAnywhere, Category = "Components")
	//USphereComponent * SphereComp;


	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Indicators")
	TArray<UArrowComponent*> ArrowComponents;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Waypoints")
		TArray<AActor*> NeighbouringWaypoints;
	
};
