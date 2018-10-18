// Fill out your copyright notice in the Description page of Project Settings.

#include "Stroke.h"


// Sets default values
AStroke::AStroke()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);
}

void AStroke::Update(FVector CursorLocation)
{
	//Create Splinemesh
	USplineMeshComponent * Spline = CreateSplineMeshes();

	FVector Start = GetActorTransform().InverseTransformPosition(CursorLocation);
	FVector End = GetActorTransform().InverseTransformPosition(PreviousCursorLocation);

	Spline->SetStartAndEnd(Start, FVector::ZeroVector, End, FVector::ZeroVector);


	PreviousCursorLocation = CursorLocation;
	//update endpoints
}

USplineMeshComponent * AStroke::CreateSplineMeshes()
{
	USplineMeshComponent*NewSpline = NewObject<USplineMeshComponent>(this);

	NewSpline->SetMobility(EComponentMobility::Movable);
	NewSpline->AttachToComponent(Root, FAttachmentTransformRules::SnapToTargetIncludingScale);
	NewSpline->SetStaticMesh(SplineMeshes);
	NewSpline->SetMaterial(0, SplineMaterial);
	NewSpline->RegisterComponent();

	return NewSpline;

}
