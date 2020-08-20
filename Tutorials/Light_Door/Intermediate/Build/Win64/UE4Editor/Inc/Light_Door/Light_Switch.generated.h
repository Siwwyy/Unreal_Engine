// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIGHT_DOOR_Light_Switch_generated_h
#error "Light_Switch.generated.h already included, missing '#pragma once' in Light_Switch.h"
#endif
#define LIGHT_DOOR_Light_Switch_generated_h

#define Light_Door_Source_Light_Door_Light_Switch_h_12_SPARSE_DATA
#define Light_Door_Source_Light_Door_Light_Switch_h_12_RPC_WRAPPERS
#define Light_Door_Source_Light_Door_Light_Switch_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Light_Door_Source_Light_Door_Light_Switch_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALight_Switch(); \
	friend struct Z_Construct_UClass_ALight_Switch_Statics; \
public: \
	DECLARE_CLASS(ALight_Switch, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Light_Door"), NO_API) \
	DECLARE_SERIALIZER(ALight_Switch)


#define Light_Door_Source_Light_Door_Light_Switch_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALight_Switch(); \
	friend struct Z_Construct_UClass_ALight_Switch_Statics; \
public: \
	DECLARE_CLASS(ALight_Switch, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Light_Door"), NO_API) \
	DECLARE_SERIALIZER(ALight_Switch)


#define Light_Door_Source_Light_Door_Light_Switch_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALight_Switch(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALight_Switch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALight_Switch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALight_Switch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALight_Switch(ALight_Switch&&); \
	NO_API ALight_Switch(const ALight_Switch&); \
public:


#define Light_Door_Source_Light_Door_Light_Switch_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALight_Switch(ALight_Switch&&); \
	NO_API ALight_Switch(const ALight_Switch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALight_Switch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALight_Switch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALight_Switch)


#define Light_Door_Source_Light_Door_Light_Switch_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Light_array() { return STRUCT_OFFSET(ALight_Switch, Light_array); } \
	FORCEINLINE static uint32 __PPO__Switch_On() { return STRUCT_OFFSET(ALight_Switch, Switch_On); } \
	FORCEINLINE static uint32 __PPO__Switch_Off() { return STRUCT_OFFSET(ALight_Switch, Switch_Off); }


#define Light_Door_Source_Light_Door_Light_Switch_h_9_PROLOG
#define Light_Door_Source_Light_Door_Light_Switch_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Light_Door_Source_Light_Door_Light_Switch_h_12_PRIVATE_PROPERTY_OFFSET \
	Light_Door_Source_Light_Door_Light_Switch_h_12_SPARSE_DATA \
	Light_Door_Source_Light_Door_Light_Switch_h_12_RPC_WRAPPERS \
	Light_Door_Source_Light_Door_Light_Switch_h_12_INCLASS \
	Light_Door_Source_Light_Door_Light_Switch_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Light_Door_Source_Light_Door_Light_Switch_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Light_Door_Source_Light_Door_Light_Switch_h_12_PRIVATE_PROPERTY_OFFSET \
	Light_Door_Source_Light_Door_Light_Switch_h_12_SPARSE_DATA \
	Light_Door_Source_Light_Door_Light_Switch_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Light_Door_Source_Light_Door_Light_Switch_h_12_INCLASS_NO_PURE_DECLS \
	Light_Door_Source_Light_Door_Light_Switch_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIGHT_DOOR_API UClass* StaticClass<class ALight_Switch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Light_Door_Source_Light_Door_Light_Switch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
