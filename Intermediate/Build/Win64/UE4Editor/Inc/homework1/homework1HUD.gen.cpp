// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "homework1/homework1HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodehomework1HUD() {}
// Cross Module References
	HOMEWORK1_API UClass* Z_Construct_UClass_Ahomework1HUD_NoRegister();
	HOMEWORK1_API UClass* Z_Construct_UClass_Ahomework1HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_homework1();
// End Cross Module References
	void Ahomework1HUD::StaticRegisterNativesAhomework1HUD()
	{
	}
	UClass* Z_Construct_UClass_Ahomework1HUD_NoRegister()
	{
		return Ahomework1HUD::StaticClass();
	}
	struct Z_Construct_UClass_Ahomework1HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ahomework1HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_homework1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ahomework1HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "homework1HUD.h" },
		{ "ModuleRelativePath", "homework1HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ahomework1HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ahomework1HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Ahomework1HUD_Statics::ClassParams = {
		&Ahomework1HUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_Ahomework1HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Ahomework1HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ahomework1HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Ahomework1HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Ahomework1HUD, 9703600);
	template<> HOMEWORK1_API UClass* StaticClass<Ahomework1HUD>()
	{
		return Ahomework1HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Ahomework1HUD(Z_Construct_UClass_Ahomework1HUD, &Ahomework1HUD::StaticClass, TEXT("/Script/homework1"), TEXT("Ahomework1HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ahomework1HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
