// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Light_Door/MyActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorComponent() {}
// Cross Module References
	LIGHT_DOOR_API UClass* Z_Construct_UClass_UMyActorComponent_NoRegister();
	LIGHT_DOOR_API UClass* Z_Construct_UClass_UMyActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Light_Door();
// End Cross Module References
	void UMyActorComponent::StaticRegisterNativesUMyActorComponent()
	{
	}
	UClass* Z_Construct_UClass_UMyActorComponent_NoRegister()
	{
		return UMyActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMyActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Line_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Line_Length;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Light_Door,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MyActorComponent.h" },
		{ "ModuleRelativePath", "MyActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyActorComponent_Statics::NewProp_Line_Length_MetaData[] = {
		{ "Category", "Line Details" },
		{ "ModuleRelativePath", "MyActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyActorComponent_Statics::NewProp_Line_Length = { "Line_Length", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyActorComponent, Line_Length), METADATA_PARAMS(Z_Construct_UClass_UMyActorComponent_Statics::NewProp_Line_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyActorComponent_Statics::NewProp_Line_Length_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyActorComponent_Statics::NewProp_Line_Length,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyActorComponent_Statics::ClassParams = {
		&UMyActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMyActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyActorComponent, 477852760);
	template<> LIGHT_DOOR_API UClass* StaticClass<UMyActorComponent>()
	{
		return UMyActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyActorComponent(Z_Construct_UClass_UMyActorComponent, &UMyActorComponent::StaticClass, TEXT("/Script/Light_Door"), TEXT("UMyActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
