// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BiddingSystem/BiddingSystemGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBiddingSystemGameModeBase() {}
// Cross Module References
	BIDDINGSYSTEM_API UClass* Z_Construct_UClass_ABiddingSystemGameModeBase_NoRegister();
	BIDDINGSYSTEM_API UClass* Z_Construct_UClass_ABiddingSystemGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BiddingSystem();
// End Cross Module References
	void ABiddingSystemGameModeBase::StaticRegisterNativesABiddingSystemGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABiddingSystemGameModeBase_NoRegister()
	{
		return ABiddingSystemGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABiddingSystemGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABiddingSystemGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BiddingSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABiddingSystemGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BiddingSystemGameModeBase.h" },
		{ "ModuleRelativePath", "BiddingSystemGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABiddingSystemGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABiddingSystemGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABiddingSystemGameModeBase_Statics::ClassParams = {
		&ABiddingSystemGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ABiddingSystemGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABiddingSystemGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABiddingSystemGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABiddingSystemGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABiddingSystemGameModeBase, 1373516534);
	template<> BIDDINGSYSTEM_API UClass* StaticClass<ABiddingSystemGameModeBase>()
	{
		return ABiddingSystemGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABiddingSystemGameModeBase(Z_Construct_UClass_ABiddingSystemGameModeBase, &ABiddingSystemGameModeBase::StaticClass, TEXT("/Script/BiddingSystem"), TEXT("ABiddingSystemGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABiddingSystemGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
