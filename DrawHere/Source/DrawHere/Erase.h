// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Erase.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DRAWHERE_API UErase : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UErase();

	void EraseStroke(FVector Location);
		
	
};
