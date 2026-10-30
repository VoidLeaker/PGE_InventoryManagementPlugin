// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemBase.h"
#include "PGE_InventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PGE_INVENTORYPLUGIN_API UPGE_InventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPGE_InventoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory", meta = (ToolTip = "The data table containing inventory items"))
	class UDataTable* InventoryDataTable = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory", meta = (ToolTip = "The maximum weight that can be carried in the inventory"))
	int32 MaxWeight = 100;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory", meta = (ToolTip = "The array of Inventory slots"))
	TArray<FInventorySlot> InventorySlots;

	UFUNCTION()
	void MergeInventoryArrays(TArray<FInventorySlot>& InSlots);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintAssignable, Category = "Inventory", meta = (ToolTip = "Updates the inventory"))
	FOnPGEInventoryUpdated OnInventoryUpdated;

	UFUNCTION(BlueprintCallable, Category = "Inventory", meta = (ToolTip = "Adds an item to the inventory"))
	bool AddItemToInventory(FName ItemName, int32 Quantity = 1);

	UFUNCTION(BlueprintCallable, Category = "Inventory", meta = (ToolTip = "Removes an item from the inventory"))
	bool RemoveItemFromInventory(FName ItemName, int32 Quantity = 1);

	UFUNCTION(BlueprintCallable, Category = "Inventory", meta = (ToolTip = "Returns the current weight of the inventory"))
	bool GetItemData(FName ItemName, FInventorySlot& OutItemData) const;

	UFUNCTION(BlueprintCallable, Category = "Inventory", meta = (ToolTip = "Returns the current weight of the inventory"))
	float GetCurrentWeight() const;

	UFUNCTION(BlueprintCallable, Category = "Inventory", meta = (ToolTip = "Drop an item from the inventory array"))
	bool DropItem(FName ItemName);

};
