// Fill out your copyright notice in the Description page of Project Settings.

#include "WaypointManager.h"


// Sets default values
AWaypointManager::AWaypointManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWaypointManager::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Warning, TEXT("Amount of Waypoints in the level are %d"), WaypointsArray.Num());
}

TArray<AActor*> AWaypointManager::GetWaypointsInLevel()
{
	return WaypointsArray;
}

// Called every frame
void AWaypointManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

