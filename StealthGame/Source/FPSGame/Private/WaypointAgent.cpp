// Fill out your copyright notice in the Description page of Project Settings.

#include "WaypointAgent.h"
#include "Components/StaticMeshComponent.h"
#include "WaypointManager.h"
#include "WaypointNode.h"
#include "Algo/Reverse.h"
#include "Kismet/GameplayStatics.h"

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
	
	//Make Actor (car/human) and give it to the waypoint MANAGER to calculate path
	if (!WaypointManager) return;

	// SET STARTPOINT, then calculate path
	if (StartWaypoint) {
		PrintTimer();
		SetActorLocation(StartWaypoint->GetActorLocation());
		SetDestination();
	}


	//Spawn and start driving/walking when destinations are set
}

void AWaypointAgent::Tick(float DeltaTime)
{
	if (bHasDestination) {
		MoveActorToNextNode( DeltaTime);
	}
}

void AWaypointAgent::SetDestination()
{
	if (WaypointManager){
		TArray<AWaypointNode*> AllWaypoints = WaypointManager->GetWaypointsInLevel();

		while (true)
		{
			EndWaypoint = AllWaypoints[FMath::RandRange(0, AllWaypoints.Num() - 1)];

			if (EndWaypoint != StartWaypoint) break;
		}
		
		if (EndWaypoint) FindPathToDestination(AllWaypoints);
	}
}

void AWaypointAgent::MoveActorToNextNode( float DeltaTime )
{
	//PrintTimer();
	//UE_LOG(LogTemp, Warning, TEXT("Time now: %f"), UGameplayStatics::GetRealTimeSeconds(GetWorld()));

	TargetWaypoint = WaypointPathArray[0];

	SetActorLocation(FMath::Lerp(GetActorLocation(), TargetWaypoint->GetActorLocation(), DeltaTime));

	// Move towards next waypoint, smooth movement and check for objects in front.

	// When node is reached, set next target node
	if (AActor::GetDistanceTo(TargetWaypoint) < DistanceToNode)
	{
		if (TargetWaypoint == EndWaypoint)
		{
			//Destination reached
			UE_LOG(LogTemp, Warning, TEXT("Reached Destination"));
			bHasDestination = false;
			return;
		}

		WaypointPathArray.Remove(TargetWaypoint);
	}

	// When destination is reached
	// Final Event
}

void AWaypointAgent::FindPathToDestination(TArray<AWaypointNode*> AllWaypointsInLevel)
{
	UE_LOG(LogTemp, Warning, TEXT("Start Path Search From %s , to point %s"), *StartWaypoint->GetName(), *EndWaypoint->GetName());

	OpenSet.Empty();								//Queue to which neighbouring waypoints get pushed
	ClosedSet.Empty();							//Waypoints that the algorithm has searched through
	ParentListForConnectingObjects.Empty();

	OpenSet.Push(StartWaypoint);

	while (OpenSet.Num() > 0)
	{
		CurrentWaypoint = OpenSet[0];

		for (int i = 0; i < OpenSet.Num(); i++)
		{
			//ADD FOR CLOSEST PATH LOWEST COST CHECK
			//Calculate distance and cost difference is open nodes

			//if(OpenSet[i])
		}

		OpenSet.Remove(CurrentWaypoint);
		ClosedSet.Add(CurrentWaypoint);

		if (CurrentWaypoint == EndWaypoint) {
			UE_LOG(LogTemp, Warning, TEXT("Found Target!"));
			RetracePath(StartWaypoint, EndWaypoint);
			return;
		}

		for (AWaypointNode* Neighbour : CurrentWaypoint->NeighbouringWaypoints)
		{
			if (ClosedSet.Contains(Neighbour))
				continue;


			if (!OpenSet.Contains(Neighbour)) {
				ParentListForConnectingObjects.Add(CurrentWaypoint);
				OpenSet.Add(Neighbour);
			}
		}
	}

	/*
	//Check through neighbours Function
	TArray<AWaypointNode*> SearchQueue;								//Queue to which neighbouring waypoints get pushed
	TArray<AWaypointNode*> SearchedThroughPoints;					//Waypoints that the algorithm has searched through

	SearchQueue.Push(StartWaypoint);
	SearchedThroughPoints.Push(StartWaypoint);

	while (SearchQueue.Num() != 0)
	{
		bool bIsAllNullPtr = true;
		for (int i = 0; i < SearchQueue.Num(); i++)
		{
			if (SearchQueue[i]) {
				bIsAllNullPtr = false;
				break;
			}
		}
		if (bIsAllNullPtr) {
			UE_LOG(LogTemp, Warning, TEXT("There are only nullptrs left so goodbye son"));
			break;
		}
		
		CurrentWaypoint = SearchQueue[0];
		SearchQueue.RemoveAt(0, 1, true);
		
		
		for (AWaypointNode* Neighbour : CurrentWaypoint->NeighbouringWaypoints)
		{
			UE_LOG(LogTemp, Warning, TEXT("Actor is looking for a destination in waypoint %s"), *Neighbour->GetName());

			if (Neighbour == EndWaypoint)	// Found my starting node - Return path
			{
				MoveActorToNextNode();
				UE_LOG(LogTemp, Warning, TEXT("Found Target!"));
				SearchQueue.Empty();
				break;
			}
			
			SearchedThroughPoints.Push(Neighbour);
			for (int32 i = 0; i < Neighbour->NeighbouringWaypoints.Num(); i++)
			{
				AWaypointNode* NewNeighbour = Neighbour->NeighbouringWaypoints[i];
				
				if (SearchedThroughPoints.Contains(NewNeighbour)) {
					UE_LOG(LogTemp, Warning, TEXT("Already searched through %s"), *NewNeighbour->GetName());
				}
				else {
					SearchQueue.Push(NewNeighbour);
				}
			}
		}
	}
	*/
}

void AWaypointAgent::RetracePath(AWaypointNode* StartNode, AWaypointNode* EndNode)
{
	TArray<AWaypointNode*> PathOfNodes;
	AWaypointNode* CurrentNode = EndNode;

	while (CurrentNode != StartNode)
	{
		PathOfNodes.Add(CurrentNode);

		for (int i = 0; i < ClosedSet.Num(); i++)
		{
			if (ClosedSet[i] == CurrentNode)
				CurrentNode = ParentListForConnectingObjects[i-1];
		}
	}

	Algo::Reverse(PathOfNodes);

	WaypointPathArray = PathOfNodes;

	for (int j = 0; j < PathOfNodes.Num(); j++)
	{
		UE_LOG(LogTemp, Warning, TEXT("%s"), *PathOfNodes[j]->GetName());
	}

	
	bHasDestination = true;
	//MoveActorToNextNode();
}
