// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "PaintingGameMode_2.generated.h"

/**
 * 
 */
UCLASS()
class DRAWHERE_API APaintingGameMode_2 : public AGameMode
{
	GENERATED_BODY()
	
public:
	int test;
	void InitGame(const FString & MapName, const FString & Option, FString & ErrorMessage) override;

private:
	//state
	FString SlotName;
	
	
};
