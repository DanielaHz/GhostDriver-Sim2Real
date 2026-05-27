// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GaussianSplatThumbnailRenderer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGaussianSplatThumbnailRenderer() {}

// ********** Begin Cross Module References ********************************************************
NANOGSEDITOR_API UClass* Z_Construct_UClass_UGaussianSplatThumbnailRenderer();
NANOGSEDITOR_API UClass* Z_Construct_UClass_UGaussianSplatThumbnailRenderer_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
UPackage* Z_Construct_UPackage__Script_NanoGSEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGaussianSplatThumbnailRenderer ******************************************
void UGaussianSplatThumbnailRenderer::StaticRegisterNativesUGaussianSplatThumbnailRenderer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGaussianSplatThumbnailRenderer;
UClass* UGaussianSplatThumbnailRenderer::GetPrivateStaticClass()
{
	using TClass = UGaussianSplatThumbnailRenderer;
	if (!Z_Registration_Info_UClass_UGaussianSplatThumbnailRenderer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GaussianSplatThumbnailRenderer"),
			Z_Registration_Info_UClass_UGaussianSplatThumbnailRenderer.InnerSingleton,
			StaticRegisterNativesUGaussianSplatThumbnailRenderer,
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
	return Z_Registration_Info_UClass_UGaussianSplatThumbnailRenderer.InnerSingleton;
}
UClass* Z_Construct_UClass_UGaussianSplatThumbnailRenderer_NoRegister()
{
	return UGaussianSplatThumbnailRenderer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGaussianSplatThumbnailRenderer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Draws the pre-baked thumbnail texture stored inside a UGaussianSplatAsset.\n */" },
#endif
		{ "IncludePath", "GaussianSplatThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/GaussianSplatThumbnailRenderer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draws the pre-baked thumbnail texture stored inside a UGaussianSplatAsset." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGaussianSplatThumbnailRenderer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGaussianSplatThumbnailRenderer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
	(UObject* (*)())Z_Construct_UPackage__Script_NanoGSEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianSplatThumbnailRenderer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGaussianSplatThumbnailRenderer_Statics::ClassParams = {
	&UGaussianSplatThumbnailRenderer::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianSplatThumbnailRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_UGaussianSplatThumbnailRenderer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGaussianSplatThumbnailRenderer()
{
	if (!Z_Registration_Info_UClass_UGaussianSplatThumbnailRenderer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGaussianSplatThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UGaussianSplatThumbnailRenderer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGaussianSplatThumbnailRenderer.OuterSingleton;
}
UGaussianSplatThumbnailRenderer::UGaussianSplatThumbnailRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGaussianSplatThumbnailRenderer);
UGaussianSplatThumbnailRenderer::~UGaussianSplatThumbnailRenderer() {}
// ********** End Class UGaussianSplatThumbnailRenderer ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGSEditor_Private_GaussianSplatThumbnailRenderer_h__Script_NanoGSEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGaussianSplatThumbnailRenderer, UGaussianSplatThumbnailRenderer::StaticClass, TEXT("UGaussianSplatThumbnailRenderer"), &Z_Registration_Info_UClass_UGaussianSplatThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGaussianSplatThumbnailRenderer), 2937490768U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGSEditor_Private_GaussianSplatThumbnailRenderer_h__Script_NanoGSEditor_4063033972(TEXT("/Script/NanoGSEditor"),
	Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGSEditor_Private_GaussianSplatThumbnailRenderer_h__Script_NanoGSEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGSEditor_Private_GaussianSplatThumbnailRenderer_h__Script_NanoGSEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
