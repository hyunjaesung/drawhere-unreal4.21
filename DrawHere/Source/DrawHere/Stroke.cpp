// Fill out your copyright notice in the Description page of Project Settings.

#include "Stroke.h"


// Sets default values
AStroke::AStroke()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	StrokeMeshes = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("StrokeMeshes"));

	StrokeMeshes->SetupAttachment(Root);

}

void AStroke::Update(FVector CursorLocation)
{
	FTransform NewStrokeTransform;

	FVector LocalCursorLocation = GetTransform().InverseTransformPosition(CursorLocation);// convert to local space

	NewStrokeTransform.SetLocation(LocalCursorLocation);

	StrokeMeshes->AddInstance(NewStrokeTransform);


	PreviousCursorLocation = CursorLocation;
	
}

