// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DrawPractice/HandController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHandController() {}
// Cross Module References
	DRAWPRACTICE_API UClass* Z_Construct_UClass_AHandController_NoRegister();
	DRAWPRACTICE_API UClass* Z_Construct_UClass_AHandController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DrawPractice();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DRAWPRACTICE_API UClass* Z_Construct_UClass_AStroke_NoRegister();
// End Cross Module References
	void AHandController::StaticRegisterNativesAHandController()
	{
	}
	UClass* Z_Construct_UClass_AHandController_NoRegister()
	{
		return AHandController::StaticClass();
	}
	struct Z_Construct_UClass_AHandController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionContorller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionContorller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrokeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StrokeClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHandController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DrawPractice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHandController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HandController.h" },
		{ "ModuleRelativePath", "HandController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHandController_Statics::NewProp_MotionContorller_MetaData[] = {
		{ "Category", "HandController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HandController.h" },
		{ "ToolTip", "Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHandController_Statics::NewProp_MotionContorller = { UE4CodeGen_Private::EPropertyClass::Object, "MotionContorller", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(AHandController, MotionContorller), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHandController_Statics::NewProp_MotionContorller_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHandController_Statics::NewProp_MotionContorller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHandController_Statics::NewProp_StrokeClass_MetaData[] = {
		{ "Category", "HandController" },
		{ "ModuleRelativePath", "HandController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHandController_Statics::NewProp_StrokeClass = { UE4CodeGen_Private::EPropertyClass::Class, "StrokeClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000001, 1, nullptr, STRUCT_OFFSET(AHandController, StrokeClass), Z_Construct_UClass_AStroke_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AHandController_Statics::NewProp_StrokeClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHandController_Statics::NewProp_StrokeClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHandController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandController_Statics::NewProp_MotionContorller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandController_Statics::NewProp_StrokeClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHandController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHandController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHandController_Statics::ClassParams = {
		&AHandController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AHandController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AHandController_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AHandController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHandController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHandController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHandController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHandController, 2663636837);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHandController(Z_Construct_UClass_AHandController, &AHandController::StaticClass, TEXT("/Script/DrawPractice"), TEXT("AHandController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHandController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
