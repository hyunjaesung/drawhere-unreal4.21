// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

#include "PainterSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class DRAWHERE_API UPainterSaveGame : public USaveGame
{
	GENERATED_BODY()


public : // public needed
	static UPainterSaveGame * Create();
	bool Save();
	static UPainterSaveGame * Load();


	//just set and get string
	void SetState(FString NewState) { State = NewState; };
	FString GetState() const { return State; }


private:
	//state
	UPROPERTY()
	FString State;

};
