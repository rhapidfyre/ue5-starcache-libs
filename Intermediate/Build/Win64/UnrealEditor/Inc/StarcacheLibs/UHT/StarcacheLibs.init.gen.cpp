// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStarcacheLibs_init() {}
	STARCACHELIBS_API UFunction* Z_Construct_UDelegateFunction_StarcacheLibs_ActorLoadedDelegate__DelegateSignature();
	STARCACHELIBS_API UFunction* Z_Construct_UDelegateFunction_StarcacheLibs_OnActorAssetLoaded__DelegateSignature();
	STARCACHELIBS_API UFunction* Z_Construct_UDelegateFunction_StarcacheLibs_OnDataAssetLoaded__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_StarcacheLibs;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_StarcacheLibs()
	{
		if (!Z_Registration_Info_UPackage__Script_StarcacheLibs.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_StarcacheLibs_ActorLoadedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_StarcacheLibs_OnActorAssetLoaded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_StarcacheLibs_OnDataAssetLoaded__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/StarcacheLibs",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5367FDF7,
				0x69073B0E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_StarcacheLibs.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_StarcacheLibs.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_StarcacheLibs(Z_Construct_UPackage__Script_StarcacheLibs, TEXT("/Script/StarcacheLibs"), Z_Registration_Info_UPackage__Script_StarcacheLibs, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5367FDF7, 0x69073B0E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
