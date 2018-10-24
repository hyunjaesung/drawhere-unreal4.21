// Fill out your copyright notice in the Description page of Project Settings.

#include "VRPawn.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include"PaintingGameMode_2.h"
#include "Engine/Classes/Components/InputComponent.h"

AVRPawn::AVRPawn()
{
 	
	PrimaryActorTick.bCanEverTick = false;

	VRRoot = CreateDefaultSubobject<USceneComponent>(TEXT("VRRoot"));
	SetRootComponent(VRRoot);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	Camera->SetupAttachment(VRRoot);
}


void AVRPawn::BeginPlay()
{
	Super::BeginPlay();
	
	UPainterSaveGame*Painting = UPainterSaveGame::Create(); 

	if (Painting && Painting->Save())// save() doesn't make first save
	{
		
		CurrentSlotName = Painting->GetSlotName();

	}

	if (PaintBrushHandControllerClass)
	{
		RightPaintBrushHandController = GetWorld()->SpawnActor<AHandControllerBase>(PaintBrushHandControllerClass);
		RightPaintBrushHandController->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::SnapToTargetIncludingScale);

	}

	
}


void AVRPawn::SetupPlayerInputComponent(UInputComponent * PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent->BindAction(TEXT("RightTrigger"), EInputEvent::IE_Pressed, this, &AVRPawn::RightTriggerPressed);
	PlayerInputComponent->BindAction(TEXT("RightTrigger"), EInputEvent::IE_Released, this, &AVRPawn::RightTriggerReleased);
	PlayerInputComponent->BindAction(TEXT("Save"), EInputEvent::IE_Released, this, &AVRPawn::Save);
	//PlayerInputComponent->BindAction(TEXT("Load"), EInputEvent::IE_Released, this, &AVRPawn::Load); // we don't need b button for load more
}

void AVRPawn::Save()
{
	auto GameMode = Cast<APaintingGameMode_2>(GetWorld()->GetAuthGameMode());

	if (!GameMode) return;

	GameMode->Save();

	UGameplayStatics::OpenLevel(GetWorld(), TEXT("MainMenu")); // return

	//UPainterSaveGame * Painting = UPainterSaveGame::Load(CurrentSlotName); // if it hit for current slotname it would just save for new slot
	//
	//if (Painting)
	//{
		//Painting->SetState("SaveWorld");
		//Painting->SerializeFromWorld(GetWorld());
	//	Painting->Save();
		//UE_LOG(LogTemp, Warning, TEXT("ThisisSave"));
	//}

	
}

//void AVRPawn::Load()
//{
//	
//}