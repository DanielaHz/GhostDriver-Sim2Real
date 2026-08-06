// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GaussianSplatActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGaussianSplatActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
NANOGS_API UClass* Z_Construct_UClass_AGaussianSplatActor();
NANOGS_API UClass* Z_Construct_UClass_AGaussianSplatActor_NoRegister();
NANOGS_API UClass* Z_Construct_UClass_UGaussianSplatComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NanoGS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGaussianSplatActor ******************************************************
void AGaussianSplatActor::StaticRegisterNativesAGaussianSplatActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGaussianSplatActor;
UClass* AGaussianSplatActor::GetPrivateStaticClass()
{
	using TClass = AGaussianSplatActor;
	if (!Z_Registration_Info_UClass_AGaussianSplatActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GaussianSplatActor"),
			Z_Registration_Info_UClass_AGaussianSplatActor.InnerSingleton,
			StaticRegisterNativesAGaussianSplatActor,
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
	return Z_Registration_Info_UClass_AGaussianSplatActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AGaussianSplatActor_NoRegister()
{
	return AGaussianSplatActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGaussianSplatActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Simple actor for placing Gaussian Splats in the level.\n * Drag and drop a Gaussian Splat Asset from the Content Browser to spawn this actor.\n */" },
#endif
		{ "IncludePath", "GaussianSplatActor.h" },
		{ "ModuleRelativePath", "Public/GaussianSplatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple actor for placing Gaussian Splats in the level.\nDrag and drop a Gaussian Splat Asset from the Content Browser to spawn this actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GaussianSplatComponent_MetaData[] = {
		{ "Category", "Gaussian Splatting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Gaussian Splat component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GaussianSplatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Gaussian Splat component" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GaussianSplatComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGaussianSplatActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaussianSplatActor_Statics::NewProp_GaussianSplatComponent = { "GaussianSplatComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGaussianSplatActor, GaussianSplatComponent), Z_Construct_UClass_UGaussianSplatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GaussianSplatComponent_MetaData), NewProp_GaussianSplatComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGaussianSplatActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaussianSplatActor_Statics::NewProp_GaussianSplatComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianSplatActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGaussianSplatActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NanoGS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianSplatActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGaussianSplatActor_Statics::ClassParams = {
	&AGaussianSplatActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGaussianSplatActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianSplatActor_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGaussianSplatActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGaussianSplatActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGaussianSplatActor()
{
	if (!Z_Registration_Info_UClass_AGaussianSplatActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGaussianSplatActor.OuterSingleton, Z_Construct_UClass_AGaussianSplatActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGaussianSplatActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGaussianSplatActor);
AGaussianSplatActor::~AGaussianSplatActor() {}
// ********** End Class AGaussianSplatActor ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatActor_h__Script_NanoGS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGaussianSplatActor, AGaussianSplatActor::StaticClass, TEXT("AGaussianSplatActor"), &Z_Registration_Info_UClass_AGaussianSplatActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGaussianSplatActor), 3329702129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatActor_h__Script_NanoGS_2783894222(TEXT("/Script/NanoGS"),
	Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatActor_h__Script_NanoGS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatActor_h__Script_NanoGS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
