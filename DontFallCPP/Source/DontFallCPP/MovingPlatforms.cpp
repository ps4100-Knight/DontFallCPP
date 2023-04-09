// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatforms.h"

// Sets default values
AMovingPlatforms::AMovingPlatforms()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatforms::BeginPlay()
{
	Super::BeginPlay();
	startLocation = GetActorLocation();
}

// Called every frame
void AMovingPlatforms::Tick(float DeltaTime)
{
	MovePlatform(DeltaTime);
	RotatePlatform(DeltaTime);

}

void AMovingPlatforms::MovePlatform(float DeltaTime)
{
	if (FVector::Dist(startLocation, GetActorLocation()) > moveDistance)
	{
		FVector moveDirection = platformVelocity.GetSafeNormal();
		startLocation += moveDirection * moveDistance;
		SetActorLocation(startLocation);
		platformVelocity = -platformVelocity;
	}
	else
	{
		FVector currentLocation = GetActorLocation();
		currentLocation += platformVelocity * DeltaTime;
		SetActorLocation(currentLocation);
	}
}

void AMovingPlatforms::RotatePlatform(float DeltaTime)
{
	FRotator currentRotation = GetActorRotation();
	currentRotation += platformRotation * DeltaTime;
	SetActorRotation(currentRotation);
}

bool AMovingPlatforms::ShouldReturn() const
{
	return GetDistanceMoved() > moveDistance;
}
float AMovingPlatforms::GetDistanceMoved() const
{
	return FVector::Dist(startLocation, GetActorLocation());
}



