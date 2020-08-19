// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYER_INPUT_Player_InputCharacter_generated_h
#error "Player_InputCharacter.generated.h already included, missing '#pragma once' in Player_InputCharacter.h"
#endif
#define PLAYER_INPUT_Player_InputCharacter_generated_h

#define Player_Input_Source_Player_Input_Player_InputCharacter_h_12_SPARSE_DATA
#define Player_Input_Source_Player_Input_Player_InputCharacter_h_12_RPC_WRAPPERS
#define Player_Input_Source_Player_Input_Player_InputCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Player_Input_Source_Player_Input_Player_InputCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayer_InputCharacter(); \
	friend struct Z_Construct_UClass_APlayer_InputCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayer_InputCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Player_Input"), NO_API) \
	DECLARE_SERIALIZER(APlayer_InputCharacter)


#define Player_Input_Source_Player_Input_Player_InputCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlayer_InputCharacter(); \
	friend struct Z_Construct_UClass_APlayer_InputCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayer_InputCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Player_Input"), NO_API) \
	DECLARE_SERIALIZER(APlayer_InputCharacter)


#define Player_Input_Source_Player_Input_Player_InputCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayer_InputCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayer_InputCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_InputCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_InputCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_InputCharacter(APlayer_InputCharacter&&); \
	NO_API APlayer_InputCharacter(const APlayer_InputCharacter&); \
public:


#define Player_Input_Source_Player_Input_Player_InputCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_InputCharacter(APlayer_InputCharacter&&); \
	NO_API APlayer_InputCharacter(const APlayer_InputCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_InputCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_InputCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayer_InputCharacter)


#define Player_Input_Source_Player_Input_Player_InputCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(APlayer_InputCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(APlayer_InputCharacter, FollowCamera); }


#define Player_Input_Source_Player_Input_Player_InputCharacter_h_9_PROLOG
#define Player_Input_Source_Player_Input_Player_InputCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Player_Input_Source_Player_Input_Player_InputCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Player_Input_Source_Player_Input_Player_InputCharacter_h_12_SPARSE_DATA \
	Player_Input_Source_Player_Input_Player_InputCharacter_h_12_RPC_WRAPPERS \
	Player_Input_Source_Player_Input_Player_InputCharacter_h_12_INCLASS \
	Player_Input_Source_Player_Input_Player_InputCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Player_Input_Source_Player_Input_Player_InputCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Player_Input_Source_Player_Input_Player_InputCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Player_Input_Source_Player_Input_Player_InputCharacter_h_12_SPARSE_DATA \
	Player_Input_Source_Player_Input_Player_InputCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Player_Input_Source_Player_Input_Player_InputCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Player_Input_Source_Player_Input_Player_InputCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYER_INPUT_API UClass* StaticClass<class APlayer_InputCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Player_Input_Source_Player_Input_Player_InputCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
