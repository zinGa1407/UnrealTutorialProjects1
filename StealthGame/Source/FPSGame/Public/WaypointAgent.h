// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WaypointAgent.generated.h"

class AWaypointManager;
class AWaypointNode;

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
	AActor * TargetWaypoint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	AWaypointManager * WaypointManager;							// The waypoint manager in the level

protected:

	TArray<AActor*> WaypointPathArray;					// Path of the Array the agent will go through towards destination
	TArray<AActor*> SearchedThroughPoints;

protected:

	void SetDestination();								// Set the TargetWaypoint for the Actor
	void MoveActorToNextNode();
	bool CheckNeighboursForDestination(AWaypointNode* NextWaypoint);
	void FindPathToDestination();
	
	
};
