// Fill out your copyright notice in the Description page of Project Settings.

#include "PaintingPicker.h"
#include "PaintingGrid.h"

// Sets default values
APaintingPicker::APaintingPicker()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//SetRootComponent(CreateDefaultSubobject<USceneComponent>(TEXT("Root"))); // if i use root directly every pointer can be 'null'

	root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(root);

	ActionBar = CreateDefaultSubobject<UWidgetComponent>(TEXT("ActionBar"));
	ActionBar->SetupAttachment(GetRootComponent());

	PaintingGrid3 = CreateDefaultSubobject<UWidgetComponent>(TEXT("PaintingGrid"));
	PaintingGrid3->SetupAttachment(GetRootComponent());

}

// Called when the game starts or when spawned
void APaintingPicker::BeginPlay()
{
	Super::BeginPlay();
	
	// doing in c++ without using blueprint

	UPaintingGrid * PaintingGridWidget = Cast<UPaintingGrid>(PaintingGrid3->GetUserWidgetObject()); // summon paintinggrid

	if (!PaintingGridWidget) return;

	PaintingGridWidget->AddPainting();

	
}



