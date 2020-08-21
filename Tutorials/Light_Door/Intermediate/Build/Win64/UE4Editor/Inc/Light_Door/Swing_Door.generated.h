// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIGHT_DOOR_Swing_Door_generated_h
#error "Swing_Door.generated.h already included, missing '#pragma once' in Swing_Door.h"
#endif
#define LIGHT_DOOR_Swing_Door_generated_h

#define Light_Door_Source_Light_Door_Swing_Door_h_12_SPARSE_DATA
#define Light_Door_Source_Light_Door_Swing_Door_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClose_Door); \
	DECLARE_FUNCTION(execOpen_Door); \
	DECLARE_FUNCTION(execToggle_Door);


#define Light_Door_Source_Light_Door_Swing_Door_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClose_Door); \
	DECLARE_FUNCTION(execOpen_Door); \
	DECLARE_FUNCTION(execToggle_Door);


#define Light_Door_Source_Light_Door_Swing_Door_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASwing_Door(); \
	friend struct Z_Construct_UClass_ASwing_Door_Statics; \
public: \
	DECLARE_CLASS(ASwing_Door, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Light_Door"), NO_API) \
	DECLARE_SERIALIZER(ASwing_Door)


#define Light_Door_Source_Light_Door_Swing_Door_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASwing_Door(); \
	friend struct Z_Construct_UClass_ASwing_Door_Statics; \
public: \
	DECLARE_CLASS(ASwing_Door, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Light_Door"), NO_API) \
	DECLARE_SERIALIZER(ASwing_Door)


#define Light_Door_Source_Light_Door_Swing_Door_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASwing_Door(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASwing_Door) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwing_Door); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwing_Door); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwing_Door(ASwing_Door&&); \
	NO_API ASwing_Door(const ASwing_Door&); \
public:


#define Light_Door_Source_Light_Door_Swing_Door_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwing_Door(ASwing_Door&&); \
	NO_API ASwing_Door(const ASwing_Door&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwing_Door); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwing_Door); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASwing_Door)


#define Light_Door_Source_Light_Door_Swing_Door_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Door() { return STRUCT_OFFSET(ASwing_Door, Door); }


#define Light_Door_Source_Light_Door_Swing_Door_h_9_PROLOG
#define Light_Door_Source_Light_Door_Swing_Door_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Light_Door_Source_Light_Door_Swing_Door_h_12_PRIVATE_PROPERTY_OFFSET \
	Light_Door_Source_Light_Door_Swing_Door_h_12_SPARSE_DATA \
	Light_Door_Source_Light_Door_Swing_Door_h_12_RPC_WRAPPERS \
	Light_Door_Source_Light_Door_Swing_Door_h_12_INCLASS \
	Light_Door_Source_Light_Door_Swing_Door_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Light_Door_Source_Light_Door_Swing_Door_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Light_Door_Source_Light_Door_Swing_Door_h_12_PRIVATE_PROPERTY_OFFSET \
	Light_Door_Source_Light_Door_Swing_Door_h_12_SPARSE_DATA \
	Light_Door_Source_Light_Door_Swing_Door_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Light_Door_Source_Light_Door_Swing_Door_h_12_INCLASS_NO_PURE_DECLS \
	Light_Door_Source_Light_Door_Swing_Door_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIGHT_DOOR_API UClass* StaticClass<class ASwing_Door>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Light_Door_Source_Light_Door_Swing_Door_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
