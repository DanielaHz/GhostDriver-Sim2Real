// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GaussianSplatAsset.h"
#include "GaussianClusterTypes.h"
#include "GaussianDataTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGaussianSplatAsset() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
NANOGS_API UClass* Z_Construct_UClass_UGaussianSplatAsset();
NANOGS_API UClass* Z_Construct_UClass_UGaussianSplatAsset_NoRegister();
NANOGS_API UEnum* Z_Construct_UEnum_NanoGS_EGaussianColorFormat();
NANOGS_API UEnum* Z_Construct_UEnum_NanoGS_EGaussianPositionFormat();
NANOGS_API UEnum* Z_Construct_UEnum_NanoGS_EGaussianQualityLevel();
NANOGS_API UEnum* Z_Construct_UEnum_NanoGS_EGaussianSHFormat();
NANOGS_API UEnum* Z_Construct_UEnum_NanoGS_EPLYCoordinateConvention();
NANOGS_API UScriptStruct* Z_Construct_UScriptStruct_FGaussianChunkInfo();
NANOGS_API UScriptStruct* Z_Construct_UScriptStruct_FGaussianClusterHierarchy();
UPackage* Z_Construct_UPackage__Script_NanoGS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGaussianSplatAsset Function BuildNaniteClusterHierarchy *****************
#if WITH_EDITOR
struct Z_Construct_UFunction_UGaussianSplatAsset_BuildNaniteClusterHierarchy_Statics
{
	struct GaussianSplatAsset_eventBuildNaniteClusterHierarchy_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gaussian Splatting|Nanite" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Build Nanite cluster hierarchy from source PLY file\n\x09 * This re-reads the source file and builds cluster data\n\x09 * @return True if successful, false if source file not found or build failed\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Build Nanite cluster hierarchy from source PLY file\nThis re-reads the source file and builds cluster data\n@return True if successful, false if source file not found or build failed" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGaussianSplatAsset_BuildNaniteClusterHierarchy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GaussianSplatAsset_eventBuildNaniteClusterHierarchy_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGaussianSplatAsset_BuildNaniteClusterHierarchy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GaussianSplatAsset_eventBuildNaniteClusterHierarchy_Parms), &Z_Construct_UFunction_UGaussianSplatAsset_BuildNaniteClusterHierarchy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaussianSplatAsset_BuildNaniteClusterHierarchy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatAsset_BuildNaniteClusterHierarchy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_BuildNaniteClusterHierarchy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatAsset_BuildNaniteClusterHierarchy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaussianSplatAsset, nullptr, "BuildNaniteClusterHierarchy", Z_Construct_UFunction_UGaussianSplatAsset_BuildNaniteClusterHierarchy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_BuildNaniteClusterHierarchy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaussianSplatAsset_BuildNaniteClusterHierarchy_Statics::GaussianSplatAsset_eventBuildNaniteClusterHierarchy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_BuildNaniteClusterHierarchy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatAsset_BuildNaniteClusterHierarchy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGaussianSplatAsset_BuildNaniteClusterHierarchy_Statics::GaussianSplatAsset_eventBuildNaniteClusterHierarchy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatAsset_BuildNaniteClusterHierarchy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatAsset_BuildNaniteClusterHierarchy_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UGaussianSplatAsset::execBuildNaniteClusterHierarchy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BuildNaniteClusterHierarchy();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UGaussianSplatAsset Function BuildNaniteClusterHierarchy *******************

// ********** Begin Class UGaussianSplatAsset Function ClearNaniteClusterHierarchy *****************
#if WITH_EDITOR
struct Z_Construct_UFunction_UGaussianSplatAsset_ClearNaniteClusterHierarchy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gaussian Splatting|Nanite" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Clear Nanite cluster hierarchy to reduce asset size\n\x09 * Removes cluster data and LOD splats\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear Nanite cluster hierarchy to reduce asset size\nRemoves cluster data and LOD splats" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatAsset_ClearNaniteClusterHierarchy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaussianSplatAsset, nullptr, "ClearNaniteClusterHierarchy", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_ClearNaniteClusterHierarchy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatAsset_ClearNaniteClusterHierarchy_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGaussianSplatAsset_ClearNaniteClusterHierarchy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatAsset_ClearNaniteClusterHierarchy_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UGaussianSplatAsset::execClearNaniteClusterHierarchy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearNaniteClusterHierarchy();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UGaussianSplatAsset Function ClearNaniteClusterHierarchy *******************

