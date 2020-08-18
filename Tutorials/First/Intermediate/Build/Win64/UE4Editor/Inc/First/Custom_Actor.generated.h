// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRST_Custom_Actor_generated_h
#error "Custom_Actor.generated.h already included, missing '#pragma once' in Custom_Actor.h"
#endif
#define FIRST_Custom_Actor_generated_h

#define First_Source_First_Custom_Actor_h_12_SPARSE_DATA
#define First_Source_First_Custom_Actor_h_12_RPC_WRAPPERS
#define First_Source_First_Custom_Actor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define First_Source_First_Custom_Actor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACustom_Actor(); \
	friend struct Z_Construct_UClass_ACustom_Actor_Statics; \
public: \
	DECLARE_CLASS(ACustom_Actor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/First"), NO_API) \
	DECLARE_SERIALIZER(ACustom_Actor)


#define First_Source_First_Custom_Actor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACustom_Actor(); \
	friend struct Z_Construct_UClass_ACustom_Actor_Statics; \
public: \
	DECLARE_CLASS(ACustom_Actor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/First"), NO_API) \
	DECLARE_SERIALIZER(ACustom_Actor)


#define First_Source_First_Custom_Actor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACustom_Actor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustom_Actor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustom_Actor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustom_Actor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustom_Actor(ACustom_Actor&&); \
	NO_API ACustom_Actor(const ACustom_Actor&); \
public:


#define First_Source_First_Custom_Actor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustom_Actor(ACustom_Actor&&); \
	NO_API ACustom_Actor(const ACustom_Actor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustom_Actor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustom_Actor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACustom_Actor)


#define First_Source_First_Custom_Actor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Static_Mesh() { return STRUCT_OFFSET(ACustom_Actor, Static_Mesh); }


#define First_Source_First_Custom_Actor_h_9_PROLOG
#define First_Source_First_Custom_Actor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	First_Source_First_Custom_Actor_h_12_PRIVATE_PROPERTY_OFFSET \
	First_Source_First_Custom_Actor_h_12_SPARSE_DATA \
	First_Source_First_Custom_Actor_h_12_RPC_WRAPPERS \
	First_Source_First_Custom_Actor_h_12_INCLASS \
	First_Source_First_Custom_Actor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define First_Source_First_Custom_Actor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	First_Source_First_Custom_Actor_h_12_PRIVATE_PROPERTY_OFFSET \
	First_Source_First_Custom_Actor_h_12_SPARSE_DATA \
	First_Source_First_Custom_Actor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	First_Source_First_Custom_Actor_h_12_INCLASS_NO_PURE_DECLS \
	First_Source_First_Custom_Actor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRST_API UClass* StaticClass<class ACustom_Actor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID First_Source_First_Custom_Actor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
