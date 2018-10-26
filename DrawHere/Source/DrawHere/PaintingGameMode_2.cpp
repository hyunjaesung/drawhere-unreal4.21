// Fill out your copyright notice in the Description page of Project Settings.

#include "PaintingGameMode_2.h"
#include "Saving/PainterSaveGame.h"
#include "Engine/World.h"
#include "Kismet/StereoLayerFunctionLibrary.h"

#include "Kismet/GameplayStatics.h"

void APaintingGameMode_2::InitGame(const FString & MapName, const FString & Option, FString & ErrorMessage)// must start at beginpaly
{
	Super::InitGame(MapName, Option, ErrorMessage);

	SlotName = UGameplayStatics::ParseOption(Option, "SlotName");

	UE_LOG(LogTemp, Warning, TEXT("SlotName : %s"), *SlotName);
}

void APaintingGameMode_2::BeginPlay()
{
	Super::BeginPlay();

	Load();

	UStereoLayerFunctionLibrary::HideSplashScreen(); // if we had a splashscreen it gives low frame rate
}


void APaintingGameMode_2::Save() // save for this slot
{
	UPainterSaveGame * Painting = UPainterSaveGame::Load(SlotName); 
	
	if (Painting)
	{
	
	    Painting->SerializeFromWorld(GetWorld());
		Painting->Save();
	
	}

}


void APaintingGameMode_2::Load()//from VRPawn
{
	UPainterSaveGame * Painting = UPainterSaveGame::Load(SlotName);
	if (Painting)
	{
		Painting->DeserializeToWorld(GetWorld());

	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Game Slot Not Found : %s"), *SlotName);
	}

}

void APaintingGameMode_2::SaveAndQuit()
{
	Save();

	UGameplayStatics::OpenLevel(GetWorld(), TEXT("MainMenu")); // return


}