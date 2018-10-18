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
	CurrentStroke = GetWorld()->SpawnActor<AStroke>(StrokeClass);

	CurrentStroke->SetActorLocation(GetActorLocation());

}

void AHandController::TriggerReleased()
{
	CurrentStroke = nullptr;
}

void AHandController::BeginPlay()
{
	
	Super::BeginPlay();
}

void AHandController::Tick(float DeltaTime)
{
	
	Super::Tick(DeltaTime);

	if (CurrentStroke)
	{
		CurrentStroke->Update(GetActorLocation());

	}
}
