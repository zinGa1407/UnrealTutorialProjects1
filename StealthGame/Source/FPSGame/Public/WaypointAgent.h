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

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void SetDestination();										// Set the EndWaypoint for the Actor
	void FindPathToDestination(TArray<AWaypointNode*> AllWaypointsInLevel);
	void RetracePath(AWaypointNode* StartNode, AWaypointNode* EndNode);

protected:

	TArray<AWaypointNode*> WaypointPathArray;					// Path of the Array the agent will go through towards destination

	//Arrays used in the pathfinding function
	TArray<AWaypointNode*> OpenSet;								// Queue to which neighbouring waypoints get pushed
	TArray<AWaypointNode*> ClosedSet;							// Waypoints that the algorithm has searched through
	TArray<AWaypointNode*> ParentListForConnectingObjects;
	AWaypointNode * CurrentWaypoint;							// The waypoint where the actor is currently at in the Pathfinding function

	bool bHasDestination = false;
	float DistanceToNode = 5.f;

	FTimerHandle NewDestinationTimer;

protected:
	UPROPERTY(VisibleAnywhere, Category = "Components")
		UStaticMeshComponent * MeshComp;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "AI")		// Start place of the Actor
		AWaypointNode * StartWaypoint;
	UPROPERTY(VisibleInstanceOnly, Category = "AI")		// Destination of the Actor
		AWaypointNode * EndWaypoint;
	UPROPERTY(VisibleInstanceOnly, Category = "AI")		// The waypoint where the actor is moving towards
		AWaypointNode * TargetWaypoint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
		AWaypointManager * WaypointManager;							// The waypoint manager in the level

	
	UFUNCTION(BlueprintImplementableEvent, Category = "Timer")
		void PrintTimer();
	UFUNCTION(BlueprintCallable)
		void StartAgent();
	UFUNCTION()
		void MoveActorToNextNode(float DeltaTime);
};
