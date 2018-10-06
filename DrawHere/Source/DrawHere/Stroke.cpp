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
	if (PreviousCursorLocation.IsNearlyZero()) // 0 에서 시작하는거 방지
	{
		PreviousCursorLocation = CursorLocation;
		return;
	}


	StrokeMeshes->AddInstance(GetNextSegmentTransform(CursorLocation));
	
	PreviousCursorLocation = CursorLocation;
	
}

FTransform AStroke::GetNextSegmentTransform(FVector CurrentLocation) const
{

	FTransform SegmentTranasform;
	
	SegmentTranasform.SetScale3D(GetNextSegmentScale(CurrentLocation));
	SegmentTranasform.SetRotation(GetNextSegmentRotation(CurrentLocation));
	SegmentTranasform.SetLocation(GetNextSegmentLocation(CurrentLocation));

	return SegmentTranasform;
}

FVector AStroke::GetNextSegmentScale(FVector CurrentLocation) const
{
	FVector Segment = CurrentLocation - PreviousCursorLocation;

	return FVector(Segment.Size(), 1, 1);
}

FQuat AStroke::GetNextSegmentRotation(FVector CurrentLocation) const
{
	FVector Segment = CurrentLocation - PreviousCursorLocation;
	FVector SegmentNormal = Segment.GetSafeNormal();
	return FQuat::FindBetweenNormals(FVector::ForwardVector, SegmentNormal);
}

FVector AStroke::GetNextSegmentLocation(FVector CurrentLocation) const
{
	return GetTransform().InverseTransformPosition(PreviousCursorLocation);
}

