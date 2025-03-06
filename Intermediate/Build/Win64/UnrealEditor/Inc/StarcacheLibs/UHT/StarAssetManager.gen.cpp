// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarcacheLibs/Public/AssetManager/StarAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStarAssetManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset_NoRegister();
	STARCACHELIBS_API UClass* Z_Construct_UClass_UStarAssetManager();
	STARCACHELIBS_API UClass* Z_Construct_UClass_UStarAssetManager_NoRegister();
	STARCACHELIBS_API UFunction* Z_Construct_UDelegateFunction_StarcacheLibs_ActorLoadedDelegate__DelegateSignature();
	STARCACHELIBS_API UFunction* Z_Construct_UDelegateFunction_StarcacheLibs_OnActorAssetLoaded__DelegateSignature();
	STARCACHELIBS_API UFunction* Z_Construct_UDelegateFunction_StarcacheLibs_OnDataAssetLoaded__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_StarcacheLibs();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_StarcacheLibs_OnDataAssetLoaded__DelegateSignature_Statics
	{
		struct _Script_StarcacheLibs_eventOnDataAssetLoaded_Parms
		{
			const UDataAsset* LoadedDataAsset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedDataAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StarcacheLibs_OnDataAssetLoaded__DelegateSignature_Statics::NewProp_LoadedDataAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_StarcacheLibs_OnDataAssetLoaded__DelegateSignature_Statics::NewProp_LoadedDataAsset = { "LoadedDataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_StarcacheLibs_eventOnDataAssetLoaded_Parms, LoadedDataAsset), Z_Construct_UClass_UDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StarcacheLibs_OnDataAssetLoaded__DelegateSignature_Statics::NewProp_LoadedDataAsset_MetaData), Z_Construct_UDelegateFunction_StarcacheLibs_OnDataAssetLoaded__DelegateSignature_Statics::NewProp_LoadedDataAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StarcacheLibs_OnDataAssetLoaded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StarcacheLibs_OnDataAssetLoaded__DelegateSignature_Statics::NewProp_LoadedDataAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StarcacheLibs_OnDataAssetLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssetManager/StarAssetManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StarcacheLibs_OnDataAssetLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StarcacheLibs, nullptr, "OnDataAssetLoaded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_StarcacheLibs_OnDataAssetLoaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StarcacheLibs_OnDataAssetLoaded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_StarcacheLibs_OnDataAssetLoaded__DelegateSignature_Statics::_Script_StarcacheLibs_eventOnDataAssetLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StarcacheLibs_OnDataAssetLoaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_StarcacheLibs_OnDataAssetLoaded__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StarcacheLibs_OnDataAssetLoaded__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_StarcacheLibs_OnDataAssetLoaded__DelegateSignature_Statics::_Script_StarcacheLibs_eventOnDataAssetLoaded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_StarcacheLibs_OnDataAssetLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_StarcacheLibs_OnDataAssetLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDataAssetLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnDataAssetLoaded, const UDataAsset* LoadedDataAsset)
{
	struct _Script_StarcacheLibs_eventOnDataAssetLoaded_Parms
	{
		const UDataAsset* LoadedDataAsset;
	};
	_Script_StarcacheLibs_eventOnDataAssetLoaded_Parms Parms;
	Parms.LoadedDataAsset=LoadedDataAsset;
	OnDataAssetLoaded.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_StarcacheLibs_OnActorAssetLoaded__DelegateSignature_Statics
	{
		struct _Script_StarcacheLibs_eventOnActorAssetLoaded_Parms
		{
			const AActor* LoadedActorAsset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedActorAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedActorAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StarcacheLibs_OnActorAssetLoaded__DelegateSignature_Statics::NewProp_LoadedActorAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_StarcacheLibs_OnActorAssetLoaded__DelegateSignature_Statics::NewProp_LoadedActorAsset = { "LoadedActorAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_StarcacheLibs_eventOnActorAssetLoaded_Parms, LoadedActorAsset), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StarcacheLibs_OnActorAssetLoaded__DelegateSignature_Statics::NewProp_LoadedActorAsset_MetaData), Z_Construct_UDelegateFunction_StarcacheLibs_OnActorAssetLoaded__DelegateSignature_Statics::NewProp_LoadedActorAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StarcacheLibs_OnActorAssetLoaded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StarcacheLibs_OnActorAssetLoaded__DelegateSignature_Statics::NewProp_LoadedActorAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StarcacheLibs_OnActorAssetLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssetManager/StarAssetManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StarcacheLibs_OnActorAssetLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StarcacheLibs, nullptr, "OnActorAssetLoaded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_StarcacheLibs_OnActorAssetLoaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StarcacheLibs_OnActorAssetLoaded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_StarcacheLibs_OnActorAssetLoaded__DelegateSignature_Statics::_Script_StarcacheLibs_eventOnActorAssetLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StarcacheLibs_OnActorAssetLoaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_StarcacheLibs_OnActorAssetLoaded__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StarcacheLibs_OnActorAssetLoaded__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_StarcacheLibs_OnActorAssetLoaded__DelegateSignature_Statics::_Script_StarcacheLibs_eventOnActorAssetLoaded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_StarcacheLibs_OnActorAssetLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_StarcacheLibs_OnActorAssetLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnActorAssetLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnActorAssetLoaded, const AActor* LoadedActorAsset)
{
	struct _Script_StarcacheLibs_eventOnActorAssetLoaded_Parms
	{
		const AActor* LoadedActorAsset;
	};
	_Script_StarcacheLibs_eventOnActorAssetLoaded_Parms Parms;
	Parms.LoadedActorAsset=LoadedActorAsset;
	OnActorAssetLoaded.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_StarcacheLibs_ActorLoadedDelegate__DelegateSignature_Statics
	{
		struct _Script_StarcacheLibs_eventActorLoadedDelegate_Parms
		{
			AActor* LoadedActorAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedActorAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_StarcacheLibs_ActorLoadedDelegate__DelegateSignature_Statics::NewProp_LoadedActorAsset = { "LoadedActorAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_StarcacheLibs_eventActorLoadedDelegate_Parms, LoadedActorAsset), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StarcacheLibs_ActorLoadedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StarcacheLibs_ActorLoadedDelegate__DelegateSignature_Statics::NewProp_LoadedActorAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StarcacheLibs_ActorLoadedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssetManager/StarAssetManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StarcacheLibs_ActorLoadedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StarcacheLibs, nullptr, "ActorLoadedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_StarcacheLibs_ActorLoadedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StarcacheLibs_ActorLoadedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_StarcacheLibs_ActorLoadedDelegate__DelegateSignature_Statics::_Script_StarcacheLibs_eventActorLoadedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StarcacheLibs_ActorLoadedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_StarcacheLibs_ActorLoadedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StarcacheLibs_ActorLoadedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_StarcacheLibs_ActorLoadedDelegate__DelegateSignature_Statics::_Script_StarcacheLibs_eventActorLoadedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_StarcacheLibs_ActorLoadedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_StarcacheLibs_ActorLoadedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FActorLoadedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ActorLoadedDelegate, AActor* LoadedActorAsset)
{
	struct _Script_StarcacheLibs_eventActorLoadedDelegate_Parms
	{
		AActor* LoadedActorAsset;
	};
	_Script_StarcacheLibs_eventActorLoadedDelegate_Parms Parms;
	Parms.LoadedActorAsset=LoadedActorAsset;
	ActorLoadedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UStarAssetManager::execLoadDataAssetDelegate)
	{
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_LoadedAssetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadDataAssetDelegate(Z_Param_LoadedAssetId);
		P_NATIVE_END;
	}
	void UStarAssetManager::StaticRegisterNativesUStarAssetManager()
	{
		UClass* Class = UStarAssetManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadDataAssetDelegate", &UStarAssetManager::execLoadDataAssetDelegate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStarAssetManager_LoadDataAssetDelegate_Statics
	{
		struct StarAssetManager_eventLoadDataAssetDelegate_Parms
		{
			FPrimaryAssetId LoadedAssetId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedAssetId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadedAssetId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStarAssetManager_LoadDataAssetDelegate_Statics::NewProp_LoadedAssetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStarAssetManager_LoadDataAssetDelegate_Statics::NewProp_LoadedAssetId = { "LoadedAssetId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StarAssetManager_eventLoadDataAssetDelegate_Parms, LoadedAssetId), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStarAssetManager_LoadDataAssetDelegate_Statics::NewProp_LoadedAssetId_MetaData), Z_Construct_UFunction_UStarAssetManager_LoadDataAssetDelegate_Statics::NewProp_LoadedAssetId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStarAssetManager_LoadDataAssetDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStarAssetManager_LoadDataAssetDelegate_Statics::NewProp_LoadedAssetId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStarAssetManager_LoadDataAssetDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssetManager/StarAssetManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStarAssetManager_LoadDataAssetDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStarAssetManager, nullptr, "LoadDataAssetDelegate", nullptr, nullptr, Z_Construct_UFunction_UStarAssetManager_LoadDataAssetDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStarAssetManager_LoadDataAssetDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStarAssetManager_LoadDataAssetDelegate_Statics::StarAssetManager_eventLoadDataAssetDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStarAssetManager_LoadDataAssetDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStarAssetManager_LoadDataAssetDelegate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStarAssetManager_LoadDataAssetDelegate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UStarAssetManager_LoadDataAssetDelegate_Statics::StarAssetManager_eventLoadDataAssetDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UStarAssetManager_LoadDataAssetDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStarAssetManager_LoadDataAssetDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStarAssetManager);
	UClass* Z_Construct_UClass_UStarAssetManager_NoRegister()
	{
		return UStarAssetManager::StaticClass();
	}
	struct Z_Construct_UClass_UStarAssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QueuedAssets_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueuedAssets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueuedAssets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_QueuedAssets;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QueuedActors_ValueProp;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_QueuedActors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueuedActors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_QueuedActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStarAssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StarcacheLibs,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStarAssetManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UStarAssetManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStarAssetManager_LoadDataAssetDelegate, "LoadDataAssetDelegate" }, // 1886323302
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStarAssetManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStarAssetManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetManager/StarAssetManager.h" },
		{ "ModuleRelativePath", "Public/AssetManager/StarAssetManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStarAssetManager_Statics::NewProp_QueuedAssets_ValueProp = { "QueuedAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStarAssetManager_Statics::NewProp_QueuedAssets_Key_KeyProp = { "QueuedAssets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStarAssetManager_Statics::NewProp_QueuedAssets_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A queue of assets, so they aren't recycled by the garbage\n//   collector before the delegate can be triggered\n" },
#endif
		{ "ModuleRelativePath", "Public/AssetManager/StarAssetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A queue of assets, so they aren't recycled by the garbage\n  collector before the delegate can be triggered" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UStarAssetManager_Statics::NewProp_QueuedAssets = { "QueuedAssets", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStarAssetManager, QueuedAssets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStarAssetManager_Statics::NewProp_QueuedAssets_MetaData), Z_Construct_UClass_UStarAssetManager_Statics::NewProp_QueuedAssets_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStarAssetManager_Statics::NewProp_QueuedActors_ValueProp = { "QueuedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UStarAssetManager_Statics::NewProp_QueuedActors_Key_KeyProp = { "QueuedActors_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStarAssetManager_Statics::NewProp_QueuedActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssetManager/StarAssetManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UStarAssetManager_Statics::NewProp_QueuedActors = { "QueuedActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStarAssetManager, QueuedActors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStarAssetManager_Statics::NewProp_QueuedActors_MetaData), Z_Construct_UClass_UStarAssetManager_Statics::NewProp_QueuedActors_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStarAssetManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStarAssetManager_Statics::NewProp_QueuedAssets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStarAssetManager_Statics::NewProp_QueuedAssets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStarAssetManager_Statics::NewProp_QueuedAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStarAssetManager_Statics::NewProp_QueuedActors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStarAssetManager_Statics::NewProp_QueuedActors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStarAssetManager_Statics::NewProp_QueuedActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStarAssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStarAssetManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStarAssetManager_Statics::ClassParams = {
		&UStarAssetManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStarAssetManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStarAssetManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStarAssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UStarAssetManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStarAssetManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UStarAssetManager()
	{
		if (!Z_Registration_Info_UClass_UStarAssetManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStarAssetManager.OuterSingleton, Z_Construct_UClass_UStarAssetManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStarAssetManager.OuterSingleton;
	}
	template<> STARCACHELIBS_API UClass* StaticClass<UStarAssetManager>()
	{
		return UStarAssetManager::StaticClass();
	}
	UStarAssetManager::UStarAssetManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStarAssetManager);
	UStarAssetManager::~UStarAssetManager() {}
	struct Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_StarcacheLibs_Source_StarcacheLibs_Public_AssetManager_StarAssetManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_StarcacheLibs_Source_StarcacheLibs_Public_AssetManager_StarAssetManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStarAssetManager, UStarAssetManager::StaticClass, TEXT("UStarAssetManager"), &Z_Registration_Info_UClass_UStarAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStarAssetManager), 521321253U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_StarcacheLibs_Source_StarcacheLibs_Public_AssetManager_StarAssetManager_h_2920698007(TEXT("/Script/StarcacheLibs"),
		Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_StarcacheLibs_Source_StarcacheLibs_Public_AssetManager_StarAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_StarcacheLibs_Source_StarcacheLibs_Public_AssetManager_StarAssetManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
