// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DrawPractice/Stroke.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStroke() {}
// Cross Module References
	DRAWPRACTICE_API UClass* Z_Construct_UClass_AStroke_NoRegister();
	DRAWPRACTICE_API UClass* Z_Construct_UClass_AStroke();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DrawPractice();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AStroke::StaticRegisterNativesAStroke()
	{
	}
	UClass* Z_Construct_UClass_AStroke_NoRegister()
	{
		return AStroke::StaticClass();
	}
	struct Z_Construct_UClass_AStroke_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStroke_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DrawPractice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStroke_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Stroke.h" },
		{ "ModuleRelativePath", "Stroke.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStroke_Statics::NewProp_SplineMaterial_MetaData[] = {
		{ "Category", "Stroke" },
		{ "ModuleRelativePath", "Stroke.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStroke_Statics::NewProp_SplineMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "SplineMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AStroke, SplineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStroke_Statics::NewProp_SplineMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStroke_Statics::NewProp_SplineMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStroke_Statics::NewProp_SplineMeshes_MetaData[] = {
		{ "Category", "Stroke" },
		{ "ModuleRelativePath", "Stroke.h" },
		{ "ToolTip", "Config" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStroke_Statics::NewProp_SplineMeshes = { UE4CodeGen_Private::EPropertyClass::Object, "SplineMeshes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AStroke, SplineMeshes), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStroke_Statics::NewProp_SplineMeshes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStroke_Statics::NewProp_SplineMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStroke_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "Stroke" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Stroke.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStroke_Statics::NewProp_Root = { UE4CodeGen_Private::EPropertyClass::Object, "Root", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(AStroke, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStroke_Statics::NewProp_Root_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStroke_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStroke_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStroke_Statics::NewProp_SplineMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStroke_Statics::NewProp_SplineMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStroke_Statics::NewProp_Root,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStroke_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStroke>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStroke_Statics::ClassParams = {
		&AStroke::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AStroke_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AStroke_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AStroke_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AStroke_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStroke()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStroke_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStroke, 2836046693);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStroke(Z_Construct_UClass_AStroke, &AStroke::StaticClass, TEXT("/Script/DrawPractice"), TEXT("AStroke"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStroke);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
