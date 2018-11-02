#include "PaintingGrid.h"



#include "Components/SizeBox.h"


void UPaintingGrid::AddPainting(int32 PaintingIndex, FString PaintingName) // Paintingpicker will make different index each
{

	if (!PaintingGrid) return;

	UPaintingGridCard * NewWidget = CreateWidget<UPaintingGridCard>(GetWorld(), GridCardClass); // card which will add

	if (!NewWidget) return;

	NewWidget->SetPaintingName(PaintingName);

	NewWidget->SetParentPicker(ParentPicker);

	USizeBox*CardContainer = Cast<USizeBox>(PaintingGrid->GetChildAt(PaintingIndex)); // make sizebox as much as numbers of indexes

	if (!CardContainer) return;

	CardContainer->AddChild(NewWidget);

}

//void UPaintingGrid::DeletePainting(int32 PaintingIndex, FString PaintingName)
//{
//if (!PaintingGrid) return;

//UPaintingGridCard * NewWidget = CreateWidget<UPaintingGridCard>(GetWorld(), GridCardClass); // card which will add

//if (!NewWidget) return;

//NewWidget->SetDeletePaintingName(PaintingName);

//}

void UPaintingGrid::ClearPaintings()
{
	for (int32 i = 0; i < PaintingGrid->GetChildrenCount(); ++i)
	{
		USizeBox*CardContainer = Cast<USizeBox>(PaintingGrid->GetChildAt(i));

		if (!CardContainer) continue;

		CardContainer->ClearChildren();

	}


}