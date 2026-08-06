// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GaussianSplatAssetFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGaussianSplatAssetFactory() {}

// ********** Begin Cross Module References ********************************************************
NANOGS_API UEnum* Z_Construct_UEnum_NanoGS_EPLYCoordinateConvention();
NANOGSEDITOR_API UClass* Z_Construct_UClass_UGaussianSplatAssetFactory();
NANOGSEDITOR_API UClass* Z_Construct_UClass_UGaussianSplatAssetFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_NanoGSEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGaussianSplatAssetFactory ***********************************************
void UGaussianSplatAssetFactory::StaticRegisterNativesUGaussianSplatAssetFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGaussianSplatAssetFactory;
UClass* UGaussianSplatAssetFactory::GetPrivateStaticClass()
{
	using TClass = UGaussianSplatAssetFactory;
	if (!Z_Registration_Info_UClass_UGaussianSplatAssetFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GaussianSplatAssetFactory"),
			Z_Registration_Info_UClass_UGaussianSplatAssetFactory.InnerSingleton,
			StaticRegisterNativesUGaussianSplatAssetFactory,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UGaussianSplatAssetFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UGaussianSplatAssetFactory_NoRegister()
{
	return UGaussianSplatAssetFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGaussianSplatAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Factory for importing PLY files as Gaussian Splat assets\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "GaussianSplatAssetFactory.h" },
		{ "ModuleRelativePath", "Public/GaussianSplatAssetFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Factory for importing PLY files as Gaussian Splat assets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceCoordinateConvention_MetaData[] = {
		{ "Category", "Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Source coordinate convention of the PLY being imported.\n\x09 * Defaults to Z-up since that's what PlayCanvas SuperSplat / InteriorGS exports (and the\n\x09 * paired SAGE-3D collision meshes) use; switch to COLMAP (Y-down) for raw training output.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAssetFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Source coordinate convention of the PLY being imported.\nDefaults to Z-up since that's what PlayCanvas SuperSplat / InteriorGS exports (and the\npaired SAGE-3D collision meshes) use; switch to COLMAP (Y-down) for raw training output." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceCoordinateConvention_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceCoordinateConvention;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGaussianSplatAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGaussianSplatAssetFactory_Statics::NewProp_SourceCoordinateConvention_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGaussianSplatAssetFactory_Statics::NewProp_SourceCoordinateConvention = { "SourceCoordinateConvention", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianSplatAssetFactory, SourceCoordinateConvention), Z_Construct_UEnum_NanoGS_EPLYCoordinateConvention, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceCoordinateConvention_MetaData), NewProp_SourceCoordinateConvention_MetaData) }; // 4185321714
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGaussianSplatAssetFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAssetFactory_Statics::NewProp_SourceCoordinateConvention_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAssetFactory_Statics::NewProp_SourceCoordinateConvention,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianSplatAssetFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGaussianSplatAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NanoGSEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianSplatAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGaussianSplatAssetFactory_Statics::ClassParams = {
	&UGaussianSplatAssetFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGaussianSplatAssetFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianSplatAssetFactory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianSplatAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UGaussianSplatAssetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGaussianSplatAssetFactory()
{
	if (!Z_Registration_Info_UClass_UGaussianSplatAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGaussianSplatAssetFactory.OuterSingleton, Z_Construct_UClass_UGaussianSplatAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGaussianSplatAssetFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGaussianSplatAssetFactory);
UGaussianSplatAssetFactory::~UGaussianSplatAssetFactory() {}
// ********** End Class UGaussianSplatAssetFactory *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGSEditor_Public_GaussianSplatAssetFactory_h__Script_NanoGSEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGaussianSplatAssetFactory, UGaussianSplatAssetFactory::StaticClass, TEXT("UGaussianSplatAssetFactory"), &Z_Registration_Info_UClass_UGaussianSplatAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGaussianSplatAssetFactory), 3026101519U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGSEditor_Public_GaussianSplatAssetFactory_h__Script_NanoGSEditor_39452415(TEXT("/Script/NanoGSEditor"),
	Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGSEditor_Public_GaussianSplatAssetFactory_h__Script_NanoGSEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGSEditor_Public_GaussianSplatAssetFactory_h__Script_NanoGSEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
