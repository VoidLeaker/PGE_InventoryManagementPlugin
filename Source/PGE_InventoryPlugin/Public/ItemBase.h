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

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Data", meta = (ToolTip = "The weight of the item."))
	float ItemWeight = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Data", meta = (ToolTip = "The value of the item."))
	int ItemValue = 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Data", meta = (ToolTip = "The icon displayed to the player in the Inventory list and preview."))
	UTexture2D* ItemIcon = nullptr;

	//This sections are not displayed
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Data", meta = (ToolTip = "The maximum number of this item that can be stacked in a single inventory slot."))
	int32 MaxStackInventory = 5;

	UPROPERTY(EditAnywhere, Category = "Item Data", meta = (ToolTip = "The specific blueprint actor to spawn in the world, when an item is dropped."))
	TSubclassOf<AItemBase> ItemActorClass;

	UPROPERTY(EditAnywhere, Category = "Item Data", meta = (ToolTip = "This item is used to display in the world"))
	UStaticMesh* ItemMesh;

};


UCLASS()
class PGE_INVENTORYPLUGIN_API AItemBase : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AItemBase();
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Data")
	FName ItemID;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* MyMesh;

	UFUNCTION()
	void OnBeginOverLap(UPrimitiveComponent*);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
