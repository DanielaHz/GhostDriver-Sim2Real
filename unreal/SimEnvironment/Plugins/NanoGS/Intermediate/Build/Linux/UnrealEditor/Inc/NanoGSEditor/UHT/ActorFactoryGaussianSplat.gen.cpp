// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorFactoryGaussianSplat.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActorFactoryGaussianSplat() {}

// ********** Begin Cross Module References ********************************************************
NANOGSEDITOR_API UClass* Z_Construct_UClass_UActorFactoryGaussianSplat();
NANOGSEDITOR_API UClass* Z_Construct_UClass_UActorFactoryGaussianSplat_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
UPackage* Z_Construct_UPackage__Script_NanoGSEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UActorFactoryGaussianSplat ***********************************************
void UActorFactoryGaussianSplat::StaticRegisterNativesUActorFactoryGaussianSplat()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActorFactoryGaussianSplat;
UClass* UActorFactoryGaussianSplat::GetPrivateStaticClass()
{
	using TClass = UActorFactoryGaussianSplat;
	if (!Z_Registration_Info_UClass_UActorFactoryGaussianSplat.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActorFactoryGaussianSplat"),
			Z_Registration_Info_UClass_UActorFactoryGaussianSplat.InnerSingleton,
			StaticRegisterNativesUActorFactoryGaussianSplat,
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
	return Z_Registration_Info_UClass_UActorFactoryGaussianSplat.InnerSingleton;
}
UClass* Z_Construct_UClass_UActorFactoryGaussianSplat_NoRegister()
{
	return UActorFactoryGaussianSplat::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActorFactoryGaussianSplat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Actor factory for creating Gaussian Splat Actors from Gaussian Splat Assets.\n * Enables drag-and-drop from Content Browser into the level.\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactoryGaussianSplat.h" },
		{ "ModuleRelativePath", "Private/ActorFactoryGaussianSplat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor factory for creating Gaussian Splat Actors from Gaussian Splat Assets.\nEnables drag-and-drop from Content Browser into the level." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryGaussianSplat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UActorFactoryGaussianSplat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NanoGSEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryGaussianSplat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryGaussianSplat_Statics::ClassParams = {
	&UActorFactoryGaussianSplat::StaticClass,
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
	0x000830ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryGaussianSplat_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorFactoryGaussianSplat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorFactoryGaussianSplat()
{
	if (!Z_Registration_Info_UClass_UActorFactoryGaussianSplat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryGaussianSplat.OuterSingleton, Z_Construct_UClass_UActorFactoryGaussianSplat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorFactoryGaussianSplat.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryGaussianSplat);
UActorFactoryGaussianSplat::~UActorFactoryGaussianSplat() {}
// ********** End Class UActorFactoryGaussianSplat *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGSEditor_Private_ActorFactoryGaussianSplat_h__Script_NanoGSEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryGaussianSplat, UActorFactoryGaussianSplat::StaticClass, TEXT("UActorFactoryGaussianSplat"), &Z_Registration_Info_UClass_UActorFactoryGaussianSplat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryGaussianSplat), 3810588673U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGSEditor_Private_ActorFactoryGaussianSplat_h__Script_NanoGSEditor_133961275(TEXT("/Script/NanoGSEditor"),
	Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGSEditor_Private_ActorFactoryGaussianSplat_h__Script_NanoGSEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGSEditor_Private_ActorFactoryGaussianSplat_h__Script_NanoGSEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
