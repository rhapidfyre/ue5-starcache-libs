// Take Five Games, LLC


#include "AssetManager/StarAssetManager.h"

#include "Engine/AssetManager.h"


UStarAssetManager* UStarAssetManager::Instance = nullptr;

UStarAssetManager* UStarAssetManager::GetInstance()
{
	if (!IsValid(Instance))
	{
		Instance = NewObject<UStarAssetManager>();
		Instance->AddToRoot();
	}
	return Instance;
}


FPrimaryAssetId UStarAssetManager::GetAssetIdFromName(const UClass* AssetStaticClass, const FName& AssetName)
{
	if (!IsValid(AssetStaticClass)) { return FPrimaryAssetId(); }
	const FPrimaryAssetType AssetType = AssetStaticClass->GetFName();
	const auto				AssetId   = FPrimaryAssetId(AssetType, AssetName);
	return AssetId.IsValid() ? AssetId : FPrimaryAssetId();
}


bool UStarAssetManager::LoadDataAsset(const UClass* AssetStaticClass, const FName& AssetName)
{
	const FPrimaryAssetId AssetId = GetAssetIdFromName(AssetStaticClass, AssetName);
	return LoadDataAsset(AssetId);
}

bool UStarAssetManager::LoadDataAsset(const FPrimaryAssetId& AssetId)
{
	if (!AssetId.IsValid())
		{ return false; }

	auto& AssetManager = UAssetManager::Get();


	// The asset is already loaded
	if (IsAssetLoaded(AssetId))
	{
		QueuedAssets.Add(AssetId, GetLoadedAsset(AssetId));
		LoadDataAssetDelegate(AssetId);
		return true;
	}

	// Add a placeholder to prevent garbage collection
	QueuedAssets.Add(AssetId, nullptr);

	const TArray<FName>       AssetBundle    = {};
	const FStreamableDelegate StreamDelegate = FStreamableDelegate::CreateUObject(
		this, &UStarAssetManager::LoadDataAssetDelegate, AssetId);

	AssetManager.LoadPrimaryAsset(AssetId, AssetBundle, StreamDelegate);
	return true;
}

/**
 * Takes in a soft object pointer, loading the actor and broadcasting on
 * the delegate that is given upon successful load.
 * \param ActorSoftPtr The soft pointer for the actor to load
 * \param ActorLoadedDelegate The delegate to fire when async load is successful
 * \return False if there were any problems with the pointer
 */
void UStarAssetManager::LoadActorFromSoftPtr(TSoftObjectPtr<AActor> ActorSoftPtr,
	FActorLoadedDelegate& ActorLoadedDelegate)
{
	const auto& AssetManager = UAssetManager::Get();
	
	// Actor is already loaded
	if (ActorSoftPtr.Get())
	{
		return;
	}
	
	FStreamableManager& StreamableManager = AssetManager.GetStreamableManager();
	FSoftObjectPath ActorPath = ActorSoftPtr.ToSoftObjectPath();

	TArray<FSoftObjectPath> AssetPathsToLoad;
	AssetPathsToLoad.Add(ActorPath);
	
	QueuedActors.Add(ActorSoftPtr, nullptr);
	
	StreamableManager.RequestAsyncLoad(AssetPathsToLoad,
		FStreamableDelegate::CreateUObject(this,
			&UStarAssetManager::ActorLoadedAsync, ActorSoftPtr, ActorLoadedDelegate));
}

void UStarAssetManager::ActorLoadedAsync(
	TSoftObjectPtr<AActor> ActorSoftPtr, FActorLoadedDelegate ActorLoadedCallback)
{
	FSoftObjectPath ActorPath = ActorSoftPtr.ToSoftObjectPath();
	AActor* LoadedActor = Cast<AActor>(ActorSoftPtr.Get());
	if (LoadedActor && ActorLoadedCallback.IsBound())
	{
		ActorLoadedCallback.Broadcast(LoadedActor);
	}
	if (LoadedActor && OnActorAssetLoaded.IsBound())
	{
		OnActorAssetLoaded.Broadcast(LoadedActor);
	}
	QueuedActors.Remove(ActorSoftPtr);
}

bool UStarAssetManager::IsAssetLoaded(const FPrimaryAssetId& AssetId)
{
	return IsValid( GetLoadedAsset(AssetId) );
}


const UDataAsset* UStarAssetManager::GetLoadedAsset(const FPrimaryAssetId& AssetId)
{
	const auto& AssetManager = UAssetManager::Get();
	return Cast<UDataAsset>( AssetManager.GetPrimaryAssetObject(AssetId) );
}


void UStarAssetManager::Cleanup()
{
	if (IsValid(Instance))
	{
		Instance->OnDataAssetLoaded.Clear();
		Instance->RemoveFromRoot();
		Instance = nullptr;
	}
}


void UStarAssetManager::LoadDataAssetDelegate(const FPrimaryAssetId LoadedAssetId)
{
	if (OnDataAssetLoaded.IsBound())
	{
		const auto& AssetManager = UAssetManager::Get();
		const UDataAsset* DataAsset = Cast<UDataAsset>( AssetManager.GetPrimaryAssetObject(LoadedAssetId) );
		OnDataAssetLoaded.Broadcast(DataAsset);
		QueuedAssets.Remove(LoadedAssetId);
	}
}
