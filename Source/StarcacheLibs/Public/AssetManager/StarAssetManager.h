// Starcache Studios, LLC

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"

#include "StarAssetManager.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDataAssetLoaded, const UDataAsset*, LoadedDataAsset);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActorAssetLoaded, const AActor*, LoadedActorAsset);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActorLoadedDelegate, AActor*, LoadedActorAsset);


UCLASS()
class STARCACHELIBS_API UStarAssetManager : public UObject
{
	GENERATED_BODY()
	
public:

	FOnDataAssetLoaded	 OnDataAssetLoaded;
	FOnActorAssetLoaded  OnActorAssetLoaded;

	static UStarAssetManager* GetInstance();

	static FPrimaryAssetId GetAssetIdFromName(const UClass* AssetStaticClass, const FName& AssetName);

	bool LoadDataAsset(const UClass* AssetStaticClass, const FName& AssetName);
	bool LoadDataAsset(const FPrimaryAssetId& AssetId);

	void LoadActorFromSoftPtr(TSoftObjectPtr<AActor> ActorSoftPtr, FActorLoadedDelegate& ActorLoadedDelegate);
	void ActorLoadedAsync(TSoftObjectPtr<AActor> ActorSoftPtr, FActorLoadedDelegate ActorLoadedCallback);

	static bool IsAssetLoaded(const FPrimaryAssetId& AssetId);
	static const UDataAsset* GetLoadedAsset(const FPrimaryAssetId& AssetId);

	// Prevents memory leaks when shutting down the plugin
	static void Cleanup();

private:

	UFUNCTION()	void LoadDataAssetDelegate(const FPrimaryAssetId LoadedAssetId);

	// A queue of assets, so they aren't recycled by the garbage
	//   collector before the delegate can be triggered
	UPROPERTY()	TMap<FPrimaryAssetId, const UDataAsset*> QueuedAssets;
	UPROPERTY()	TMap<TSoftObjectPtr<AActor>, AActor*> QueuedActors;

	static UStarAssetManager* Instance;

};
