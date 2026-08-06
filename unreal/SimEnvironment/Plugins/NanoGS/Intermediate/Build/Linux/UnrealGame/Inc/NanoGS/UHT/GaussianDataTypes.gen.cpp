// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GaussianDataTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGaussianDataTypes() {}

// ********** Begin Cross Module References ********************************************************
NANOGS_API UEnum* Z_Construct_UEnum_NanoGS_EGaussianColorFormat();
NANOGS_API UEnum* Z_Construct_UEnum_NanoGS_EGaussianPositionFormat();
NANOGS_API UEnum* Z_Construct_UEnum_NanoGS_EGaussianQualityLevel();
NANOGS_API UEnum* Z_Construct_UEnum_NanoGS_EGaussianSHFormat();
NANOGS_API UScriptStruct* Z_Construct_UScriptStruct_FGaussianChunkInfo();
NANOGS_API UScriptStruct* Z_Construct_UScriptStruct_FGaussianSplatData();
NANOGS_API UScriptStruct* Z_Construct_UScriptStruct_FGaussianSplatViewData();
UPackage* Z_Construct_UPackage__Script_NanoGS();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EGaussianPositionFormat ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGaussianPositionFormat;
static UEnum* EGaussianPositionFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGaussianPositionFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGaussianPositionFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NanoGS_EGaussianPositionFormat, (UObject*)Z_Construct_UPackage__Script_NanoGS(), TEXT("EGaussianPositionFormat"));
	}
	return Z_Registration_Info_UEnum_EGaussianPositionFormat.OuterSingleton;
}
template<> NANOGS_API UEnum* StaticEnum<EGaussianPositionFormat>()
{
	return EGaussianPositionFormat_StaticEnum();
}
struct Z_Construct_UEnum_NanoGS_EGaussianPositionFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Position data compression format\n */" },
#endif
		{ "Float32.DisplayName", "Float32 (12 bytes)" },
		{ "Float32.Name", "EGaussianPositionFormat::Float32" },
		{ "ModuleRelativePath", "Public/GaussianDataTypes.h" },
		{ "Norm11.DisplayName", "Norm11 (4 bytes)" },
		{ "Norm11.Name", "EGaussianPositionFormat::Norm11" },
		{ "Norm16.DisplayName", "Norm16 (6 bytes)" },
		{ "Norm16.Name", "EGaussianPositionFormat::Norm16" },
		{ "Norm6.DisplayName", "Norm6 (2 bytes)" },
		{ "Norm6.Name", "EGaussianPositionFormat::Norm6" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Position data compression format" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGaussianPositionFormat::Float32", (int64)EGaussianPositionFormat::Float32 },
		{ "EGaussianPositionFormat::Norm16", (int64)EGaussianPositionFormat::Norm16 },
		{ "EGaussianPositionFormat::Norm11", (int64)EGaussianPositionFormat::Norm11 },
		{ "EGaussianPositionFormat::Norm6", (int64)EGaussianPositionFormat::Norm6 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NanoGS_EGaussianPositionFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NanoGS,
	nullptr,
	"EGaussianPositionFormat",
	"EGaussianPositionFormat",
	Z_Construct_UEnum_NanoGS_EGaussianPositionFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NanoGS_EGaussianPositionFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NanoGS_EGaussianPositionFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NanoGS_EGaussianPositionFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NanoGS_EGaussianPositionFormat()
{
	if (!Z_Registration_Info_UEnum_EGaussianPositionFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGaussianPositionFormat.InnerSingleton, Z_Construct_UEnum_NanoGS_EGaussianPositionFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGaussianPositionFormat.InnerSingleton;
}
// ********** End Enum EGaussianPositionFormat *****************************************************

// ********** Begin Enum EGaussianColorFormat ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGaussianColorFormat;
static UEnum* EGaussianColorFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGaussianColorFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGaussianColorFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NanoGS_EGaussianColorFormat, (UObject*)Z_Construct_UPackage__Script_NanoGS(), TEXT("EGaussianColorFormat"));
	}
	return Z_Registration_Info_UEnum_EGaussianColorFormat.OuterSingleton;
}
template<> NANOGS_API UEnum* StaticEnum<EGaussianColorFormat>()
{
	return EGaussianColorFormat_StaticEnum();
}
struct Z_Construct_UEnum_NanoGS_EGaussianColorFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BC7.DisplayName", "BC7 (~1 byte)" },
		{ "BC7.Name", "EGaussianColorFormat::BC7" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Color/opacity data compression format\n */" },
#endif
		{ "Float16x4.DisplayName", "Float16x4 (8 bytes)" },
		{ "Float16x4.Name", "EGaussianColorFormat::Float16x4" },
		{ "Float32x4.DisplayName", "Float32x4 (16 bytes)" },
		{ "Float32x4.Name", "EGaussianColorFormat::Float32x4" },
		{ "ModuleRelativePath", "Public/GaussianDataTypes.h" },
		{ "Norm8x4.DisplayName", "Norm8x4 (4 bytes)" },
		{ "Norm8x4.Name", "EGaussianColorFormat::Norm8x4" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color/opacity data compression format" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGaussianColorFormat::Float32x4", (int64)EGaussianColorFormat::Float32x4 },
		{ "EGaussianColorFormat::Float16x4", (int64)EGaussianColorFormat::Float16x4 },
		{ "EGaussianColorFormat::Norm8x4", (int64)EGaussianColorFormat::Norm8x4 },
		{ "EGaussianColorFormat::BC7", (int64)EGaussianColorFormat::BC7 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NanoGS_EGaussianColorFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NanoGS,
	nullptr,
	"EGaussianColorFormat",
	"EGaussianColorFormat",
	Z_Construct_UEnum_NanoGS_EGaussianColorFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NanoGS_EGaussianColorFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NanoGS_EGaussianColorFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NanoGS_EGaussianColorFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NanoGS_EGaussianColorFormat()
{
	if (!Z_Registration_Info_UEnum_EGaussianColorFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGaussianColorFormat.InnerSingleton, Z_Construct_UEnum_NanoGS_EGaussianColorFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGaussianColorFormat.InnerSingleton;
}
// ********** End Enum EGaussianColorFormat ********************************************************

// ********** Begin Enum EGaussianSHFormat *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGaussianSHFormat;
static UEnum* EGaussianSHFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGaussianSHFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGaussianSHFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NanoGS_EGaussianSHFormat, (UObject*)Z_Construct_UPackage__Script_NanoGS(), TEXT("EGaussianSHFormat"));
	}
	return Z_Registration_Info_UEnum_EGaussianSHFormat.OuterSingleton;
}
template<> NANOGS_API UEnum* StaticEnum<EGaussianSHFormat>()
{
	return EGaussianSHFormat_StaticEnum();
}
struct Z_Construct_UEnum_NanoGS_EGaussianSHFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cluster16k.DisplayName", "Cluster 16k" },
		{ "Cluster16k.Name", "EGaussianSHFormat::Cluster16k" },
		{ "Cluster32k.DisplayName", "Cluster 32k" },
		{ "Cluster32k.Name", "EGaussianSHFormat::Cluster32k" },
		{ "Cluster4k.DisplayName", "Cluster 4k" },
		{ "Cluster4k.Name", "EGaussianSHFormat::Cluster4k" },
		{ "Cluster64k.DisplayName", "Cluster 64k" },
		{ "Cluster64k.Name", "EGaussianSHFormat::Cluster64k" },
		{ "Cluster8k.DisplayName", "Cluster 8k" },
		{ "Cluster8k.Name", "EGaussianSHFormat::Cluster8k" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Spherical harmonics compression format\n */" },
#endif
		{ "Float16.DisplayName", "Float16" },
		{ "Float16.Name", "EGaussianSHFormat::Float16" },
		{ "Float32.DisplayName", "Float32" },
		{ "Float32.Name", "EGaussianSHFormat::Float32" },
		{ "ModuleRelativePath", "Public/GaussianDataTypes.h" },
		{ "Norm11.DisplayName", "Norm11" },
		{ "Norm11.Name", "EGaussianSHFormat::Norm11" },
		{ "Norm6.DisplayName", "Norm6" },
		{ "Norm6.Name", "EGaussianSHFormat::Norm6" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spherical harmonics compression format" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGaussianSHFormat::Float32", (int64)EGaussianSHFormat::Float32 },
		{ "EGaussianSHFormat::Float16", (int64)EGaussianSHFormat::Float16 },
		{ "EGaussianSHFormat::Norm11", (int64)EGaussianSHFormat::Norm11 },
		{ "EGaussianSHFormat::Norm6", (int64)EGaussianSHFormat::Norm6 },
		{ "EGaussianSHFormat::Cluster4k", (int64)EGaussianSHFormat::Cluster4k },
		{ "EGaussianSHFormat::Cluster8k", (int64)EGaussianSHFormat::Cluster8k },
		{ "EGaussianSHFormat::Cluster16k", (int64)EGaussianSHFormat::Cluster16k },
		{ "EGaussianSHFormat::Cluster32k", (int64)EGaussianSHFormat::Cluster32k },
		{ "EGaussianSHFormat::Cluster64k", (int64)EGaussianSHFormat::Cluster64k },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NanoGS_EGaussianSHFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NanoGS,
	nullptr,
	"EGaussianSHFormat",
	"EGaussianSHFormat",
	Z_Construct_UEnum_NanoGS_EGaussianSHFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NanoGS_EGaussianSHFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NanoGS_EGaussianSHFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NanoGS_EGaussianSHFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NanoGS_EGaussianSHFormat()
{
	if (!Z_Registration_Info_UEnum_EGaussianSHFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGaussianSHFormat.InnerSingleton, Z_Construct_UEnum_NanoGS_EGaussianSHFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGaussianSHFormat.InnerSingleton;
}
// ********** End Enum EGaussianSHFormat ***********************************************************

// ********** Begin Enum EGaussianQualityLevel *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGaussianQualityLevel;
static UEnum* EGaussianQualityLevel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGaussianQualityLevel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGaussianQualityLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NanoGS_EGaussianQualityLevel, (UObject*)Z_Construct_UPackage__Script_NanoGS(), TEXT("EGaussianQualityLevel"));
	}
	return Z_Registration_Info_UEnum_EGaussianQualityLevel.OuterSingleton;
}
template<> NANOGS_API UEnum* StaticEnum<EGaussianQualityLevel>()
{
	return EGaussianQualityLevel_StaticEnum();
}
struct Z_Construct_UEnum_NanoGS_EGaussianQualityLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Quality level preset for import\n */" },
#endif
		{ "High.DisplayName", "High (~24 bytes/splat)" },
		{ "High.Name", "EGaussianQualityLevel::High" },
		{ "Low.DisplayName", "Low (~8 bytes/splat)" },
		{ "Low.Name", "EGaussianQualityLevel::Low" },
		{ "Medium.DisplayName", "Medium (~12 bytes/splat)" },
		{ "Medium.Name", "EGaussianQualityLevel::Medium" },
		{ "ModuleRelativePath", "Public/GaussianDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Quality level preset for import" },
