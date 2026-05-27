// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GaussianSplatComponent.h"

#ifdef NANOGS_GaussianSplatComponent_generated_h
#error "GaussianSplatComponent.generated.h already included, missing '#pragma once' in GaussianSplatComponent.h"
#endif
#define NANOGS_GaussianSplatComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UGaussianSplatAsset;

// ********** Begin Class UGaussianSplatComponent **************************************************
#define FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSplatCount); \
	DECLARE_FUNCTION(execGetSplatAsset); \
	DECLARE_FUNCTION(execSetSplatAsset);


NANOGS_API UClass* Z_Construct_UClass_UGaussianSplatComponent_NoRegister();

#define FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGaussianSplatComponent(); \
	friend struct Z_Construct_UClass_UGaussianSplatComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NANOGS_API UClass* Z_Construct_UClass_UGaussianSplatComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGaussianSplatComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NanoGS"), Z_Construct_UClass_UGaussianSplatComponent_NoRegister) \
	DECLARE_SERIALIZER(UGaussianSplatComponent)


#define FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGaussianSplatComponent(UGaussianSplatComponent&&) = delete; \
	UGaussianSplatComponent(const UGaussianSplatComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGaussianSplatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGaussianSplatComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGaussianSplatComponent) \
	NO_API virtual ~UGaussianSplatComponent();


#define FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatComponent_h_16_PROLOG
#define FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGaussianSplatComponent;

// ********** End Class UGaussianSplatComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_GhostPilot_unreal_SimEnvironment_Plugins_NanoGS_Source_NanoGS_Public_GaussianSplatComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
