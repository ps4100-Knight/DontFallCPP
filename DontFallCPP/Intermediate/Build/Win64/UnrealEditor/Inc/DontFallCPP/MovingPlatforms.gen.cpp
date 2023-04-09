// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DontFallCPP/MovingPlatforms.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingPlatforms() {}
// Cross Module References
	DONTFALLCPP_API UClass* Z_Construct_UClass_AMovingPlatforms_NoRegister();
	DONTFALLCPP_API UClass* Z_Construct_UClass_AMovingPlatforms();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DontFallCPP();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void AMovingPlatforms::StaticRegisterNativesAMovingPlatforms()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingPlatforms);
	UClass* Z_Construct_UClass_AMovingPlatforms_NoRegister()
	{
		return AMovingPlatforms::StaticClass();
	}
	struct Z_Construct_UClass_AMovingPlatforms_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_startLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_startLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_platformVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_platformVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_moveDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_platformRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_platformRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingPlatforms_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DontFallCPP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatforms_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovingPlatforms.h" },
		{ "ModuleRelativePath", "MovingPlatforms.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatforms_Statics::NewProp_startLocation_MetaData[] = {
		{ "Category", "MovingPlatforms" },
		{ "ModuleRelativePath", "MovingPlatforms.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingPlatforms_Statics::NewProp_startLocation = { "startLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatforms, startLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMovingPlatforms_Statics::NewProp_startLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatforms_Statics::NewProp_startLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatforms_Statics::NewProp_platformVelocity_MetaData[] = {
		{ "Category", "MovingPlatforms" },
		{ "ModuleRelativePath", "MovingPlatforms.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingPlatforms_Statics::NewProp_platformVelocity = { "platformVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatforms, platformVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMovingPlatforms_Statics::NewProp_platformVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatforms_Statics::NewProp_platformVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatforms_Statics::NewProp_moveDistance_MetaData[] = {
		{ "Category", "MovingPlatforms" },
		{ "ModuleRelativePath", "MovingPlatforms.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatforms_Statics::NewProp_moveDistance = { "moveDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatforms, moveDistance), METADATA_PARAMS(Z_Construct_UClass_AMovingPlatforms_Statics::NewProp_moveDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatforms_Statics::NewProp_moveDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatforms_Statics::NewProp_platformRotation_MetaData[] = {
		{ "Category", "MovingPlatforms" },
		{ "ModuleRelativePath", "MovingPlatforms.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingPlatforms_Statics::NewProp_platformRotation = { "platformRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatforms, platformRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AMovingPlatforms_Statics::NewProp_platformRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatforms_Statics::NewProp_platformRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingPlatforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatforms_Statics::NewProp_startLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatforms_Statics::NewProp_platformVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatforms_Statics::NewProp_moveDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatforms_Statics::NewProp_platformRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingPlatforms_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingPlatforms>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingPlatforms_Statics::ClassParams = {
		&AMovingPlatforms::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMovingPlatforms_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatforms_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMovingPlatforms_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatforms_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovingPlatforms()
	{
		if (!Z_Registration_Info_UClass_AMovingPlatforms.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingPlatforms.OuterSingleton, Z_Construct_UClass_AMovingPlatforms_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMovingPlatforms.OuterSingleton;
	}
	template<> DONTFALLCPP_API UClass* StaticClass<AMovingPlatforms>()
	{
		return AMovingPlatforms::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlatforms);
	struct Z_CompiledInDeferFile_FID_DontFallCPP_Source_DontFallCPP_MovingPlatforms_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DontFallCPP_Source_DontFallCPP_MovingPlatforms_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMovingPlatforms, AMovingPlatforms::StaticClass, TEXT("AMovingPlatforms"), &Z_Registration_Info_UClass_AMovingPlatforms, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingPlatforms), 2398952609U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DontFallCPP_Source_DontFallCPP_MovingPlatforms_h_3036673104(TEXT("/Script/DontFallCPP"),
		Z_CompiledInDeferFile_FID_DontFallCPP_Source_DontFallCPP_MovingPlatforms_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DontFallCPP_Source_DontFallCPP_MovingPlatforms_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
