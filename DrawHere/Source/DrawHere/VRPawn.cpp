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
	
	
	if (RightHandControllerClass)
	{
		RightHandController = GetWorld()->SpawnActor<AHandControllerBase>(RightHandControllerClass);
		RightHandController->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::SnapToTargetIncludingScale);
		RightHandController->SetHand(EControllerHand::Right);
	}

	if (LeftHandControllerClass)
	{
		LeftHandController = GetWorld()->SpawnActor<AHandControllerBase>(LeftHandControllerClass);
		LeftHandController->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::SnapToTargetIncludingScale);
		LeftHandController->SetHand(EControllerHand::Left);
	}

}


void AVRPawn::SetupPlayerInputComponent(UInputComponent * PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent->BindAction(TEXT("RightTrigger"), EInputEvent::IE_Pressed, this, &AVRPawn::RightTriggerPressed);
	PlayerInputComponent->BindAction(TEXT("RightTrigger"), EInputEvent::IE_Released, this, &AVRPawn::RightTriggerReleased);
	
	PlayerInputComponent->BindAction(TEXT("Xbutton"), EInputEvent::IE_Pressed, this, &AVRPawn::XbuttonPressed);
	PlayerInputComponent->BindAction(TEXT("Xbutton"), EInputEvent::IE_Released, this, &AVRPawn::XbuttonReleased);

	PlayerInputComponent->BindAction(TEXT("RightBottomTrigger"), EInputEvent::IE_Pressed, this, &AVRPawn::RightBottomTriggerPressed);
	PlayerInputComponent->BindAction(TEXT("RightBottomTrigger"), EInputEvent::IE_Released, this, &AVRPawn::RightBottomTriggerReleased);
}



