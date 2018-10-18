// Fill out your copyright notice in the Description page of Project Settings.

#include "UIPointerHandController.h"
#include "InputCoreTypes.h"

AUIPointerHandController::AUIPointerHandController()
{
	Pointer = CreateDefaultSubobject<UWidgetInteractionComponent>(TEXT("Pointer"));

	Pointer->SetupAttachment(GetRootComponent()); // root = handcontroller component


}

void AUIPointerHandController::TriggerPressed()
{
	Pointer->PressKey(EKeys::LeftMouseButton);

}

void AUIPointerHandController::TriggerReleased()
{
	Pointer->ReleaseKey(EKeys::LeftMouseButton);

}