// Fill out your copyright notice in the Description page of Project Settings.
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/SaveGame.h"

#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"



#include "PainterSaveGame.generated.h"


USTRUCT()
struct FStrokeState
{
	GENERATED_BODY()

	UPROPERTY()
		TSubclassOf<class AStroke> Class;

	UPROPERTY()
		TArray<FVector> ControlPoints;
};


/**
*
*/
UCLASS()
class DRAWHERE_API UPainterSaveGame : public USaveGame
{
	GENERATED_BODY()


public: // public needed

	static UPainterSaveGame * Create();
	
	bool Save();

	//void Delete(FString SlotName);
	
	static FString GetImagePath(const FString & SlotName);

	static UPainterSaveGame * Load(FString SlotName);

	UPainterSaveGame * Getme() { return this; } // need to delete

	//just set and get string
	void SetState(FString NewState) { State = NewState; };

	FString GetState() const { return State; }

	void SerializeFromWorld(UWorld*World);

	void DeserializeToWorld(UWorld* ChangedWorld);

	void SnapshotLevel(UWorld* World);

	FString GetSlotName() const { return SlotName; };

	UPROPERTY()
		FString SlotName;

private:

	void ClearWorld(UWorld * World);

	//state
	
	UPROPERTY()
		FString State;

	UPROPERTY()
		TArray<FStrokeState> Strokes; // save strokes for making different level

	
};