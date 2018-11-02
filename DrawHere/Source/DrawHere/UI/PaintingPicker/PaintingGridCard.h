// Fill out your copyright notice in the Description page of Project Settings.
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Components/Image.h"

#include "PaintingPicker.h"

#include "PaintingGridCard.generated.h"

/**
*
*/
UCLASS()
class DRAWHERE_API UPaintingGridCard : public UUserWidget
{
	GENERATED_BODY()

public:

	void SetPaintingName(FString NewPaintingName);

	void SetParentPicker(APaintingPicker * NewParentPicker) { ParentPicker = NewParentPicker; }

protected:
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta = (BindWidget))
		UTextBlock * SlotName;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta = (BindWidget))
		UButton * CardButton;

	//UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta = (BindWidget))
	//UImage* Thumbnail;

private:
	UFUNCTION()
		void CardButtonClicked();



	//state

	FString PaintingName;

	APaintingPicker * ParentPicker;

};
