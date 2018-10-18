// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DrawPractice/VRPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRPawn() {}
// Cross Module References
	DRAWPRACTICE_API UClass* Z_Construct_UClass_AVRPawn_NoRegister();
	DRAWPRACTICE_API UClass* Z_Construct_UClass_AVRPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_DrawPractice();
	DRAWPRACTICE_API UClass* Z_Construct_UClass_AHandController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AVRPawn::StaticRegisterNativesAVRPawn()
	{
	}
	UClass* Z_Construct_UClass_AVRPawn_NoRegister()
	{
		return AVRPawn::StaticClass();
	}
	struct Z_Construct_UClass_AVRPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightHandController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandControllerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HandControllerClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_DrawPractice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VRPawn.h" },
		{ "ModuleRelativePath", "VRPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPawn_Statics::NewProp_RightHandController_MetaData[] = {
		{ "ModuleRelativePath", "VRPawn.h" },
		{ "ToolTip", "Reference" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPawn_Statics::NewProp_RightHandController = { UE4CodeGen_Private::EPropertyClass::Object, "RightHandController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AVRPawn, RightHandController), Z_Construct_UClass_AHandController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPawn_Statics::NewProp_RightHandController_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVRPawn_Statics::NewProp_RightHandController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPawn_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "VRPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPawn_Statics::NewProp_Camera = { UE4CodeGen_Private::EPropertyClass::Object, "Camera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(AVRPawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPawn_Statics::NewProp_Camera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVRPawn_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPawn_Statics::NewProp_VRRoot_MetaData[] = {
		{ "Category", "VRPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPawn.h" },
		{ "ToolTip", "Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPawn_Statics::NewProp_VRRoot = { UE4CodeGen_Private::EPropertyClass::Object, "VRRoot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(AVRPawn, VRRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPawn_Statics::NewProp_VRRoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVRPawn_Statics::NewProp_VRRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPawn_Statics::NewProp_HandControllerClass_MetaData[] = {
		{ "Category", "VRPawn" },
		{ "ModuleRelativePath", "VRPawn.h" },
		{ "ToolTip", "Config" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AVRPawn_Statics::NewProp_HandControllerClass = { UE4CodeGen_Private::EPropertyClass::Class, "HandControllerClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000010001, 1, nullptr, STRUCT_OFFSET(AVRPawn, HandControllerClass), Z_Construct_UClass_AHandController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AVRPawn_Statics::NewProp_HandControllerClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVRPawn_Statics::NewProp_HandControllerClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPawn_Statics::NewProp_RightHandController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPawn_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPawn_Statics::NewProp_VRRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPawn_Statics::NewProp_HandControllerClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVRPawn_Statics::ClassParams = {
		&AVRPawn::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AVRPawn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AVRPawn_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AVRPawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVRPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVRPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRPawn, 1896731440);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRPawn(Z_Construct_UClass_AVRPawn, &AVRPawn::StaticClass, TEXT("/Script/DrawPractice"), TEXT("AVRPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
