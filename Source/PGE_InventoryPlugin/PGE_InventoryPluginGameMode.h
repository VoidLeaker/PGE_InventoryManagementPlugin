// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PGE_InventoryPluginGameMode.generated.h"

/**
 *  Simple GameMode for a third person game
 */
UCLASS(abstract)
class APGE_InventoryPluginGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	
	/** Constructor */
	APGE_InventoryPluginGameMode();
};



