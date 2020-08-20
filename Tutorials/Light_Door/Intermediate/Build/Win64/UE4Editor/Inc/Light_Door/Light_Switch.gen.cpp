// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Light_Door/Light_Switch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLight_Switch() {}
// Cross Module References
	LIGHT_DOOR_API UClass* Z_Construct_UClass_ALight_Switch_NoRegister();
	LIGHT_DOOR_API UClass* Z_Construct_UClass_ALight_Switch();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Light_Door();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APointLight_NoRegister();
// End Cross Module References
	void ALight_Switch::StaticRegisterNativesALight_Switch()
	{
	}
	UClass* Z_Construct_UClass_ALight_Switch_NoRegister()
	{
		return ALight_Switch::StaticClass();
	}
	struct Z_Construct_UClass_ALight_Switch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Switch_Off_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Switch_Off;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Switch_On_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Switch_On;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Light_array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Light_array;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Light_array_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALight_Switch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Light_Door,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALight_Switch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Light_Switch.h" },
		{ "ModuleRelativePath", "Light_Switch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALight_Switch_Statics::NewProp_Switch_Off_MetaData[] = {
		{ "Category", "LightSwitch" },
		{ "ModuleRelativePath", "Light_Switch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALight_Switch_Statics::NewProp_Switch_Off = { "Switch_Off", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALight_Switch, Switch_Off), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALight_Switch_Statics::NewProp_Switch_Off_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALight_Switch_Statics::NewProp_Switch_Off_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALight_Switch_Statics::NewProp_Switch_On_MetaData[] = {
		{ "Category", "LightSwitch" },
		{ "ModuleRelativePath", "Light_Switch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALight_Switch_Statics::NewProp_Switch_On = { "Switch_On", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALight_Switch, Switch_On), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALight_Switch_Statics::NewProp_Switch_On_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALight_Switch_Statics::NewProp_Switch_On_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALight_Switch_Statics::NewProp_Light_array_MetaData[] = {
		{ "Category", "Lights" },
		{ "ModuleRelativePath", "Light_Switch.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALight_Switch_Statics::NewProp_Light_array = { "Light_array", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALight_Switch, Light_array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALight_Switch_Statics::NewProp_Light_array_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALight_Switch_Statics::NewProp_Light_array_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALight_Switch_Statics::NewProp_Light_array_Inner = { "Light_array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APointLight_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALight_Switch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALight_Switch_Statics::NewProp_Switch_Off,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALight_Switch_Statics::NewProp_Switch_On,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALight_Switch_Statics::NewProp_Light_array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALight_Switch_Statics::NewProp_Light_array_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALight_Switch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALight_Switch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALight_Switch_Statics::ClassParams = {
		&ALight_Switch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALight_Switch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALight_Switch_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALight_Switch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALight_Switch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALight_Switch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALight_Switch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALight_Switch, 2862829278);
	template<> LIGHT_DOOR_API UClass* StaticClass<ALight_Switch>()
	{
		return ALight_Switch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALight_Switch(Z_Construct_UClass_ALight_Switch, &ALight_Switch::StaticClass, TEXT("/Script/Light_Door"), TEXT("ALight_Switch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALight_Switch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
