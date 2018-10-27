// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/SceneCaptureComponent2D.h"

#include "SnapShotCamera.generated.h"

UCLASS()
class DRAWHERE_API ASnapShotCamera : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASnapShotCamera();

	
	void CaptureScreenshot(const FString& Directory, const FString& Filename);

	
		
private:
	//Components
	UPROPERTY(VisibleAnywhere)
		USceneCaptureComponent2D* CaptureComponent;
	
	
};
