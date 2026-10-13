// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <Components/BoxComponent.h>
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "ItemBase.generated.h"

USTRUCT(BlueprintType)
struct FItemData : public FTableRowBase
{
	GENERATED_BODY()

	// This sections are displayed
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Data", meta = (ToolTip = "The name displayed to the player in the Inventory list and preview."))
	FText ItemName = FText::FromString("My Item");

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Data", meta = (ToolTip = "The description displayed to the player in the Inventory list and preview."))
	FText ItemDescription = FText::FromString("This is an item.");

};


UCLASS()
class PGE_INVENTORYPLUGIN_API AItemBase : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AItemBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
