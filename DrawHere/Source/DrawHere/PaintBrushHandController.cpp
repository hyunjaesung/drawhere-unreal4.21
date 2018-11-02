// Fill out your copyright notice in the Description page of Project Settings.

#include "PaintBrushHandController.h"
#include "UI/PaletteMenu/PaletteMenuHandController.h"
#include "Engine/World.h"
#include "Engine/StaticMeshActor.h"



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


void APaintBrushHandController::TriggerPressed() // Draw
{
		
		CurrentStroke = GetWorld()->SpawnActor<AStroke>(StrokeClass);
		FVector Location = StaticMesh->GetComponentLocation();
		Location.X = Location.X + 5;
		CurrentStroke->SetActorLocation(Location);
		
}

void APaintBrushHandController::TriggerReleased()
{
	CurrentStroke = nullptr;

}

void APaintBrushHandController::XbuttonPressed() // select palette menu
{
	Pointer->PressPointerKey(EKeys::LeftMouseButton);
}

void APaintBrushHandController::XbuttonReleased()
{
	Pointer->ReleasePointerKey(EKeys::LeftMouseButton);
}

void APaintBrushHandController::BottomTriggerPressed()  // Delete
{
	//UE_LOG(LogTemp, Warning, TEXT("BottomTriggerPressed!!"));
	//APaletteMenuHandController * PaletteMenuHandController;

	TSet<AActor *> OverlappingActors;
	
	StaticMesh->GetOverlappingActors(OverlappingActors);
	
	

	for (auto Actor : OverlappingActors)
	{
		if (Actor->GetName() == "PaletteMenuHandController_BP_C_0") // don't make palette delete
		{
			break;
		}

		

		UE_LOG(LogTemp, Warning, TEXT("Name is %s"), *Actor->GetName());
		Actor->Destroy();
	}
	

}

void APaintBrushHandController::BottomTriggerReleased()
{

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
		
		FVector Location = StaticMesh->GetComponentLocation();
		Location.X = Location.X + 5;
		CurrentStroke->Update(Location);

	}

}

