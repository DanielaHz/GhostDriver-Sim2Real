// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GaussianSplatAsset.h"

#ifdef NANOGS_GaussianSplatAsset_generated_h
#error "GaussianSplatAsset.generated.h already included, missing '#pragma once' in GaussianSplatAsset.h"
#endif
#define NANOGS_GaussianSplatAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGaussianSplatAsset ******************************************************
#define FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatAsset_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDecompressedPositions); \
	DECLARE_FUNCTION(execGetOriginalSplatCount); \
	DECLARE_FUNCTION(execGetNumLODLevels); \
	DECLARE_FUNCTION(execGetClusterCount); \
	DECLARE_FUNCTION(execIsNaniteEnabled); \
	DECLARE_FUNCTION(execHasClusterHierarchy); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execGetMemoryUsage); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execGetSplatCount);


#if WITH_EDITOR
#define FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatAsset_h_30_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execClearNaniteClusterHierarchy); \
	DECLARE_FUNCTION(execBuildNaniteClusterHierarchy);
#else // WITH_EDITOR
#define FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatAsset_h_30_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatAsset_h_30_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UGaussianSplatAsset, NO_API)


NANOGS_API UClass* Z_Construct_UClass_UGaussianSplatAsset_NoRegister();

#define FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatAsset_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGaussianSplatAsset(); \
	friend struct Z_Construct_UClass_UGaussianSplatAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NANOGS_API UClass* Z_Construct_UClass_UGaussianSplatAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UGaussianSplatAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NanoGS"), Z_Construct_UClass_UGaussianSplatAsset_NoRegister) \
	DECLARE_SERIALIZER(UGaussianSplatAsset) \
	FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatAsset_h_30_ARCHIVESERIALIZER


#define FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatAsset_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGaussianSplatAsset(UGaussianSplatAsset&&) = delete; \
	UGaussianSplatAsset(const UGaussianSplatAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGaussianSplatAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGaussianSplatAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGaussianSplatAsset) \
	NO_API virtual ~UGaussianSplatAsset();


#define FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatAsset_h_27_PROLOG
#define FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatAsset_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatAsset_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatAsset_h_30_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatAsset_h_30_INCLASS_NO_PURE_DECLS \
	FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatAsset_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGaussianSplatAsset;

// ********** End Class UGaussianSplatAsset ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
