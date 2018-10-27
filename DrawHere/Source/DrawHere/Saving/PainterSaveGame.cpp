// Fill out your copyright notice in the Description page of Project Settings.
// Fill out your copyright notice in the Description page of Project Settings.

#include "PainterSaveGame.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"
#include "Stroke.h"

#include "HAL/FileManager.h"
#include "Paths.h"
#include "UI/SnapShotCamera.h"

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

//void UPainterSaveGame::Delete(FString SlotName)
//{
	
	//UPainterSaveGameIndex * List = UPainterSaveGameIndex::Load();
	

	//List->RemoveSaveGame(SlotName);
	//List->Save();

//UGameplayStatics::DeleteGameInSlot(SlotName, 0);

	

//}


bool UPainterSaveGame::Save()
{
	
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

void UPainterSaveGame::SnapshotLevel(UWorld* World)
{
	for (TActorIterator<AStroke> StrokeItr(World); StrokeItr; ++StrokeItr)//iterate over all strokes
	{
		//Todo:serialize
		Strokes.Add(StrokeItr->SerializeToStruct());//Store class type
	}

	for (TActorIterator<ASnapShotCamera> SnapshotCamera(World); SnapshotCamera; ++SnapshotCamera)
	{
		FString ThumbnailDir = FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("Thumbs"));
		IFileManager::Get().MakeDirectory(*ThumbnailDir, true);
		FString FileName = SlotName + ".png";

		SnapshotCamera->CaptureScreenshot(ThumbnailDir, FileName);
		break; // Only snapshot the first camera in a scene.
	}
}

FString UPainterSaveGame::GetImagePath(const FString & SlotName)
{
	FString ThumbnailDir = FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("Thumbs"));
	FString FileName = SlotName + ".png";
	return FPaths::Combine(ThumbnailDir, FileName);
}