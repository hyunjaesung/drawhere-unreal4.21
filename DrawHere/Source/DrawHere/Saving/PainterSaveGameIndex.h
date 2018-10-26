// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "PainterSaveGame.h"

#include "PainterSaveGameIndex.generated.h"

/**
 * 
 */
UCLASS()
class DRAWHERE_API UPainterSaveGameIndex : public USaveGame
{
	GENERATED_BODY()
	
public :
	static UPainterSaveGameIndex * Load();

	bool Save();

	void AddSaveGame(UPainterSaveGame * SaveGame);

	void RemoveSaveGame(FString Slotname)
	{
		
		SlotNames.Remove(Slotname);
		//UE_LOG(LogTemp, Warning, TEXT("%s removed! "), *Slotname);

	}
	
	TArray<FString> GetSlotNames() const { return SlotNames; };
	
	UPROPERTY()
		TArray<FString> SlotNames;

private : 
	
	static const FString SLOT_NAME; 

	
		
};
