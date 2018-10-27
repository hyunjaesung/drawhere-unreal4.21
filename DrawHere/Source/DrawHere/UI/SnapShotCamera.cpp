// Fill out your copyright notice in the Description page of Project Settings.

#include "SnapShotCamera.h"
#include "Kismet/KismetRenderingLibrary.h"




// Sets default values
ASnapShotCamera::ASnapShotCamera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PrimaryActorTick.bCanEverTick = true;

	CaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("CaptureComponent"));
	CaptureComponent->bCaptureEveryFrame = false;
	CaptureComponent->bCaptureOnMovement = false;
	CaptureComponent->CaptureSource = SCS_FinalColorLDR;


}

void ASnapShotCamera::CaptureScreenshot(const FString & Directory, const FString & Filename)
{
	auto RenderTarget = UKismetRenderingLibrary::CreateRenderTarget2D(this, 256, 256, RTF_RGBA8);
	CaptureComponent->TextureTarget = RenderTarget;
	CaptureComponent->CaptureScene();
	UKismetRenderingLibrary::ExportRenderTarget(this, RenderTarget, Directory, Filename);
	
	UE_LOG(LogTemp, Warning, TEXT("%s .png saved!"), *Filename);

}

