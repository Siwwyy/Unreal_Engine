// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRST_FirstCharacter_generated_h
#error "FirstCharacter.generated.h already included, missing '#pragma once' in FirstCharacter.h"
#endif
#define FIRST_FirstCharacter_generated_h

#define First_Source_First_FirstCharacter_h_12_SPARSE_DATA
#define First_Source_First_FirstCharacter_h_12_RPC_WRAPPERS
#define First_Source_First_FirstCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define First_Source_First_FirstCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstCharacter(); \
	friend struct Z_Construct_UClass_AFirstCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/First"), NO_API) \
	DECLARE_SERIALIZER(AFirstCharacter)


#define First_Source_First_FirstCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFirstCharacter(); \
	friend struct Z_Construct_UClass_AFirstCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/First"), NO_API) \
	DECLARE_SERIALIZER(AFirstCharacter)


#define First_Source_First_FirstCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstCharacter(AFirstCharacter&&); \
	NO_API AFirstCharacter(const AFirstCharacter&); \
public:


#define First_Source_First_FirstCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstCharacter(AFirstCharacter&&); \
	NO_API AFirstCharacter(const AFirstCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstCharacter)


#define First_Source_First_FirstCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AFirstCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AFirstCharacter, FollowCamera); }


#define First_Source_First_FirstCharacter_h_9_PROLOG
#define First_Source_First_FirstCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	First_Source_First_FirstCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	First_Source_First_FirstCharacter_h_12_SPARSE_DATA \
	First_Source_First_FirstCharacter_h_12_RPC_WRAPPERS \
	First_Source_First_FirstCharacter_h_12_INCLASS \
	First_Source_First_FirstCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define First_Source_First_FirstCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	First_Source_First_FirstCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	First_Source_First_FirstCharacter_h_12_SPARSE_DATA \
	First_Source_First_FirstCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	First_Source_First_FirstCharacter_h_12_INCLASS_NO_PURE_DECLS \
	First_Source_First_FirstCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRST_API UClass* StaticClass<class AFirstCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID First_Source_First_FirstCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
