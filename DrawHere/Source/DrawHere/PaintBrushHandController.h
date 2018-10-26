// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/WidgetInteractionComponent.h"
#include"Stroke.h"
#include"HandControllerBase.h"


#include "PaintBrushHandController.generated.h"

UCLASS()
class DRAWHERE_API APaintBrushHandController : public AHandControllerBase
{
	GENERATED_BODY()
	
public:	
	
	APaintBrushHandController();
	
	void TriggerPressed() override;
	void TriggerReleased() override;
	
	void XbuttonPressed() override;
	void XbuttonReleased() override;

protected:
	
	virtual void BeginPlay() override;

public:	
	
	virtual void Tick(float DeltaTime) override;

	

	UFUNCTION(BlueprintCallable)
		void SetStrokeClass(APaintBrushHandController * PaintBrushHandController, TSubclassOf<AStroke> NewStrokeClass)
	{
		PaintBrushHandController->StrokeClass = NewStrokeClass;
		
	}

private:
	//config
	UPROPERTY(EditAnywhere)
		TSubclassOf<AStroke> StrokeClass;

	UPROPERTY(VisibleAnywhere)
		UWidgetInteractionComponent* Pointer;
	
	//State

	AStroke * CurrentStroke;
	
	
	


	
};
