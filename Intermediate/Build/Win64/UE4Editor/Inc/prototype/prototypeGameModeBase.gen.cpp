// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "prototype/prototypeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeprototypeGameModeBase() {}
// Cross Module References
	PROTOTYPE_API UClass* Z_Construct_UClass_AprototypeGameModeBase_NoRegister();
	PROTOTYPE_API UClass* Z_Construct_UClass_AprototypeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_prototype();
// End Cross Module References
	void AprototypeGameModeBase::StaticRegisterNativesAprototypeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AprototypeGameModeBase_NoRegister()
	{
		return AprototypeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AprototypeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AprototypeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_prototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AprototypeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "prototypeGameModeBase.h" },
		{ "ModuleRelativePath", "prototypeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AprototypeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AprototypeGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AprototypeGameModeBase_Statics::ClassParams = {
		&AprototypeGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AprototypeGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AprototypeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AprototypeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AprototypeGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AprototypeGameModeBase, 1763190857);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AprototypeGameModeBase(Z_Construct_UClass_AprototypeGameModeBase, &AprototypeGameModeBase::StaticClass, TEXT("/Script/prototype"), TEXT("AprototypeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AprototypeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
