// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MotionControllerComponent.h"

#include "HandControllerBase.generated.h"

UCLASS()
class DRAWHERE_API AHandControllerBase : public AActor
{
	GENERATED_BODY()
	
		
public:	
	// Sets default values for this actor's properties
	AHandControllerBase();

	void SetHand(EControllerHand Hand);

	

	virtual void TriggerPressed() {};
	virtual void TriggerReleased() {};
private :
	//Component
	UPROPERTY(VisibleAnywhere)
		UMotionControllerComponent*MotionContorller;

};
