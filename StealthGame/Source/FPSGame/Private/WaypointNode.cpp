// Fill out your copyright notice in the Description page of Project Settings.

#include "WaypointNode.h"
//#include "Components/StaticMeshComponent.h"
//#include "Components/SphereComponent.h"
#include "DrawDebugHelpers.h"

// Sets default values
AWaypointNode::AWaypointNode()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	//MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	//RootComponent = MeshComp;

	//SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	//SphereComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	//SphereComp->SetupAttachment(MeshComp);
}

// Called when the game starts or when spawned
void AWaypointNode::BeginPlay()
{
	Super::BeginPlay();
	
	DrawDebugSphere(GetWorld(), GetActorLocation(), 20.f, 12, FColor::Red , false, 999.f);
}

// Called every frame
void AWaypointNode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

