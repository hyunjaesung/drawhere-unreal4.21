// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "HandController.h"
#include "Camera/CameraComponent.h"
#include "Saving/PainterSaveGame.h"


#include "VRPawn.generated.h"

UCLASS()
class DRAWHERE_API AVRPawn : public APawn
{
	GENERATED_BODY()

public:
	
	AVRPawn();

protected:

	virtual void BeginPlay() override;

	virtual void SetupPlayerInputComponent
	(
		UInputComponent * PlayerInputComponent
	) override;

private :

	void RightTriggerPressed() { if (RightHandController) RightHandController->TriggerPressed(); }
	void RightTriggerReleased() { if (RightHandController) RightHandController->TriggerReleased(); }


	//Config
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AHandController> HandControllerClass;


	//Component
	UPROPERTY(VisibleAnywhere)
	USceneComponent*VRRoot;
	
	UPROPERTY(VisibleAnywhere)
	UCameraComponent*Camera;

	// Reference

	UPROPERTY()
		AHandController* RightHandController;



};
