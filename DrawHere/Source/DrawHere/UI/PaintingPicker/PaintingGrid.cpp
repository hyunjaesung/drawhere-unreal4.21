// Fill out your copyright notice in the Description page of Project Settings.

#include "PaintingGrid.h"
#include "Components/SizeBox.h"


void UPaintingGrid::AddPainting(int32 PaintingIndex) // Paintingpicker will make different index each
{

	if (!PaintingGrid) return;
	
	
	UUserWidget * NewWidget = CreateWidget<UUserWidget>(GetWorld(), GridCardClass); // card which will add
	

	USizeBox*CardContainer = Cast<USizeBox>( PaintingGrid->GetChildAt(PaintingIndex)); // make sizebox as much as numbers of indexes

	if (!CardContainer) return;

	CardContainer->AddChild(NewWidget);

}
