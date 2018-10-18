// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRAWPRACTICE_Stroke_generated_h
#error "Stroke.generated.h already included, missing '#pragma once' in Stroke.h"
#endif
#define DRAWPRACTICE_Stroke_generated_h

#define DrawPractice_Source_DrawPractice_Stroke_h_13_RPC_WRAPPERS
#define DrawPractice_Source_DrawPractice_Stroke_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define DrawPractice_Source_DrawPractice_Stroke_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStroke(); \
	friend struct Z_Construct_UClass_AStroke_Statics; \
public: \
	DECLARE_CLASS(AStroke, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DrawPractice"), NO_API) \
	DECLARE_SERIALIZER(AStroke)


#define DrawPractice_Source_DrawPractice_Stroke_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAStroke(); \
	friend struct Z_Construct_UClass_AStroke_Statics; \
public: \
	DECLARE_CLASS(AStroke, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DrawPractice"), NO_API) \
	DECLARE_SERIALIZER(AStroke)


#define DrawPractice_Source_DrawPractice_Stroke_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStroke(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStroke) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStroke); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStroke); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStroke(AStroke&&); \
	NO_API AStroke(const AStroke&); \
public:


#define DrawPractice_Source_DrawPractice_Stroke_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStroke(AStroke&&); \
	NO_API AStroke(const AStroke&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStroke); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStroke); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStroke)


#define DrawPractice_Source_DrawPractice_Stroke_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(AStroke, Root); } \
	FORCEINLINE static uint32 __PPO__SplineMeshes() { return STRUCT_OFFSET(AStroke, SplineMeshes); } \
	FORCEINLINE static uint32 __PPO__SplineMaterial() { return STRUCT_OFFSET(AStroke, SplineMaterial); }


#define DrawPractice_Source_DrawPractice_Stroke_h_10_PROLOG
#define DrawPractice_Source_DrawPractice_Stroke_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DrawPractice_Source_DrawPractice_Stroke_h_13_PRIVATE_PROPERTY_OFFSET \
	DrawPractice_Source_DrawPractice_Stroke_h_13_RPC_WRAPPERS \
	DrawPractice_Source_DrawPractice_Stroke_h_13_INCLASS \
	DrawPractice_Source_DrawPractice_Stroke_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DrawPractice_Source_DrawPractice_Stroke_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DrawPractice_Source_DrawPractice_Stroke_h_13_PRIVATE_PROPERTY_OFFSET \
	DrawPractice_Source_DrawPractice_Stroke_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DrawPractice_Source_DrawPractice_Stroke_h_13_INCLASS_NO_PURE_DECLS \
	DrawPractice_Source_DrawPractice_Stroke_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DrawPractice_Source_DrawPractice_Stroke_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
