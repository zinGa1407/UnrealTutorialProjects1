// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSBlackHole.generated.h"

class USphereComponent;
class UStaticMeshComponent;

UCLASS()
class FPSGAME_API AFPSBlackHole : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPSBlackHole();

protected:

	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent * MeshComp;

	// Inner Sphere will destroy objects if they overlap
	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent * InnerSphereComponent;

	// Outer sphere will pull components (that simulate physics) towards the center of the actor
	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent * OuterSphereComponent;

	//Marked with ufunction to bind to overlap event
	

	UFUNCTION()
	void OverlapInnerSphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