// ********** Begin Class UGaussianSplatAsset Function GetBounds ***********************************
struct Z_Construct_UFunction_UGaussianSplatAsset_GetBounds_Statics
{
	struct GaussianSplatAsset_eventGetBounds_Parms
	{
		FBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gaussian Splatting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the bounding box of all splats */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the bounding box of all splats" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGaussianSplatAsset_GetBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatAsset_eventGetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaussianSplatAsset_GetBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatAsset_GetBounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_GetBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatAsset_GetBounds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaussianSplatAsset, nullptr, "GetBounds", Z_Construct_UFunction_UGaussianSplatAsset_GetBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_GetBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaussianSplatAsset_GetBounds_Statics::GaussianSplatAsset_eventGetBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_GetBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatAsset_GetBounds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGaussianSplatAsset_GetBounds_Statics::GaussianSplatAsset_eventGetBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatAsset_GetBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatAsset_GetBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaussianSplatAsset::execGetBounds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBox*)Z_Param__Result=P_THIS->GetBounds();
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatAsset Function GetBounds *************************************

// ********** Begin Class UGaussianSplatAsset Function GetClusterCount *****************************
struct Z_Construct_UFunction_UGaussianSplatAsset_GetClusterCount_Statics
{
	struct GaussianSplatAsset_eventGetClusterCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gaussian Splatting|Clustering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get number of clusters in hierarchy */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get number of clusters in hierarchy" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGaussianSplatAsset_GetClusterCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatAsset_eventGetClusterCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaussianSplatAsset_GetClusterCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatAsset_GetClusterCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_GetClusterCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatAsset_GetClusterCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaussianSplatAsset, nullptr, "GetClusterCount", Z_Construct_UFunction_UGaussianSplatAsset_GetClusterCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_GetClusterCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaussianSplatAsset_GetClusterCount_Statics::GaussianSplatAsset_eventGetClusterCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_GetClusterCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatAsset_GetClusterCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGaussianSplatAsset_GetClusterCount_Statics::GaussianSplatAsset_eventGetClusterCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatAsset_GetClusterCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatAsset_GetClusterCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaussianSplatAsset::execGetClusterCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetClusterCount();
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatAsset Function GetClusterCount *******************************

// ********** Begin Class UGaussianSplatAsset Function GetDecompressedPositions ********************
struct Z_Construct_UFunction_UGaussianSplatAsset_GetDecompressedPositions_Statics
{
	struct GaussianSplatAsset_eventGetDecompressedPositions_Parms
	{
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gaussian Splatting|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Decompress and return all splat positions (for debugging)\n\x09 * @return Array of world-space positions\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decompress and return all splat positions (for debugging)\n@return Array of world-space positions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGaussianSplatAsset_GetDecompressedPositions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGaussianSplatAsset_GetDecompressedPositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatAsset_eventGetDecompressedPositions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaussianSplatAsset_GetDecompressedPositions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatAsset_GetDecompressedPositions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatAsset_GetDecompressedPositions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_GetDecompressedPositions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatAsset_GetDecompressedPositions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaussianSplatAsset, nullptr, "GetDecompressedPositions", Z_Construct_UFunction_UGaussianSplatAsset_GetDecompressedPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_GetDecompressedPositions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaussianSplatAsset_GetDecompressedPositions_Statics::GaussianSplatAsset_eventGetDecompressedPositions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_GetDecompressedPositions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatAsset_GetDecompressedPositions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGaussianSplatAsset_GetDecompressedPositions_Statics::GaussianSplatAsset_eventGetDecompressedPositions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatAsset_GetDecompressedPositions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatAsset_GetDecompressedPositions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaussianSplatAsset::execGetDecompressedPositions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=P_THIS->GetDecompressedPositions();
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatAsset Function GetDecompressedPositions **********************

// ********** Begin Class UGaussianSplatAsset Function GetMemoryUsage ******************************
struct Z_Construct_UFunction_UGaussianSplatAsset_GetMemoryUsage_Statics
{
	struct GaussianSplatAsset_eventGetMemoryUsage_Parms
	{
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gaussian Splatting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get estimated memory usage in bytes */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get estimated memory usage in bytes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UGaussianSplatAsset_GetMemoryUsage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatAsset_eventGetMemoryUsage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaussianSplatAsset_GetMemoryUsage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatAsset_GetMemoryUsage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_GetMemoryUsage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatAsset_GetMemoryUsage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaussianSplatAsset, nullptr, "GetMemoryUsage", Z_Construct_UFunction_UGaussianSplatAsset_GetMemoryUsage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_GetMemoryUsage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaussianSplatAsset_GetMemoryUsage_Statics::GaussianSplatAsset_eventGetMemoryUsage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_GetMemoryUsage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatAsset_GetMemoryUsage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGaussianSplatAsset_GetMemoryUsage_Statics::GaussianSplatAsset_eventGetMemoryUsage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatAsset_GetMemoryUsage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatAsset_GetMemoryUsage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaussianSplatAsset::execGetMemoryUsage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=P_THIS->GetMemoryUsage();
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatAsset Function GetMemoryUsage ********************************

// ********** Begin Class UGaussianSplatAsset Function GetNumLODLevels *****************************
struct Z_Construct_UFunction_UGaussianSplatAsset_GetNumLODLevels_Statics
{
	struct GaussianSplatAsset_eventGetNumLODLevels_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gaussian Splatting|Clustering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get number of LOD levels */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get number of LOD levels" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGaussianSplatAsset_GetNumLODLevels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatAsset_eventGetNumLODLevels_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaussianSplatAsset_GetNumLODLevels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatAsset_GetNumLODLevels_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_GetNumLODLevels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatAsset_GetNumLODLevels_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaussianSplatAsset, nullptr, "GetNumLODLevels", Z_Construct_UFunction_UGaussianSplatAsset_GetNumLODLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_GetNumLODLevels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaussianSplatAsset_GetNumLODLevels_Statics::GaussianSplatAsset_eventGetNumLODLevels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_GetNumLODLevels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatAsset_GetNumLODLevels_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGaussianSplatAsset_GetNumLODLevels_Statics::GaussianSplatAsset_eventGetNumLODLevels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatAsset_GetNumLODLevels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatAsset_GetNumLODLevels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaussianSplatAsset::execGetNumLODLevels)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumLODLevels();
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatAsset Function GetNumLODLevels *******************************

// ********** Begin Class UGaussianSplatAsset Function GetOriginalSplatCount ***********************
struct Z_Construct_UFunction_UGaussianSplatAsset_GetOriginalSplatCount_Statics
{
	struct GaussianSplatAsset_eventGetOriginalSplatCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gaussian Splatting|Nanite" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get original splat count (excluding LOD splats) */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get original splat count (excluding LOD splats)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGaussianSplatAsset_GetOriginalSplatCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatAsset_eventGetOriginalSplatCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaussianSplatAsset_GetOriginalSplatCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatAsset_GetOriginalSplatCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_GetOriginalSplatCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatAsset_GetOriginalSplatCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaussianSplatAsset, nullptr, "GetOriginalSplatCount", Z_Construct_UFunction_UGaussianSplatAsset_GetOriginalSplatCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_GetOriginalSplatCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaussianSplatAsset_GetOriginalSplatCount_Statics::GaussianSplatAsset_eventGetOriginalSplatCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_GetOriginalSplatCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatAsset_GetOriginalSplatCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGaussianSplatAsset_GetOriginalSplatCount_Statics::GaussianSplatAsset_eventGetOriginalSplatCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatAsset_GetOriginalSplatCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatAsset_GetOriginalSplatCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaussianSplatAsset::execGetOriginalSplatCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetOriginalSplatCount();
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatAsset Function GetOriginalSplatCount *************************

// ********** Begin Class UGaussianSplatAsset Function GetSplatCount *******************************
struct Z_Construct_UFunction_UGaussianSplatAsset_GetSplatCount_Statics
{
	struct GaussianSplatAsset_eventGetSplatCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gaussian Splatting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the number of splats in this asset */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the number of splats in this asset" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGaussianSplatAsset_GetSplatCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GaussianSplatAsset_eventGetSplatCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaussianSplatAsset_GetSplatCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatAsset_GetSplatCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_GetSplatCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatAsset_GetSplatCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaussianSplatAsset, nullptr, "GetSplatCount", Z_Construct_UFunction_UGaussianSplatAsset_GetSplatCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_GetSplatCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaussianSplatAsset_GetSplatCount_Statics::GaussianSplatAsset_eventGetSplatCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_GetSplatCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatAsset_GetSplatCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGaussianSplatAsset_GetSplatCount_Statics::GaussianSplatAsset_eventGetSplatCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatAsset_GetSplatCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatAsset_GetSplatCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaussianSplatAsset::execGetSplatCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSplatCount();
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatAsset Function GetSplatCount *********************************

// ********** Begin Class UGaussianSplatAsset Function HasClusterHierarchy *************************
struct Z_Construct_UFunction_UGaussianSplatAsset_HasClusterHierarchy_Statics
{
	struct GaussianSplatAsset_eventHasClusterHierarchy_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gaussian Splatting|Clustering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Check if cluster hierarchy is available */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if cluster hierarchy is available" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGaussianSplatAsset_HasClusterHierarchy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GaussianSplatAsset_eventHasClusterHierarchy_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGaussianSplatAsset_HasClusterHierarchy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GaussianSplatAsset_eventHasClusterHierarchy_Parms), &Z_Construct_UFunction_UGaussianSplatAsset_HasClusterHierarchy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaussianSplatAsset_HasClusterHierarchy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatAsset_HasClusterHierarchy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_HasClusterHierarchy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatAsset_HasClusterHierarchy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaussianSplatAsset, nullptr, "HasClusterHierarchy", Z_Construct_UFunction_UGaussianSplatAsset_HasClusterHierarchy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_HasClusterHierarchy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaussianSplatAsset_HasClusterHierarchy_Statics::GaussianSplatAsset_eventHasClusterHierarchy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_HasClusterHierarchy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatAsset_HasClusterHierarchy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGaussianSplatAsset_HasClusterHierarchy_Statics::GaussianSplatAsset_eventHasClusterHierarchy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatAsset_HasClusterHierarchy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatAsset_HasClusterHierarchy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaussianSplatAsset::execHasClusterHierarchy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasClusterHierarchy();
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatAsset Function HasClusterHierarchy ***************************

// ********** Begin Class UGaussianSplatAsset Function IsNaniteEnabled *****************************
struct Z_Construct_UFunction_UGaussianSplatAsset_IsNaniteEnabled_Statics
{
	struct GaussianSplatAsset_eventIsNaniteEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gaussian Splatting|Nanite" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Check if Nanite is enabled for this asset */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if Nanite is enabled for this asset" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGaussianSplatAsset_IsNaniteEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GaussianSplatAsset_eventIsNaniteEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGaussianSplatAsset_IsNaniteEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GaussianSplatAsset_eventIsNaniteEnabled_Parms), &Z_Construct_UFunction_UGaussianSplatAsset_IsNaniteEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaussianSplatAsset_IsNaniteEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatAsset_IsNaniteEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_IsNaniteEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatAsset_IsNaniteEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaussianSplatAsset, nullptr, "IsNaniteEnabled", Z_Construct_UFunction_UGaussianSplatAsset_IsNaniteEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_IsNaniteEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaussianSplatAsset_IsNaniteEnabled_Statics::GaussianSplatAsset_eventIsNaniteEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_IsNaniteEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatAsset_IsNaniteEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGaussianSplatAsset_IsNaniteEnabled_Statics::GaussianSplatAsset_eventIsNaniteEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatAsset_IsNaniteEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatAsset_IsNaniteEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaussianSplatAsset::execIsNaniteEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsNaniteEnabled();
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatAsset Function IsNaniteEnabled *******************************

// ********** Begin Class UGaussianSplatAsset Function IsValid *************************************
struct Z_Construct_UFunction_UGaussianSplatAsset_IsValid_Statics
{
	struct GaussianSplatAsset_eventIsValid_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gaussian Splatting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Check if asset has valid data */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if asset has valid data" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGaussianSplatAsset_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GaussianSplatAsset_eventIsValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGaussianSplatAsset_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GaussianSplatAsset_eventIsValid_Parms), &Z_Construct_UFunction_UGaussianSplatAsset_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaussianSplatAsset_IsValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaussianSplatAsset_IsValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_IsValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaussianSplatAsset_IsValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGaussianSplatAsset, nullptr, "IsValid", Z_Construct_UFunction_UGaussianSplatAsset_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_IsValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGaussianSplatAsset_IsValid_Statics::GaussianSplatAsset_eventIsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGaussianSplatAsset_IsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGaussianSplatAsset_IsValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGaussianSplatAsset_IsValid_Statics::GaussianSplatAsset_eventIsValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaussianSplatAsset_IsValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGaussianSplatAsset_IsValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGaussianSplatAsset::execIsValid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValid();
	P_NATIVE_END;
}
// ********** End Class UGaussianSplatAsset Function IsValid ***************************************

// ********** Begin Class UGaussianSplatAsset ******************************************************
void UGaussianSplatAsset::StaticRegisterNativesUGaussianSplatAsset()
{
	UClass* Class = UGaussianSplatAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
#if WITH_EDITOR
		{ "BuildNaniteClusterHierarchy", &UGaussianSplatAsset::execBuildNaniteClusterHierarchy },
		{ "ClearNaniteClusterHierarchy", &UGaussianSplatAsset::execClearNaniteClusterHierarchy },
#endif // WITH_EDITOR
		{ "GetBounds", &UGaussianSplatAsset::execGetBounds },
		{ "GetClusterCount", &UGaussianSplatAsset::execGetClusterCount },
		{ "GetDecompressedPositions", &UGaussianSplatAsset::execGetDecompressedPositions },
		{ "GetMemoryUsage", &UGaussianSplatAsset::execGetMemoryUsage },
		{ "GetNumLODLevels", &UGaussianSplatAsset::execGetNumLODLevels },
		{ "GetOriginalSplatCount", &UGaussianSplatAsset::execGetOriginalSplatCount },
		{ "GetSplatCount", &UGaussianSplatAsset::execGetSplatCount },
		{ "HasClusterHierarchy", &UGaussianSplatAsset::execHasClusterHierarchy },
		{ "IsNaniteEnabled", &UGaussianSplatAsset::execIsNaniteEnabled },
		{ "IsValid", &UGaussianSplatAsset::execIsValid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGaussianSplatAsset;
UClass* UGaussianSplatAsset::GetPrivateStaticClass()
{
	using TClass = UGaussianSplatAsset;
	if (!Z_Registration_Info_UClass_UGaussianSplatAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GaussianSplatAsset"),
			Z_Registration_Info_UClass_UGaussianSplatAsset.InnerSingleton,
			StaticRegisterNativesUGaussianSplatAsset,
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
	return Z_Registration_Info_UClass_UGaussianSplatAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UGaussianSplatAsset_NoRegister()
{
	return UGaussianSplatAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGaussianSplatAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Asset containing Gaussian Splatting data loaded from PLY files\n * Stores compressed splat data optimized for GPU rendering\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "GaussianSplatAsset.h" },
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asset containing Gaussian Splatting data loaded from PLY files\nStores compressed splat data optimized for GPU rendering" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplatCount_MetaData[] = {
		{ "Category", "Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Total number of splats */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Total number of splats" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[] = {
		{ "Category", "Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** World-space bounding box of all splats */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World-space bounding box of all splats" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionFormat_MetaData[] = {
		{ "Category", "Format" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Position compression format */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Position compression format" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorFormat_MetaData[] = {
		{ "Category", "Format" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Color compression format */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color compression format" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SHFormat_MetaData[] = {
		{ "Category", "Format" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spherical harmonics compression format */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spherical harmonics compression format" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SHBands_MetaData[] = {
		{ "Category", "Format" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of SH bands stored (0-3) */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of SH bands stored (0-3)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Chunk quantization info (one per 256 splats) - kept as TArray since it's small */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chunk quantization info (one per 256 splats) - kept as TArray since it's small" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorTexture_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Color texture (Morton-swizzled, 2048 x N) - created at runtime from ColorTextureBulkData */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color texture (Morton-swizzled, 2048 x N) - created at runtime from ColorTextureBulkData" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorTextureWidth_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Color texture width */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color texture width" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorTextureHeight_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Color texture height */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color texture height" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[] = {
		{ "Category", "Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Source file path (for reimport) */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Source file path (for reimport)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportQuality_MetaData[] = {
		{ "Category", "Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Quality level used during import */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Quality level used during import" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceCoordinateConvention_MetaData[] = {
		{ "Category", "Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Source coordinate convention used during import (reused on reimport) */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Source coordinate convention used during import (reused on reimport)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNanite_MetaData[] = {
		{ "Category", "Nanite" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Whether Nanite-style LOD and culling is enabled for this asset\n\x09 * Enable via Asset Actions > Nanite in Content Browser\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether Nanite-style LOD and culling is enabled for this asset\nEnable via Asset Actions > Nanite in Content Browser" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusterHierarchy_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Hierarchical cluster structure for Nanite-style LOD and culling\n\x09 * Only populated when bEnableNanite is true\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hierarchical cluster structure for Nanite-style LOD and culling\nOnly populated when bEnableNanite is true" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalSplatCount_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Number of original splats (before LOD splats are appended)\n\x09 * When Nanite is enabled, SplatCount includes both original + LOD splats\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of original splats (before LOD splats are appended)\nWhen Nanite is enabled, SplatCount includes both original + LOD splats" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailTexture_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Thumbnail image generated at import time.\n\x09 * Stored persistently in the asset package so the Content Browser can display it.\n\x09 * NOTE: This is Transient - recreated from ThumbnailData in PostLoad()\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Thumbnail image generated at import time.\nStored persistently in the asset package so the Content Browser can display it.\nNOTE: This is Transient - recreated from ThumbnailData in PostLoad()" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Raw thumbnail pixel data (BGRA, 256x256).\n\x09 * Stored persistently and used to recreate ThumbnailTexture on load.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Raw thumbnail pixel data (BGRA, 256x256).\nStored persistently and used to recreate ThumbnailTexture on load." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailSize_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Size of the thumbnail (width = height) */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianSplatAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the thumbnail (width = height)" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SplatCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBox;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PositionFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PositionFormat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorFormat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SHFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SHFormat;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SHBands;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChunkData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorTexture;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ColorTextureWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ColorTextureHeight;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ImportQuality_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ImportQuality;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceCoordinateConvention_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceCoordinateConvention;
	static void NewProp_bEnableNanite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNanite;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClusterHierarchy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OriginalSplatCount;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThumbnailTexture;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThumbnailData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ThumbnailData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ThumbnailSize;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UGaussianSplatAsset_BuildNaniteClusterHierarchy, "BuildNaniteClusterHierarchy" }, // 4116584645
		{ &Z_Construct_UFunction_UGaussianSplatAsset_ClearNaniteClusterHierarchy, "ClearNaniteClusterHierarchy" }, // 977109188
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_UGaussianSplatAsset_GetBounds, "GetBounds" }, // 3499151631
		{ &Z_Construct_UFunction_UGaussianSplatAsset_GetClusterCount, "GetClusterCount" }, // 678339051
		{ &Z_Construct_UFunction_UGaussianSplatAsset_GetDecompressedPositions, "GetDecompressedPositions" }, // 3463034714
		{ &Z_Construct_UFunction_UGaussianSplatAsset_GetMemoryUsage, "GetMemoryUsage" }, // 176616573
		{ &Z_Construct_UFunction_UGaussianSplatAsset_GetNumLODLevels, "GetNumLODLevels" }, // 1498421056
		{ &Z_Construct_UFunction_UGaussianSplatAsset_GetOriginalSplatCount, "GetOriginalSplatCount" }, // 1499689535
		{ &Z_Construct_UFunction_UGaussianSplatAsset_GetSplatCount, "GetSplatCount" }, // 3037609781
		{ &Z_Construct_UFunction_UGaussianSplatAsset_HasClusterHierarchy, "HasClusterHierarchy" }, // 2689171243
		{ &Z_Construct_UFunction_UGaussianSplatAsset_IsNaniteEnabled, "IsNaniteEnabled" }, // 1306972594
		{ &Z_Construct_UFunction_UGaussianSplatAsset_IsValid, "IsValid" }, // 4094593816
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGaussianSplatAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_SplatCount = { "SplatCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianSplatAsset, SplatCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplatCount_MetaData), NewProp_SplatCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianSplatAsset, BoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingBox_MetaData), NewProp_BoundingBox_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_PositionFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_PositionFormat = { "PositionFormat", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianSplatAsset, PositionFormat), Z_Construct_UEnum_NanoGS_EGaussianPositionFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionFormat_MetaData), NewProp_PositionFormat_MetaData) }; // 3283263462
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ColorFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ColorFormat = { "ColorFormat", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianSplatAsset, ColorFormat), Z_Construct_UEnum_NanoGS_EGaussianColorFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorFormat_MetaData), NewProp_ColorFormat_MetaData) }; // 2645459499
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_SHFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_SHFormat = { "SHFormat", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianSplatAsset, SHFormat), Z_Construct_UEnum_NanoGS_EGaussianSHFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SHFormat_MetaData), NewProp_SHFormat_MetaData) }; // 2886842483
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_SHBands = { "SHBands", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianSplatAsset, SHBands), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SHBands_MetaData), NewProp_SHBands_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ChunkData_Inner = { "ChunkData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGaussianChunkInfo, METADATA_PARAMS(0, nullptr) }; // 892824785
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ChunkData = { "ChunkData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianSplatAsset, ChunkData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkData_MetaData), NewProp_ChunkData_MetaData) }; // 892824785
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ColorTexture = { "ColorTexture", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianSplatAsset, ColorTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorTexture_MetaData), NewProp_ColorTexture_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ColorTextureWidth = { "ColorTextureWidth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianSplatAsset, ColorTextureWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorTextureWidth_MetaData), NewProp_ColorTextureWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ColorTextureHeight = { "ColorTextureHeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianSplatAsset, ColorTextureHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorTextureHeight_MetaData), NewProp_ColorTextureHeight_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianSplatAsset, SourceFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFilePath_MetaData), NewProp_SourceFilePath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ImportQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ImportQuality = { "ImportQuality", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianSplatAsset, ImportQuality), Z_Construct_UEnum_NanoGS_EGaussianQualityLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportQuality_MetaData), NewProp_ImportQuality_MetaData) }; // 98877216
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_SourceCoordinateConvention_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_SourceCoordinateConvention = { "SourceCoordinateConvention", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianSplatAsset, SourceCoordinateConvention), Z_Construct_UEnum_NanoGS_EPLYCoordinateConvention, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceCoordinateConvention_MetaData), NewProp_SourceCoordinateConvention_MetaData) }; // 4185321714
void Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_bEnableNanite_SetBit(void* Obj)
{
	((UGaussianSplatAsset*)Obj)->bEnableNanite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_bEnableNanite = { "bEnableNanite", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGaussianSplatAsset), &Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_bEnableNanite_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableNanite_MetaData), NewProp_bEnableNanite_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ClusterHierarchy = { "ClusterHierarchy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianSplatAsset, ClusterHierarchy), Z_Construct_UScriptStruct_FGaussianClusterHierarchy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusterHierarchy_MetaData), NewProp_ClusterHierarchy_MetaData) }; // 2276852794
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_OriginalSplatCount = { "OriginalSplatCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianSplatAsset, OriginalSplatCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalSplatCount_MetaData), NewProp_OriginalSplatCount_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ThumbnailTexture = { "ThumbnailTexture", nullptr, (EPropertyFlags)0x0114000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianSplatAsset, ThumbnailTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailTexture_MetaData), NewProp_ThumbnailTexture_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ThumbnailData_Inner = { "ThumbnailData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ThumbnailData = { "ThumbnailData", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianSplatAsset, ThumbnailData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailData_MetaData), NewProp_ThumbnailData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ThumbnailSize = { "ThumbnailSize", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGaussianSplatAsset, ThumbnailSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailSize_MetaData), NewProp_ThumbnailSize_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGaussianSplatAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_SplatCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_BoundingBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_PositionFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_PositionFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ColorFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ColorFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_SHFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_SHFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_SHBands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ChunkData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ChunkData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ColorTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ColorTextureWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ColorTextureHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_SourceFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ImportQuality_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ImportQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_SourceCoordinateConvention_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_SourceCoordinateConvention,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_bEnableNanite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ClusterHierarchy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_OriginalSplatCount,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ThumbnailTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ThumbnailData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ThumbnailData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaussianSplatAsset_Statics::NewProp_ThumbnailSize,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianSplatAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGaussianSplatAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NanoGS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianSplatAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGaussianSplatAsset_Statics::ClassParams = {
	&UGaussianSplatAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGaussianSplatAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianSplatAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGaussianSplatAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UGaussianSplatAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGaussianSplatAsset()
{
	if (!Z_Registration_Info_UClass_UGaussianSplatAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGaussianSplatAsset.OuterSingleton, Z_Construct_UClass_UGaussianSplatAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGaussianSplatAsset.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGaussianSplatAsset);
UGaussianSplatAsset::~UGaussianSplatAsset() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UGaussianSplatAsset)
// ********** End Class UGaussianSplatAsset ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatAsset_h__Script_NanoGS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGaussianSplatAsset, UGaussianSplatAsset::StaticClass, TEXT("UGaussianSplatAsset"), &Z_Registration_Info_UClass_UGaussianSplatAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGaussianSplatAsset), 2395985927U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatAsset_h__Script_NanoGS_804627638(TEXT("/Script/NanoGS"),
	Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatAsset_h__Script_NanoGS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatAsset_h__Script_NanoGS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
