// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/WidgetComponent.h"

#include "PaintingPicker.generated.h"

UCLASS()
class DRAWHERE_API APaintingPicker : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APaintingPicker();

	void AddPainting();

	void ToggleDeleteMode();

	bool IsDeleteMode() const{ return DeleteMode; }

	void RefreshSlots();

	
		
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	

private :
	UPROPERTY(VisibleAnyWhere)
		USceneComponent* root;

	UPROPERTY(VisibleAnywhere)
		UWidgetComponent * PaintingGrid3;
	
	UPROPERTY(VisibleAnywhere)
		UWidgetComponent * ActionBar;
	
	
	

	//state
	bool DeleteMode = false;
	
};
