// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetManager/StarAssetManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDataAsset;
struct FPrimaryAssetId;
#ifdef STARCACHELIBS_StarAssetManager_generated_h
#error "StarAssetManager.generated.h already included, missing '#pragma once' in StarAssetManager.h"
#endif
#define STARCACHELIBS_StarAssetManager_generated_h

#define FID_Projects_TalesDungeoneer_Plugins_StarcacheLibs_Source_StarcacheLibs_Public_AssetManager_StarAssetManager_h_11_DELEGATE \
STARCACHELIBS_API void FOnDataAssetLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnDataAssetLoaded, const UDataAsset* LoadedDataAsset);


#define FID_Projects_TalesDungeoneer_Plugins_StarcacheLibs_Source_StarcacheLibs_Public_AssetManager_StarAssetManager_h_12_DELEGATE \
STARCACHELIBS_API void FOnActorAssetLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnActorAssetLoaded, const AActor* LoadedActorAsset);


#define FID_Projects_TalesDungeoneer_Plugins_StarcacheLibs_Source_StarcacheLibs_Public_AssetManager_StarAssetManager_h_13_DELEGATE \
STARCACHELIBS_API void FActorLoadedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ActorLoadedDelegate, AActor* LoadedActorAsset);


#define FID_Projects_TalesDungeoneer_Plugins_StarcacheLibs_Source_StarcacheLibs_Public_AssetManager_StarAssetManager_h_19_SPARSE_DATA
#define FID_Projects_TalesDungeoneer_Plugins_StarcacheLibs_Source_StarcacheLibs_Public_AssetManager_StarAssetManager_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_TalesDungeoneer_Plugins_StarcacheLibs_Source_StarcacheLibs_Public_AssetManager_StarAssetManager_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_TalesDungeoneer_Plugins_StarcacheLibs_Source_StarcacheLibs_Public_AssetManager_StarAssetManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadDataAssetDelegate);


#define FID_Projects_TalesDungeoneer_Plugins_StarcacheLibs_Source_StarcacheLibs_Public_AssetManager_StarAssetManager_h_19_ACCESSORS
#define FID_Projects_TalesDungeoneer_Plugins_StarcacheLibs_Source_StarcacheLibs_Public_AssetManager_StarAssetManager_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStarAssetManager(); \
	friend struct Z_Construct_UClass_UStarAssetManager_Statics; \
public: \
	DECLARE_CLASS(UStarAssetManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StarcacheLibs"), NO_API) \
	DECLARE_SERIALIZER(UStarAssetManager)


#define FID_Projects_TalesDungeoneer_Plugins_StarcacheLibs_Source_StarcacheLibs_Public_AssetManager_StarAssetManager_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStarAssetManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStarAssetManager(UStarAssetManager&&); \
	NO_API UStarAssetManager(const UStarAssetManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStarAssetManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStarAssetManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStarAssetManager) \
	NO_API virtual ~UStarAssetManager();


#define FID_Projects_TalesDungeoneer_Plugins_StarcacheLibs_Source_StarcacheLibs_Public_AssetManager_StarAssetManager_h_16_PROLOG
#define FID_Projects_TalesDungeoneer_Plugins_StarcacheLibs_Source_StarcacheLibs_Public_AssetManager_StarAssetManager_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_TalesDungeoneer_Plugins_StarcacheLibs_Source_StarcacheLibs_Public_AssetManager_StarAssetManager_h_19_SPARSE_DATA \
	FID_Projects_TalesDungeoneer_Plugins_StarcacheLibs_Source_StarcacheLibs_Public_AssetManager_StarAssetManager_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_TalesDungeoneer_Plugins_StarcacheLibs_Source_StarcacheLibs_Public_AssetManager_StarAssetManager_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_TalesDungeoneer_Plugins_StarcacheLibs_Source_StarcacheLibs_Public_AssetManager_StarAssetManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_TalesDungeoneer_Plugins_StarcacheLibs_Source_StarcacheLibs_Public_AssetManager_StarAssetManager_h_19_ACCESSORS \
	FID_Projects_TalesDungeoneer_Plugins_StarcacheLibs_Source_StarcacheLibs_Public_AssetManager_StarAssetManager_h_19_INCLASS_NO_PURE_DECLS \
	FID_Projects_TalesDungeoneer_Plugins_StarcacheLibs_Source_StarcacheLibs_Public_AssetManager_StarAssetManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARCACHELIBS_API UClass* StaticClass<class UStarAssetManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_TalesDungeoneer_Plugins_StarcacheLibs_Source_StarcacheLibs_Public_AssetManager_StarAssetManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
