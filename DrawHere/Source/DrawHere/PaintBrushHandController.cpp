// Fill out your copyright notice in the Description page of Project Settings.

#include "PaintBrushHandController.h"


#include "Engine/World.h"



// Sets default values
APaintBrushHandController::APaintBrushHandController()
{
	auto Root = GetRootComponent();

	PrimaryActorTick.bCanEverTick = true;
	Pointer = CreateDefaultSubobject<UWidgetInteractionComponent>(TEXT("Pointer"));
	Pointer->SetupAttachment(GetRootComponent());
	
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(Root);

}


void APaintBrushHandController::TriggerPressed()
{
		
		CurrentStroke = GetWorld()->SpawnActor<AStroke>(StrokeClass);
		FVector Location = GetActorLocation();
		Location.X = Location.X + 8;
		Location.Z = Location.Z + 3;
		CurrentStroke->SetActorLocation(Location);
		
}

void APaintBrushHandController::TriggerReleased()
{
	CurrentStroke = nullptr;

}

void APaintBrushHandController::XbuttonPressed()
{
	Pointer->PressPointerKey(EKeys::LeftMouseButton);
}

void APaintBrushHandController::XbuttonReleased()
{
	Pointer->ReleasePointerKey(EKeys::LeftMouseButton);
}

void APaintBrushHandController::BeginPlay()
{
	Super::BeginPlay();
	
}


void APaintBrushHandController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CurrentStroke)
	{
		FVector Location = GetActorLocation();
		Location.X = Location.X + 8;
		Location.Z = Location.Z + 3;
		CurrentStroke->Update(Location);

	}

}

