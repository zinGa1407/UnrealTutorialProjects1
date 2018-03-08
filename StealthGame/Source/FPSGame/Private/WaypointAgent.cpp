// Fill out your copyright notice in the Description page of Project Settings.

#include "WaypointAgent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"


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
	
	//WaypointManager = 
}

void AWaypointAgent::SetDestination()
{

}

void AWaypointAgent::MoveActorToDestination()
{

}

void AWaypointAgent::CheckNeighboursForDestination()
{

}

// Called every frame
void AWaypointAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

