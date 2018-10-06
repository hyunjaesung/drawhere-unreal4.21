// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/InstancedStaticMeshComponent.h"

#include "Components/SplineMeshComponent.h"
#include "Stroke.generated.h"

UCLASS()
class DRAWHERE_API AStroke : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStroke();

	void Update(FVector CursorLocation);

private:
	
	
	//Components
	UPROPERTY(VisibleAnywhere)
	USceneComponent * Root;
	
	//Config
	UPROPERTY(VisibleAnywhere)
		UInstancedStaticMeshComponent * StrokeMeshes;


	//state
	FVector PreviousCursorLocation;
};