#endif
		{ "VeryHigh.DisplayName", "Very High (~48 bytes/splat)" },
		{ "VeryHigh.Name", "EGaussianQualityLevel::VeryHigh" },
		{ "VeryLow.DisplayName", "Very Low (~4 bytes/splat)" },
		{ "VeryLow.Name", "EGaussianQualityLevel::VeryLow" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGaussianQualityLevel::VeryHigh", (int64)EGaussianQualityLevel::VeryHigh },
		{ "EGaussianQualityLevel::High", (int64)EGaussianQualityLevel::High },
		{ "EGaussianQualityLevel::Medium", (int64)EGaussianQualityLevel::Medium },
		{ "EGaussianQualityLevel::Low", (int64)EGaussianQualityLevel::Low },
		{ "EGaussianQualityLevel::VeryLow", (int64)EGaussianQualityLevel::VeryLow },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NanoGS_EGaussianQualityLevel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NanoGS,
	nullptr,
	"EGaussianQualityLevel",
	"EGaussianQualityLevel",
	Z_Construct_UEnum_NanoGS_EGaussianQualityLevel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NanoGS_EGaussianQualityLevel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NanoGS_EGaussianQualityLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NanoGS_EGaussianQualityLevel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NanoGS_EGaussianQualityLevel()
{
	if (!Z_Registration_Info_UEnum_EGaussianQualityLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGaussianQualityLevel.InnerSingleton, Z_Construct_UEnum_NanoGS_EGaussianQualityLevel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGaussianQualityLevel.InnerSingleton;
}
// ********** End Enum EGaussianQualityLevel *******************************************************

// ********** Begin ScriptStruct FGaussianSplatData ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGaussianSplatData;
class UScriptStruct* FGaussianSplatData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGaussianSplatData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGaussianSplatData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaussianSplatData, (UObject*)Z_Construct_UPackage__Script_NanoGS(), TEXT("GaussianSplatData"));
	}
	return Z_Registration_Info_UScriptStruct_FGaussianSplatData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGaussianSplatData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Raw splat data read from PLY file (CPU-side, before compression)\n * Total: ~248 bytes per splat\n */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Raw splat data read from PLY file (CPU-side, before compression)\nTotal: ~248 bytes per splat" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaussianSplatData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaussianSplatData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NanoGS,
	nullptr,
	&NewStructOps,
	"GaussianSplatData",
	nullptr,
	0,
	sizeof(FGaussianSplatData),
	alignof(FGaussianSplatData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSplatData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGaussianSplatData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGaussianSplatData()
{
	if (!Z_Registration_Info_UScriptStruct_FGaussianSplatData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGaussianSplatData.InnerSingleton, Z_Construct_UScriptStruct_FGaussianSplatData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGaussianSplatData.InnerSingleton;
}
// ********** End ScriptStruct FGaussianSplatData **************************************************

// ********** Begin ScriptStruct FGaussianSplatViewData ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGaussianSplatViewData;
class UScriptStruct* FGaussianSplatViewData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGaussianSplatViewData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGaussianSplatViewData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaussianSplatViewData, (UObject*)Z_Construct_UPackage__Script_NanoGS(), TEXT("GaussianSplatViewData"));
	}
	return Z_Registration_Info_UScriptStruct_FGaussianSplatViewData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGaussianSplatViewData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Per-frame view data computed by compute shader, used by vertex shader\n * This structure must match the HLSL definition in GaussianDataTypes.ush\n * Total: 64 bytes per splat (with TranslatedWorldPos for velocity, 16-byte aligned)\n */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per-frame view data computed by compute shader, used by vertex shader\nThis structure must match the HLSL definition in GaussianDataTypes.ush\nTotal: 64 bytes per splat (with TranslatedWorldPos for velocity, 16-byte aligned)" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaussianSplatViewData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaussianSplatViewData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NanoGS,
	nullptr,
	&NewStructOps,
	"GaussianSplatViewData",
	nullptr,
	0,
	sizeof(FGaussianSplatViewData),
	alignof(FGaussianSplatViewData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSplatViewData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGaussianSplatViewData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGaussianSplatViewData()
{
	if (!Z_Registration_Info_UScriptStruct_FGaussianSplatViewData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGaussianSplatViewData.InnerSingleton, Z_Construct_UScriptStruct_FGaussianSplatViewData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGaussianSplatViewData.InnerSingleton;
}
// ********** End ScriptStruct FGaussianSplatViewData **********************************************

// ********** Begin ScriptStruct FGaussianChunkInfo ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGaussianChunkInfo;
class UScriptStruct* FGaussianChunkInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGaussianChunkInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGaussianChunkInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaussianChunkInfo, (UObject*)Z_Construct_UPackage__Script_NanoGS(), TEXT("GaussianChunkInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FGaussianChunkInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGaussianChunkInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Chunk info for quantized/compressed data\n * Each chunk contains 256 splats with shared min/max bounds for dequantization\n * Total: 72 bytes per chunk\n */" },
#endif
		{ "ModuleRelativePath", "Public/GaussianDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chunk info for quantized/compressed data\nEach chunk contains 256 splats with shared min/max bounds for dequantization\nTotal: 72 bytes per chunk" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaussianChunkInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaussianChunkInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NanoGS,
	nullptr,
	&NewStructOps,
	"GaussianChunkInfo",
	nullptr,
	0,
	sizeof(FGaussianChunkInfo),
	alignof(FGaussianChunkInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianChunkInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGaussianChunkInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGaussianChunkInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FGaussianChunkInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGaussianChunkInfo.InnerSingleton, Z_Construct_UScriptStruct_FGaussianChunkInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGaussianChunkInfo.InnerSingleton;
}
// ********** End ScriptStruct FGaussianChunkInfo **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianDataTypes_h__Script_NanoGS_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGaussianPositionFormat_StaticEnum, TEXT("EGaussianPositionFormat"), &Z_Registration_Info_UEnum_EGaussianPositionFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3283263462U) },
		{ EGaussianColorFormat_StaticEnum, TEXT("EGaussianColorFormat"), &Z_Registration_Info_UEnum_EGaussianColorFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2645459499U) },
		{ EGaussianSHFormat_StaticEnum, TEXT("EGaussianSHFormat"), &Z_Registration_Info_UEnum_EGaussianSHFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2886842483U) },
		{ EGaussianQualityLevel_StaticEnum, TEXT("EGaussianQualityLevel"), &Z_Registration_Info_UEnum_EGaussianQualityLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 98877216U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGaussianSplatData::StaticStruct, Z_Construct_UScriptStruct_FGaussianSplatData_Statics::NewStructOps, TEXT("GaussianSplatData"), &Z_Registration_Info_UScriptStruct_FGaussianSplatData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGaussianSplatData), 322035832U) },
		{ FGaussianSplatViewData::StaticStruct, Z_Construct_UScriptStruct_FGaussianSplatViewData_Statics::NewStructOps, TEXT("GaussianSplatViewData"), &Z_Registration_Info_UScriptStruct_FGaussianSplatViewData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGaussianSplatViewData), 2157661439U) },
		{ FGaussianChunkInfo::StaticStruct, Z_Construct_UScriptStruct_FGaussianChunkInfo_Statics::NewStructOps, TEXT("GaussianChunkInfo"), &Z_Registration_Info_UScriptStruct_FGaussianChunkInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGaussianChunkInfo), 892824785U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianDataTypes_h__Script_NanoGS_3423909022(TEXT("/Script/NanoGS"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianDataTypes_h__Script_NanoGS_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianDataTypes_h__Script_NanoGS_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianDataTypes_h__Script_NanoGS_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianDataTypes_h__Script_NanoGS_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
