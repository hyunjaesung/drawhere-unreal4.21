// Fill out your copyright notice in the Description page of Project Settings.


#include "PaintingGridCard.h"
#include "Saving/PainterSaveGame.h"
#include "Kismet/StereoLayerFunctionLibrary.h" 
#include "Kismet/GameplayStatics.h"

#include "Brushes/SlateDynamicImageBrush.h"

#include "Saving/PainterSaveGame.h"
#include "Saving/PainterSaveGameIndex.h"




void UPaintingGridCard::SetPaintingName(FString NewPaintingName)
{
	PaintingName = NewPaintingName;

	SlotName->SetText(FText::FromString(PaintingName)); // text for user

	CardButton->OnClicked.AddDynamic(this, &UPaintingGridCard::CardButtonClicked); // binding method
}



void UPaintingGridCard::CardButtonClicked()
{
	UPainterSaveGameIndex * PainterSaveGameIndex = UPainterSaveGameIndex::Load();

	if (ParentPicker->DeleteMode)
	{
		PainterSaveGameIndex->RemoveSaveGame(PaintingName);

		PainterSaveGameIndex->Save();

		UE_LOG(LogTemp, Warning, TEXT("weare in DeleteMode!!"));

		ParentPicker->RefreshSlots();

		UE_LOG(LogTemp, Warning, TEXT("Refresh it!"));
	}
	else {
		UStereoLayerFunctionLibrary::ShowSplashScreen(); // for debug openlevel

		UGameplayStatics::OpenLevel(GetWorld(), TEXT("Canvas"), true, "SlotName=" + PaintingName);
	}


}
