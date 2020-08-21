// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Light_Door/Swing_Door.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwing_Door() {}
// Cross Module References
	LIGHT_DOOR_API UClass* Z_Construct_UClass_ASwing_Door_NoRegister();
	LIGHT_DOOR_API UClass* Z_Construct_UClass_ASwing_Door();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Light_Door();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASwing_Door::execClose_Door)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Close_Door();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASwing_Door::execOpen_Door)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Open_Door();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASwing_Door::execToggle_Door)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Toggle_Door();
		P_NATIVE_END;
	}
	void ASwing_Door::StaticRegisterNativesASwing_Door()
	{
		UClass* Class = ASwing_Door::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Close_Door", &ASwing_Door::execClose_Door },
			{ "Open_Door", &ASwing_Door::execOpen_Door },
			{ "Toggle_Door", &ASwing_Door::execToggle_Door },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASwing_Door_Close_Door_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwing_Door_Close_Door_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Swing_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwing_Door_Close_Door_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwing_Door, nullptr, "Close_Door", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASwing_Door_Close_Door_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwing_Door_Close_Door_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASwing_Door_Close_Door()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASwing_Door_Close_Door_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASwing_Door_Open_Door_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwing_Door_Open_Door_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Opens the door\n" },
		{ "ModuleRelativePath", "Swing_Door.h" },
		{ "ToolTip", "Opens the door" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwing_Door_Open_Door_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwing_Door, nullptr, "Open_Door", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASwing_Door_Open_Door_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwing_Door_Open_Door_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASwing_Door_Open_Door()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASwing_Door_Open_Door_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASwing_Door_Toggle_Door_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwing_Door_Toggle_Door_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Swing_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwing_Door_Toggle_Door_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwing_Door, nullptr, "Toggle_Door", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASwing_Door_Toggle_Door_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwing_Door_Toggle_Door_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASwing_Door_Toggle_Door()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASwing_Door_Toggle_Door_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASwing_Door_NoRegister()
	{
		return ASwing_Door::StaticClass();
	}
	struct Z_Construct_UClass_ASwing_Door_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASwing_Door_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Light_Door,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASwing_Door_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASwing_Door_Close_Door, "Close_Door" }, // 3379726186
		{ &Z_Construct_UFunction_ASwing_Door_Open_Door, "Open_Door" }, // 2008678810
		{ &Z_Construct_UFunction_ASwing_Door_Toggle_Door, "Toggle_Door" }, // 3507631216
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwing_Door_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Swing_Door.h" },
		{ "ModuleRelativePath", "Swing_Door.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwing_Door_Statics::NewProp_Door_MetaData[] = {
		{ "Category", "Door" },
		{ "Comment", "//UPROPERTY(EditAnywhere, Category = \"Door\")\n//class UStaticMeshComponent* Door;\n" },
		{ "ModuleRelativePath", "Swing_Door.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = \"Door\")\nclass UStaticMeshComponent* Door;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwing_Door_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwing_Door, Door), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwing_Door_Statics::NewProp_Door_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASwing_Door_Statics::NewProp_Door_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASwing_Door_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwing_Door_Statics::NewProp_Door,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASwing_Door_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwing_Door>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASwing_Door_Statics::ClassParams = {
		&ASwing_Door::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASwing_Door_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASwing_Door_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASwing_Door_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASwing_Door_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASwing_Door()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASwing_Door_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASwing_Door, 2248597570);
	template<> LIGHT_DOOR_API UClass* StaticClass<ASwing_Door>()
	{
		return ASwing_Door::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASwing_Door(Z_Construct_UClass_ASwing_Door, &ASwing_Door::StaticClass, TEXT("/Script/Light_Door"), TEXT("ASwing_Door"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASwing_Door);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
