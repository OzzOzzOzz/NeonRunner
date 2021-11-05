// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Neon_Runner/Neon_RunnerGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeon_RunnerGameMode() {}
// Cross Module References
	NEON_RUNNER_API UClass* Z_Construct_UClass_ANeon_RunnerGameMode_NoRegister();
	NEON_RUNNER_API UClass* Z_Construct_UClass_ANeon_RunnerGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Neon_Runner();
// End Cross Module References
	void ANeon_RunnerGameMode::StaticRegisterNativesANeon_RunnerGameMode()
	{
	}
	UClass* Z_Construct_UClass_ANeon_RunnerGameMode_NoRegister()
	{
		return ANeon_RunnerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANeon_RunnerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANeon_RunnerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Neon_Runner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANeon_RunnerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Neon_RunnerGameMode.h" },
		{ "ModuleRelativePath", "Neon_RunnerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANeon_RunnerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANeon_RunnerGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANeon_RunnerGameMode_Statics::ClassParams = {
		&ANeon_RunnerGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANeon_RunnerGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANeon_RunnerGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANeon_RunnerGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANeon_RunnerGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANeon_RunnerGameMode, 2093234212);
	template<> NEON_RUNNER_API UClass* StaticClass<ANeon_RunnerGameMode>()
	{
		return ANeon_RunnerGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANeon_RunnerGameMode(Z_Construct_UClass_ANeon_RunnerGameMode, &ANeon_RunnerGameMode::StaticClass, TEXT("/Script/Neon_Runner"), TEXT("ANeon_RunnerGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANeon_RunnerGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
