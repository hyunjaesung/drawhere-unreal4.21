// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DrawPractice/DrawPracticeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrawPracticeGameModeBase() {}
// Cross Module References
	DRAWPRACTICE_API UClass* Z_Construct_UClass_ADrawPracticeGameModeBase_NoRegister();
	DRAWPRACTICE_API UClass* Z_Construct_UClass_ADrawPracticeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DrawPractice();
// End Cross Module References
	void ADrawPracticeGameModeBase::StaticRegisterNativesADrawPracticeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ADrawPracticeGameModeBase_NoRegister()
	{
		return ADrawPracticeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADrawPracticeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADrawPracticeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DrawPractice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrawPracticeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DrawPracticeGameModeBase.h" },
		{ "ModuleRelativePath", "DrawPracticeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADrawPracticeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADrawPracticeGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADrawPracticeGameModeBase_Statics::ClassParams = {
		&ADrawPracticeGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ADrawPracticeGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADrawPracticeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADrawPracticeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADrawPracticeGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADrawPracticeGameModeBase, 3878451195);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADrawPracticeGameModeBase(Z_Construct_UClass_ADrawPracticeGameModeBase, &ADrawPracticeGameModeBase::StaticClass, TEXT("/Script/DrawPractice"), TEXT("ADrawPracticeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADrawPracticeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
