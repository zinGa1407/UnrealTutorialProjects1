// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WaypointAgent.generated.h"

class USphereComponent;

UCLASS()
class FPSGAME_API AWaypointAgent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWaypointAgent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent * MeshComp;

	UPROPERTY(EditInstanceOnly, Category = "AI")		// Start place of the Actor
	AActor * StartWaypoint;
	UPROPERTY(VisibleInstanceOnly, Category = "AI")		// Destination of the Actor
	AActor * EndWaypoint;
	UPROPERTY(VisibleInstanceOnly, Category = "AI")		// The waypoint where the actor is currently at
	AActor * CurrentWaypoint;
	UPROPERTY(VisibleInstanceOnly, Category = "AI")		// The waypoint where the actor is moving towards
	AActor * TargettWaypoint;

protected:

	AActor * WaypointManager;

	TArray<AActor*> WaypointArray;
protected:

	void SetDestination();
	void MoveActorToDestination();
	void CheckNeighboursForDestination();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
