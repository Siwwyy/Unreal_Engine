// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player_Input/Player_InputGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_InputGameMode() {}
// Cross Module References
	PLAYER_INPUT_API UClass* Z_Construct_UClass_APlayer_InputGameMode_NoRegister();
	PLAYER_INPUT_API UClass* Z_Construct_UClass_APlayer_InputGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Player_Input();
// End Cross Module References
	void APlayer_InputGameMode::StaticRegisterNativesAPlayer_InputGameMode()
	{
	}
	UClass* Z_Construct_UClass_APlayer_InputGameMode_NoRegister()
	{
		return APlayer_InputGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APlayer_InputGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayer_InputGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Player_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_InputGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player_InputGameMode.h" },
		{ "ModuleRelativePath", "Player_InputGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayer_InputGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayer_InputGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayer_InputGameMode_Statics::ClassParams = {
		&APlayer_InputGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APlayer_InputGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_InputGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayer_InputGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayer_InputGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayer_InputGameMode, 1150285688);
	template<> PLAYER_INPUT_API UClass* StaticClass<APlayer_InputGameMode>()
	{
		return APlayer_InputGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayer_InputGameMode(Z_Construct_UClass_APlayer_InputGameMode, &APlayer_InputGameMode::StaticClass, TEXT("/Script/Player_Input"), TEXT("APlayer_InputGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer_InputGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
