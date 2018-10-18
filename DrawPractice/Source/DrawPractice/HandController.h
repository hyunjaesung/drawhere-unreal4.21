// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "MotionControllerComponent.h"
#include "Stroke.h"


#include "HandController.generated.h"

UCLASS()
class DRAWPRACTICE_API AHandController : public AActor
{
	GENERATED_BODY()
	
public:

	AHandController();

	void TriggerPressed();
	void TriggerReleased();

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		TSubclassOf<AStroke> StrokeClass;


private:
	//Component
	UPROPERTY(VisibleAnywhere)
		UMotionControllerComponent*MotionContorller;

	AStroke * CurrentStroke;

};
