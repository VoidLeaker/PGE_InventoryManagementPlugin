// Fill out your copyright notice in the Description page of Project Settings.


#include "PGE_InventoryComponent.h"

// Sets default values for this component's properties
UPGE_InventoryComponent::UPGE_InventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPGE_InventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


void UPGE_InventoryComponent::MergeInventoryArrays(TArray<FInventorySlot>& InSlots)
{
}

// Called every frame
void UPGE_InventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UPGE_InventoryComponent::AddItemToInventory(FName ItemName, int32 Quantity)
{
	return false;
}

bool UPGE_InventoryComponent::RemoveItemFromInventory(FName ItemName, int32 Quantity)
{
	return false;
}

bool UPGE_InventoryComponent::GetItemData(FName ItemName, FInventorySlot& OutItemData) const
{
	return false;
}

float UPGE_InventoryComponent::GetCurrentWeight() const
{
	return 0.0f;
}

bool UPGE_InventoryComponent::DropItem(FName ItemName)
{
	return false;
}

