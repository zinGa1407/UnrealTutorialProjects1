// Fill out your copyright notice in the Description page of Project Settings.

#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::White,text)

#include "WaypointAgent.h"
#include "Components/StaticMeshComponent.h"
#include "WaypointManager.h"
#include "WaypointNode.h"


// Sets default values
AWaypointAgent::AWaypointAgent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = MeshComp;
}

// Called when the game starts or when spawned
void AWaypointAgent::BeginPlay()
{
	Super::BeginPlay();
	
	//Spawn Actor (car/human) and give it to the waypoint MANAGER to calculate path
	if (!WaypointManager) return;

	// SET STARTPOINT, then calculate path
	if (StartWaypoint) {
		CurrentWaypoint = StartWaypoint;
		SetDestination();
	}
}

void AWaypointAgent::SetDestination()
{
	if (WaypointManager){
		TArray<AActor*> AllWaypoints = WaypointManager->GetWaypointsInLevel();

		EndWaypoint = AllWaypoints[FMath::RandRange(0, AllWaypoints.Num()-1)];

		if (EndWaypoint) FindPathToDestination();
	}
}

void AWaypointAgent::MoveActorToNextNode()
{
	// Move towards next waypoint, smooth movement and check for objects in front.

	// When node is reached, set next target node


	// When destination is reached
	// Final Event
}

bool AWaypointAgent::CheckNeighboursForDestination(AWaypointNode* NextWaypoint)
{
	if (NextWaypoint->NeighbouringWaypoints.Num() != 0) {
		for (int32 i = 0; i < NextWaypoint->NeighbouringWaypoints.Num(); i++)
		{
			if (NextWaypoint->NeighbouringWaypoints[i] == CurrentWaypoint) {		// Check if the current target is connected to the waypoint target
				//Found a path!
				//Connection.Add(NextWaypoint);
				SearchedThroughPoints.Add(NextWaypoint->NeighbouringWaypoints[i]);
				break;
			}
			else
			{
				SearchedThroughPoints.Add(NextWaypoint->NeighbouringWaypoints[i]);
				//CheckNeighboursForDestination(NextWaypoint->NeighbouringWaypoints[i));
			}
		}
		return false;
	}
	else
	{
		return false;
	}

	

}

void AWaypointAgent::FindPathToDestination()
{
	//Set Target to end, then check all neighbouring until we find one that is connected to the startpoint
	TargetWaypoint = EndWaypoint;

	UE_LOG(LogTemp, Warning, TEXT("Actor is looking for a destination"));

	// Looking for Path through neighbouring waypoints
	AWaypointNode * NextWaypoint = Cast<AWaypointNode>(TargetWaypoint);
	SearchedThroughPoints.Empty();
	CheckNeighboursForDestination(NextWaypoint);
	for (int32 i = 0; i < SearchedThroughPoints.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("Path taken to destination %d"), i);
	}
	
}
