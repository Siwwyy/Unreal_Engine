// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Light_Door/Light_DoorGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLight_DoorGameMode() {}
// Cross Module References
	LIGHT_DOOR_API UClass* Z_Construct_UClass_ALight_DoorGameMode_NoRegister();
	LIGHT_DOOR_API UClass* Z_Construct_UClass_ALight_DoorGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Light_Door();
// End Cross Module References
	void ALight_DoorGameMode::StaticRegisterNativesALight_DoorGameMode()
	{
	}
	UClass* Z_Construct_UClass_ALight_DoorGameMode_NoRegister()
	{
		return ALight_DoorGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALight_DoorGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALight_DoorGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Light_Door,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALight_DoorGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Light_DoorGameMode.h" },
		{ "ModuleRelativePath", "Light_DoorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALight_DoorGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALight_DoorGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALight_DoorGameMode_Statics::ClassParams = {
		&ALight_DoorGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALight_DoorGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALight_DoorGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALight_DoorGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALight_DoorGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALight_DoorGameMode, 1753538473);
	template<> LIGHT_DOOR_API UClass* StaticClass<ALight_DoorGameMode>()
	{
		return ALight_DoorGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALight_DoorGameMode(Z_Construct_UClass_ALight_DoorGameMode, &ALight_DoorGameMode::StaticClass, TEXT("/Script/Light_Door"), TEXT("ALight_DoorGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALight_DoorGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
