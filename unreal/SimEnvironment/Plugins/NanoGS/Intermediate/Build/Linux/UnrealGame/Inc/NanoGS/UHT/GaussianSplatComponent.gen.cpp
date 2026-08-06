// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GaussianSplatComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGaussianSplatComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
NANOGS_API UClass* Z_Construct_UClass_UGaussianSplatAsset_NoRegister();
NANOGS_API UClass* Z_Construct_UClass_UGaussianSplatComponent();
NANOGS_API UClass* Z_Construct_UClass_UGaussianSplatComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NanoGS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGaussianSplatComponent Function GetSplatAsset ***************************
struct Z_Construct_UFunction_UGaussianSplatComponent_GetSplatAsset_Statics
{
	struct GaussianSplatComponent_eventGetSplatAsset_Parms
	{
		UGaussianSplatAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gaussian Splatting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the currently assigned asset */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the currently assigned asset" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGaussianSplatComponent_GetSplatAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatComponent_eventGetSplatAsset_Parms, ReturnValue), Z_Construct_UClass_UGaussianSplatAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaussianSplatComponent_GetSplatAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatComponent_GetSplatAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatComponent_GetSplatAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatComponent_GetSplatAsset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaussianSplatComponent, nullptr, "GetSplatAsset", Z_Construct_UFunction_UGaussianSplatComponent_GetSplatAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatComponent_GetSplatAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaussianSplatComponent_GetSplatAsset_Statics::GaussianSplatComponent_eventGetSplatAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatComponent_GetSplatAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatComponent_GetSplatAsset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGaussianSplatComponent_GetSplatAsset_Statics::GaussianSplatComponent_eventGetSplatAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatComponent_GetSplatAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatComponent_GetSplatAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaussianSplatComponent::execGetSplatAsset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGaussianSplatAsset**)Z_Param__Result=P_THIS->GetSplatAsset();
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatComponent Function GetSplatAsset *****************************

// ********** Begin Class UGaussianSplatComponent Function GetSplatCount ***************************
struct Z_Construct_UFunction_UGaussianSplatComponent_GetSplatCount_Statics
{
	struct GaussianSplatComponent_eventGetSplatCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gaussian Splatting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the number of splats being rendered */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the number of splats being rendered" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGaussianSplatComponent_GetSplatCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatComponent_eventGetSplatCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaussianSplatComponent_GetSplatCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatComponent_GetSplatCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatComponent_GetSplatCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatComponent_GetSplatCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaussianSplatComponent, nullptr, "GetSplatCount", Z_Construct_UFunction_UGaussianSplatComponent_GetSplatCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatComponent_GetSplatCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaussianSplatComponent_GetSplatCount_Statics::GaussianSplatComponent_eventGetSplatCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatComponent_GetSplatCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatComponent_GetSplatCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGaussianSplatComponent_GetSplatCount_Statics::GaussianSplatComponent_eventGetSplatCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatComponent_GetSplatCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatComponent_GetSplatCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaussianSplatComponent::execGetSplatCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSplatCount();
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatComponent Function GetSplatCount *****************************

// ********** Begin Class UGaussianSplatComponent Function SetSplatAsset ***************************
struct Z_Construct_UFunction_UGaussianSplatComponent_SetSplatAsset_Statics
{
	struct GaussianSplatComponent_eventSetSplatAsset_Parms
	{
		UGaussianSplatAsset* NewAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gaussian Splatting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the Gaussian Splat asset to render */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the Gaussian Splat asset to render" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGaussianSplatComponent_SetSplatAsset_Statics::NewProp_NewAsset = { "NewAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatComponent_eventSetSplatAsset_Parms, NewAsset), Z_Construct_UClass_UGaussianSplatAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaussianSplatComponent_SetSplatAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatComponent_SetSplatAsset_Statics::NewProp_NewAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatComponent_SetSplatAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatComponent_SetSplatAsset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaussianSplatComponent, nullptr, "SetSplatAsset", Z_Construct_UFunction_UGaussianSplatComponent_SetSplatAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatComponent_SetSplatAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaussianSplatComponent_SetSplatAsset_Statics::GaussianSplatComponent_eventSetSplatAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatComponent_SetSplatAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatComponent_SetSplatAsset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGaussianSplatComponent_SetSplatAsset_Statics::GaussianSplatComponent_eventSetSplatAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatComponent_SetSplatAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatComponent_SetSplatAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaussianSplatComponent::execSetSplatAsset)
{
	P_GET_OBJECT(UGaussianSplatAsset,Z_Param_NewAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSplatAsset(Z_Param_NewAsset);
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatComponent Function SetSplatAsset *****************************

// ********** Begin Class UGaussianSplatComponent **************************************************
void UGaussianSplatComponent::StaticRegisterNativesUGaussianSplatComponent()
{
	UClass* Class = UGaussianSplatComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSplatAsset", &UGaussianSplatComponent::execGetSplatAsset },
		{ "GetSplatCount", &UGaussianSplatComponent::execGetSplatCount },
		{ "SetSplatAsset", &UGaussianSplatComponent::execSetSplatAsset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGaussianSplatComponent;
UClass* UGaussianSplatComponent::GetPrivateStaticClass()
{
	using TClass = UGaussianSplatComponent;
	if (!Z_Registration_Info_UClass_UGaussianSplatComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GaussianSplatComponent"),
			Z_Registration_Info_UClass_UGaussianSplatComponent.InnerSingleton,
			StaticRegisterNativesUGaussianSplatComponent,
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
	return Z_Registration_Info_UClass_UGaussianSplatComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UGaussianSplatComponent_NoRegister()
{
	return UGaussianSplatComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGaussianSplatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Component for rendering Gaussian Splatting assets in the scene\n */" },
#endif
		{ "HideCategories", "Collision Physics Navigation Mobility VirtualTexture Trigger" },
		{ "IncludePath", "GaussianSplatComponent.h" },
		{ "ModuleRelativePath", "Public/GaussianSplatComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component for rendering Gaussian Splatting assets in the scene" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplatAsset_MetaData[] = {
		{ "Category", "Gaussian Splatting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Gaussian Splat asset to render */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Gaussian Splat asset to render" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SHOrder_MetaData[] = {
		{ "Category", "Gaussian Splatting|Quality" },
		{ "ClampMax", "3" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spherical Harmonic order to use for rendering (0-3). Higher = more color detail but slower. */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spherical Harmonic order to use for rendering (0-3). Higher = more color detail but slower." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortEveryNthFrame_MetaData[] = {
		{ "Category", "Gaussian Splatting|Performance" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sort splats every N frames. 1 = every frame. Higher values reduce GPU cost but may cause artifacts during fast camera movement. */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sort splats every N frames. 1 = every frame. Higher values reduce GPU cost but may cause artifacts during fast camera movement." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpacityScale_MetaData[] = {
		{ "Category", "Gaussian Splatting|Rendering" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Global opacity multiplier */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global opacity multiplier" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplatScale_MetaData[] = {
		{ "Category", "Gaussian Splatting|Rendering" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scale multiplier for splat sizes */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale multiplier for splat sizes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFrustumCulling_MetaData[] = {
		{ "Category", "Gaussian Splatting|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable frustum culling for better performance */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable frustum culling for better performance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODErrorThreshold_MetaData[] = {
		{ "Category", "Gaussian Splatting|Performance" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.001" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Projected error threshold for LOD selection (resolution-independent, like Nanite).\n\x09 *  Lower values = more conservative (keep detail longer, less LOD savings)\n\x09 *  Higher values = more aggressive (switch to LOD sooner, better performance)\n\x09 *  Uses projection-space units. ~0.03 \xe2\x89\x88 32 pixels at 1080p with 90\xc2\xb0 FOV. */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projected error threshold for LOD selection (resolution-independent, like Nanite).\nLower values = more conservative (keep detail longer, less LOD savings)\nHigher values = more aggressive (switch to LOD sooner, better performance)\nUses projection-space units. ~0.03 \xe2\x89\x88 32 pixels at 1080p with 90\xc2\xb0 FOV." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplatAsset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SHOrder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SortEveryNthFrame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OpacityScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplatScale;
	static void NewProp_bEnableFrustumCulling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFrustumCulling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LODErrorThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGaussianSplatComponent_GetSplatAsset, "GetSplatAsset" }, // 3574547699
		{ &Z_Construct_UFunction_UGaussianSplatComponent_GetSplatCount, "GetSplatCount" }, // 2692120611
		{ &Z_Construct_UFunction_UGaussianSplatComponent_SetSplatAsset, "SetSplatAsset" }, // 1972243300
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGaussianSplatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGaussianSplatComponent_Statics::NewProp_SplatAsset = { "SplatAsset", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianSplatComponent, SplatAsset), Z_Construct_UClass_UGaussianSplatAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplatAsset_MetaData), NewProp_SplatAsset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGaussianSplatComponent_Statics::NewProp_SHOrder = { "SHOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianSplatComponent, SHOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SHOrder_MetaData), NewProp_SHOrder_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGaussianSplatComponent_Statics::NewProp_SortEveryNthFrame = { "SortEveryNthFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianSplatComponent, SortEveryNthFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortEveryNthFrame_MetaData), NewProp_SortEveryNthFrame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGaussianSplatComponent_Statics::NewProp_OpacityScale = { "OpacityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianSplatComponent, OpacityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpacityScale_MetaData), NewProp_OpacityScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGaussianSplatComponent_Statics::NewProp_SplatScale = { "SplatScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianSplatComponent, SplatScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplatScale_MetaData), NewProp_SplatScale_MetaData) };
void Z_Construct_UClass_UGaussianSplatComponent_Statics::NewProp_bEnableFrustumCulling_SetBit(void* Obj)
{
	((UGaussianSplatComponent*)Obj)->bEnableFrustumCulling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGaussianSplatComponent_Statics::NewProp_bEnableFrustumCulling = { "bEnableFrustumCulling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGaussianSplatComponent), &Z_Construct_UClass_UGaussianSplatComponent_Statics::NewProp_bEnableFrustumCulling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFrustumCulling_MetaData), NewProp_bEnableFrustumCulling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGaussianSplatComponent_Statics::NewProp_LODErrorThreshold = { "LODErrorThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianSplatComponent, LODErrorThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODErrorThreshold_MetaData), NewProp_LODErrorThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGaussianSplatComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatComponent_Statics::NewProp_SplatAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatComponent_Statics::NewProp_SHOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatComponent_Statics::NewProp_SortEveryNthFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatComponent_Statics::NewProp_OpacityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatComponent_Statics::NewProp_SplatScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatComponent_Statics::NewProp_bEnableFrustumCulling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatComponent_Statics::NewProp_LODErrorThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianSplatComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGaussianSplatComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NanoGS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianSplatComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGaussianSplatComponent_Statics::ClassParams = {
	&UGaussianSplatComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGaussianSplatComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianSplatComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianSplatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGaussianSplatComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGaussianSplatComponent()
{
	if (!Z_Registration_Info_UClass_UGaussianSplatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGaussianSplatComponent.OuterSingleton, Z_Construct_UClass_UGaussianSplatComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGaussianSplatComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGaussianSplatComponent);
UGaussianSplatComponent::~UGaussianSplatComponent() {}
// ********** End Class UGaussianSplatComponent ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatComponent_h__Script_NanoGS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGaussianSplatComponent, UGaussianSplatComponent::StaticClass, TEXT("UGaussianSplatComponent"), &Z_Registration_Info_UClass_UGaussianSplatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGaussianSplatComponent), 1198257773U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatComponent_h__Script_NanoGS_2495343822(TEXT("/Script/NanoGS"),
	Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatComponent_h__Script_NanoGS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatComponent_h__Script_NanoGS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
