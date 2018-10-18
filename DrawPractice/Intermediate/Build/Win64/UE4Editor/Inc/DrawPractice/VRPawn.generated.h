// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRAWPRACTICE_VRPawn_generated_h
#error "VRPawn.generated.h already included, missing '#pragma once' in VRPawn.h"
#endif
#define DRAWPRACTICE_VRPawn_generated_h

#define DrawPractice_Source_DrawPractice_VRPawn_h_16_RPC_WRAPPERS
#define DrawPractice_Source_DrawPractice_VRPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define DrawPractice_Source_DrawPractice_VRPawn_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRPawn(); \
	friend struct Z_Construct_UClass_AVRPawn_Statics; \
public: \
	DECLARE_CLASS(AVRPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DrawPractice"), NO_API) \
	DECLARE_SERIALIZER(AVRPawn)


#define DrawPractice_Source_DrawPractice_VRPawn_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAVRPawn(); \
	friend struct Z_Construct_UClass_AVRPawn_Statics; \
public: \
	DECLARE_CLASS(AVRPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DrawPractice"), NO_API) \
	DECLARE_SERIALIZER(AVRPawn)


#define DrawPractice_Source_DrawPractice_VRPawn_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRPawn(AVRPawn&&); \
	NO_API AVRPawn(const AVRPawn&); \
public:


#define DrawPractice_Source_DrawPractice_VRPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRPawn(AVRPawn&&); \
	NO_API AVRPawn(const AVRPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVRPawn)


#define DrawPractice_Source_DrawPractice_VRPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HandControllerClass() { return STRUCT_OFFSET(AVRPawn, HandControllerClass); } \
	FORCEINLINE static uint32 __PPO__VRRoot() { return STRUCT_OFFSET(AVRPawn, VRRoot); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AVRPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__RightHandController() { return STRUCT_OFFSET(AVRPawn, RightHandController); }


#define DrawPractice_Source_DrawPractice_VRPawn_h_13_PROLOG
#define DrawPractice_Source_DrawPractice_VRPawn_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DrawPractice_Source_DrawPractice_VRPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	DrawPractice_Source_DrawPractice_VRPawn_h_16_RPC_WRAPPERS \
	DrawPractice_Source_DrawPractice_VRPawn_h_16_INCLASS \
	DrawPractice_Source_DrawPractice_VRPawn_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DrawPractice_Source_DrawPractice_VRPawn_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DrawPractice_Source_DrawPractice_VRPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	DrawPractice_Source_DrawPractice_VRPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DrawPractice_Source_DrawPractice_VRPawn_h_16_INCLASS_NO_PURE_DECLS \
	DrawPractice_Source_DrawPractice_VRPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DrawPractice_Source_DrawPractice_VRPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
