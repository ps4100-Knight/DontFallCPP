// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DontFallCPP/DontFallCPPGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDontFallCPPGameMode() {}
// Cross Module References
	DONTFALLCPP_API UClass* Z_Construct_UClass_ADontFallCPPGameMode_NoRegister();
	DONTFALLCPP_API UClass* Z_Construct_UClass_ADontFallCPPGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DontFallCPP();
// End Cross Module References
	void ADontFallCPPGameMode::StaticRegisterNativesADontFallCPPGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADontFallCPPGameMode);
	UClass* Z_Construct_UClass_ADontFallCPPGameMode_NoRegister()
	{
		return ADontFallCPPGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADontFallCPPGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADontFallCPPGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DontFallCPP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADontFallCPPGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DontFallCPPGameMode.h" },
		{ "ModuleRelativePath", "DontFallCPPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADontFallCPPGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADontFallCPPGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADontFallCPPGameMode_Statics::ClassParams = {
		&ADontFallCPPGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADontFallCPPGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADontFallCPPGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADontFallCPPGameMode()
	{
		if (!Z_Registration_Info_UClass_ADontFallCPPGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADontFallCPPGameMode.OuterSingleton, Z_Construct_UClass_ADontFallCPPGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADontFallCPPGameMode.OuterSingleton;
	}
	template<> DONTFALLCPP_API UClass* StaticClass<ADontFallCPPGameMode>()
	{
		return ADontFallCPPGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADontFallCPPGameMode);
	struct Z_CompiledInDeferFile_FID_DontFallCPP_Source_DontFallCPP_DontFallCPPGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DontFallCPP_Source_DontFallCPP_DontFallCPPGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADontFallCPPGameMode, ADontFallCPPGameMode::StaticClass, TEXT("ADontFallCPPGameMode"), &Z_Registration_Info_UClass_ADontFallCPPGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADontFallCPPGameMode), 1594916329U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DontFallCPP_Source_DontFallCPP_DontFallCPPGameMode_h_2613425917(TEXT("/Script/DontFallCPP"),
		Z_CompiledInDeferFile_FID_DontFallCPP_Source_DontFallCPP_DontFallCPPGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DontFallCPP_Source_DontFallCPP_DontFallCPPGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
