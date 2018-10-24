// Fill out your copyright notice in the Description page of Project Settings.

#include "PaintingGameMode_2.h"

#include "Kismet/GameplayStatics.h"

void APaintingGameMode_2::InitGame(const FString & MapName, const FString & Option, FString & ErrorMessage)
{
	Super::InitGame(MapName, Option, ErrorMessage);

	SlotName = UGameplayStatics::ParseOption(Option, "SlotName");

	UE_LOG(LogTemp, Warning, TEXT("SlotName : %s"), *SlotName);
}




