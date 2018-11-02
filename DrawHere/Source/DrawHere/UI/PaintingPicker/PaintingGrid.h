#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "PaintingPicker.h"

#include "PaintingGridCard.h"
#include "Components/UniformGridPanel.h"
#include "Components/WidgetComponent.h"

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

	void AddPainting(int32 PaintingIndex, FString PaintingName); // where?

	//void DeletePainting(int32 PaintingIndex, FString PaintingName);

	void ClearPaintings();

	void SetParentPicker(APaintingPicker * NewParentPicker) { ParentPicker = NewParentPicker; }

	bool DeleteMode = false;

protected:
	UPROPERTY(BlueprintReadonly, VisibleAnywhere, meta = (BindWidget))
		UUniformGridPanel * PaintingGrid; // in blueprint you have to change the name of grid panel for matching
private:
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<UPaintingGridCard> GridCardClass; // connect paintinggrid_wbp and paintinggridcard_wbp

	UPROPERTY()
		APaintingPicker * ParentPicker;


};
