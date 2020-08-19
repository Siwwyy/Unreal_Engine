// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYER_INPUT_MyActor_generated_h
#error "MyActor.generated.h already included, missing '#pragma once' in MyActor.h"
#endif
#define PLAYER_INPUT_MyActor_generated_h

#define Player_Input_Source_Player_Input_MyActor_h_12_SPARSE_DATA
#define Player_Input_Source_Player_Input_MyActor_h_12_RPC_WRAPPERS
#define Player_Input_Source_Player_Input_MyActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Player_Input_Source_Player_Input_MyActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend struct Z_Construct_UClass_AMyActor_Statics; \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Player_Input"), NO_API) \
	DECLARE_SERIALIZER(AMyActor)


#define Player_Input_Source_Player_Input_MyActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend struct Z_Construct_UClass_AMyActor_Statics; \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Player_Input"), NO_API) \
	DECLARE_SERIALIZER(AMyActor)


#define Player_Input_Source_Player_Input_MyActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public:


#define Player_Input_Source_Player_Input_MyActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyActor)


#define Player_Input_Source_Player_Input_MyActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StaticMesh_ptr() { return STRUCT_OFFSET(AMyActor, StaticMesh_ptr); }


#define Player_Input_Source_Player_Input_MyActor_h_9_PROLOG
#define Player_Input_Source_Player_Input_MyActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Player_Input_Source_Player_Input_MyActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Player_Input_Source_Player_Input_MyActor_h_12_SPARSE_DATA \
	Player_Input_Source_Player_Input_MyActor_h_12_RPC_WRAPPERS \
	Player_Input_Source_Player_Input_MyActor_h_12_INCLASS \
	Player_Input_Source_Player_Input_MyActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Player_Input_Source_Player_Input_MyActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Player_Input_Source_Player_Input_MyActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Player_Input_Source_Player_Input_MyActor_h_12_SPARSE_DATA \
	Player_Input_Source_Player_Input_MyActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Player_Input_Source_Player_Input_MyActor_h_12_INCLASS_NO_PURE_DECLS \
	Player_Input_Source_Player_Input_MyActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYER_INPUT_API UClass* StaticClass<class AMyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Player_Input_Source_Player_Input_MyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
