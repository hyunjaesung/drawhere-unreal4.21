// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"

#include "PaintingPicker.h"

#include "ActionBar.generated.h"

/**
 * 
 */
UCLASS()
class DRAWHERE_API UActionBar : public UUserWidget
{
	GENERATED_BODY()

public :
	

	bool Initialize() override;

	void SetParentPicker(APaintingPicker * NewParentPicker) { ParentPicker = NewParentPicker; }

	UFUNCTION(BlueprintCallable)
		bool IsDeleteMode() const { return ParentPicker->DeleteMode; }

protected:
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta = (BindWidget))
		UButton*AddButton;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta = (BindWidget))
		UButton*DeleteButton;


private :

	UPROPERTY()
		APaintingPicker * ParentPicker;

	UFUNCTION()
		void AddButtonClicked() 
		{
				
			if (ParentPicker) //if you find parent painting picker
			{
				ParentPicker->AddPainting(); // add new painting
				
			}
		}

	UFUNCTION()
		void DeleteButtonClicked()
		{
			if (ParentPicker)
			{
				ParentPicker->ToggleDeleteMode();

			}

		}

	

};
