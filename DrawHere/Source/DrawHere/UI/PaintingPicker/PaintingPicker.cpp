// Fill out your copyright notice in the Description page of Project Settings.

#include "PaintingPicker.h"
#include "Saving/PainterSaveGameIndex.h"
#include "ActionBar.h"
#include "PaintingGrid.h"
#include "Kismet/StereoLayerFunctionLibrary.h" 
#include "HAL/FileManager.h"
#include "Saving//PainterSaveGame.h"


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

	UActionBar * ActionBarWidget = Cast<UActionBar>(ActionBar->GetUserWidgetObject()); // if you find action bar

	if (ActionBarWidget) {
		ActionBarWidget->SetParentPicker(this); // set parent piceker of action bar
		
	}

	UPaintingGrid * PaintingGridWidget = Cast<UPaintingGrid>(PaintingGrid3->GetUserWidgetObject()); // if you find action bar

	if (PaintingGridWidget) {
		PaintingGridWidget->SetParentPicker(this); // set parent piceker of action bar

	}


	RefreshSlots();
		

}

void APaintingPicker::RefreshSlots()
{
	//UE_LOG(LogTemp, Warning, TEXT("RefreshSlots!"));

	UPaintingGrid * PaintingGridWidget = Cast<UPaintingGrid>(PaintingGrid3->GetUserWidgetObject());

	if (!PaintingGridWidget) return;

	PaintingGridWidget->ClearPaintings();


	int32 Index = 0;

	for (FString SlotName : UPainterSaveGameIndex::Load()->GetSlotNames())
	{
		PaintingGridWidget->AddPainting(Index, SlotName);
		++Index;
	}
}


void APaintingPicker::AddPainting()
{
	//from VRPawn
	UPainterSaveGame::Create();

	RefreshSlots();
	
}

void APaintingPicker::ToggleDeleteMode()
{
	DeleteMode = !DeleteMode;

	UPaintingGrid * PaintingGridWidget = Cast<UPaintingGrid>(PaintingGrid3->GetUserWidgetObject());

	if (!PaintingGridWidget) return;

	PaintingGridWidget->DeleteMode = DeleteMode;

	UE_LOG(LogTemp, Warning, TEXT("Toggle delmode!!"));
	
}



