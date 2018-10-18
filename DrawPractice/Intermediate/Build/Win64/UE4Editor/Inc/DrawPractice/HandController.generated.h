// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRAWPRACTICE_HandController_generated_h
#error "HandController.generated.h already included, missing '#pragma once' in HandController.h"
#endif
#define DRAWPRACTICE_HandController_generated_h

#define DrawPractice_Source_DrawPractice_HandController_h_17_RPC_WRAPPERS
#define DrawPractice_Source_DrawPractice_HandController_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define DrawPractice_Source_DrawPractice_HandController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHandController(); \
	friend struct Z_Construct_UClass_AHandController_Statics; \
public: \
	DECLARE_CLASS(AHandController, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DrawPractice"), NO_API) \
	DECLARE_SERIALIZER(AHandController)


#define DrawPractice_Source_DrawPractice_HandController_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAHandController(); \
	friend struct Z_Construct_UClass_AHandController_Statics; \
public: \
	DECLARE_CLASS(AHandController, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DrawPractice"), NO_API) \
	DECLARE_SERIALIZER(AHandController)


#define DrawPractice_Source_DrawPractice_HandController_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHandController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHandController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHandController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHandController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHandController(AHandController&&); \
	NO_API AHandController(const AHandController&); \
public:


#define DrawPractice_Source_DrawPractice_HandController_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHandController(AHandController&&); \
	NO_API AHandController(const AHandController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHandController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHandController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHandController)


#define DrawPractice_Source_DrawPractice_HandController_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MotionContorller() { return STRUCT_OFFSET(AHandController, MotionContorller); }


#define DrawPractice_Source_DrawPractice_HandController_h_14_PROLOG
#define DrawPractice_Source_DrawPractice_HandController_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DrawPractice_Source_DrawPractice_HandController_h_17_PRIVATE_PROPERTY_OFFSET \
	DrawPractice_Source_DrawPractice_HandController_h_17_RPC_WRAPPERS \
	DrawPractice_Source_DrawPractice_HandController_h_17_INCLASS \
	DrawPractice_Source_DrawPractice_HandController_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DrawPractice_Source_DrawPractice_HandController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DrawPractice_Source_DrawPractice_HandController_h_17_PRIVATE_PROPERTY_OFFSET \
	DrawPractice_Source_DrawPractice_HandController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DrawPractice_Source_DrawPractice_HandController_h_17_INCLASS_NO_PURE_DECLS \
	DrawPractice_Source_DrawPractice_HandController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DrawPractice_Source_DrawPractice_HandController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
