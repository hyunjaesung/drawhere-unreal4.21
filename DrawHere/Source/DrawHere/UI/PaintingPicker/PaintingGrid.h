// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "Components/UniformGridPanel.h"

#include "PaintingGrid.generated.h"

/**
 * 
 */
UCLASS()
class DRAWHERE_API UPaintingGrid : public UUserWidget
{
	GENERATED_BODY()

public:

	void mock();
	UFUNCTION(BlueprintCallable) // for using in blueprint
	void AddPainting(int32 PaintingIndex); // where?

protected:
	UPROPERTY(BlueprintReadonly, VisibleAnywhere, meta = (BindWidget))
		UUniformGridPanel * PaintingGrid; // in blueprint you have to change the name of grid panel for matching
private :
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<UUserWidget> GridCardClass; // connect paintinggrid_wbp and paintinggridcard_wbp
};
