// Fill out your copyright notice in the Description page of Project Settings.
// Fill out your copyright notice in the Description page of Project Settings.

#include "PainterSaveGame.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"
#include "Stroke.h"


UPainterSaveGame * UPainterSaveGame::Create()
{
	USaveGame*NewSaveGame = UGameplayStatics::CreateSaveGameObject(StaticClass());

	return Cast<UPainterSaveGame>(NewSaveGame);


}

bool UPainterSaveGame::Save()
{
	return UGameplayStatics::SaveGameToSlot(this, TEXT("Test"), 0);

}

UPainterSaveGame * UPainterSaveGame::Load()
{
	return Cast<UPainterSaveGame>(UGameplayStatics::LoadGameFromSlot(TEXT("Test"), 0));

}

void UPainterSaveGame::SerializeFromWorld(UWorld * World)
{

	Strokes.Empty();//clear array first

	for (TActorIterator<AStroke> StrokeItr(World); StrokeItr; ++StrokeItr)//iterate over all strokes
	{
		//Todo:serialize
		Strokes.Add(StrokeItr->SerializeToStruct());//Store class type
	}

}

void UPainterSaveGame::DeserializeToWorld(UWorld * ChangedWorld)
{
	//clear world first
	ClearWorld(ChangedWorld);

	for (FStrokeState StrokeState : Strokes)
	{
		AStroke::SpawnAndDeserializeFromStruct(ChangedWorld, StrokeState);
	}

	//For all strokes
	//Spawn stroke of that type

}

void UPainterSaveGame::ClearWorld(UWorld * World)
{
	for (TActorIterator<AStroke> StrokeItr(World); StrokeItr; ++StrokeItr)//iterate over all strokes
	{
		StrokeItr->Destroy();
	}
}