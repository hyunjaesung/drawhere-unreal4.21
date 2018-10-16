// Fill out your copyright notice in the Description page of Project Settings.

#include "HandControllerBase.h"


// Sets default values
AHandControllerBase::AHandControllerBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MotionContorller = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MotionController"));
	SetRootComponent(MotionContorller);
	MotionContorller->SetTrackingSource(EControllerHand::Right);
	MotionContorller->SetShowDeviceModel(true);

}

