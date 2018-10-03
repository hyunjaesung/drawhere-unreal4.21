// Fill out your copyright notice in the Description page of Project Settings.

#include "HandController.h"
#include "Engine/World.h"

// Sets default values
AHandController::AHandController()
{
	PrimaryActorTick.bCanEverTick = true;

	MotionContorller = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MotionController"));
	SetRootComponent(MotionContorller);
	MotionContorller->SetTrackingSource(EControllerHand::Right);
	MotionContorller->SetShowDeviceModel(true);


}


void AHandController::TriggerPressed()
{
	AStroke*Stroke = GetWorld()->SpawnActor<AStroke>(StrokeClass);

	Stroke->SetActorLocation(GetActorLocation());

}

void AHandController::TriggerReleased()
{
}

void AHandController::BeginPlay()
{
	Super::BeginPlay();
	
}


void AHandController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

