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


public : // 퍼블릭필요
	static UPainterSaveGame * Create();
	bool Save();
	
};
