// Fill out your copyright notice in the Description page of Project Settings.
// Fill out your copyright notice in the Description page of Project Settings.

#include "PainterSaveGame.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"
#include "Stroke.h"
#include "PainterSaveGameIndex.h"

#include "Misc/Guid.h"

UPainterSaveGame * UPainterSaveGame::Create()
{
	UPainterSaveGame* NewSaveGame = Cast<UPainterSaveGame>(UGameplayStatics::CreateSaveGameObject(StaticClass()));
	
	NewSaveGame->SlotName = FGuid::NewGuid().ToString(); // give random and fresh name
	
	if (!NewSaveGame->Save()) // from paintersavegameindex
	{
		return nullptr;
	}

	UPainterSaveGameIndex * Index = UPainterSaveGameIndex::Load(); //  from paintersavegameindex

	Index->AddSaveGame(NewSaveGame);
	Index->Save();
	
	return NewSaveGame;


}

bool UPainterSaveGame::Save()
{
	/* it is just for debug
	UE_LOG(LogTemp, Warning, TEXT("Painting Index :"));

	for (FString SlotName : UPainterSaveGameIndex::Load()->GetSlotNames())
	{
		UE_LOG(LogTemp, Warning, TEXT("PaintingName : %s"), *SlotName);
	}
	*/


	return UGameplayStatics::SaveGameToSlot(this, SlotName, 0);

}

UPainterSaveGame * UPainterSaveGame::Load(FString SlotName)
{
	return Cast<UPainterSaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));

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