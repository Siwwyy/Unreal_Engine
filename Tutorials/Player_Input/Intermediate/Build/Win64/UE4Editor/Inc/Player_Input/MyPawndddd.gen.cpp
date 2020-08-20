// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player_Input/MyPawndddd.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPawndddd() {}
// Cross Module References
	PLAYER_INPUT_API UClass* Z_Construct_UClass_AMyPawndddd_NoRegister();
	PLAYER_INPUT_API UClass* Z_Construct_UClass_AMyPawndddd();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Player_Input();
// End Cross Module References
	void AMyPawndddd::StaticRegisterNativesAMyPawndddd()
	{
	}
	UClass* Z_Construct_UClass_AMyPawndddd_NoRegister()
	{
		return AMyPawndddd::StaticClass();
	}
	struct Z_Construct_UClass_AMyPawndddd_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPawndddd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Player_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawndddd_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPawndddd.h" },
		{ "ModuleRelativePath", "MyPawndddd.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPawndddd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPawndddd>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyPawndddd_Statics::ClassParams = {
		&AMyPawndddd::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyPawndddd_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawndddd_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyPawndddd()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyPawndddd_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyPawndddd, 721939192);
	template<> PLAYER_INPUT_API UClass* StaticClass<AMyPawndddd>()
	{
		return AMyPawndddd::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPawndddd(Z_Construct_UClass_AMyPawndddd, &AMyPawndddd::StaticClass, TEXT("/Script/Player_Input"), TEXT("AMyPawndddd"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPawndddd);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
